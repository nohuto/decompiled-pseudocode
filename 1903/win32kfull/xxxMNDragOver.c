/*
 * XREFs of xxxMNDragOver @ 0x1C0246D1C
 * Callers:
 *     NtUserMNDragOver @ 0x1C0231480 (NtUserMNDragOver.c)
 * Callees:
 *     ??1?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ @ 0x1C0021844 (--1-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ.c)
 *     W32GetThreadWin32Thread @ 0x1C0062084 (W32GetThreadWin32Thread.c)
 *     safe_cast_fnid_to_PMENUWND @ 0x1C0096C2C (safe_cast_fnid_to_PMENUWND.c)
 *     ?Init@?$SmartObjStackRefBase@UtagPOPUPMENU@@@@AEAAXPEAUtagPOPUPMENU@@@Z @ 0x1C011022C (-Init@-$SmartObjStackRefBase@UtagPOPUPMENU@@@@AEAAXPEAUtagPOPUPMENU@@@Z.c)
 *     ??4?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAAAEAV0@QEAUtagPOPUPMENU@@@Z @ 0x1C01154C4 (--4-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAAAEAV0@QEAUtagPOPUPMENU@@@Z.c)
 *     ?xxxUnlockMenuStateInternal@@YAHPEAUtagMENUSTATE@@H@Z @ 0x1C0210668 (-xxxUnlockMenuStateInternal@@YAHPEAUtagMENUSTATE@@H@Z.c)
 *     GetMenuStateWindow @ 0x1C0222B40 (GetMenuStateWindow.c)
 *     IsMFMWFPWindow @ 0x1C0222B70 (IsMFMWFPWindow.c)
 *     xxxCallHandleMenuMessages @ 0x1C02230F0 (xxxCallHandleMenuMessages.c)
 */

__int64 __fastcall xxxMNDragOver(unsigned __int16 *a1, __int64 a2)
{
  __int64 v4; // rdx
  __int64 v5; // r9
  __int64 v6; // rbx
  __int64 v7; // r8
  __int64 v8; // rdi
  int v9; // eax
  _QWORD *v10; // rcx
  __int64 *MenuStateWindow; // r14
  __int64 ThreadWin32Thread; // rax
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // rcx
  __int64 v17; // rax
  __int64 v18; // rdx
  __int64 v19; // rax
  int v20; // eax
  _QWORD v22[2]; // [rsp+30h] [rbp-30h] BYREF
  __int64 v23; // [rsp+40h] [rbp-20h] BYREF
  __int64 *v24; // [rsp+48h] [rbp-18h]
  __int64 v25; // [rsp+50h] [rbp-10h]

  SmartObjStackRefBase<tagPOPUPMENU>::Init(v22, 0LL);
  v6 = 0LL;
  v23 = 0LL;
  v24 = 0LL;
  v25 = 0LL;
  v7 = gptiCurrent;
  v8 = *(_QWORD *)(gptiCurrent + 600LL);
  if ( v8 )
  {
    v9 = *(_DWORD *)(v8 + 8);
    if ( (v9 & 0x400) != 0 )
    {
      v10 = *(_QWORD **)(gptiCurrent + 600LL);
      *(_DWORD *)(v8 + 8) = v9 | 0x8000;
      MenuStateWindow = (__int64 *)GetMenuStateWindow(v10);
      if ( MenuStateWindow )
      {
        ++*(_DWORD *)(v8 + 40);
        ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v4, v7, v5);
        v23 = *(_QWORD *)(ThreadWin32Thread + 408);
        *(_QWORD *)(ThreadWin32Thread + 408) = &v23;
        v24 = MenuStateWindow;
        HMLockObject(MenuStateWindow);
        xxxCallHandleMenuMessages(v8, MenuStateWindow, 160LL, 0LL, (a1[2] << 16) | *a1);
        ThreadUnlock1(v14, v13, v15);
        if ( IsMFMWFPWindow(*(_QWORD *)(v8 + 80)) )
        {
          v17 = safe_cast_fnid_to_PMENUWND(v16);
          if ( v17 )
          {
            v18 = *(_QWORD *)(v17 + 8);
            if ( v18 )
            {
              SmartObjStackRefBase<tagPOPUPMENU>::operator=(v22, v18);
              if ( *(_QWORD *)(*(_QWORD *)v22[0] + 40LL) )
                v19 = **(_QWORD **)(*(_QWORD *)v22[0] + 40LL);
              else
                v19 = 0LL;
              *(_QWORD *)(a2 + 8) = v19;
              *(_DWORD *)(a2 + 16) = *(_DWORD *)(v8 + 88);
              if ( *(_QWORD *)(*(_QWORD *)v22[0] + 8LL) )
                v6 = **(_QWORD **)(*(_QWORD *)v22[0] + 8LL);
              *(_QWORD *)(a2 + 24) = v6;
              v20 = *(_DWORD *)(v8 + 92);
              *(_DWORD *)a2 = v20;
              if ( (v20 & 2) != 0 )
                ++*(_DWORD *)(a2 + 16);
              LODWORD(v6) = 1;
            }
          }
        }
        xxxUnlockMenuStateInternal((struct tagMENUSTATE *)v8, 1);
      }
    }
  }
  SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(v22, v4, v7, v5);
  return (unsigned int)v6;
}
