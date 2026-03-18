/*
 * XREFs of xxxEndMenuLoop @ 0x1C01E2A70
 * Callers:
 *     xxxMNLoop @ 0x1C01E3580 (xxxMNLoop.c)
 *     xxxCallHandleMenuMessages @ 0x1C01E5680 (xxxCallHandleMenuMessages.c)
 *     xxxMenuWindowProc @ 0x1C01E96E0 (xxxMenuWindowProc.c)
 * Callees:
 *     ?Init@?$SmartObjStackRefBase@UtagPOPUPMENU@@@@AEAAXPEAUtagPOPUPMENU@@@Z @ 0x1C0021B08 (-Init@-$SmartObjStackRefBase@UtagPOPUPMENU@@@@AEAAXPEAUtagPOPUPMENU@@@Z.c)
 *     ??1?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ @ 0x1C0021BC8 (--1-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ.c)
 *     W32GetThreadWin32Thread @ 0x1C0026450 (W32GetThreadWin32Thread.c)
 *     xxxDWP_DoNCActivate @ 0x1C00C2AA8 (xxxDWP_DoNCActivate.c)
 *     xxxDrawMenuBarUnderlines @ 0x1C0110730 (xxxDrawMenuBarUnderlines.c)
 *     xxxMNCancel @ 0x1C01E59BC (xxxMNCancel.c)
 *     xxxEndMenu @ 0x1C0205D9C (xxxEndMenu.c)
 */

_QWORD *__fastcall xxxEndMenuLoop(__int64 a1, __int64 a2)
{
  int v3; // edi
  __int64 v4; // rdx
  int v5; // eax
  __int64 v6; // rsi
  __int64 ThreadWin32Thread; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  ULONG_PTR v11; // rbx
  __int64 v12; // rcx
  char v13; // si
  __int64 v14; // rax
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  _QWORD v19[2]; // [rsp+20h] [rbp-40h] BYREF
  _QWORD v20[3]; // [rsp+30h] [rbp-30h] BYREF
  _QWORD v21[3]; // [rsp+48h] [rbp-18h] BYREF

  SmartObjStackRefBase<tagPOPUPMENU>::Init(v19, a2);
  v3 = 0;
  v4 = *(_QWORD *)v19[0];
  if ( (**(_DWORD **)v19[0] & 8) != 0 )
  {
    if ( (**(_DWORD **)v19[0] & 0x80000) == 0 )
      xxxMNCancel(a1, 0LL, 0LL, 0LL);
  }
  else
  {
    v5 = *(_DWORD *)(a1 + 8);
    if ( (v5 & 0x20) != 0 )
    {
      v6 = *(_QWORD *)(*(_QWORD *)v19[0] + 8LL);
      ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v4);
      v20[0] = *(_QWORD *)(ThreadWin32Thread + 408);
      *(_QWORD *)(ThreadWin32Thread + 408) = v20;
      v20[1] = v6;
      if ( v6 )
        _InterlockedIncrement((volatile signed __int32 *)(v6 + 8));
      xxxDrawMenuBarUnderlines(*(_QWORD *)(*(_QWORD *)v19[0] + 8LL), 0);
      ThreadUnlock1(v9, v8, v10);
      v5 = *(_DWORD *)(a1 + 8);
    }
    if ( (v5 & 0x10) == 0 )
      xxxEndMenu(a1);
  }
  if ( (*(_DWORD *)(a1 + 8) & 0x100) != 0 && *(_QWORD *)(*(_QWORD *)v19[0] + 8LL) )
  {
    v11 = *(_QWORD *)(*(_QWORD *)v19[0] + 8LL);
    v12 = *(_QWORD *)(*(_QWORD *)(v11 + 16) + 424LL);
    if ( v12 == gpqForeground && *(_QWORD *)(v12 + 120) == v11 )
    {
      v3 = 1;
      v13 = 1;
    }
    else
    {
      v13 = 2;
    }
    if ( ((*(unsigned __int8 *)(*(_QWORD *)(v11 + 40) + 16LL) >> 6) & 1) != v3 )
    {
      v14 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v4);
      v21[0] = *(_QWORD *)(v14 + 408);
      *(_QWORD *)(v14 + 408) = v21;
      v21[1] = v11;
      _InterlockedIncrement((volatile signed __int32 *)(v11 + 8));
      xxxDWP_DoNCActivate(v11, v13, 1LL);
      ThreadUnlock1(v16, v15, v17);
    }
  }
  return SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(v19, v4);
}
