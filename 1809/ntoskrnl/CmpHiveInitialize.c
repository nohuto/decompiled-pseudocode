/*
 * XREFs of CmpHiveInitialize @ 0x1405A817C
 * Callers:
 *     CmpCreateHive @ 0x1405A7574 (CmpCreateHive.c)
 *     CmpCreateEmptyHiveClone @ 0x1407F77D8 (CmpCreateEmptyHiveClone.c)
 * Callees:
 *     ExInitializePushLock @ 0x14008A3F0 (ExInitializePushLock.c)
 *     memset @ 0x1401D1980 (memset.c)
 *     CmpInitSecurityCache @ 0x1405A8210 (CmpInitSecurityCache.c)
 *     HvHiveInitialize @ 0x1405A824C (HvHiveInitialize.c)
 */

__int64 __fastcall CmpHiveInitialize(__int64 a1)
{
  memset((void *)a1, 0, 0x12F8uLL);
  HvHiveInitialize(a1);
  *(_QWORD *)(a1 + 4832) = 0LL;
  *(_DWORD *)(a1 + 4288) = 1;
  *(_QWORD *)(a1 + 1608) = a1 + 1600;
  *(_QWORD *)(a1 + 1600) = a1 + 1600;
  ExInitializePushLock((PKSPIN_LOCK)(a1 + 1632));
  *(_QWORD *)(a1 + 1672) = 0LL;
  *(_QWORD *)(a1 + 1776) = 0LL;
  *(_DWORD *)(a1 + 2996) = 16;
  *(_QWORD *)(a1 + 4168) = a1 + 4160;
  *(_QWORD *)(a1 + 4160) = a1 + 4160;
  *(_QWORD *)(a1 + 1624) = a1 + 1616;
  *(_QWORD *)(a1 + 1616) = a1 + 1616;
  return CmpInitSecurityCache(a1);
}
