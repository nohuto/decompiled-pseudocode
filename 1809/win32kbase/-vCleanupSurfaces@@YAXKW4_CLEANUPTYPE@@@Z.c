/*
 * XREFs of ?vCleanupSurfaces@@YAXKW4_CLEANUPTYPE@@@Z @ 0x1C00449E0
 * Callers:
 *     ?NtGdiCloseProcess@@YAHKW4_CLEANUPTYPE@@@Z @ 0x1C0061E50 (-NtGdiCloseProcess@@YAHKW4_CLEANUPTYPE@@@Z.c)
 * Callees:
 *     HmgNextOwned @ 0x1C00200E0 (HmgNextOwned.c)
 *     ??1SURFREF@@QEAA@XZ @ 0x1C0023B70 (--1SURFREF@@QEAA@XZ.c)
 *     ??0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C0029C48 (--0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     ??0SURFREF@@QEAA@PEAUHSURF__@@@Z @ 0x1C0044A78 (--0SURFREF@@QEAA@PEAUHSURF__@@@Z.c)
 *     EtwTraceGreLockReleaseSemaphore @ 0x1C005E110 (EtwTraceGreLockReleaseSemaphore.c)
 *     ?bDeleteSurface@SURFREF@@QEAAHW4_CLEANUPTYPE@@H@Z @ 0x1C00A9FA8 (-bDeleteSurface@SURFREF@@QEAAHW4_CLEANUPTYPE@@H@Z.c)
 */

__int64 __fastcall vCleanupSurfaces(int a1, unsigned int a2)
{
  unsigned int v3; // ebx
  __int64 result; // rax
  int v6; // eax
  _BYTE v7[32]; // [rsp+20h] [rbp-38h] BYREF
  __int64 v8; // [rsp+40h] [rbp-18h]
  char v9; // [rsp+70h] [rbp+18h] BYREF
  HSURF v10; // [rsp+78h] [rbp+20h] BYREF

  v10 = 0LL;
  v3 = 0;
  while ( 1 )
  {
    result = HmgNextOwned(v3, a1, (unsigned __int64 *)&v10);
    v3 = result;
    if ( !(_DWORD)result )
      break;
    if ( (BYTE2(v10) & 0x1F) == 5 )
    {
      DYNAMICMODECHANGESHARELOCK::DYNAMICMODECHANGESHARELOCK((DYNAMICMODECHANGESHARELOCK *)&v9);
      SURFREF::SURFREF((SURFREF *)v7, v10);
      if ( v8 )
      {
        v6 = *(_DWORD *)(v8 + 112);
        if ( v6 >= 0 || (v6 & 0x40000) != 0 )
          SURFREF::bDeleteSurface(v7, a2);
      }
      SURFREF::~SURFREF((SURFREF *)v7);
      EtwTraceGreLockReleaseSemaphore(L"ghsemDynamicModeChange", ghsemDynamicModeChange);
      if ( ghsemDynamicModeChange )
      {
        ExReleaseResourceAndLeaveCriticalRegion(ghsemDynamicModeChange);
        PsLeavePriorityRegion();
      }
    }
  }
  return result;
}
