/*
 * XREFs of MiGetTopLevelPfn @ 0x1400E2680
 * Callers:
 *     MiIdentifyPfn @ 0x1400054D0 (MiIdentifyPfn.c)
 *     MiGetPagePrivilege @ 0x140024900 (MiGetPagePrivilege.c)
 *     MiRestoreTransitionPte @ 0x1400DB6B0 (MiRestoreTransitionPte.c)
 *     MiLockStealUserVm @ 0x1400E22B4 (MiLockStealUserVm.c)
 *     MiAttachToOwningSession @ 0x14012C5BC (MiAttachToOwningSession.c)
 *     MiCapturePfnVm @ 0x14013ECA0 (MiCapturePfnVm.c)
 *     MiRecheckCombineVm @ 0x1401411C8 (MiRecheckCombineVm.c)
 *     MiStoreCheckCandidatePage @ 0x14014A78C (MiStoreCheckCandidatePage.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x14002D3D0 (KeYieldProcessorEx.c)
 *     __security_check_cookie @ 0x14019E700 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x1401C3B20 (KeBugCheckEx.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 */

__int64 __fastcall MiGetTopLevelPfn(__int64 BugCheckParameter2)
{
  unsigned int v2; // edi
  __int64 v3; // r8
  ULONG_PTR v4; // r14
  int v5; // ebp
  __int64 v6; // rsi
  __int64 *v7; // rcx
  __int64 v8; // rax
  int v10; // [rsp+30h] [rbp-58h] BYREF
  _QWORD v11[4]; // [rsp+38h] [rbp-50h] BYREF

  memset(v11, 0, sizeof(v11));
  v2 = 0;
  v3 = *(_QWORD *)(BugCheckParameter2 + 40) & 0xFFFFFFFFFLL;
  v4 = BugCheckParameter2;
  v5 = 0;
  if ( v3 != (BugCheckParameter2 + 0x58000000000LL) / 48 )
  {
    do
    {
      if ( v3 == 0xFFFFFFFFFLL )
        break;
      v6 = v3;
      BugCheckParameter2 = 48 * v3 - 0x58000000000LL;
      if ( (unsigned int)++v5 > 4 )
        KeBugCheckEx(0x1Au, 0x9696uLL, v4, 0LL, 0LL);
      v10 = 0;
      v11[v5 - 1] = BugCheckParameter2;
      while ( _interlockedbittestandset64((volatile signed __int32 *)(BugCheckParameter2 + 24), 0x3FuLL) )
      {
        do
          KeYieldProcessorEx(&v10);
        while ( *(__int64 *)(BugCheckParameter2 + 24) < 0 );
      }
      v3 = *(_QWORD *)(BugCheckParameter2 + 40) & 0xFFFFFFFFFLL;
    }
    while ( v3 != v6 );
  }
  v7 = v11;
  do
  {
    v8 = *v7;
    if ( !*v7 )
      break;
    if ( v8 != BugCheckParameter2 )
      _InterlockedAnd64((volatile signed __int64 *)(v8 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    ++v2;
    ++v7;
  }
  while ( v2 < 4 );
  return BugCheckParameter2;
}
