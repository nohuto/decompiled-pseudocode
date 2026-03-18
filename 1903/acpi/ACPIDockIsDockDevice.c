/*
 * XREFs of ACPIDockIsDockDevice @ 0x1C0017620
 * Callers:
 *     ACPIBuildProcessDevicePhaseEjd @ 0x1C000F920 (ACPIBuildProcessDevicePhaseEjd.c)
 *     ACPIBuildSurpriseRemovedExtension @ 0x1C002B2CC (ACPIBuildSurpriseRemovedExtension.c)
 *     OSNotifyDeviceEnum @ 0x1C002EA54 (OSNotifyDeviceEnum.c)
 *     ACPIBuildIssueNotifyDeviceEject @ 0x1C004B480 (ACPIBuildIssueNotifyDeviceEject.c)
 *     ACPIBusIrpQueryPower @ 0x1C004D070 (ACPIBusIrpQueryPower.c)
 *     ACPIFilterIrpQueryPower @ 0x1C00553F0 (ACPIFilterIrpQueryPower.c)
 *     OSNotifyDeviceCheck @ 0x1C00586F4 (OSNotifyDeviceCheck.c)
 *     ACPIBusAndFilterIrpQueryCapabilities @ 0x1C0097710 (ACPIBusAndFilterIrpQueryCapabilities.c)
 *     ACPIBusAndFilterIrpQueryEjectRelations @ 0x1C00AD35C (ACPIBusAndFilterIrpQueryEjectRelations.c)
 * Callees:
 *     DereferenceObjectEx @ 0x1C0013B20 (DereferenceObjectEx.c)
 *     GetNameSpaceObjectNoLock @ 0x1C00193E0 (GetNameSpaceObjectNoLock.c)
 *     __security_check_cookie @ 0x1C0031700 (__security_check_cookie.c)
 *     AMLIDebugger @ 0x1C00657A8 (AMLIDebugger.c)
 *     ConPrintf @ 0x1C0065888 (ConPrintf.c)
 */

bool __fastcall ACPIDockIsDockDevice(__int64 a1)
{
  KIRQL v2; // di
  int NameSpaceObjectNoLock; // ebx
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  unsigned __int64 v9; // rcx
  unsigned __int64 v10; // [rsp+20h] [rbp-A8h]
  _DWORD Src[32]; // [rsp+30h] [rbp-98h] BYREF

  strcpy((char *)Src, "_DCK");
  v2 = ExAcquireSpinLockShared(&ACPINamespaceLock);
  dword_1C0082858 = 0;
  pszDest = 0;
  if ( (gDebugger & 0x1000) != 0 )
  {
    ConPrintf("\nProcess AML Debugger Request.\n");
    _InterlockedAnd(&gDebugger, 0xFFFFEFFF);
    AMLIDebugger(v6, v5, v7, v8);
  }
  if ( LOBYTE(Src[0]) )
  {
    if ( a1 && (*(_BYTE *)(*(_QWORD *)a1 + 64LL) & 4) != 0 )
    {
      NameSpaceObjectNoLock = -1073741738;
    }
    else
    {
      NameSpaceObjectNoLock = GetNameSpaceObjectNoLock(Src);
      if ( NameSpaceObjectNoLock >= 0 )
      {
        v9 = v10;
        if ( v10 )
        {
          dword_1C0082858 = 0;
          pszDest = 0;
          if ( (gdwfAMLI & 4) != 0 )
          {
            _InterlockedIncrement((volatile signed __int32 *)(v10 + 128));
            v9 = v10;
          }
          DereferenceObjectEx(v9);
        }
      }
      if ( NameSpaceObjectNoLock == 32772 )
        NameSpaceObjectNoLock = 259;
    }
  }
  else
  {
    NameSpaceObjectNoLock = -1073741810;
  }
  ExReleaseSpinLockShared(&ACPINamespaceLock, v2);
  return NameSpaceObjectNoLock >= 0;
}
