/*
 * XREFs of xxxEndMenuLoop @ 0x1C0220290
 * Callers:
 *     xxxMNLoop @ 0x1C0220E80 (xxxMNLoop.c)
 *     xxxCallHandleMenuMessages @ 0x1C02230F0 (xxxCallHandleMenuMessages.c)
 *     xxxMenuWindowProc @ 0x1C0227440 (xxxMenuWindowProc.c)
 * Callees:
 *     xxxDWP_DoNCActivate @ 0x1C000C8BC (xxxDWP_DoNCActivate.c)
 *     ??1?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ @ 0x1C0021844 (--1-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ.c)
 *     W32GetThreadWin32Thread @ 0x1C0062084 (W32GetThreadWin32Thread.c)
 *     ?Init@?$SmartObjStackRefBase@UtagPOPUPMENU@@@@AEAAXPEAUtagPOPUPMENU@@@Z @ 0x1C011022C (-Init@-$SmartObjStackRefBase@UtagPOPUPMENU@@@@AEAAXPEAUtagPOPUPMENU@@@Z.c)
 *     xxxDrawMenuBarUnderlines @ 0x1C01373E0 (xxxDrawMenuBarUnderlines.c)
 *     xxxMNCancel @ 0x1C0223434 (xxxMNCancel.c)
 *     xxxEndMenu @ 0x1C024773C (xxxEndMenu.c)
 */

_QWORD *__fastcall xxxEndMenuLoop(__int64 a1, __int64 a2)
{
  __int64 v3; // r8
  __int64 v4; // r9
  int v5; // edi
  __int64 v6; // rdx
  int v7; // eax
  __int64 v8; // rsi
  __int64 ThreadWin32Thread; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // rbx
  __int64 v14; // rcx
  char v15; // si
  __int64 v16; // rax
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  _QWORD v21[2]; // [rsp+20h] [rbp-40h] BYREF
  __int64 v22; // [rsp+30h] [rbp-30h] BYREF
  __int64 v23; // [rsp+38h] [rbp-28h]
  __int64 v24; // [rsp+40h] [rbp-20h]
  __int64 v25; // [rsp+48h] [rbp-18h] BYREF
  __int64 v26; // [rsp+50h] [rbp-10h]
  __int64 v27; // [rsp+58h] [rbp-8h]

  SmartObjStackRefBase<tagPOPUPMENU>::Init(v21, a2);
  v5 = 0;
  v6 = *(_QWORD *)v21[0];
  if ( (**(_DWORD **)v21[0] & 8) != 0 )
  {
    v6 = *(_QWORD *)v21[0];
    if ( (**(_DWORD **)v21[0] & 0x80000) == 0 )
      xxxMNCancel(a1);
  }
  else
  {
    v7 = *(_DWORD *)(a1 + 8);
    if ( (v7 & 0x20) != 0 )
    {
      v22 = 0LL;
      v23 = 0LL;
      v24 = 0LL;
      v8 = *(_QWORD *)(*(_QWORD *)v21[0] + 8LL);
      ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v6, v3, v4);
      v22 = *(_QWORD *)(ThreadWin32Thread + 408);
      *(_QWORD *)(ThreadWin32Thread + 408) = &v22;
      v23 = v8;
      if ( v8 )
        HMLockObject(v8);
      xxxDrawMenuBarUnderlines(*(_QWORD *)(*(_QWORD *)v21[0] + 8LL), 0);
      ThreadUnlock1(v11, v10, v12);
      v7 = *(_DWORD *)(a1 + 8);
    }
    if ( (v7 & 0x10) == 0 )
      xxxEndMenu(a1);
  }
  if ( (*(_DWORD *)(a1 + 8) & 0x100) != 0 && *(_QWORD *)(*(_QWORD *)v21[0] + 8LL) )
  {
    v13 = *(_QWORD *)(*(_QWORD *)v21[0] + 8LL);
    v14 = *(_QWORD *)(*(_QWORD *)(v13 + 16) + 424LL);
    if ( v14 == gpqForeground && *(_QWORD *)(v14 + 128) == v13 )
    {
      v5 = 1;
      v15 = 1;
    }
    else
    {
      v15 = 2;
    }
    v25 = 0LL;
    v26 = 0LL;
    v27 = 0LL;
    if ( ((*(unsigned __int8 *)(*(_QWORD *)(v13 + 40) + 16LL) >> 6) & 1) != v5 )
    {
      v16 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v6, v3, v4);
      v25 = *(_QWORD *)(v16 + 408);
      *(_QWORD *)(v16 + 408) = &v25;
      v26 = v13;
      HMLockObject(v13);
      xxxDWP_DoNCActivate((struct tagWND *)v13, v15, 1LL);
      ThreadUnlock1(v18, v17, v19);
    }
  }
  return SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(v21, v6, v3, v4);
}
