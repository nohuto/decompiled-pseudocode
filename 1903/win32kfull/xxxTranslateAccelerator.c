/*
 * XREFs of xxxTranslateAccelerator @ 0x1C0110944
 * Callers:
 *     NtUserTranslateAccelerator @ 0x1C01107E0 (NtUserTranslateAccelerator.c)
 * Callees:
 *     xxxSetSysMenu @ 0x1C001FC60 (xxxSetSysMenu.c)
 *     ??1?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ @ 0x1C0021844 (--1-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ.c)
 *     W32GetThreadWin32Thread @ 0x1C0062084 (W32GetThreadWin32Thread.c)
 *     xxxSendTransformableMessageTimeout @ 0x1C009F9F0 (xxxSendTransformableMessageTimeout.c)
 *     ?Init@?$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z @ 0x1C0106608 (-Init@-$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z.c)
 *     _GetKeyState @ 0x1C0110D00 (_GetKeyState.c)
 *     SystoChar @ 0x1C0110D78 (SystoChar.c)
 *     xxxLoadSysDesktopMenu @ 0x1C0132AC4 (xxxLoadSysDesktopMenu.c)
 *     ?xxxTA_AccelerateMenu@@YAIQEAUtagWND@@AEBV?$SmartObjStackRef@UtagMENU@@@@IQEAPEAUHMENU__@@@Z @ 0x1C0159780 (-xxxTA_AccelerateMenu@@YAIQEAUtagWND@@AEBV-$SmartObjStackRef@UtagMENU@@@@IQEAPEAUHMENU__@@@Z.c)
 */

