/*
 * XREFs of ?vCleanupSurfaces@@YAXKW4_CLEANUPTYPE@@@Z @ 0x1C00527BC
 * Callers:
 *     ?NtGdiCloseProcess@@YAHKW4_CLEANUPTYPE@@@Z @ 0x1C007FEC8 (-NtGdiCloseProcess@@YAHKW4_CLEANUPTYPE@@@Z.c)
 * Callees:
 *     ??0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C00151C0 (--0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     HmgShareLockCheck @ 0x1C001C500 (HmgShareLockCheck.c)
 *     HmgDecrementShareReferenceCountEx @ 0x1C001D340 (HmgDecrementShareReferenceCountEx.c)
 *     HmgNextOwned @ 0x1C0052850 (HmgNextOwned.c)
 *     EtwTraceGreLockReleaseSemaphore @ 0x1C0077760 (EtwTraceGreLockReleaseSemaphore.c)
 *     ?bDeleteSurface@SURFREF@@QEAAHW4_CLEANUPTYPE@@H@Z @ 0x1C00BDBC8 (-bDeleteSurface@SURFREF@@QEAAHW4_CLEANUPTYPE@@H@Z.c)
 */

__int64 __fastcall vCleanupSurfaces(unsigned int a1, unsigned int a2)
{
  unsigned int v3; // ebx
  __int64 result; // rax
  __int64 v6; // rax
  int v7; // ecx
  struct OBJECT *v8; // [rsp+40h] [rbp+18h] BYREF
  __int64 v9; // [rsp+48h] [rbp+20h]

  v9 = 0LL;
  v3 = 0;
  while ( 1 )
  {
    result = HmgNextOwned(v3, a1);
    v3 = result;
    if ( !(_DWORD)result )
      break;
    if ( (BYTE2(v9) & 0x1F) == 5 )
    {
      DYNAMICMODECHANGESHARELOCK::DYNAMICMODECHANGESHARELOCK((DYNAMICMODECHANGESHARELOCK *)&v8);
      v6 = HmgShareLockCheck(v9, 5);
      v8 = (struct OBJECT *)v6;
      if ( v6 )
      {
        v7 = *(_DWORD *)(v6 + 112);
        if ( v7 >= 0 || (v7 & 0x40000) != 0 )
        {
          SURFREF::bDeleteSurface(&v8, a2);
          v6 = (__int64)v8;
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
