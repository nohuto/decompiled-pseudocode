/*
 * XREFs of xxxEndMenuLoop @ 0x1C021FD50
 * Callers:
 *     xxxMNLoop @ 0x1C0220940 (xxxMNLoop.c)
 *     xxxCallHandleMenuMessages @ 0x1C0222BB0 (xxxCallHandleMenuMessages.c)
 *     xxxMenuWindowProc @ 0x1C0226F00 (xxxMenuWindowProc.c)
 * Callees:
 *     ??1?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ @ 0x1C0038E70 (--1-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ.c)
 *     W32GetThreadWin32Thread @ 0x1C00AC2AC (W32GetThreadWin32Thread.c)
 *     ?Init@?$SmartObjStackRefBase@UtagPOPUPMENU@@@@AEAAXPEAUtagPOPUPMENU@@@Z @ 0x1C00EB5EC (-Init@-$SmartObjStackRefBase@UtagPOPUPMENU@@@@AEAAXPEAUtagPOPUPMENU@@@Z.c)
 *     xxxDrawMenuBarUnderlines @ 0x1C0111460 (xxxDrawMenuBarUnderlines.c)
 *     xxxDWP_DoNCActivate @ 0x1C012EEEC (xxxDWP_DoNCActivate.c)
 *     xxxMNCancel @ 0x1C0222EF4 (xxxMNCancel.c)
 *     xxxEndMenu @ 0x1C0246FFC (xxxEndMenu.c)
 */

_QWORD *__fastcall xxxEndMenuLoop(__int64 a1, __int64 a2)
{
  __int64 v3; // r8
  int v4; // edi
  __int64 v5; // rdx
  int v6; // eax
  __int64 v7; // rsi
  __int64 ThreadWin32Thread; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // rbx
  __int64 v13; // rcx
  __int64 v14; // rax
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  _QWORD v19[2]; // [rsp+20h] [rbp-40h] BYREF
  __int64 v20; // [rsp+30h] [rbp-30h] BYREF
  __int64 v21; // [rsp+38h] [rbp-28h]
  __int64 v22; // [rsp+40h] [rbp-20h]
  __int64 v23; // [rsp+48h] [rbp-18h] BYREF
  __int64 v24; // [rsp+50h] [rbp-10h]
  __int64 v25; // [rsp+58h] [rbp-8h]

  SmartObjStackRefBase<tagPOPUPMENU>::Init(v19, a2);
  v4 = 0;
  v5 = *(_QWORD *)v19[0];
  if ( (**(_DWORD **)v19[0] & 8) != 0 )
  {
    v5 = *(_QWORD *)v19[0];
    if ( (**(_DWORD **)v19[0] & 0x80000) == 0 )
      xxxMNCancel(a1);
  }
  else
  {
    v6 = *(_DWORD *)(a1 + 8);
    if ( (v6 & 0x20) != 0 )
    {
      v20 = 0LL;
      v21 = 0LL;
      v22 = 0LL;
      v7 = *(_QWORD *)(*(_QWORD *)v19[0] + 8LL);
      ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v5, v3);
      v20 = *(_QWORD *)(ThreadWin32Thread + 408);
      *(_QWORD *)(ThreadWin32Thread + 408) = &v20;
      v21 = v7;
      if ( v7 )
        HMLockObject(v7);
      xxxDrawMenuBarUnderlines(*(_QWORD *)(*(_QWORD *)v19[0] + 8LL), 0);
      ThreadUnlock1(v10, v9, v11);
      v6 = *(_DWORD *)(a1 + 8);
    }
    if ( (v6 & 0x10) == 0 )
      xxxEndMenu(a1);
  }
  if ( (*(_DWORD *)(a1 + 8) & 0x100) != 0 && *(_QWORD *)(*(_QWORD *)v19[0] + 8LL) )
  {
    v12 = *(_QWORD *)(*(_QWORD *)v19[0] + 8LL);
    v13 = *(_QWORD *)(*(_QWORD *)(v12 + 16) + 424LL);
    if ( v13 == gpqForeground && *(_QWORD *)(v13 + 128) == v12 )
      v4 = 1;
    v23 = 0LL;
    v24 = 0LL;
    v25 = 0LL;
    if ( ((*(unsigned __int8 *)(*(_QWORD *)(v12 + 40) + 16LL) >> 6) & 1) != v4 )
    {
      v14 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v5, v3);
      v23 = *(_QWORD *)(v14 + 408);
      *(_QWORD *)(v14 + 408) = &v23;
      v24 = v12;
      HMLockObject(v12);
      xxxDWP_DoNCActivate((struct tagWND *)v12);
      ThreadUnlock1(v16, v15, v17);
    }
  }
  return SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(v19, v5, v3);
}
