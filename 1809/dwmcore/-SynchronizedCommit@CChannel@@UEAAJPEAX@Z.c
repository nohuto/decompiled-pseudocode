/*
 * XREFs of ?SynchronizedCommit@CChannel@@UEAAJPEAX@Z @ 0x180056100
 * Callers:
 *     ?SynchronizeChannel@CConnection@@QEAAJI@Z @ 0x180055FF4 (-SynchronizeChannel@CConnection@@QEAAJI@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     memset_0 @ 0x1800EC516 (memset_0.c)
 */

__int64 __fastcall CChannel::SynchronizedCommit(CChannel *this, void *a2)
{
  struct _RTL_CRITICAL_SECTION *v2; // rsi
  __int64 v5; // rdx
  int v6; // ebp
  unsigned int v7; // r14d
  int v9; // eax
  unsigned int v10; // ecx
  __int64 v11; // r15
  unsigned int v12; // edi
  unsigned int v13; // ecx

  v2 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 168);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 168));
  v5 = *((_QWORD *)this + 20);
  v6 = 0;
  if ( !v5 && !a2 )
    goto LABEL_3;
  v9 = NtDCompositionSubmitDWMBatch(*((unsigned int *)this + 14), v5, a2);
  if ( v9 >= 0
    || (v6 = v9 | 0x10000000, MilInstrumentationCheckHR_MaybeFailFast(v10, 0LL, 0, v9 | 0x10000000, 0x75u), v6 >= 0) )
  {
    *((_QWORD *)this + 20) = 0LL;
  }
  else
  {
    MilInstrumentationCheckHR_MaybeFailFast(v10, 0LL, 0, v6, 0x16Eu);
  }
  if ( v6 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v10, 0LL, 0, v6, 0x135u);
    MilInstrumentationCheckHR_MaybeFailFast(v13, 0LL, 0, v6, 0x1FEu);
  }
  else
  {
LABEL_3:
    v7 = *((_DWORD *)this + 3);
    EnterCriticalSection(&g_csCompositionEngine);
    if ( v7 )
    {
      v11 = *((_QWORD *)this + 5);
      do
      {
        v12 = *(_DWORD *)(v11 + 12LL * v7 + 8);
        memset_0((void *)(*((_QWORD *)this + 5) + v7 * *((_DWORD *)this + 6)), 0, *((unsigned int *)this + 6));
        v7 = v12;
      }
      while ( v12 );
    }
    LeaveCriticalSection(&g_csCompositionEngine);
    *((_DWORD *)this + 3) = 0;
  }
  if ( v2 )
    LeaveCriticalSection(v2);
  return (unsigned int)v6;
}
