/*
 * XREFs of ?RegisterHostComponentPair@ComponentRelationshipStore@ViewEventHandlers@OneCore@Internal@Windows@@UEAAJUtagHostIdentifier@2345@IIPEAUIInspectable@@@Z @ 0x1803A7510
 * Callers:
 *     <none>
 * Callees:
 *     ?LockExclusive@SRWLock@Wrappers@WRL@Microsoft@@SA?AVSyncLockExclusive@Details@234@PEAU_RTL_SRWLOCK@@@Z @ 0x18000EC50 (-LockExclusive@SRWLock@Wrappers@WRL@Microsoft@@SA-AVSyncLockExclusive@Details@234@PEAU_RTL_SRWLO.c)
 *     ?InternalUnlock@SyncLockExclusive@Details@Wrappers@WRL@Microsoft@@AEAAXXZ @ 0x18000EF5C (-InternalUnlock@SyncLockExclusive@Details@Wrappers@WRL@Microsoft@@AEAAXXZ.c)
 *     __security_check_cookie @ 0x180083F50 (__security_check_cookie.c)
 *     ??1ComponentInfo@ComponentRelationshipStore@ViewEventHandlers@OneCore@Internal@Windows@@QEAA@XZ @ 0x1802118DC (--1ComponentInfo@ComponentRelationshipStore@ViewEventHandlers@OneCore@Internal@Windows@@QEAA@XZ.c)
 *     ??0ComponentInfo@ComponentRelationshipStore@ViewEventHandlers@OneCore@Internal@Windows@@QEAA@PEAUIInspectable@@AEBUtagHostIdentifier@2345@KW4CRSComponentRelationshipFlags@2345@@Z @ 0x1803A4B9C (--0ComponentInfo@ComponentRelationshipStore@ViewEventHandlers@OneCore@Internal@Windows@@QEAA@PEA.c)
 *     ?RegisterHostComponentPair@ComponentRelationshipStore@ViewEventHandlers@OneCore@Internal@Windows@@AEAAJAEAUComponentInfo@12345@I@Z @ 0x1803A7214 (-RegisterHostComponentPair@ComponentRelationshipStore@ViewEventHandlers@OneCore@Internal@Windows.c)
 */

__int64 __fastcall Windows::Internal::OneCore::ViewEventHandlers::ComponentRelationshipStore::RegisterHostComponentPair(
        RTL_SRWLOCK *a1,
        __int64 a2,
        int a3,
        int a4,
        __int64 a5)
{
  unsigned int v9; // ebx
  RTL_SRWLOCK *v11[2]; // [rsp+30h] [rbp-88h] BYREF
  _BYTE v12[80]; // [rsp+40h] [rbp-78h] BYREF

  Microsoft::WRL::Wrappers::SRWLock::LockExclusive(v11, a1 + 9);
  Windows::Internal::OneCore::ViewEventHandlers::ComponentRelationshipStore::ComponentInfo::ComponentInfo(
    (__int64)v12,
    a5,
    a2,
    a3);
  v9 = Windows::Internal::OneCore::ViewEventHandlers::ComponentRelationshipStore::RegisterHostComponentPair(
         (Windows::Internal::OneCore::ViewEventHandlers::ComponentRelationshipStore *)a1,
         (struct Windows::Internal::OneCore::ViewEventHandlers::ComponentRelationshipStore::ComponentInfo *)v12,
         a4);
  Windows::Internal::OneCore::ViewEventHandlers::ComponentRelationshipStore::ComponentInfo::~ComponentInfo((Windows::Internal::OneCore::ViewEventHandlers::ComponentRelationshipStore::ComponentInfo *)v12);
  Microsoft::WRL::Wrappers::Details::SyncLockExclusive::InternalUnlock(v11);
  return v9;
}