__int64 __fastcall xxxTranslateAccelerator(ULONG_PTR BugCheckParameter2, __int64 a2, __int64 a3)
{
  __int64 v4; // r12
  unsigned int v5; // r15d
  int v6; // eax
  __int64 v7; // r13
  __int64 v8; // rax
  unsigned int v9; // edi
  __int64 v10; // rcx
  int v11; // ebx
  __int16 KeyState; // ax
  unsigned int v13; // edi
  __int16 v14; // ax
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 v17; // rdx
  __int64 v18; // rcx
  char v19; // r14
  int v21; // eax
  unsigned __int64 v22; // r15
  BOOL v23; // edi
  int v24; // ebx
  __int64 v25; // rcx
  __int64 v26; // rbx
  __int64 ThreadWin32Thread; // rax
  __int64 v28; // rdx
  __int64 v29; // r8
  __int64 v30; // r9
  __int64 v31; // rdx
  __int64 v32; // rcx
  __int64 v33; // r8
  __int64 SysDesktopMenu; // rbx
  __int64 *v35; // rcx
  __int64 v36; // rax
  __int64 v37; // rdx
  __int64 v38; // r8
  __int64 v39; // r9
  __int64 v40; // rdx
  __int64 v41; // rcx
  __int64 v42; // r8
  char v43; // cl
  HWND v44; // r8
  __int64 v45; // rax
  int v46; // eax
  unsigned int v47; // [rsp+50h] [rbp-39h]
  __int64 v48; // [rsp+60h] [rbp-29h] BYREF
  __int64 v49; // [rsp+68h] [rbp-21h]
  __int64 v50; // [rsp+70h] [rbp-19h]
  _QWORD v51[3]; // [rsp+78h] [rbp-11h] BYREF
  _QWORD v52[10]; // [rsp+90h] [rbp+7h] BYREF

  v48 = 0LL;
  v49 = 0LL;
  v50 = 0LL;
  if ( (gfInNumpadHexInput & 2) != 0 )
    return 0LL;
  v4 = a2 + 28;
  v5 = 0;
  v6 = SystoChar(*(unsigned int *)(a3 + 8), *(_QWORD *)(a3 + 24)) - 256;
  if ( !v6 )
  {
LABEL_3:
    v7 = 1LL;
    goto LABEL_4;
  }
  v21 = v6 - 2;
  if ( v21 )
  {
    v46 = v21 - 2;
    if ( !v46 )
      goto LABEL_3;
    if ( v46 != 2 )
      return 0LL;
  }
  v7 = 0LL;
LABEL_4:
  v8 = *(_QWORD *)(gptiCurrent + 432LL);
  if ( v8
    && (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v8 + 48) + 32LL) + 80LL) & 1) != 0
    && (GetKeyState(165LL) & 0x8000) != 0 )
  {
    v10 = 163LL;
    v9 = 164;
  }
  else
  {
    v9 = 18;
    v10 = 17LL;
  }
  v11 = ((unsigned __int16)GetKeyState(v10) >> 12) & 8;
  KeyState = GetKeyState(v9);
  v13 = v11 | 0x10;
  if ( (KeyState & 0x8000) == 0 )
    v13 = v11;
  v14 = GetKeyState(16LL);
  v17 = v13 | 4;
  v18 = a3;
  if ( (v14 & 0x8000) == 0 )
    v17 = v13;
  v47 = v17;
  do
  {
    v19 = *(_BYTE *)v4;
    if ( *(unsigned __int16 *)(v4 + 2) == *(_QWORD *)(v18 + 16)
      && (_DWORD)v7 == (v19 & 1)
      && (!v7 || (((unsigned __int8)v17 ^ (unsigned __int8)v19) & 0xC) == 0)
      && (((unsigned __int8)v17 ^ (unsigned __int8)v19) & 0x10) == 0 )
    {
      v22 = *(unsigned __int16 *)(v4 + 4);
      v23 = 0;
      v24 = 0;
      if ( *(_WORD *)(v4 + 4) )
      {
        v25 = *(_QWORD *)(BugCheckParameter2 + 40);
        if ( (*(_BYTE *)(v25 + 31) & 0x40) != 0 )
          goto LABEL_28;
        v26 = *(_QWORD *)(BugCheckParameter2 + 168);
        ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v17, v15, v16);
        v48 = *(_QWORD *)(ThreadWin32Thread + 408);
        *(_QWORD *)(ThreadWin32Thread + 408) = &v48;
        v49 = v26;
        if ( v26 )
          HMLockObject(v26);
        SmartObjStackRefBase<tagMENU>::Init(v51, v26);
        v51[2] = 0LL;
        v24 = xxxTA_AccelerateMenu(BugCheckParameter2);
        SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(v51, v28, v29, v30);
        ThreadUnlock1(v32, v31, v33);
        v25 = *(_QWORD *)(BugCheckParameter2 + 40);
        if ( (*(_BYTE *)(v25 + 31) & 0x40) != 0 || !v24 )
        {
LABEL_28:
          SysDesktopMenu = *(_QWORD *)(BugCheckParameter2 + 160);
          if ( SysDesktopMenu || (*(_BYTE *)(v25 + 30) & 8) == 0 )
          {
            v45 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v17, v15, v16);
            v48 = *(_QWORD *)(v45 + 408);
            *(_QWORD *)(v45 + 408) = &v48;
            v49 = SysDesktopMenu;
            if ( SysDesktopMenu )
              HMLockObject(SysDesktopMenu);
          }
          else
          {
            v35 = (__int64 *)(*(_QWORD *)(BugCheckParameter2 + 24) + 56LL);
            SysDesktopMenu = *v35;
            if ( !*v35 )
              SysDesktopMenu = xxxLoadSysDesktopMenu(v35, 16LL);
            v36 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v17, v15, v16);
            v48 = *(_QWORD *)(v36 + 408);
            *(_QWORD *)(v36 + 408) = &v48;
            v49 = SysDesktopMenu;
            if ( SysDesktopMenu )
              HMLockObject(SysDesktopMenu);
            xxxSetSysMenu((struct tagWND *)BugCheckParameter2);
          }
          SmartObjStackRefBase<tagMENU>::Init(v52, SysDesktopMenu);
          v52[2] = 0LL;
          v24 = xxxTA_AccelerateMenu(BugCheckParameter2);
          v23 = v24 != 0;
          SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(v52, v37, v38, v39);
          ThreadUnlock1(v41, v40, v42);
        }
      }
      v43 = *(_BYTE *)(*(_QWORD *)(BugCheckParameter2 + 40) + 31LL);
      if ( (v24 & 1) == 0
        && (!v24
         || ((v43 & 0x20) == 0 || v23) && !*(_QWORD *)(*(_QWORD *)(gptiCurrent + 424LL) + 112LL) && (v43 & 8) == 0) )
      {
        _InterlockedIncrement(&glSendMessage);
        v44 = (HWND)v22;
        if ( !v23 )
          v44 = (HWND)(v22 | 0x10000);
        xxxSendTransformableMessageTimeout(
          (__int64 *)BugCheckParameter2,
          v23 + 273,
          v44,
          (struct _LARGE_STRING *)((unsigned __int64)v23 << 16),
          0,
          0,
          0LL,
          1u,
          !v23);
        v19 = 0x80;
      }
      v17 = v47;
      v18 = a3;
      v5 = 1;
    }
    v4 += 6LL;
  }
  while ( v19 >= 0 && !v5 );
  return v5;
}
