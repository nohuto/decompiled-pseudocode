/*
 * XREFs of ?Commit@CChannel@@UEAAJXZ @ 0x180055780
 * Callers:
 *     ?WaitForNextMessage@CChannel@@UEAAJPEAUIMessageLoopExtensions@@KPEBQEAXKPEAK@Z @ 0x1800EA480 (-WaitForNextMessage@CChannel@@UEAAJPEAUIMessageLoopExtensions@@KPEBQEAXKPEAK@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800738CC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     memset_0 @ 0x1800E8D0E (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0230 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CChannel::Commit(CChannel *this)
{
  struct _RTL_CRITICAL_SECTION *v1; // rbp
  __int64 v3; // rcx
  int v4; // edi
  int v5; // eax
  __int64 v6; // rax
  int v7; // eax
  unsigned int v8; // ecx
  unsigned int v9; // r14d
  __int64 v11; // r15
  unsigned int v12; // ebx
  unsigned int v13; // ecx
  _DWORD v14[2]; // [rsp+30h] [rbp-48h] BYREF
  __int64 v15; // [rsp+38h] [rbp-40h]
  int v16; // [rsp+40h] [rbp-38h]
  int v17; // [rsp+44h] [rbp-34h]
  __int64 v18; // [rsp+48h] [rbp-30h]
  __int64 v19; // [rsp+50h] [rbp-28h]

  v1 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 168);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 168));
  v3 = *((_QWORD *)this + 20);
  v4 = 0;
  if ( !v3 )
    goto LABEL_5;
  v5 = *((_DWORD *)this + 14);
  v15 = 0LL;
  v17 = 0;
  v19 = 0LL;
  v16 = v5;
  v6 = *((_QWORD *)this + 6);
  v18 = v3;
  v14[1] = 40;
  v14[0] = 8;
  v7 = (*(__int64 (__fastcall **)(_QWORD, _DWORD *, _QWORD))(**(_QWORD **)(v6 + 40) + 8LL))(
         *(_QWORD *)(v6 + 40),
         v14,
         0LL);
  v4 = v7;
  if ( v7 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(v8, 0LL, 0, v7, 0x122u, 0LL);
  else
    *((_QWORD *)this + 20) = 0LL;
  if ( v4 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v8, 0LL, 0, v4, 0x136u, 0LL);
    MilInstrumentationCheckHR_MaybeFailFast(v13, 0LL, 0, v4, 0x1FEu, 0LL);
  }
  else
  {
LABEL_5:
    v9 = *((_DWORD *)this + 3);
    EnterCriticalSection(&g_csCompositionEngine);
    if ( v9 )
    {
      v11 = *((_QWORD *)this + 5);
      do
      {
        v12 = *(_DWORD *)(v11 + 12LL * v9 + 8);
        memset_0((void *)(*((_QWORD *)this + 5) + v9 * *((_DWORD *)this + 6)), 0, *((unsigned int *)this + 6));
        v9 = v12;
      }
      while ( v12 );
    }
    LeaveCriticalSection(&g_csCompositionEngine);
    *((_DWORD *)this + 3) = 0;
  }
  if ( v1 )
    LeaveCriticalSection(v1);
  return (unsigned int)v4;
}
