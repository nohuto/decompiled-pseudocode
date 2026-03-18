/*
 * XREFs of ?vCleanupSurfaces@@YAXKW4_CLEANUPTYPE@@@Z @ 0x1C005C564
 * Callers:
 *     ?NtGdiCloseProcess@@YAHKW4_CLEANUPTYPE@@@Z @ 0x1C006127C (-NtGdiCloseProcess@@YAHKW4_CLEANUPTYPE@@@Z.c)
 * Callees:
 *     HmgDecrementShareReferenceCountEx @ 0x1C002AC00 (HmgDecrementShareReferenceCountEx.c)
 *     HmgNextOwned @ 0x1C002B7B0 (HmgNextOwned.c)
 *     HmgShareLockCheck @ 0x1C002CA80 (HmgShareLockCheck.c)
 *     ??0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C0033588 (--0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     EtwTraceGreLockReleaseSemaphore @ 0x1C005AB30 (EtwTraceGreLockReleaseSemaphore.c)
 *     ?bDeleteSurface@SURFREF@@QEAAHW4_CLEANUPTYPE@@H@Z @ 0x1C0075F4C (-bDeleteSurface@SURFREF@@QEAAHW4_CLEANUPTYPE@@H@Z.c)
 */

__int64 __fastcall vCleanupSurfaces(int a1, unsigned int a2)
{
  unsigned int v3; // ebx
  __int64 result; // rax
  __int64 v6; // rax
  int v7; // r8d
  int v8; // ecx
  struct OBJECT *v9; // [rsp+40h] [rbp+18h] BYREF
  unsigned __int64 v10; // [rsp+48h] [rbp+20h] BYREF

  v10 = 0LL;
  v3 = 0;
  while ( 1 )
  {
    result = HmgNextOwned(v3, a1, &v10);
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
          SURFREF::bDeleteSurface(&v9, a2);
          v6 = (__int64)v9;
        }
        if ( v6 )
          HmgDecrementShareReferenceCountEx((struct OBJECT *)v6, 0LL);
      }
      EtwTraceGreLockReleaseSemaphore((__int64)L"ghsemDynamicModeChange", (int)ghsemDynamicModeChange, v7);
      if ( ghsemDynamicModeChange )
      {
        ExReleaseResourceAndLeaveCriticalRegion(ghsemDynamicModeChange);
        PsLeavePriorityRegion();
      }
    }
  }
  return result;
}
