/*
 * XREFs of CmpBlockHiveWrites @ 0x1406F4D08
 * Callers:
 *     CmpVEExecuteOpenLogic @ 0x1406BA460 (CmpVEExecuteOpenLogic.c)
 *     CmpVEExecuteRealStoreParseLogic @ 0x1406F485C (CmpVEExecuteRealStoreParseLogic.c)
 *     CmpVEExecuteVirtualStoreParseLogic @ 0x14082D478 (CmpVEExecuteVirtualStoreParseLogic.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x14003ED70 (ExAcquirePushLockExclusiveEx.c)
 *     CmpGetNextHive @ 0x140637EC0 (CmpGetNextHive.c)
 *     CmpReferenceHive @ 0x14064E82C (CmpReferenceHive.c)
 *     CmpDeleteHive @ 0x1406629D0 (CmpDeleteHive.c)
 */

__int64 __fastcall CmpBlockHiveWrites(__int64 *a1, int a2, volatile signed __int32 **a3)
{
  volatile signed __int32 *i; // rcx
  __int64 *NextHive; // rax
  volatile signed __int32 *v8; // rbx

  for ( i = 0LL; ; i = v8 )
  {
    NextHive = CmpGetNextHive(i);
    v8 = (volatile signed __int32 *)NextHive;
    if ( !NextHive )
      break;
    if ( a1 == NextHive || !a1 )
    {
      if ( !a2 || (a2 & (_DWORD)NextHive[519]) == a2 || NextHive == CmpMasterHive )
      {
        CmpReferenceHive((__int64)NextHive);
        if ( a3 )
          *a3 = v8;
        ExAcquirePushLockExclusiveEx((ULONG_PTR)(v8 + 18), 0LL);
      }
      if ( a1 == (__int64 *)v8 )
      {
        if ( _InterlockedExchangeAdd(v8 + 1068, 0xFFFFFFFF) == 1 )
          CmpDeleteHive(v8);
        return 0LL;
      }
    }
  }
  if ( !a1 )
    return 0LL;
  return 3221225524LL;
}
