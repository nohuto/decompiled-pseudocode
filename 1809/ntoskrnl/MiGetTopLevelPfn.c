/*
 * XREFs of MiGetTopLevelPfn @ 0x140083810
 * Callers:
 *     MiRestoreTransitionPte @ 0x140081000 (MiRestoreTransitionPte.c)
 *     MiCapturePfnVm @ 0x140083638 (MiCapturePfnVm.c)
 *     MiIdentifyPfn @ 0x1400A7E20 (MiIdentifyPfn.c)
 *     MiGetPagePrivilege @ 0x1400B29B0 (MiGetPagePrivilege.c)
 *     MiLockStealUserVm @ 0x1400EDC94 (MiLockStealUserVm.c)
 *     MiAttachToOwningSession @ 0x14011A53C (MiAttachToOwningSession.c)
 *     MiRecheckCombineVm @ 0x14013EFF4 (MiRecheckCombineVm.c)
 *     MiStoreCheckCandidatePage @ 0x14014D494 (MiStoreCheckCandidatePage.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x14006C9E0 (KeYieldProcessorEx.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x1401BBD20 (KeBugCheckEx.c)
 *     memset @ 0x1401D1980 (memset.c)
 */

__int64 __fastcall MiGetTopLevelPfn(__int64 BugCheckParameter2)
{
  unsigned int v2; // edi
  __int64 v3; // r8
  ULONG_PTR v4; // r14
  int v5; // ebp
  __int64 v6; // rdx
  __int64 v7; // rsi
  __int64 *v8; // rcx
  __int64 v9; // rax
  int v11; // [rsp+30h] [rbp-58h] BYREF
  _QWORD v12[4]; // [rsp+38h] [rbp-50h] BYREF

  memset(v12, 0, sizeof(v12));
  v2 = 0;
  v3 = *(_QWORD *)(BugCheckParameter2 + 40) & 0xFFFFFFFFFLL;
  v4 = BugCheckParameter2;
  v5 = 0;
  v6 = (BugCheckParameter2 + 0x58000000000LL) / 48;
  if ( v3 != v6 )
  {
    do
    {
      if ( v3 == 0xFFFFFFFFFLL )
        break;
      v7 = v3;
      BugCheckParameter2 = 48 * v3 - 0x58000000000LL;
      if ( (unsigned int)++v5 > 4 )
        KeBugCheckEx(0x1Au, 0x9696uLL, v4, 0LL, 0LL);
      v11 = 0;
      v12[v5 - 1] = BugCheckParameter2;
      while ( _interlockedbittestandset64((volatile signed __int32 *)(BugCheckParameter2 + 24), 0x3FuLL) )
      {
        do
          KeYieldProcessorEx(&v11, v6, v3);
        while ( *(__int64 *)(BugCheckParameter2 + 24) < 0 );
      }
      v3 = *(_QWORD *)(BugCheckParameter2 + 40) & 0xFFFFFFFFFLL;
    }
    while ( v3 != v7 );
  }
  v8 = v12;
  do
  {
    v9 = *v8;
    if ( !*v8 )
      break;
    if ( v9 != BugCheckParameter2 )
      _InterlockedAnd64((volatile signed __int64 *)(v9 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    ++v2;
    ++v8;
  }
  while ( v2 < 4 );
  return BugCheckParameter2;
}
