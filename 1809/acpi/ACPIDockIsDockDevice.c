/*
 * XREFs of ACPIDockIsDockDevice @ 0x1C00206B0
 * Callers:
 *     ACPIBuildProcessDevicePhaseEjd @ 0x1C001A1A0 (ACPIBuildProcessDevicePhaseEjd.c)
 *     ACPIBuildSurpriseRemovedExtension @ 0x1C002D8F4 (ACPIBuildSurpriseRemovedExtension.c)
 *     OSNotifyDeviceEnum @ 0x1C002E2C4 (OSNotifyDeviceEnum.c)
 *     ACPIBuildIssueNotifyDeviceEject @ 0x1C0049DD0 (ACPIBuildIssueNotifyDeviceEject.c)
 *     ACPIBusIrpQueryPower @ 0x1C004B8B0 (ACPIBusIrpQueryPower.c)
 *     ACPIFilterIrpQueryPower @ 0x1C0053990 (ACPIFilterIrpQueryPower.c)
 *     OSNotifyDeviceCheck @ 0x1C0056C14 (OSNotifyDeviceCheck.c)
 *     ACPIBusAndFilterIrpQueryCapabilities @ 0x1C009B4E0 (ACPIBusAndFilterIrpQueryCapabilities.c)
 *     ACPIBusAndFilterIrpQueryEjectRelations @ 0x1C00A9CDC (ACPIBusAndFilterIrpQueryEjectRelations.c)
 * Callees:
 *     DereferenceObjectEx @ 0x1C00038B0 (DereferenceObjectEx.c)
 *     GetNameSpaceObjectNoLock @ 0x1C0008BF0 (GetNameSpaceObjectNoLock.c)
 *     __security_check_cookie @ 0x1C0030A80 (__security_check_cookie.c)
 *     AMLIDebugger @ 0x1C0063760 (AMLIDebugger.c)
 *     ConPrintf @ 0x1C0063840 (ConPrintf.c)
 */

bool __fastcall ACPIDockIsDockDevice(__int64 *a1)
{
  KIRQL v2; // di
  __int64 v3; // rdx
  int NameSpaceObjectNoLock; // ebx
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  unsigned __int64 v10; // rcx
  unsigned __int64 v11; // [rsp+20h] [rbp-A8h] BYREF
  _DWORD Src[32]; // [rsp+30h] [rbp-98h] BYREF

  strcpy((char *)Src, "_DCK");
  v2 = ExAcquireSpinLockShared(&ACPINamespaceLock);
  dword_1C0080868 = 0;
  pszDest = 0;
  if ( (gDebugger & 0x1000) != 0 )
  {
    ConPrintf("\nProcess AML Debugger Request.\n");
    _InterlockedAnd(&gDebugger, 0xFFFFEFFF);
    AMLIDebugger(v7, v6, v8, v9);
  }
  if ( !LOBYTE(Src[0]) )
  {
    NameSpaceObjectNoLock = -1073741810;
    goto LABEL_9;
  }
  if ( a1 )
  {
    v3 = *a1;
    if ( (*(_BYTE *)(*a1 + 64) & 4) != 0 )
    {
      NameSpaceObjectNoLock = -1073741738;
      goto LABEL_9;
    }
  }
  else
  {
    v3 = 0LL;
  }
  NameSpaceObjectNoLock = GetNameSpaceObjectNoLock((const char *)Src, v3, (__int64 *)&v11, 1LL);
  if ( NameSpaceObjectNoLock >= 0 )
  {
    v10 = v11;
    if ( v11 )
    {
      dword_1C0080868 = 0;
      pszDest = 0;
      if ( (gdwfAMLI & 4) != 0 )
      {
        _InterlockedIncrement((volatile signed __int32 *)(v11 + 128));
        v10 = v11;
      }
      DereferenceObjectEx(v10);
    }
  }
  if ( NameSpaceObjectNoLock == 32772 )
    NameSpaceObjectNoLock = 259;
LABEL_9:
  ExReleaseSpinLockShared(&ACPINamespaceLock, v2);
  return NameSpaceObjectNoLock >= 0;
}
