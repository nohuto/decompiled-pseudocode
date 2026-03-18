/*
 * XREFs of xxxMNEndMenuStateInternal @ 0x1C0210820
 * Callers:
 *     xxxMNEndMenuState @ 0x1C0210700 (xxxMNEndMenuState.c)
 * Callees:
 *     ??1?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ @ 0x1C0038E70 (--1-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ.c)
 *     IsThreadMiPEnabled @ 0x1C00E5898 (IsThreadMiPEnabled.c)
 *     ?Init@?$SmartObjStackRefBase@UtagPOPUPMENU@@@@AEAAXPEAUtagPOPUPMENU@@@Z @ 0x1C00EB5EC (-Init@-$SmartObjStackRefBase@UtagPOPUPMENU@@@@AEAAXPEAUtagPOPUPMENU@@@Z.c)
 *     ?xxxActivateWindow@@YA_NPEAUtagWND@@@Z @ 0x1C0135A44 (-xxxActivateWindow@@YA_NPEAUtagWND@@@Z.c)
 *     ??0MenuStateOwnerLockxxxUnlock@@QEAA@PEAUtagMENUSTATE@@@Z @ 0x1C01E1360 (--0MenuStateOwnerLockxxxUnlock@@QEAA@PEAUtagMENUSTATE@@@Z.c)
 *     ??1MenuStateOwnerLockxxxUnlock@@QEAA@XZ @ 0x1C01E13C0 (--1MenuStateOwnerLockxxxUnlock@@QEAA@XZ.c)
 *     MNDestroyAnimationBitmap @ 0x1C0210394 (MNDestroyAnimationBitmap.c)
 *     UnlockMFMWFPWindow @ 0x1C0222AC4 (UnlockMFMWFPWindow.c)
 *     xxxMNSetCapture @ 0x1C02267B8 (xxxMNSetCapture.c)
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
  __int64 v10; // rdx
  __int64 v11; // r8
  _QWORD v12[3]; // [rsp+20h] [rbp-18h] BYREF
  struct tagMENUSTATE *v13; // [rsp+40h] [rbp+8h] BYREF

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
  if ( IsThreadMiPEnabled(a1) && *(_QWORD *)(a1 + 1280) )
    *(_QWORD *)(*(_QWORD *)(a1 + 424) + 448LL) = 0LL;
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
    GreSetDCOwnerEx(gMenuState[17], 0LL, 0LL, 1LL);
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
      (MenuStateOwnerLockxxxUnlock *)&v13,
      *(struct tagMENUSTATE **)(a1 + 600));
    v9 = *(_QWORD *)v8;
    if ( (*(_DWORD *)(v8 + 8) & 0x100) != 0 )
    {
      xxxActivateWindow(*(struct tagWND **)(v9 + 56));
    }
    else
    {
      SmartObjStackRefBase<tagPOPUPMENU>::Init(v12, v9);
      xxxMNSetCapture(v12, v8);
      SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(v12, v10, v11);
    }
    MenuStateOwnerLockxxxUnlock::~MenuStateOwnerLockxxxUnlock(&v13);
  }
}
