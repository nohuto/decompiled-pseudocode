/*
 * XREFs of xxxTranslateAccelerator @ 0x1C00EB884
 * Callers:
 *     NtUserTranslateAccelerator @ 0x1C00EB720 (NtUserTranslateAccelerator.c)
 * Callees:
 *     ??1?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ @ 0x1C0038E70 (--1-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ.c)
 *     xxxSendTransformableMessageTimeout @ 0x1C00407C0 (xxxSendTransformableMessageTimeout.c)
 *     W32GetThreadWin32Thread @ 0x1C00AC2AC (W32GetThreadWin32Thread.c)
 *     ?Init@?$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z @ 0x1C00E0868 (-Init@-$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z.c)
 *     _GetKeyState @ 0x1C00EBC40 (_GetKeyState.c)
 *     SystoChar @ 0x1C00EBCB8 (SystoChar.c)
 *     xxxLoadSysDesktopMenu @ 0x1C010D5C4 (xxxLoadSysDesktopMenu.c)
 *     xxxSetSysMenu @ 0x1C012C660 (xxxSetSysMenu.c)
 *     ?xxxTA_AccelerateMenu@@YAIQEAUtagWND@@AEBV?$SmartObjStackRef@UtagMENU@@@@IQEAPEAUHMENU__@@@Z @ 0x1C015A730 (-xxxTA_AccelerateMenu@@YAIQEAUtagWND@@AEBV-$SmartObjStackRef@UtagMENU@@@@IQEAPEAUHMENU__@@@Z.c)
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
  __int64 v16; // rdx
  __int64 v17; // rcx
  char v18; // r14
  int v20; // eax
  unsigned __int64 v21; // r15
  BOOL v22; // edi
  int v23; // ebx
  __int64 v24; // rcx
  __int64 v25; // rbx
  __int64 ThreadWin32Thread; // rax
  __int64 v27; // rdx
  __int64 v28; // r8
  __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 v31; // r8
  __int64 SysDesktopMenu; // rbx
  __int64 *v33; // rcx
  __int64 v34; // rax
  __int64 v35; // rdx
  __int64 v36; // r8
  __int64 v37; // rdx
  __int64 v38; // rcx
  __int64 v39; // r8
  char v40; // cl
  unsigned __int64 v41; // r8
  __int64 v42; // rax
  int v43; // eax
  unsigned int v44; // [rsp+50h] [rbp-39h]
  __int64 v45; // [rsp+60h] [rbp-29h] BYREF
  __int64 v46; // [rsp+68h] [rbp-21h]
  __int64 v47; // [rsp+70h] [rbp-19h]
  _QWORD v48[3]; // [rsp+78h] [rbp-11h] BYREF
  _QWORD v49[10]; // [rsp+90h] [rbp+7h] BYREF

  v45 = 0LL;
  v46 = 0LL;
  v47 = 0LL;
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
  v20 = v6 - 2;
  if ( v20 )
  {
    v43 = v20 - 2;
    if ( !v43 )
      goto LABEL_3;
    if ( v43 != 2 )
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
  v16 = v13 | 4;
  v17 = a3;
  if ( (v14 & 0x8000) == 0 )
    v16 = v13;
  v44 = v16;
  do
  {
    v18 = *(_BYTE *)v4;
    if ( *(unsigned __int16 *)(v4 + 2) == *(_QWORD *)(v17 + 16)
      && (_DWORD)v7 == (v18 & 1)
      && (!v7 || (((unsigned __int8)v16 ^ (unsigned __int8)v18) & 0xC) == 0)
      && (((unsigned __int8)v16 ^ (unsigned __int8)v18) & 0x10) == 0 )
    {
      v21 = *(unsigned __int16 *)(v4 + 4);
      v22 = 0;
      v23 = 0;
      if ( *(_WORD *)(v4 + 4) )
      {
        v24 = *(_QWORD *)(BugCheckParameter2 + 40);
        if ( (*(_BYTE *)(v24 + 31) & 0x40) != 0 )
          goto LABEL_28;
        v25 = *(_QWORD *)(BugCheckParameter2 + 168);
        ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v16, v15);
        v45 = *(_QWORD *)(ThreadWin32Thread + 408);
        *(_QWORD *)(ThreadWin32Thread + 408) = &v45;
        v46 = v25;
        if ( v25 )
          HMLockObject(v25);
        SmartObjStackRefBase<tagMENU>::Init(v48, v25);
        v48[2] = 0LL;
        v23 = xxxTA_AccelerateMenu(BugCheckParameter2);
        SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(v48, v27, v28);
        ThreadUnlock1(v30, v29, v31);
        v24 = *(_QWORD *)(BugCheckParameter2 + 40);
        if ( (*(_BYTE *)(v24 + 31) & 0x40) != 0 || !v23 )
        {
LABEL_28:
          SysDesktopMenu = *(_QWORD *)(BugCheckParameter2 + 160);
          if ( SysDesktopMenu || (*(_BYTE *)(v24 + 30) & 8) == 0 )
          {
            v42 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v16, v15);
            v45 = *(_QWORD *)(v42 + 408);
            *(_QWORD *)(v42 + 408) = &v45;
            v46 = SysDesktopMenu;
            if ( SysDesktopMenu )
              HMLockObject(SysDesktopMenu);
          }
          else
          {
            v33 = (__int64 *)(*(_QWORD *)(BugCheckParameter2 + 24) + 56LL);
            SysDesktopMenu = *v33;
            if ( !*v33 )
              SysDesktopMenu = xxxLoadSysDesktopMenu(v33, 16LL);
            v34 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v16, v15);
            v45 = *(_QWORD *)(v34 + 408);
            *(_QWORD *)(v34 + 408) = &v45;
            v46 = SysDesktopMenu;
            if ( SysDesktopMenu )
              HMLockObject(SysDesktopMenu);
            xxxSetSysMenu((struct tagWND *)BugCheckParameter2);
          }
          SmartObjStackRefBase<tagMENU>::Init(v49, SysDesktopMenu);
          v49[2] = 0LL;
          v23 = xxxTA_AccelerateMenu(BugCheckParameter2);
          v22 = v23 != 0;
          SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(v49, v35, v36);
          ThreadUnlock1(v38, v37, v39);
        }
      }
      v40 = *(_BYTE *)(*(_QWORD *)(BugCheckParameter2 + 40) + 31LL);
      if ( (v23 & 1) == 0
        && (!v23
         || ((v40 & 0x20) == 0 || v22) && !*(_QWORD *)(*(_QWORD *)(gptiCurrent + 424LL) + 112LL) && (v40 & 8) == 0) )
      {
        _InterlockedIncrement(&glSendMessage);
        v41 = v21;
        if ( !v22 )
          v41 = v21 | 0x10000;
        xxxSendTransformableMessageTimeout(
          (__int64 *)BugCheckParameter2,
          v22 + 273,
          v41,
          (struct _LARGE_STRING *)((unsigned __int64)v22 << 16),
          0,
          0,
          0LL,
          1u,
          !v22);
        v18 = 0x80;
      }
      v16 = v44;
      v17 = a3;
      v5 = 1;
    }
    v4 += 6LL;
  }
  while ( v18 >= 0 && !v5 );
  return v5;
}
