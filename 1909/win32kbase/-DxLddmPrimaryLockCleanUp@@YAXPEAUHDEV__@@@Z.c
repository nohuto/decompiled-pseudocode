/*
 * XREFs of ?DxLddmPrimaryLockCleanUp@@YAXPEAUHDEV__@@@Z @ 0x1C003E674
 * Callers:
 *     GreSuspendDirectDraw @ 0x1C003E4F0 (GreSuspendDirectDraw.c)
 * Callees:
 *     ??0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C0029FFC (--0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     ?bLddmDriver@PDEVOBJ@@QEBAHXZ @ 0x1C003FE08 (-bLddmDriver@PDEVOBJ@@QEBAHXZ.c)
 *     hdevEnumerate @ 0x1C0040070 (hdevEnumerate.c)
 *     ?DxLddmPrimaryLockCleanUpSinglePDev@@YAXPEAVPDEVOBJ@@@Z @ 0x1C0040444 (-DxLddmPrimaryLockCleanUpSinglePDev@@YAXPEAVPDEVOBJ@@@Z.c)
 *     EtwTraceGreLockReleaseSemaphore @ 0x1C0070850 (EtwTraceGreLockReleaseSemaphore.c)
 */

void __fastcall DxLddmPrimaryLockCleanUp(HDEV a1)
{
  int v2; // eax
  HDEV i; // rcx
  int v4; // eax
  __int64 v5; // rax
  HDEV v6; // rbx
  HDEV v7; // [rsp+30h] [rbp+8h] BYREF

  DYNAMICMODECHANGESHARELOCK::DYNAMICMODECHANGESHARELOCK((DYNAMICMODECHANGESHARELOCK *)&v7);
  v7 = a1;
  if ( a1 )
  {
    v2 = *((_DWORD *)a1 + 10);
    if ( (v2 & 1) != 0 )
    {
      if ( (v2 & 0x20000) != 0 )
      {
        for ( i = 0LL; ; i = v6 )
        {
          v5 = hdevEnumerate(i);
          v6 = (HDEV)v5;
          if ( !v5 )
            break;
          v4 = *(_DWORD *)(v5 + 40);
          v7 = v6;
          if ( (v4 & 0x20000) == 0
            && (v4 & 1) != 0
            && (unsigned int)PDEVOBJ::bLddmDriver((PDEVOBJ *)&v7)
            && *((HDEV *)v6 + 3) == a1 )
          {
            DxLddmPrimaryLockCleanUpSinglePDev((struct PDEVOBJ *)&v7);
          }
        }
      }
      else if ( (unsigned int)PDEVOBJ::bLddmDriver((PDEVOBJ *)&v7) )
      {
        DxLddmPrimaryLockCleanUpSinglePDev((struct PDEVOBJ *)&v7);
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
