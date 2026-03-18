/*
 * XREFs of ?DxLddmPrimaryLockCleanUp@@YAXPEAUHDEV__@@@Z @ 0x1C0044074
 * Callers:
 *     GreSuspendDirectDraw @ 0x1C0043EF0 (GreSuspendDirectDraw.c)
 * Callees:
 *     ??0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C00151C0 (--0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     ?bLddmDriver@PDEVOBJ@@QEBAHXZ @ 0x1C003DF84 (-bLddmDriver@PDEVOBJ@@QEBAHXZ.c)
 *     hdevEnumerate @ 0x1C0041E00 (hdevEnumerate.c)
 *     ?DxLddmPrimaryLockCleanUpSinglePDev@@YAXPEAVPDEVOBJ@@@Z @ 0x1C0043E44 (-DxLddmPrimaryLockCleanUpSinglePDev@@YAXPEAVPDEVOBJ@@@Z.c)
 *     EtwTraceGreLockReleaseSemaphore @ 0x1C0077760 (EtwTraceGreLockReleaseSemaphore.c)
 */

void __fastcall DxLddmPrimaryLockCleanUp(HDEV a1)
{
  int v2; // edx
  __int64 v3; // r8
  int v4; // eax
  int v5; // edx
  __int64 v6; // r8
  NSInstrumentation::CReferenceTracker::CReferenceCountedType *i; // rcx
  int v8; // eax
  struct PDEV *v9; // rax
  HDEV *v10; // rbx
  HDEV v11; // [rsp+30h] [rbp+8h] BYREF

  DYNAMICMODECHANGESHARELOCK::DYNAMICMODECHANGESHARELOCK((DYNAMICMODECHANGESHARELOCK *)&v11);
  v11 = a1;
  if ( a1 )
  {
    v4 = *((_DWORD *)a1 + 10);
    if ( (v4 & 1) != 0 )
    {
      if ( (v4 & 0x20000) != 0 )
      {
        for ( i = 0LL; ; i = (NSInstrumentation::CReferenceTracker::CReferenceCountedType *)v10 )
        {
          v9 = hdevEnumerate(i, v2, v3);
          v10 = (HDEV *)v9;
          if ( !v9 )
            break;
          v8 = *((_DWORD *)v9 + 10);
          v11 = (HDEV)v10;
          if ( (v8 & 0x20000) == 0
            && (v8 & 1) != 0
            && (unsigned int)PDEVOBJ::bLddmDriver((PDEVOBJ *)&v11)
            && v10[3] == a1 )
          {
            DxLddmPrimaryLockCleanUpSinglePDev((struct PDEVOBJ *)&v11, v2, v3);
          }
        }
      }
      else if ( (unsigned int)PDEVOBJ::bLddmDriver((PDEVOBJ *)&v11) )
      {
        DxLddmPrimaryLockCleanUpSinglePDev((struct PDEVOBJ *)&v11, v5, v6);
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
