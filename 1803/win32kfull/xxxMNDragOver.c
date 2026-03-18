/*
 * XREFs of xxxMNDragOver @ 0x1C0205428
 * Callers:
 *     NtUserMNDragOver @ 0x1C01F2070 (NtUserMNDragOver.c)
 * Callees:
 *     ?Init@?$SmartObjStackRefBase@UtagPOPUPMENU@@@@AEAAXPEAUtagPOPUPMENU@@@Z @ 0x1C0021B08 (-Init@-$SmartObjStackRefBase@UtagPOPUPMENU@@@@AEAAXPEAUtagPOPUPMENU@@@Z.c)
 *     ??4?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAAAEAV0@QEAUtagPOPUPMENU@@@Z @ 0x1C0021B98 (--4-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAAAEAV0@QEAUtagPOPUPMENU@@@Z.c)
 *     ??1?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ @ 0x1C0021BC8 (--1-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ.c)
 *     W32GetThreadWin32Thread @ 0x1C0026450 (W32GetThreadWin32Thread.c)
 *     safe_cast_fnid_to_PMENUWND @ 0x1C00F4D38 (safe_cast_fnid_to_PMENUWND.c)
 *     ?xxxUnlockMenuStateInternal@@YAHPEAUtagMENUSTATE@@H@Z @ 0x1C01D4E34 (-xxxUnlockMenuStateInternal@@YAHPEAUtagMENUSTATE@@H@Z.c)
 *     GetMenuStateWindow @ 0x1C01E5100 (GetMenuStateWindow.c)
 *     IsMFMWFPWindow @ 0x1C01E5130 (IsMFMWFPWindow.c)
 *     xxxCallHandleMenuMessages @ 0x1C01E5680 (xxxCallHandleMenuMessages.c)
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
  __int64 v13; // r8
  __int64 v14; // rcx
  __int64 v15; // rax
  __int64 v16; // rdx
  __int64 v17; // rax
  int v18; // eax
  _QWORD v20[2]; // [rsp+30h] [rbp-38h] BYREF
  _QWORD v21[4]; // [rsp+40h] [rbp-28h] BYREF

  SmartObjStackRefBase<tagPOPUPMENU>::Init(v20, 0LL);
  v5 = 0LL;
  v6 = *(_QWORD *)(gptiCurrent + 600LL);
  if ( v6 )
  {
    v7 = *(_DWORD *)(v6 + 8);
    if ( (v7 & 0x400) != 0 )
    {
      v8 = *(_QWORD **)(gptiCurrent + 600LL);
      *(_DWORD *)(v6 + 8) = v7 | 0x8000;
      MenuStateWindow = GetMenuStateWindow(v8);
      if ( MenuStateWindow )
      {
        ++*(_DWORD *)(v6 + 40);
        ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v4);
        v21[0] = *(_QWORD *)(ThreadWin32Thread + 408);
        *(_QWORD *)(ThreadWin32Thread + 408) = v21;
        v21[1] = MenuStateWindow;
        _InterlockedIncrement((volatile signed __int32 *)(MenuStateWindow + 8));
        xxxCallHandleMenuMessages(v6, (_QWORD *)MenuStateWindow, 160, 0LL, (a1[2] << 16) | *a1);
        ThreadUnlock1(v12, v11, v13);
        if ( IsMFMWFPWindow(*(_QWORD *)(v6 + 80)) )
        {
          v15 = safe_cast_fnid_to_PMENUWND(v14);
          if ( v15 )
          {
            v16 = *(_QWORD *)(v15 + 8);
            if ( v16 )
            {
              SmartObjStackRefBase<tagPOPUPMENU>::operator=(v20, v16);
              if ( *(_QWORD *)(*(_QWORD *)v20[0] + 40LL) )
                v17 = **(_QWORD **)(*(_QWORD *)v20[0] + 40LL);
              else
                v17 = 0LL;
              *(_QWORD *)(a2 + 8) = v17;
              *(_DWORD *)(a2 + 16) = *(_DWORD *)(v6 + 88);
              if ( *(_QWORD *)(*(_QWORD *)v20[0] + 8LL) )
                v5 = **(_QWORD **)(*(_QWORD *)v20[0] + 8LL);
              *(_QWORD *)(a2 + 24) = v5;
              v18 = *(_DWORD *)(v6 + 92);
              *(_DWORD *)a2 = v18;
              if ( (v18 & 2) != 0 )
                ++*(_DWORD *)(a2 + 16);
              LODWORD(v5) = 1;
            }
          }
        }
        xxxUnlockMenuStateInternal((struct tagMENUSTATE *)v6, 1);
      }
    }
  }
  SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(v20, v4);
  return (unsigned int)v5;
}
