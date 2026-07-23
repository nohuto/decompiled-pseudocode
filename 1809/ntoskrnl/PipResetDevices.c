/*
 * XREFs of PipResetDevices @ 0x1409CB1C0
 * Callers:
 *     IopInitializePlugPlayServices @ 0x1409C8608 (IopInitializePlugPlayServices.c)
 * Callees:
 *     ExReleaseResourceLite @ 0x14004F590 (ExReleaseResourceLite.c)
 *     ExAcquireResourceExclusiveLite @ 0x1400505F0 (ExAcquireResourceExclusiveLite.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x1400B78F0 (KiLeaveCriticalRegionUnsafe.c)
 *     DbgPrintEx @ 0x140160560 (DbgPrintEx.c)
 *     ExAllocatePoolWithTag @ 0x14034C010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     _CmGetMatchingFilteredDeviceList @ 0x1406BCB4C (_CmGetMatchingFilteredDeviceList.c)
 *     _PnpCtxRegEnumValue @ 0x1406F6884 (_PnpCtxRegEnumValue.c)
 *     _PnpCtxRegQueryInfoKey @ 0x1406F68D4 (_PnpCtxRegQueryInfoKey.c)
 *     _PnpCtxRegQueryValue @ 0x14073D4F4 (_PnpCtxRegQueryValue.c)
 *     _PnpCtxRegCloseKey @ 0x14073D52C (_PnpCtxRegCloseKey.c)
 *     _PnpCtxRegOpenKey @ 0x14073D544 (_PnpCtxRegOpenKey.c)
 *     PipResetDevice @ 0x1409F6578 (PipResetDevice.c)
 */

