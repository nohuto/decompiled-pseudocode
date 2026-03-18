/*
 * XREFs of xxxMNDragOver @ 0x1C022E524
 * Callers:
 *     NtUserMNDragOver @ 0x1C0219610 (NtUserMNDragOver.c)
 * Callees:
 *     safe_cast_fnid_to_PMENUWND @ 0x1C001CBC8 (safe_cast_fnid_to_PMENUWND.c)
 *     ??1?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ @ 0x1C0022768 (--1-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ.c)
 *     W32GetThreadWin32Thread @ 0x1C0065998 (W32GetThreadWin32Thread.c)
 *     ?Init@?$SmartObjStackRefBase@UtagPOPUPMENU@@@@AEAAXPEAUtagPOPUPMENU@@@Z @ 0x1C0102A84 (-Init@-$SmartObjStackRefBase@UtagPOPUPMENU@@@@AEAAXPEAUtagPOPUPMENU@@@Z.c)
 *     ??4?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAAAEAV0@QEAUtagPOPUPMENU@@@Z @ 0x1C010CEAC (--4-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAAAEAV0@QEAUtagPOPUPMENU@@@Z.c)
 *     ?xxxUnlockMenuStateInternal@@YAHPEAUtagMENUSTATE@@H@Z @ 0x1C01F99A0 (-xxxUnlockMenuStateInternal@@YAHPEAUtagMENUSTATE@@H@Z.c)
 *     GetMenuStateWindow @ 0x1C020B01C (GetMenuStateWindow.c)
 *     IsMFMWFPWindow @ 0x1C020B04C (IsMFMWFPWindow.c)
 *     xxxCallHandleMenuMessages @ 0x1C020B5C0 (xxxCallHandleMenuMessages.c)
 */

__int64 __fastcall xxxMNDragOver(unsigned __int16 *a1, __int64 a2)
{
  __int64 v4; // rdx
  __int64 v5; // rbx
  __int64 v6; // rdi
  int v7; // eax
  _QWORD *v8; // rcx
  __int64 MenuStateWindow; // rbp
  __int64 ThreadWin32Thread; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // rcx
  __int64 v14; // rax
  __int64 v15; // rdx
  __int64 v16; // rax
  int v17; // eax
  _QWORD v19[2]; // [rsp+30h] [rbp-38h] BYREF
  _QWORD v20[4]; // [rsp+40h] [rbp-28h] BYREF

  SmartObjStackRefBase<tagPOPUPMENU>::Init(v19, 0LL);
  v5 = 0LL;
  v6 = *(_QWORD *)(gptiCurrent + 608LL);
  if ( v6 )
  {
    v7 = *(_DWORD *)(v6 + 8);
    if ( (v7 & 0x400) != 0 )
    {
      v8 = *(_QWORD **)(gptiCurrent + 608LL);
      *(_DWORD *)(v6 + 8) = v7 | 0x8000;
      MenuStateWindow = GetMenuStateWindow(v8);
      if ( MenuStateWindow )
      {
        ++*(_DWORD *)(v6 + 40);
        ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v4);
        v20[0] = *(_QWORD *)(ThreadWin32Thread + 416);
        *(_QWORD *)(ThreadWin32Thread + 416) = v20;
        v20[1] = MenuStateWindow;
        _InterlockedIncrement((volatile signed __int32 *)(MenuStateWindow + 8));
        xxxCallHandleMenuMessages(v6, (_QWORD *)MenuStateWindow, 160, 0LL, (a1[2] << 16) | *a1);
        ThreadUnlock1(v12, v11);
        if ( IsMFMWFPWindow(*(_QWORD *)(v6 + 80)) )
        {
          v14 = safe_cast_fnid_to_PMENUWND(v13);
          if ( v14 )
          {
            v15 = *(_QWORD *)(v14 + 8);
            if ( v15 )
            {
              SmartObjStackRefBase<tagPOPUPMENU>::operator=(v19, v15);
              if ( *(_QWORD *)(*(_QWORD *)v19[0] + 40LL) )
                v16 = **(_QWORD **)(*(_QWORD *)v19[0] + 40LL);
              else
                v16 = 0LL;
              *(_QWORD *)(a2 + 8) = v16;
              *(_DWORD *)(a2 + 16) = *(_DWORD *)(v6 + 88);
              if ( *(_QWORD *)(*(_QWORD *)v19[0] + 8LL) )
                v5 = **(_QWORD **)(*(_QWORD *)v19[0] + 8LL);
              *(_QWORD *)(a2 + 24) = v5;
              v17 = *(_DWORD *)(v6 + 92);
              *(_DWORD *)a2 = v17;
              if ( (v17 & 2) != 0 )
                ++*(_DWORD *)(a2 + 16);
              LODWORD(v5) = 1;
            }
          }
        }
        xxxUnlockMenuStateInternal((struct tagMENUSTATE *)v6, 1);
      }
    }
  }
  SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(v19, v4);
  return (unsigned int)v5;
}
