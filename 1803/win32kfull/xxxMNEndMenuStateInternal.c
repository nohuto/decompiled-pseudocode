/*
 * XREFs of xxxMNEndMenuStateInternal @ 0x1C01D54B0
 * Callers:
 *     xxxMNEndMenuState @ 0x1C01D5390 (xxxMNEndMenuState.c)
 * Callees:
 *     ?Init@?$SmartObjStackRefBase@UtagPOPUPMENU@@@@AEAAXPEAUtagPOPUPMENU@@@Z @ 0x1C0021B08 (-Init@-$SmartObjStackRefBase@UtagPOPUPMENU@@@@AEAAXPEAUtagPOPUPMENU@@@Z.c)
 *     ??1?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ @ 0x1C0021BC8 (--1-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ.c)
 *     xxxActivateThisWindow @ 0x1C005BE64 (xxxActivateThisWindow.c)
 *     IsThreadMiPEnabled @ 0x1C00EBFAC (IsThreadMiPEnabled.c)
 *     ??0MenuStateOwnerLockxxxUnlock@@QEAA@PEAUtagMENUSTATE@@@Z @ 0x1C01AA854 (--0MenuStateOwnerLockxxxUnlock@@QEAA@PEAUtagMENUSTATE@@@Z.c)
 *     ??1MenuStateOwnerLockxxxUnlock@@QEAA@XZ @ 0x1C01AA880 (--1MenuStateOwnerLockxxxUnlock@@QEAA@XZ.c)
 *     MNDestroyAnimationBitmap @ 0x1C01D5070 (MNDestroyAnimationBitmap.c)
 *     UnlockMFMWFPWindow @ 0x1C01E55A8 (UnlockMFMWFPWindow.c)
 *     xxxMNSetCapture @ 0x1C01E9068 (xxxMNSetCapture.c)
 */

// write access to const memory has been detected, the output may be wrong!
void __fastcall xxxMNEndMenuStateInternal(__int64 a1, HDC a2)
{
  HDC v4; // rax
  _QWORD *v5; // rcx
  int v6; // ecx
  __int64 v7; // rcx
  __int64 v8; // rbx
  __int64 v9; // rdx
  _QWORD v10[3]; // [rsp+20h] [rbp-18h] BYREF
  struct tagMENUSTATE *v11; // [rsp+40h] [rbp+8h] BYREF

  UnlockMFMWFPWindow(a2 + 16);
  UnlockMFMWFPWindow(a2 + 20);
  v4 = *(HDC *)(a1 + 600);
  if ( v4 == a2 )
  {
    *(_QWORD *)(a1 + 600) = *((_QWORD *)a2 + 6);
  }
  else
  {
    while ( v4 )
    {
      v5 = v4 + 12;
      v4 = (HDC)*((_QWORD *)v4 + 6);
      if ( v4 == a2 )
      {
        *v5 = *((_QWORD *)a2 + 6);
        break;
      }
    }
  }
  if ( IsThreadMiPEnabled(a1) && *(_QWORD *)(a1 + 1248) )
    *(_QWORD *)(*(_QWORD *)(a1 + 424) + 440LL) = 0LL;
  v6 = *((_DWORD *)a2 + 2);
  if ( (v6 & 0x2000100) == 0x2000000 )
  {
    --guSFWLockCount;
    *((_DWORD *)a2 + 2) = v6 & 0xFDFFFFFF;
  }
  if ( *((_QWORD *)a2 + 16) )
    MNDestroyAnimationBitmap((__int64)a2);
  if ( a2 == gMenuState[0] )
  {
    gdwPUDFlags &= ~0x2000000u;
    GreSetDCOwnerEx(gMenuState[17], 0LL, 0LL, 0LL);
  }
  else
  {
    v7 = *((_QWORD *)a2 + 17);
    if ( v7 )
      GreDeleteDC(v7);
    Win32FreePool(a2);
  }
  v8 = *(_QWORD *)(a1 + 600);
  if ( v8 )
  {
    MenuStateOwnerLockxxxUnlock::MenuStateOwnerLockxxxUnlock(
      (MenuStateOwnerLockxxxUnlock *)&v11,
      *(struct tagMENUSTATE **)(a1 + 600));
    if ( (*(_DWORD *)(v8 + 8) & 0x100) != 0 )
    {
      xxxActivateThisWindow(*(struct tagWND **)(*(_QWORD *)v8 + 56LL), 0, 0, 0);
    }
    else
    {
      SmartObjStackRefBase<tagPOPUPMENU>::Init(v10, *(_QWORD *)v8);
      xxxMNSetCapture(v10, v8);
      SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(v10, v9);
    }
    MenuStateOwnerLockxxxUnlock::~MenuStateOwnerLockxxxUnlock(&v11);
  }
}
