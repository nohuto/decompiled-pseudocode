/*
 * XREFs of xxxTranslateAccelerator @ 0x1C00EC6AC
 * Callers:
 *     NtUserTranslateAccelerator @ 0x1C00EC5A0 (NtUserTranslateAccelerator.c)
 * Callees:
 *     ??1?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ @ 0x1C0021BC8 (--1-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ.c)
 *     ?Init@?$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z @ 0x1C00263B8 (-Init@-$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z.c)
 *     W32GetThreadWin32Thread @ 0x1C0026450 (W32GetThreadWin32Thread.c)
 *     xxxSendTransformableMessageTimeout @ 0x1C0042C60 (xxxSendTransformableMessageTimeout.c)
 *     xxxSetSysMenu @ 0x1C00C2450 (xxxSetSysMenu.c)
 *     _GetKeyState @ 0x1C00ECA24 (_GetKeyState.c)
 *     xxxLoadSysDesktopMenu @ 0x1C01085F8 (xxxLoadSysDesktopMenu.c)
 *     ?xxxTA_AccelerateMenu@@YAIQEAUtagWND@@AEBV?$SmartObjStackRef@UtagMENU@@@@IQEAPEAUHMENU__@@@Z @ 0x1C01307FC (-xxxTA_AccelerateMenu@@YAIQEAUtagWND@@AEBV-$SmartObjStackRef@UtagMENU@@@@IQEAPEAUHMENU__@@@Z.c)
 */

