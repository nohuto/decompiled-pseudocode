/*
 * XREFs of ?HampHostCheckCompletePackageInsertion@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x180012C94
 * Callers:
 *     ?HampHostFindOrCreate@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEAU_RM_PSM_HOST_INFO@@PEAPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x180012C34 (-HampHostFindOrCreate@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEAU_RM_PSM_HOST_INFO@@PEAPEAU_RM_HAM_ACTI.c)
 * Callees:
 *     ?HampPkgEnterInsertion@@YAXPEAU_HAM_PACKAGE@@@Z @ 0x18000A0B0 (-HampPkgEnterInsertion@@YAXPEAU_HAM_PACKAGE@@@Z.c)
 *     ?HampPkgReleaseLockExclusive@@YAXPEAU_HAM_PACKAGE@@@Z @ 0x18000A0F8 (-HampPkgReleaseLockExclusive@@YAXPEAU_HAM_PACKAGE@@@Z.c)
 *     ?HampPkgAcquireLockExclusive@@YAXPEAU_HAM_PACKAGE@@@Z @ 0x18000A144 (-HampPkgAcquireLockExclusive@@YAXPEAU_HAM_PACKAGE@@@Z.c)
 *     ?HampHostAcquireLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z @ 0x18000CA50 (-HampHostAcquireLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z.c)
 *     ?HampHostReleaseLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z @ 0x18000E910 (-HampHostReleaseLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z.c)
 *     ?HampHostCompletePackageInsertion@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x180010AC0 (-HampHostCompletePackageInsertion@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     CempLockTrackerMarkReleased @ 0x180023AE0 (CempLockTrackerMarkReleased.c)
 *     ?HampHostAcquireLockSharedEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z @ 0x18003A4E8 (-HampHostAcquireLockSharedEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z.c)
 */

__int64 __fastcall HampHostCheckCompletePackageInsertion(struct _RM_HAM_ACTIVITY_HOST *a1)
{
  int v1; // r14d
  DWORD v2; // ebp
  __int64 v4; // rsi
  _QWORD *Value; // rdi
  __int64 v6; // rdx
  __int64 v7; // rcx
  int v8; // edi

  v1 = 0;
  v2 = HampLockTrackerId;
  v4 = *(_QWORD *)(*((_QWORD *)a1 + 94) + 88LL);
  if ( HampLockTrackerId != -1 )
  {
    Value = TlsGetValue(HampLockTrackerId);
    if ( (*(_QWORD *)TlsGetValue(v2) & 0xFFFFFFFFFFFFFFFEuLL) != 0 )
      __int2c();
    *Value |= 2uLL;
    ++Value[2];
  }
  RtlAcquireSRWLockShared(a1);
  if ( (*((_QWORD *)a1 + 79) & 0x800000000000LL) == 0 )
  {
    CempLockTrackerMarkReleased(v7, v6, 1LL);
    RtlReleaseSRWLockShared(a1);
    v1 = 1;
    HampPkgEnterInsertion((struct _HAM_PACKAGE *)v4);
    HampHostAcquireLockSharedEx(a1, 0);
    if ( (*((_QWORD *)a1 + 79) & 0x800000000000LL) == 0 )
    {
      CempLockTrackerMarkReleased(v7, v6, 1LL);
      RtlReleaseSRWLockShared(a1);
      v8 = HampHostCompletePackageInsertion(a1);
      if ( v8 >= 0 )
      {
        HampHostAcquireLockExclusiveEx(a1, 0);
        *((_QWORD *)a1 + 79) |= 0x800000000000uLL;
        HampHostReleaseLockExclusiveEx(a1);
        v8 = 0;
      }
      goto LABEL_11;
    }
  }
  CempLockTrackerMarkReleased(v7, v6, 1LL);
  RtlReleaseSRWLockShared(a1);
  v8 = 0;
  if ( v1 )
  {
LABEL_11:
    HampPkgAcquireLockExclusive((struct _HAM_PACKAGE *)v4);
    *(_DWORD *)(v4 + 336) = 0;
    HampPkgReleaseLockExclusive((struct _HAM_PACKAGE *)v4);
    RtlWakeAddressSingle(v4 + 336);
  }
  return (unsigned int)v8;
}
