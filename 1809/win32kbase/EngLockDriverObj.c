/*
 * XREFs of EngLockDriverObj @ 0x1C0107B70
 * Callers:
 *     ?NtGdiCloseProcess@@YAHKW4_CLEANUPTYPE@@@Z @ 0x1C0061E50 (-NtGdiCloseProcess@@YAHKW4_CLEANUPTYPE@@@Z.c)
 * Callees:
 *     HmgLock @ 0x1C0022520 (HmgLock.c)
 *     ??0?$HmgLockResult@VDRVOBJ@@@@QEAA@PEAU_BASEOBJECT@@@Z @ 0x1C00AC498 (--0-$HmgLockResult@VDRVOBJ@@@@QEAA@PEAU_BASEOBJECT@@@Z.c)
 *     ??1?$HmgLockResult@VDRVOBJ@@@@QEAA@XZ @ 0x1C00AC4EC (--1-$HmgLockResult@VDRVOBJ@@@@QEAA@XZ.c)
 */

DRIVEROBJ *__stdcall EngLockDriverObj(HDRVOBJ hdo)
{
  DRIVEROBJ *v1; // rbx
  __int64 v2; // rax
  __int64 v3; // rcx
  _QWORD v5[7]; // [rsp+20h] [rbp-38h] BYREF

  v1 = 0LL;
  v2 = HmgLock((unsigned int)hdo, 28);
  HmgLockResult<DRVOBJ>::HmgLockResult<DRVOBJ>((unsigned __int64)v5, v2);
  v3 = v5[0];
  if ( v5[0] )
  {
    v5[0] = 0LL;
    v1 = (DRIVEROBJ *)(v3 + 24);
  }
  HmgLockResult<DRVOBJ>::~HmgLockResult<DRVOBJ>(v5);
  return v1;
}
