/*
 * XREFs of HMDestroyUnlockedObject @ 0x1C00B05A0
 * Callers:
 *     ?DestroyHandleSecondPass@@YAXPEAU_HANDLEENTRY@@@Z @ 0x1C0107470 (-DestroyHandleSecondPass@@YAXPEAU_HANDLEENTRY@@@Z.c)
 *     UserDeleteBaseWindowHandle @ 0x1C011D2F0 (UserDeleteBaseWindowHandle.c)
 * Callees:
 *     ??0?$CLockDomainSharedAllowAllRecursion@VDLT_HANDLEMANAGER@@@@QEAA@XZ @ 0x1C002D794 (--0-$CLockDomainSharedAllowAllRecursion@VDLT_HANDLEMANAGER@@@@QEAA@XZ.c)
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C003009C (--0UserAtomicCheck@@QEAA@XZ.c)
 *     ??1UserAtomicCheck@@QEAA@XZ @ 0x1C00300E8 (--1UserAtomicCheck@@QEAA@XZ.c)
 *     ?HMDestroyUnlockedObjectWorker@@YAXPEAU_HANDLEENTRY@@@Z @ 0x1C00AA02C (-HMDestroyUnlockedObjectWorker@@YAXPEAU_HANDLEENTRY@@@Z.c)
 */

void __fastcall HMDestroyUnlockedObject(struct _HANDLEENTRY *a1, __int64 a2, __int64 a3)
{
  _BYTE v4[24]; // [rsp+20h] [rbp-18h] BYREF
  char v5; // [rsp+48h] [rbp+10h] BYREF

  CLockDomainSharedAllowAllRecursion<DLT_HANDLEMANAGER>::CLockDomainSharedAllowAllRecursion<DLT_HANDLEMANAGER>(
    (__int64)v4,
    a2,
    a3);
  UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)&v5);
  HMDestroyUnlockedObjectWorker(a1);
  UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)&v5);
}
