/*
 * XREFs of ?vCleanupSurfaces@@YAXKW4_CLEANUPTYPE@@@Z @ 0x1C006C574
 * Callers:
 *     ?NtGdiCloseProcess@@YAHKW4_CLEANUPTYPE@@@Z @ 0x1C007C408 (-NtGdiCloseProcess@@YAHKW4_CLEANUPTYPE@@@Z.c)
 * Callees:
 *     HmgShareLockCheck @ 0x1C001D840 (HmgShareLockCheck.c)
 *     HmgDecrementShareReferenceCountEx @ 0x1C001E060 (HmgDecrementShareReferenceCountEx.c)
 *     ??0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C0029FFC (--0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     HmgNextOwned @ 0x1C006C600 (HmgNextOwned.c)
 *     EtwTraceGreLockReleaseSemaphore @ 0x1C0070850 (EtwTraceGreLockReleaseSemaphore.c)
 *     ?bDeleteSurface@SURFREF@@QEAAHW4_CLEANUPTYPE@@H@Z @ 0x1C00BAB5C (-bDeleteSurface@SURFREF@@QEAAHW4_CLEANUPTYPE@@H@Z.c)
 */

__int64 __fastcall vCleanupSurfaces(unsigned int a1, unsigned int a2)
{
  unsigned int v3; // ebx
  __int64 result; // rax
  __int64 v6; // rax
  __int64 v7; // r8
  int v8; // ecx
  struct OBJECT *v9; // [rsp+40h] [rbp+18h] BYREF
  __int64 v10; // [rsp+48h] [rbp+20h]

  v10 = 0LL;
  v3 = 0;
  while ( 1 )
  {
    result = HmgNextOwned(v3, a1);
    v3 = result;
    if ( !(_DWORD)result )
      break;
    if ( (BYTE2(v10) & 0x1F) == 5 )
    {
      DYNAMICMODECHANGESHARELOCK::DYNAMICMODECHANGESHARELOCK((DYNAMICMODECHANGESHARELOCK *)&v9);
      v6 = HmgShareLockCheck(v10, 5);
      v9 = (struct OBJECT *)v6;
      if ( v6 )
      {
        v8 = *(_DWORD *)(v6 + 112);
        if ( v8 >= 0 || (v8 & 0x40000) != 0 )
        {
          SURFREF::bDeleteSurface(&v9, a2, v7);
          v6 = (__int64)v9;
        }
        if ( v6 )
          HmgDecrementShareReferenceCountEx((struct OBJECT *)v6, 0LL);
      }
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