__int64 __fastcall xxxTranslateAccelerator(struct tagWND *a1, __int64 a2, __int64 a3)
{
  int v4; // ecx
  __int64 v5; // r12
  unsigned int v6; // r15d
  int v7; // ecx
  __int64 v8; // r13
  __int64 v9; // rax
  unsigned int v10; // edi
  __int64 v11; // rcx
  int v12; // ebx
  __int16 KeyState; // ax
  unsigned int v14; // edi
  __int16 v15; // ax
  __int64 v16; // rdx
  __int64 v17; // rcx
  char v18; // r14
  int v20; // ecx
  unsigned __int64 v21; // r15
  BOOL v22; // edi
  int v23; // ebx
  __int64 v24; // rcx
  __int64 v25; // rbx
  __int64 ThreadWin32Thread; // rax
  __int64 v27; // rdx
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // r8
  __int64 SysDesktopMenu; // rbx
  __int64 *v32; // rcx
  __int64 v33; // rax
  __int64 v34; // rdx
  __int64 v35; // rdx
  __int64 v36; // rcx
  __int64 v37; // r8
  char v38; // cl
  HWND v39; // r8
  __int64 v40; // rax
  int v41; // ecx
  unsigned int v42; // [rsp+50h] [rbp-39h]
  __int64 v43; // [rsp+60h] [rbp-29h] BYREF
  __int64 v44; // [rsp+68h] [rbp-21h]
  _QWORD v45[3]; // [rsp+78h] [rbp-11h] BYREF
  _QWORD v46[10]; // [rsp+90h] [rbp+7h] BYREF

  if ( (gfInNumpadHexInput & 2) != 0 )
    return 0LL;
  v4 = *(_DWORD *)(a3 + 8);
  v5 = a2 + 28;
  v6 = 0;
  if ( (unsigned int)(v4 - 260) <= 3 && (*(_WORD *)(a3 + 26) & 0x2000) == 0 )
    v4 -= 4;
  v7 = v4 - 256;
  if ( !v7 )
    goto LABEL_4;
  v20 = v7 - 2;
  if ( v20 )
  {
    v41 = v20 - 2;
    if ( !v41 )
    {
LABEL_4:
      v8 = 1LL;
      goto LABEL_5;
    }
    if ( v41 != 2 )
      return 0LL;
  }
  v8 = 0LL;
LABEL_5:
  v9 = *(_QWORD *)(gptiCurrent + 432LL);
  if ( v9
    && (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v9 + 48) + 32LL) + 80LL) & 1) != 0
    && (GetKeyState(165LL) & 0x8000) != 0 )
  {
    v11 = 163LL;
    v10 = 164;
  }
  else
  {
    v10 = 18;
    v11 = 17LL;
  }
  v12 = ((unsigned __int16)GetKeyState(v11) >> 12) & 8;
  KeyState = GetKeyState(v10);
  v14 = v12 | 0x10;
  if ( (KeyState & 0x8000) == 0 )
    v14 = v12;
  v15 = GetKeyState(16LL);
  v16 = v14 | 4;
  v17 = a3;
  if ( (v15 & 0x8000) == 0 )
    v16 = v14;
  v42 = v16;
  do
  {
    v18 = *(_BYTE *)v5;
    if ( *(unsigned __int16 *)(v5 + 2) == *(_QWORD *)(v17 + 16)
      && (_DWORD)v8 == (v18 & 1)
      && (!v8 || (((unsigned __int8)v18 ^ (unsigned __int8)v16) & 0xC) == 0)
      && (((unsigned __int8)v18 ^ (unsigned __int8)v16) & 0x10) == 0 )
    {
      v21 = *(unsigned __int16 *)(v5 + 4);
      v22 = 0;
      v23 = 0;
      if ( *(_WORD *)(v5 + 4) )
      {
        v24 = *((_QWORD *)a1 + 5);
        if ( (*(_BYTE *)(v24 + 31) & 0x40) != 0 )
          goto LABEL_29;
        v25 = *((_QWORD *)a1 + 18);
        ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v16);
        v43 = *(_QWORD *)(ThreadWin32Thread + 408);
        *(_QWORD *)(ThreadWin32Thread + 408) = &v43;
        v44 = v25;
        if ( v25 )
          _InterlockedIncrement((volatile signed __int32 *)(v25 + 8));
        SmartObjStackRefBase<tagMENU>::Init(v45, v25);
        v45[2] = 0LL;
        v23 = xxxTA_AccelerateMenu((ULONG_PTR)a1);
        SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(v45, v27);
        ThreadUnlock1(v29, v28, v30);
        v24 = *((_QWORD *)a1 + 5);
        if ( (*(_BYTE *)(v24 + 31) & 0x40) != 0 || !v23 )
        {
LABEL_29:
          SysDesktopMenu = *((_QWORD *)a1 + 17);
          if ( SysDesktopMenu || (*(_BYTE *)(v24 + 30) & 8) == 0 )
          {
            v40 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v16);
            v43 = *(_QWORD *)(v40 + 408);
            *(_QWORD *)(v40 + 408) = &v43;
            v44 = SysDesktopMenu;
            if ( SysDesktopMenu )
              _InterlockedIncrement((volatile signed __int32 *)(SysDesktopMenu + 8));
          }
          else
          {
            v32 = (__int64 *)(*((_QWORD *)a1 + 3) + 56LL);
            SysDesktopMenu = *v32;
            if ( !*v32 )
              SysDesktopMenu = xxxLoadSysDesktopMenu(v32, 16LL);
            v33 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v16);
            v43 = *(_QWORD *)(v33 + 408);
            *(_QWORD *)(v33 + 408) = &v43;
            v44 = SysDesktopMenu;
            if ( SysDesktopMenu )
              _InterlockedIncrement((volatile signed __int32 *)(SysDesktopMenu + 8));
            xxxSetSysMenu(a1);
          }
          SmartObjStackRefBase<tagMENU>::Init(v46, SysDesktopMenu);
          v46[2] = 0LL;
          v23 = xxxTA_AccelerateMenu((ULONG_PTR)a1);
          v22 = v23 != 0;
          SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(v46, v34);
          ThreadUnlock1(v36, v35, v37);
        }
      }
      v38 = *(_BYTE *)(*((_QWORD *)a1 + 5) + 31LL);
      if ( (v23 & 1) == 0
        && (!v23
         || ((v38 & 0x20) == 0 || v22) && !*(_QWORD *)(*(_QWORD *)(gptiCurrent + 424LL) + 104LL) && (v38 & 8) == 0) )
      {
        _InterlockedIncrement(&glSendMessage);
        v39 = (HWND)v21;
        if ( !v22 )
          v39 = (HWND)(v21 | 0x10000);
        xxxSendTransformableMessageTimeout(
          (__int64 *)a1,
          v22 + 273,
          v39,
          (unsigned __int64)v22 << 16,
          0,
          0,
          0LL,
          1,
          !v22);
        v18 = 0x80;
      }
      v16 = v42;
      v17 = a3;
      v6 = 1;
    }
    v5 += 6LL;
  }
  while ( v18 >= 0 && !v6 );
  return v6;
}
