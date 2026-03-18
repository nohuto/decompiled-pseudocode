/*
 * XREFs of xxxEndMenuLoop @ 0x1C02088E0
 * Callers:
 *     xxxMNLoop @ 0x1C0209440 (xxxMNLoop.c)
 *     xxxCallHandleMenuMessages @ 0x1C020B5C0 (xxxCallHandleMenuMessages.c)
 *     xxxMenuWindowProc @ 0x1C020F6B0 (xxxMenuWindowProc.c)
 * Callees:
 *     xxxDrawMenuBarUnderlines @ 0x1C000A004 (xxxDrawMenuBarUnderlines.c)
 *     ??1?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ @ 0x1C0022768 (--1-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ.c)
 *     W32GetThreadWin32Thread @ 0x1C0065998 (W32GetThreadWin32Thread.c)
 *     xxxDWP_DoNCActivate @ 0x1C00A7B84 (xxxDWP_DoNCActivate.c)
 *     ?Init@?$SmartObjStackRefBase@UtagPOPUPMENU@@@@AEAAXPEAUtagPOPUPMENU@@@Z @ 0x1C0102A84 (-Init@-$SmartObjStackRefBase@UtagPOPUPMENU@@@@AEAAXPEAUtagPOPUPMENU@@@Z.c)
 *     xxxMNCancel @ 0x1C020B900 (xxxMNCancel.c)
 *     xxxEndMenu @ 0x1C022EED4 (xxxEndMenu.c)
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
  ULONG_PTR v10; // rbx
  __int64 v11; // rcx
  char v12; // si
  __int64 v13; // rax
  __int64 v14; // rdx
  __int64 v15; // rcx
  _QWORD v17[2]; // [rsp+20h] [rbp-40h] BYREF
  _QWORD v18[3]; // [rsp+30h] [rbp-30h] BYREF
  _QWORD v19[3]; // [rsp+48h] [rbp-18h] BYREF

  SmartObjStackRefBase<tagPOPUPMENU>::Init(v17, a2);
  v3 = 0;
  v4 = *(_QWORD *)v17[0];
  if ( (**(_DWORD **)v17[0] & 8) != 0 )
  {
    if ( (**(_DWORD **)v17[0] & 0x80000) == 0 )
      xxxMNCancel(a1, 0LL, 0LL, 0LL);
  }
  else
  {
    v5 = *(_DWORD *)(a1 + 8);
    if ( (v5 & 0x20) != 0 )
    {
      v6 = *(_QWORD *)(*(_QWORD *)v17[0] + 8LL);
      ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v4);
      v18[0] = *(_QWORD *)(ThreadWin32Thread + 416);
      *(_QWORD *)(ThreadWin32Thread + 416) = v18;
      v18[1] = v6;
      if ( v6 )
        _InterlockedIncrement((volatile signed __int32 *)(v6 + 8));
      xxxDrawMenuBarUnderlines(*(_QWORD *)(*(_QWORD *)v17[0] + 8LL), 0);
      ThreadUnlock1(v9, v8);
      v5 = *(_DWORD *)(a1 + 8);
    }
    if ( (v5 & 0x10) == 0 )
      xxxEndMenu(a1);
  }
  if ( (*(_DWORD *)(a1 + 8) & 0x100) != 0 && *(_QWORD *)(*(_QWORD *)v17[0] + 8LL) )
  {
    v10 = *(_QWORD *)(*(_QWORD *)v17[0] + 8LL);
    v11 = *(_QWORD *)(*(_QWORD *)(v10 + 16) + 432LL);
    if ( v11 == gpqForeground && *(_QWORD *)(v11 + 120) == v10 )
    {
      v3 = 1;
      v12 = 1;
    }
    else
    {
      v12 = 2;
    }
    if ( ((*(unsigned __int8 *)(*(_QWORD *)(v10 + 40) + 16LL) >> 6) & 1) != v3 )
    {
      v13 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v4);
      v19[0] = *(_QWORD *)(v13 + 416);
      *(_QWORD *)(v13 + 416) = v19;
      v19[1] = v10;
      _InterlockedIncrement((volatile signed __int32 *)(v10 + 8));
      xxxDWP_DoNCActivate(v10, v12, 1LL);
      ThreadUnlock1(v15, v14);
    }
  }
  return SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(v17, v4);
}
