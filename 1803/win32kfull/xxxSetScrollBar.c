/*
 * XREFs of xxxSetScrollBar @ 0x1C00D9304
 * Callers:
 *     NtUserSetScrollInfo @ 0x1C00D91F0 (NtUserSetScrollInfo.c)
 * Callees:
 *     xxxWindowEvent @ 0x1C001E870 (xxxWindowEvent.c)
 *     IsVisible @ 0x1C002FD68 (IsVisible.c)
 *     xxxSetWindowPos @ 0x1C0034CE4 (xxxSetWindowPos.c)
 *     _InitPwSB @ 0x1C0038CEC (_InitPwSB.c)
 *     UserSetLastError @ 0x1C003A8EC (UserSetLastError.c)
 *     xxxSendTransformableMessageTimeout @ 0x1C0042C60 (xxxSendTransformableMessageTimeout.c)
 *     SetOrClrWF @ 0x1C00C3E94 (SetOrClrWF.c)
 *     DwmAsyncChildStyleChange @ 0x1C00C3FCC (DwmAsyncChildStyleChange.c)
 *     ?SBSetParms@@YAHPEAUtagSBDATA@@PEAUtagSCROLLINFO@@PEAHPEAJ@Z @ 0x1C00D96B4 (-SBSetParms@@YAHPEAUtagSBDATA@@PEAUtagSCROLLINFO@@PEAHPEAJ@Z.c)
 *     ?xxxEnableWndSBArrows@@YAHPEAUtagWND@@II@Z @ 0x1C00D997C (-xxxEnableWndSBArrows@@YAHPEAUtagWND@@II@Z.c)
 *     ?xxxDrawThumb@@YAXPEAUtagWND@@PEAUtagSBCALC@@H@Z @ 0x1C0200154 (-xxxDrawThumb@@YAXPEAUtagWND@@PEAUtagSBCALC@@H@Z.c)
 */

