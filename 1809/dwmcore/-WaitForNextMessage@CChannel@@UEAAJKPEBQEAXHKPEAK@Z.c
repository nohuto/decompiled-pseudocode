/*
 * XREFs of ?WaitForNextMessage@CChannel@@UEAAJKPEBQEAXHKPEAK@Z @ 0x180058D40
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x1800EB870 (__security_check_cookie.c)
 *     memset_0 @ 0x1800EC516 (memset_0.c)
 *     memcpy_0 @ 0x1800F007B (memcpy_0.c)
 */

__int64 __fastcall CChannel::WaitForNextMessage(
        CChannel *this,
        unsigned int a2,
        void *const *a3,
        BOOL a4,
        DWORD dwMilliseconds,
        unsigned int *a6)
{
  BOOL v6; // r12d
  void *const *v7; // r15
  __int64 v9; // r14
  struct _RTL_CRITICAL_SECTION *v10; // rbp
  __int64 v11; // rdx
  int v12; // edi
  unsigned int v13; // r15d
  unsigned int v14; // ecx
  DWORD v15; // eax
  int v17; // eax
  unsigned int v18; // ecx
  __int64 v19; // r12
  unsigned int v20; // ebx
  unsigned int v21; // ecx
  signed int LastError; // eax
  unsigned int v23; // [rsp+20h] [rbp-278h]
  HANDLE Handles[64]; // [rsp+40h] [rbp-258h] BYREF

  v6 = a4;
  v7 = a3;
  v9 = a2;
  if ( a2 && !a3 || a2 > 0x3F )
  {
    v12 = -2147024809;
    MilInstrumentationCheckHR_MaybeFailFast((unsigned int)this, 0LL, 0, -2147024809, 0x266u);
    return (unsigned int)v12;
  }
  v10 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 168);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 168));
  v11 = *((_QWORD *)this + 20);
  v12 = 0;
  if ( !v11 )
    goto LABEL_5;
  v17 = NtDCompositionSubmitDWMBatch(*((unsigned int *)this + 14), v11, 0LL);
  if ( v17 < 0 )
  {
    v12 = v17 | 0x10000000;
    MilInstrumentationCheckHR_MaybeFailFast(v18, 0LL, 0, v17 | 0x10000000, 0x75u);
  }
  else
  {
    v12 = 0;
  }
  if ( v12 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(v18, 0LL, 0, v12, 0x16Eu);
  else
    *((_QWORD *)this + 20) = 0LL;
  if ( v12 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v18, 0LL, 0, v12, 0x135u);
    MilInstrumentationCheckHR_MaybeFailFast(v21, 0LL, 0, v12, 0x1FEu);
  }
  else
  {
LABEL_5:
    v13 = *((_DWORD *)this + 3);
    EnterCriticalSection(&g_csCompositionEngine);
    if ( v13 )
    {
      v19 = *((_QWORD *)this + 5);
      do
      {
        v20 = *(_DWORD *)(v19 + 12LL * v13 + 8);
        memset_0((void *)(*((_QWORD *)this + 5) + v13 * *((_DWORD *)this + 6)), 0, *((unsigned int *)this + 6));
        v13 = v20;
      }
      while ( v20 );
      v6 = a4;
    }
    LeaveCriticalSection(&g_csCompositionEngine);
    *((_DWORD *)this + 3) = 0;
    v7 = a3;
  }
  if ( v10 )
    LeaveCriticalSection(v10);
  if ( v12 < 0 )
  {
    v23 = 617;
LABEL_32:
    MilInstrumentationCheckHR_MaybeFailFast(v14, 0LL, 0, v12, v23);
    return (unsigned int)v12;
  }
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 88));
  if ( *((CChannel **)this + 8) != (CChannel *)((char *)this + 64) )
  {
    LeaveCriticalSection((LPCRITICAL_SECTION)((char *)this + 88));
    *a6 = v9;
    return (unsigned int)v12;
  }
  ResetEvent(*((HANDLE *)this + 10));
  memcpy_0(Handles, v7, 8 * v9);
  Handles[v9] = (HANDLE)*((_QWORD *)this + 10);
  LeaveCriticalSection((LPCRITICAL_SECTION)((char *)this + 88));
  SetLastError(0);
  v15 = WaitForMultipleObjects(v9 + 1, Handles, v6, dwMilliseconds);
  *a6 = v15;
  if ( v15 == -1 )
  {
    LastError = GetLastError();
    v12 = LastError;
    if ( LastError > 0 )
      v12 = (unsigned __int16)LastError | 0x80070000;
    v23 = 647;
    if ( v12 >= 0 )
      v12 = -2003304445;
    goto LABEL_32;
  }
  return (unsigned int)v12;
}