__int64 __fastcall PipResetDevices(__int64 a1)
{
  __int64 v1; // rdi
  __int64 result; // rax
  __int64 v3; // rcx
  int v4; // ebx
  __int64 v5; // rcx
  unsigned int v6; // r13d
  PVOID PoolWithTag; // rsi
  struct _KTHREAD *CurrentThread; // rax
  PVOID v9; // r14
  int v10; // r15d
  __int64 v11; // rcx
  PVOID v12; // rsi
  int v13; // r15d
  struct _KTHREAD *v14; // rax
  PVOID v15; // r14
  __int64 v16; // rcx
  unsigned int v17; // r12d
  int MatchingFilteredDeviceList; // eax
  _WORD *i; // r12
  __int64 v20; // rax
  bool v21; // zf
  int v22; // r12d
  int v23; // eax
  _WORD *j; // r12
  __int64 v25; // rax
  int v26; // [rsp+50h] [rbp-29h] BYREF
  int v27; // [rsp+54h] [rbp-25h] BYREF
  void *v28; // [rsp+58h] [rbp-21h] BYREF
  void *v29; // [rsp+60h] [rbp-19h] BYREF
  unsigned int v30; // [rsp+68h] [rbp-11h] BYREF
  int v31; // [rsp+6Ch] [rbp-Dh] BYREF
  unsigned int v32; // [rsp+70h] [rbp-9h] BYREF
  int v33; // [rsp+74h] [rbp-5h] BYREF
  void *v34; // [rsp+78h] [rbp-1h] BYREF
  int v35[6]; // [rsp+80h] [rbp+7h] BYREF
  __int64 v36; // [rsp+E0h] [rbp+67h] BYREF
  unsigned int v37; // [rsp+E8h] [rbp+6Fh] BYREF
  unsigned int v38; // [rsp+F0h] [rbp+77h] BYREF
  unsigned int v39; // [rsp+F8h] [rbp+7Fh] BYREF

  v36 = a1;
  v1 = *(_QWORD *)&PiPnpRtlCtx;
  result = PnpCtxRegOpenKey(*(__int64 *)&PiPnpRtlCtx, 2147483650LL, (__int64)L"SYSTEM", 0, 1u, (__int64)&v34);
  if ( (int)result >= 0 )
  {
    v30 = 4;
    v4 = PnpCtxRegQueryValue(v3, v34, L"DevModeEverEnabled", v35, &v31, &v30);
    PnpCtxRegCloseKey(v5, v34);
    if ( v4 < 0 || !v31 )
    {
      v6 = 0;
      LODWORD(v36) = 0;
      PoolWithTag = 0LL;
      v28 = 0LL;
      CurrentThread = KeGetCurrentThread();
      v9 = 0LL;
      v10 = 0;
      v26 = 0;
      --CurrentThread->KernelApcDisable;
      v37 = 0;
      ExAcquireResourceExclusiveLite(&PnpRegistryDeviceResource, 1u);
      if ( (int)PnpCtxRegOpenKey(
                  v1,
                  2147483650LL,
                  (__int64)L"System\\CurrentControlSet\\Control\\StateSeparation\\PnP\\ResetDevices\\Classes",
                  0,
                  0x20019u,
                  (__int64)&v28) >= 0
        && (int)PnpCtxRegQueryInfoKey(v11, (int)v28, 0, 0, (__int64)&v37, (__int64)&v26, 0LL) >= 0 )
      {
        if ( v37 )
        {
          v17 = v26 + 1;
          v38 = v26 + 1;
          PoolWithTag = ExAllocatePoolWithTag(PagedPool, 2LL * (unsigned int)(v26 + 1), 0x6E697050u);
          if ( PoolWithTag )
          {
            if ( v37 )
            {
              while ( 1 )
              {
                v32 = v17;
                if ( (int)PnpCtxRegEnumValue(v11, (__int64)v28, v6, (__int64)PoolWithTag, (__int64)&v32, 0LL, 0LL, 0LL) >= 0 )
                {
                  DbgPrintEx(0x20u, 0, "Resetting devices in device setup class '%ws'\n", PoolWithTag);
                  MatchingFilteredDeviceList = CmGetMatchingFilteredDeviceList(
                                                 v1,
                                                 (__int64)PoolWithTag,
                                                 128,
                                                 0LL,
                                                 0LL,
                                                 (__int64)v9,
                                                 v10,
                                                 (__int64)&v36);
                  if ( MatchingFilteredDeviceList == -1073741789 )
                  {
                    if ( v9 )
                      ExFreePoolWithTag(v9, 0);
                    v10 = v36;
                    v9 = ExAllocatePoolWithTag(PagedPool, 2LL * (unsigned int)v36, 0x6E697050u);
                    if ( !v9 )
                    {
LABEL_40:
                      v6 = 0;
                      break;
                    }
                    MatchingFilteredDeviceList = CmGetMatchingFilteredDeviceList(
                                                   v1,
                                                   (__int64)PoolWithTag,
                                                   128,
                                                   0LL,
                                                   0LL,
                                                   (__int64)v9,
                                                   v10,
                                                   (__int64)&v36);
                  }
                  if ( MatchingFilteredDeviceList >= 0 && (_DWORD)v36 )
                  {
                    for ( i = v9; *i; i += v20 + 1 )
                    {
                      PipResetDevice(v1, i);
                      v20 = -1LL;
                      do
                        v21 = i[++v20] == 0;
                      while ( !v21 );
                    }
                    v17 = v38;
                  }
                }
                if ( ++v6 >= v37 )
                  goto LABEL_40;
              }
            }
          }
        }
      }
      if ( v28 )
        PnpCtxRegCloseKey(v11, v28);
      if ( PoolWithTag )
        ExFreePoolWithTag(PoolWithTag, 0);
      if ( v9 )
        ExFreePoolWithTag(v9, 0);
      ExReleaseResourceLite(&PnpRegistryDeviceResource);
      KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
      v38 = 0;
      v12 = 0LL;
      v29 = 0LL;
      v13 = 0;
      v14 = KeGetCurrentThread();
      v15 = 0LL;
      v27 = 0;
      v39 = 0;
      --v14->KernelApcDisable;
      ExAcquireResourceExclusiveLite(&PnpRegistryDeviceResource, 1u);
      if ( (int)PnpCtxRegOpenKey(
                  v1,
                  2147483650LL,
                  (__int64)L"System\\CurrentControlSet\\Control\\StateSeparation\\PnP\\ResetDevices\\Services",
                  0,
                  0x20019u,
                  (__int64)&v29) >= 0
        && (int)PnpCtxRegQueryInfoKey(v16, (int)v29, 0, 0, (__int64)&v39, (__int64)&v27, 0LL) >= 0 )
      {
        if ( v39 )
        {
          v22 = v27 + 1;
          LODWORD(v36) = v27 + 1;
          v15 = ExAllocatePoolWithTag(PagedPool, 2LL * (unsigned int)(v27 + 1), 0x6E697050u);
          if ( v15 )
          {
            if ( v39 )
            {
              do
              {
                v33 = v22;
                if ( (int)PnpCtxRegEnumValue(v16, (__int64)v29, v6, (__int64)v15, (__int64)&v33, 0LL, 0LL, 0LL) >= 0 )
                {
                  DbgPrintEx(0x20u, 0, "Resetting devices using service '%ws'\n", v15);
                  v23 = CmGetMatchingFilteredDeviceList(v1, (__int64)v15, 2, 0LL, 0LL, (__int64)v12, v13, (__int64)&v38);
                  if ( v23 == -1073741789 )
                  {
                    if ( v12 )
                      ExFreePoolWithTag(v12, 0);
                    v13 = v38;
                    v12 = ExAllocatePoolWithTag(PagedPool, 2LL * v38, 0x6E697050u);
                    if ( !v12 )
                      break;
                    v23 = CmGetMatchingFilteredDeviceList(
                            v1,
                            (__int64)v15,
                            2,
                            0LL,
                            0LL,
                            (__int64)v12,
                            v13,
                            (__int64)&v38);
                  }
                  if ( v23 >= 0 && v38 )
                  {
                    for ( j = v12; *j; j += v25 + 1 )
                    {
                      PipResetDevice(v1, j);
                      v25 = -1LL;
                      do
                        v21 = j[++v25] == 0;
                      while ( !v21 );
                    }
                    v22 = v36;
                  }
                }
                ++v6;
              }
              while ( v6 < v39 );
            }
          }
        }
      }
      if ( v29 )
        PnpCtxRegCloseKey(v16, v29);
      if ( v15 )
        ExFreePoolWithTag(v15, 0);
      if ( v12 )
        ExFreePoolWithTag(v12, 0);
      ExReleaseResourceLite(&PnpRegistryDeviceResource);
      KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
    }
    return (unsigned int)v4;
  }
  return result;
}