__int64 __fastcall xxxSetScrollBar(struct tagWND *a1, __int64 a2, __int64 a3, int a4)
{
  __int64 *BugCheckParameter3; // r9
  unsigned int v7; // esi
  __int16 v9; // cx
  int v10; // r13d
  int v11; // eax
  char v12; // r12
  __int64 v13; // rbp
  __int64 inited; // rdx
  _DWORD *v15; // rcx
  char v16; // bp
  int v17; // r15d
  int v18; // r13d
  unsigned int *v19; // rax
  __int64 v20; // rcx
  unsigned int v21; // r9d
  __int64 v22; // r8
  int v23; // ebp
  unsigned int v24; // ecx
  _BOOL8 v25; // rdx
  int v26; // r15d
  int v27; // r15d
  __int64 v28; // rax
  int v29; // r13d
  int v30; // r12d
  unsigned int *v31; // rax
  __int64 v32; // rcx
  unsigned int v33; // r9d
  __int64 v34; // r8
  int v35; // ebp
  _BOOL8 v36; // rdx
  int v37; // r12d
  _DWORD *v39; // r8
  __int64 v40; // rcx
  void *v41; // rax
  int v42; // ecx
  void *v43; // rax
  char v44; // cl
  struct tagSBCALC *v46; // rdx
  __int64 v47; // rcx
  int v48; // [rsp+50h] [rbp-58h] BYREF
  unsigned int v49; // [rsp+54h] [rbp-54h]
  int v50; // [rsp+58h] [rbp-50h] BYREF
  int v51; // [rsp+5Ch] [rbp-4Ch]
  int v52; // [rsp+60h] [rbp-48h]
  __int64 v53; // [rsp+68h] [rbp-40h]
  char v54; // [rsp+B8h] [rbp+10h]
  __int16 v56; // [rsp+C8h] [rbp+20h]

  BugCheckParameter3 = 0LL;
  v7 = a2;
  if ( a4 )
    a4 = IsVisible((__int64)a1);
  if ( v7 == 2 )
  {
    _InterlockedAdd(&glSendMessage, 1u);
    return xxxSendTransformableMessageTimeout(
             (__int64 *)a1,
             0xE9u,
             (HWND)a4,
             a3,
             (int)BugCheckParameter3,
             (int)BugCheckParameter3,
             BugCheckParameter3,
             1,
             1);
  }
  v10 = (int)BugCheckParameter3;
  v9 = 3616;
  LOBYTE(v10) = v7 != 0;
  v52 = v10;
  if ( !v7 )
    v9 = 3600;
  v56 = v9;
  v11 = (int)BugCheckParameter3;
  v12 = v9 & *(_BYTE *)(*((_QWORD *)a1 + 5) + 30LL);
  v54 = v12;
  LOBYTE(v11) = v12 != 0;
  v51 = v11;
  v50 = v11;
  if ( (*(_DWORD *)(a3 + 4) & 1) != 0 || v12 || *((__int64 **)a1 + 16) != BugCheckParameter3 )
  {
    v13 = *((_QWORD *)a1 + 16);
    inited = v13;
    if ( !v13 )
    {
      inited = InitPwSB((__int64)a1);
      if ( !inited )
        return 0LL;
    }
    if ( !(unsigned int)SBSetParms(
                          (struct tagSBDATA *)(inited + (v7 != 0 ? 20LL : 4LL)),
                          (struct tagSCROLLINFO *)a3,
                          &v50,
                          &v48)
      && v13 )
    {
      if ( v12 && a4 )
      {
LABEL_67:
        xxxWindowEvent(0x800Eu, (__int64)a1, (v7 != 0) - 6, 0, 1);
        v47 = *(_QWORD *)(*((_QWORD *)a1 + 2) + 704LL);
        if ( !v47
          || a1 != *(struct tagWND **)(v47 + 8)
          || ((*(_DWORD *)v47 >> 1) & 1) != v10
          || *(__int64 (__usercall **)@<rax>(struct tagWND *@<rcx>, struct tagSBCALC *))(v47 + 48) != xxxTrackThumb )
        {
          xxxDrawThumb(a1, v46, v10);
        }
        return (unsigned int)v48;
      }
      return (unsigned int)v48;
    }
    v15 = (_DWORD *)*((_QWORD *)a1 + 5);
    v16 = v56;
    v17 = v15[7];
    v18 = v15[6];
    v49 = v15[58];
    v53 = HIBYTE(v56);
    *((_BYTE *)v15 + HIBYTE(v56) + 16) &= ~(_BYTE)v56;
    if ( !(unsigned int)IsWindowDesktopComposed(a1) )
      goto LABEL_15;
    v19 = (unsigned int *)*((_QWORD *)a1 + 5);
    v20 = v49;
    v21 = v19[7];
    v22 = v19[6];
    v23 = v19[58];
    if ( v17 != v21 )
      goto LABEL_11;
    if ( v18 != (_DWORD)v22 || v49 != v23 )
    {
      if ( v17 != v21 )
      {
LABEL_11:
        v24 = (v17 ^ v21) & 0xB9CF0000;
        v25 = v24 != 0;
        v26 = v24 != 0 ? 0xFFFFFFF0 : 0;
        v20 = -v24;
        v23 = (_DWORD)v20 != 0 ? v21 : 0;
        goto LABEL_12;
      }
      if ( v18 != (_DWORD)v22 )
      {
        v25 = ((v18 ^ (unsigned int)v22) & 0x4E27A9) != 0;
        v26 = ((v18 ^ (unsigned int)v22) & 0x4E27A9) != 0 ? 0xFFFFFFEC : 0;
        v20 = -((v18 ^ (unsigned int)v22) & 0x4E27A9);
        v23 = ((v18 ^ (unsigned int)v22) & 0x4E27A9) != 0 ? v22 : 0;
        goto LABEL_12;
      }
      if ( ((v49 ^ v23) & 0x2E00300) != 0 )
      {
        v25 = 1LL;
        v26 = -268435456;
LABEL_12:
        if ( v25 )
        {
          v41 = (void *)ReferenceDwmApiPort(v20, v25, v22);
          DwmAsyncChildStyleChange(v41, *(_QWORD *)a1, v26, v23);
        }
      }
    }
    v16 = v56;
LABEL_15:
    v27 = v50;
    v28 = *((_QWORD *)a1 + 5);
    if ( !v50 )
    {
      if ( (*(_BYTE *)(v28 + 30) & 0x30) == 0 )
      {
        v39 = (_DWORD *)*((_QWORD *)a1 + 16);
        if ( v39[1] == v39[2] && v39[5] == v39[6] )
        {
          RtlFreeHeap(*(PVOID *)(*((_QWORD *)a1 + 3) + 128LL), 0, v39);
          *(_QWORD *)(*((_QWORD *)a1 + 5) + 144LL) = 0LL;
          *((_QWORD *)a1 + 16) = 0LL;
        }
      }
LABEL_22:
      if ( (*(_DWORD *)(a3 + 4) & 8) != 0 )
      {
        if ( v12 )
        {
          SetOrClrWF(1, (__int64)a1, v56, 1);
          xxxEnableWndSBArrows(a1, v7, v27 == 0 ? 3 : 0);
        }
      }
      else
      {
        v51 ^= v27;
        if ( v51 )
        {
          v40 = *(_QWORD *)(*((_QWORD *)a1 + 2) + 704LL);
          if ( v40 && a1 == *(struct tagWND **)(v40 + 8) )
            *(_DWORD *)v40 |= 8u;
          xxxSetWindowPos(a1, 0LL, 0LL, 0LL, 0, 0, 55);
          return (unsigned int)v48;
        }
      }
      if ( v27 && a4 )
      {
        v44 = *(_BYTE *)(*((_QWORD *)a1 + 5) + 16LL);
        if ( v7 ? v44 & 2 : v44 & 4 )
        {
          v10 = v52;
          goto LABEL_67;
        }
      }
      return (unsigned int)v48;
    }
    v29 = *(_DWORD *)(v28 + 28);
    v30 = *(_DWORD *)(v28 + 24);
    v49 = *(_DWORD *)(v28 + 232);
    *(_BYTE *)(v28 + v53 + 16) |= v16;
    if ( (unsigned int)IsWindowDesktopComposed(a1) )
    {
      v31 = (unsigned int *)*((_QWORD *)a1 + 5);
      v32 = v49;
      v33 = v31[7];
      v34 = v31[6];
      v35 = v31[58];
      if ( v29 != v33 )
      {
LABEL_18:
        v36 = ((v29 ^ v33) & 0xB9CF0000) != 0;
        v37 = ((v29 ^ v33) & 0xB9CF0000) != 0 ? 0xFFFFFFF0 : 0;
        v32 = -((v29 ^ v33) & 0xB9CF0000);
        v35 = ((v29 ^ v33) & 0xB9CF0000) != 0 ? v33 : 0;
        goto LABEL_19;
      }
      if ( v30 != (_DWORD)v34 || v49 != v35 )
      {
        if ( v29 != v33 )
          goto LABEL_18;
        if ( v30 != (_DWORD)v34 )
        {
          v42 = (v30 ^ v34) & 0x4E27A9;
          v36 = v42 != 0;
          v37 = v42 != 0 ? 0xFFFFFFEC : 0;
          v32 = (unsigned int)-v42;
          v35 = (_DWORD)v32 != 0 ? v34 : 0;
          goto LABEL_19;
        }
        if ( ((v49 ^ v35) & 0x2E00300) != 0 )
        {
          v36 = 1LL;
          v37 = -268435456;
LABEL_19:
          if ( v36 )
          {
            v43 = (void *)ReferenceDwmApiPort(v32, v36, v34);
            DwmAsyncChildStyleChange(v43, *(_QWORD *)a1, v37, v35);
          }
        }
      }
    }
    v12 = v54;
    goto LABEL_22;
  }
  UserSetLastError(1447LL, a2);
  return 0LL;
}
