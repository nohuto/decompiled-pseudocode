/*
 * XREFs of ?RemoveFromChainIfPreviousMatches@?$ChainLink@VObjectWithSrwLock@@@Chaining@Shell@Internal@Windows@@AEAAJPEAUIChainLink@2345@@Z @ 0x1801BFB58
 * Callers:
 *     ?HandleChainLinkEvent@?$ChainLink@VObjectWithSrwLock@@@Chaining@Shell@Internal@Windows@@MEAAJPEAUIChainLink@2345@PEAUIChainLinkEventArgs@2345@@Z @ 0x1801BE540 (-HandleChainLinkEvent@-$ChainLink@VObjectWithSrwLock@@@Chaining@Shell@Internal@Windows@@MEAAJPEA.c)
 *     ?RemoveFromModalChain@ModalLink@@UEAAJXZ @ 0x1801C5BC0 (-RemoveFromModalChain@ModalLink@@UEAAJXZ.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180049D54 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x180083F50 (__security_check_cookie.c)
 *     ??0ChainLinkNotifier@?$ChainLink@VObjectWithIamLock@@@Chaining@Shell@Internal@Windows@@QEAA@XZ @ 0x180119238 (--0ChainLinkNotifier@-$ChainLink@VObjectWithIamLock@@@Chaining@Shell@Internal@Windows@@QEAA@XZ.c)
 *     ?RemoveFromChainInternal@?$ChainLink@VObjectWithIamLock@@@Chaining@Shell@Internal@Windows@@IEAAXAEAVChainLinkNotifier@12345@@Z @ 0x18011F160 (-RemoveFromChainInternal@-$ChainLink@VObjectWithIamLock@@@Chaining@Shell@Internal@Windows@@IEAAX.c)
 *     ??1ChainLinkNotifier@?$ChainLink@VObjectWithSrwLock@@@Chaining@Shell@Internal@Windows@@QEAA@XZ @ 0x1801BCE00 (--1ChainLinkNotifier@-$ChainLink@VObjectWithSrwLock@@@Chaining@Shell@Internal@Windows@@QEAA@XZ.c)
 *     ?Notify@ChainLinkNotifier@?$ChainLink@VObjectWithSrwLock@@@Chaining@Shell@Internal@Windows@@QEAAXXZ @ 0x1801BEE34 (-Notify@ChainLinkNotifier@-$ChainLink@VObjectWithSrwLock@@@Chaining@Shell@Internal@Windows@@QEAA.c)
 */

__int64 __fastcall Windows::Internal::Shell::Chaining::ChainLink<ObjectWithSrwLock>::RemoveFromChainIfPreviousMatches(
        __int64 a1,
        __int64 a2)
{
  RTL_SRWLOCK *v4; // rbx
  RTL_SRWLOCK *v5; // rbx
  unsigned int v6; // edi
  _BYTE v8[80]; // [rsp+20h] [rbp-68h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+0h]

  v4 = (RTL_SRWLOCK *)(*(int *)(*(_QWORD *)(a1 + 16) + 4LL) + a1 + 16);
  AcquireSRWLockExclusive(v4);
  if ( v4 )
    ReleaseSRWLockExclusive(v4);
  Windows::Internal::Shell::Chaining::ChainLink<ObjectWithIamLock>::ChainLinkNotifier::ChainLinkNotifier((__int64)v8);
  v5 = (RTL_SRWLOCK *)(*(int *)(*(_QWORD *)(a1 + 16) + 4LL) + a1 + 16);
  AcquireSRWLockExclusive(v5);
  if ( !a2 || *(_QWORD *)(a1 + 32) == a2 )
  {
    Windows::Internal::Shell::Chaining::ChainLink<ObjectWithIamLock>::RemoveFromChainInternal(a1, (__int64)v8);
    if ( v5 )
      ReleaseSRWLockExclusive(v5);
    Windows::Internal::Shell::Chaining::ChainLink<ObjectWithSrwLock>::ChainLinkNotifier::Notify((__int64)v8);
    v6 = 0;
  }
  else
  {
    v6 = -2147483636;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x207,
      (__int64)"internal\\onecoreuapshell\\inc\\chaininghelpers.h",
      (const char *)0x8000000CLL);
    if ( v5 )
      ReleaseSRWLockExclusive(v5);
  }
  Windows::Internal::Shell::Chaining::ChainLink<ObjectWithSrwLock>::ChainLinkNotifier::~ChainLinkNotifier((__int64)v8);
  return v6;
}
