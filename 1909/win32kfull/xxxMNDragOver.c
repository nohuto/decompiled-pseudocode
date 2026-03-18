/*
 * XREFs of xxxMNDragOver @ 0x1C02465DC
 * Callers:
 *     NtUserMNDragOver @ 0x1C0230E60 (NtUserMNDragOver.c)
 * Callees:
 *     safe_cast_fnid_to_PMENUWND @ 0x1C003795C (safe_cast_fnid_to_PMENUWND.c)
 *     ??1?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ @ 0x1C0038E70 (--1-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ.c)
 *     W32GetThreadWin32Thread @ 0x1C00AC2AC (W32GetThreadWin32Thread.c)
 *     ?Init@?$SmartObjStackRefBase@UtagPOPUPMENU@@@@AEAAXPEAUtagPOPUPMENU@@@Z @ 0x1C00EB5EC (-Init@-$SmartObjStackRefBase@UtagPOPUPMENU@@@@AEAAXPEAUtagPOPUPMENU@@@Z.c)
 *     ??4?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAAAEAV0@QEAUtagPOPUPMENU@@@Z @ 0x1C00EFC04 (--4-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAAAEAV0@QEAUtagPOPUPMENU@@@Z.c)
 *     ?xxxUnlockMenuStateInternal@@YAHPEAUtagMENUSTATE@@H@Z @ 0x1C0210128 (-xxxUnlockMenuStateInternal@@YAHPEAUtagMENUSTATE@@H@Z.c)
 *     GetMenuStateWindow @ 0x1C0222600 (GetMenuStateWindow.c)
 *     IsMFMWFPWindow @ 0x1C0222630 (IsMFMWFPWindow.c)
 *     xxxCallHandleMenuMessages @ 0x1C0222BB0 (xxxCallHandleMenuMessages.c)
 */

__int64 __fastcall xxxMNDragOver(unsigned __int16 *a1, __int64 a2)
{
  __int64 v4; // rdx
  __int64 v5; // rbx
  __int64 v6; // r8
  __int64 v7; // rdi
  int v8; // eax
  _QWORD *v9; // rcx
  __int64 *MenuStateWindow; // r14
  __int64 ThreadWin32Thread; // rax
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // rcx
  __int64 v16; // rax
  __int64 v17; // rdx
  __int64 v18; // rax
  int v19; // eax
  _QWORD v21[2]; // [rsp+30h] [rbp-30h] BYREF
  __int64 v22; // [rsp+40h] [rbp-20h] BYREF
  __int64 *v23; // [rsp+48h] [rbp-18h]
  __int64 v24; // [rsp+50h] [rbp-10h]

  SmartObjStackRefBase<tagPOPUPMENU>::Init(v21, 0LL);
  v5 = 0LL;
  v22 = 0LL;
  v23 = 0LL;
  v24 = 0LL;
  v6 = gptiCurrent;
  v7 = *(_QWORD *)(gptiCurrent + 600LL);
  if ( v7 )
  {
    v8 = *(_DWORD *)(v7 + 8);
    if ( (v8 & 0x400) != 0 )
    {
      v9 = *(_QWORD **)(gptiCurrent + 600LL);
      *(_DWORD *)(v7 + 8) = v8 | 0x8000;
      MenuStateWindow = (__int64 *)GetMenuStateWindow(v9);
      if ( MenuStateWindow )
      {
        ++*(_DWORD *)(v7 + 40);
        ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v4, v6);
        v22 = *(_QWORD *)(ThreadWin32Thread + 408);
        *(_QWORD *)(ThreadWin32Thread + 408) = &v22;
        v23 = MenuStateWindow;
        HMLockObject(MenuStateWindow);
        xxxCallHandleMenuMessages(v7, MenuStateWindow, 160LL, 0LL, (a1[2] << 16) | *a1);
        ThreadUnlock1(v13, v12, v14);
        if ( IsMFMWFPWindow(*(_QWORD *)(v7 + 80)) )
        {
          v16 = safe_cast_fnid_to_PMENUWND(v15);
          if ( v16 )
          {
            v17 = *(_QWORD *)(v16 + 8);
            if ( v17 )
            {
              SmartObjStackRefBase<tagPOPUPMENU>::operator=(v21, v17);
              if ( *(_QWORD *)(*(_QWORD *)v21[0] + 40LL) )
                v18 = **(_QWORD **)(*(_QWORD *)v21[0] + 40LL);
              else
                v18 = 0LL;
              *(_QWORD *)(a2 + 8) = v18;
              *(_DWORD *)(a2 + 16) = *(_DWORD *)(v7 + 88);
              if ( *(_QWORD *)(*(_QWORD *)v21[0] + 8LL) )
                v5 = **(_QWORD **)(*(_QWORD *)v21[0] + 8LL);
              *(_QWORD *)(a2 + 24) = v5;
              v19 = *(_DWORD *)(v7 + 92);
              *(_DWORD *)a2 = v19;
              if ( (v19 & 2) != 0 )
                ++*(_DWORD *)(a2 + 16);
              LODWORD(v5) = 1;
            }
          }
        }
        xxxUnlockMenuStateInternal((struct tagMENUSTATE *)v7, 1);
      }
    }
  }
  SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(v21, v4, v6);
  return (unsigned int)v5;
}
