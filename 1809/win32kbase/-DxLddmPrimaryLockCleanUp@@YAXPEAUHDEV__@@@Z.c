/*
 * XREFs of ?DxLddmPrimaryLockCleanUp@@YAXPEAUHDEV__@@@Z @ 0x1C003EF4C
 * Callers:
 *     GreSuspendDirectDraw @ 0x1C003EDC0 (GreSuspendDirectDraw.c)
 * Callees:
 *     ??0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C0029C48 (--0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     ?DxLddmPrimaryLockCleanUpSinglePDev@@YAXPEAVPDEVOBJ@@@Z @ 0x1C003EA08 (-DxLddmPrimaryLockCleanUpSinglePDev@@YAXPEAVPDEVOBJ@@@Z.c)
 *     ?bLddmDriver@PDEVOBJ@@QEBAHXZ @ 0x1C003F130 (-bLddmDriver@PDEVOBJ@@QEBAHXZ.c)
 *     hdevEnumerate @ 0x1C003F2B0 (hdevEnumerate.c)
 *     EtwTraceGreLockReleaseSemaphore @ 0x1C005E110 (EtwTraceGreLockReleaseSemaphore.c)
 */

void __fastcall DxLddmPrimaryLockCleanUp(HDEV a1)
{
  int v2; // eax
  int v3; // edx
  __int64 v4; // r8
  HDEV i; // rcx
  int v6; // eax
  int v7; // edx
  __int64 v8; // r8
  __int64 v9; // rax
  HDEV v10; // rbx
  HDEV v11; // [rsp+30h] [rbp+8h] BYREF

  DYNAMICMODECHANGESHARELOCK::DYNAMICMODECHANGESHARELOCK((DYNAMICMODECHANGESHARELOCK *)&v11);
  v11 = a1;
  if ( a1 )
  {
    v2 = *((_DWORD *)a1 + 10);
    if ( (v2 & 1) != 0 )
    {
      if ( (v2 & 0x20000) != 0 )
      {
        for ( i = 0LL; ; i = v10 )
        {
          v9 = hdevEnumerate(i);
          v10 = (HDEV)v9;
          if ( !v9 )
            break;
          v6 = *(_DWORD *)(v9 + 40);
          v11 = v10;
          if ( (v6 & 0x20000) == 0
            && (v6 & 1) != 0
            && (unsigned int)PDEVOBJ::bLddmDriver((PDEVOBJ *)&v11)
            && *((HDEV *)v10 + 3) == a1 )
          {
            DxLddmPrimaryLockCleanUpSinglePDev((struct PDEVOBJ *)&v11, v7, v8);
          }
        }
      }
      else if ( (unsigned int)PDEVOBJ::bLddmDriver((PDEVOBJ *)&v11) )
      {
        DxLddmPrimaryLockCleanUpSinglePDev((struct PDEVOBJ *)&v11, v3, v4);
      }
    }
  }
  EtwTraceGreLockReleaseSemaphore(L"ghsemDynamicModeChange", ghsemDynamicModeChange);
  if ( ghsemDynamicModeChange )
  {
    ExReleaseResourceAndLeaveCriticalRegion(ghsemDynamicModeChange);
    PsLeavePriorityRegion();
  }
}
