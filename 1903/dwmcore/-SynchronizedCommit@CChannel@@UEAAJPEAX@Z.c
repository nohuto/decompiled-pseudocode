/*
 * XREFs of ?SynchronizedCommit@CChannel@@UEAAJPEAX@Z @ 0x1800407A0
 * Callers:
 *     ?SynchronizeChannel@CInternalMilCmdConnection@@QEAAJI@Z @ 0x1800D2F74 (-SynchronizeChannel@CInternalMilCmdConnection@@QEAAJI@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800969E0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     memset_0 @ 0x1800E7E5E (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800EC570 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CChannel::SynchronizedCommit(CChannel *this, unsigned __int64 a2)
{
  struct _RTL_CRITICAL_SECTION *v2; // rsi
  unsigned __int64 v5; // rcx
  int v6; // ebp
  unsigned int v7; // r14d
  __int64 v9; // rax
  __int64 v10; // rcx
  int v11; // eax
  unsigned int v12; // ecx
  __int64 v13; // r15
  unsigned int v14; // edi
  unsigned int v15; // ecx
  _DWORD v16[2]; // [rsp+30h] [rbp-48h] BYREF
  __int64 v17; // [rsp+38h] [rbp-40h]
  int v18; // [rsp+40h] [rbp-38h]
  int v19; // [rsp+44h] [rbp-34h]
  unsigned __int64 v20; // [rsp+48h] [rbp-30h]
  __int64 v21; // [rsp+50h] [rbp-28h]

  v2 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 168);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 168));
  v5 = *((_QWORD *)this + 20);
  v6 = 0;
  if ( __PAIR128__(v5, a2) == 0 )
    goto LABEL_2;
  v18 = *((_DWORD *)this + 14);
  v9 = *((_QWORD *)this + 6);
  v20 = v5;
  v17 = 0LL;
  v19 = 0;
  v10 = *(_QWORD *)(v9 + 40);
  v21 = 0LL;
  v16[1] = 40;
  v16[0] = 8;
  v11 = (*(__int64 (__fastcall **)(__int64, _DWORD *, unsigned __int64))(*(_QWORD *)v10 + 8LL))(v10, v16, a2);
  v6 = v11;
  if ( v11 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(v12, 0LL, 0, v11, 0x122u, 0LL);
  else
    *((_QWORD *)this + 20) = 0LL;
  if ( v6 >= 0 )
  {
LABEL_2:
    v7 = *((_DWORD *)this + 3);
    EnterCriticalSection(&g_csCompositionEngine);
    if ( v7 )
    {
      v13 = *((_QWORD *)this + 5);
      do
      {
        v14 = *(_DWORD *)(v13 + 12LL * v7 + 8);
        memset_0((void *)(*((_QWORD *)this + 5) + v7 * *((_DWORD *)this + 6)), 0, *((unsigned int *)this + 6));
        v7 = v14;
      }
      while ( v14 );
    }
    LeaveCriticalSection(&g_csCompositionEngine);
    *((_DWORD *)this + 3) = 0;
  }
  else
  {
    MilInstrumentationCheckHR_MaybeFailFast(v12, 0LL, 0, v6, 0x136u, 0LL);
    MilInstrumentationCheckHR_MaybeFailFast(v15, 0LL, 0, v6, 0x1FEu, 0LL);
  }
  if ( v2 )
    LeaveCriticalSection(v2);
  return (unsigned int)v6;
}
