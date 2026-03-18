/*
 * XREFs of xxxSetScrollBar @ 0x1C002DBFC
 * Callers:
 *     NtUserSetScrollInfo @ 0x1C002DAA0 (NtUserSetScrollInfo.c)
 * Callees:
 *     UserSetLastError @ 0x1C002862C (UserSetLastError.c)
 *     ?SBSetParms@@YAHPEAUtagSBDATA@@PEAUtagSCROLLINFO@@PEAHPEAJ@Z @ 0x1C002DFD0 (-SBSetParms@@YAHPEAUtagSBDATA@@PEAUtagSCROLLINFO@@PEAHPEAJ@Z.c)
 *     ?xxxEnableWndSBArrows@@YAHPEAUtagWND@@II@Z @ 0x1C002E2D4 (-xxxEnableWndSBArrows@@YAHPEAUtagWND@@II@Z.c)
 *     IsVisible @ 0x1C002F1E0 (IsVisible.c)
 *     xxxSendTransformableMessageTimeout @ 0x1C00407C0 (xxxSendTransformableMessageTimeout.c)
 *     _InitPwSB @ 0x1C004B6A4 (_InitPwSB.c)
 *     xxxWindowEvent @ 0x1C004D110 (xxxWindowEvent.c)
 *     xxxSetWindowPos @ 0x1C006C7B4 (xxxSetWindowPos.c)
 *     SetOrClrWF @ 0x1C008990C (SetOrClrWF.c)
 *     DwmAsyncChildStyleChange @ 0x1C0089A4C (DwmAsyncChildStyleChange.c)
 *     ?xxxDrawThumb@@YAXPEAUtagWND@@PEAUtagSBCALC@@H@Z @ 0x1C0240FE8 (-xxxDrawThumb@@YAXPEAUtagWND@@PEAUtagSBCALC@@H@Z.c)
 */

__int64 __fastcall xxxSetScrollBar(struct tagWND *a1, __int64 a2, __int64 a3, int a4)
{
  unsigned int v5; // r12d
  __int64 v6; // r9
  BOOL v8; // r14d
  __int64 v9; // rax
  unsigned __int64 v10; // r13
  char v11; // r15
  __int64 inited; // rcx
  int v13; // esi
  _DWORD *v14; // rcx
  char v15; // si
  int v16; // r14d
  int v17; // r15d
  unsigned int *v18; // rax
  __int64 v19; // rcx
  unsigned int v20; // r9d
  __int64 v21; // r8
  unsigned int v22; // esi
  _BOOL8 v23; // rdx
  int v24; // r14d
  __int64 v25; // rax
  int v26; // r12d
  int v27; // r15d
  unsigned int *v28; // rax
  __int64 v29; // rcx
  unsigned int v30; // r9d
  __int64 v31; // r8
  unsigned int v32; // esi
  _BOOL8 v33; // rdx
  _DWORD *v35; // r8
  __int64 v36; // rcx
  void *v37; // rax
  void *v38; // rax
  char v39; // cl
  struct tagSBCALC *v41; // rdx
  __int64 v42; // rcx
  unsigned int v43; // [rsp+50h] [rbp-68h]
  unsigned int v44; // [rsp+50h] [rbp-68h]
  int v45; // [rsp+54h] [rbp-64h] BYREF
  int v46; // [rsp+58h] [rbp-60h]
  int v47; // [rsp+5Ch] [rbp-5Ch] BYREF
  BOOL v48; // [rsp+60h] [rbp-58h]
  unsigned __int64 v49; // [rsp+68h] [rbp-50h]
  unsigned __int64 v50; // [rsp+70h] [rbp-48h]
  unsigned int v51; // [rsp+C8h] [rbp+10h]
  char v53; // [rsp+D8h] [rbp+20h]

  v51 = a2;
  v5 = a2;
  v6 = a3;
  if ( a4 )
    a4 = IsVisible(a1);
  if ( v5 == 2 )
  {
    _InterlockedAdd(&glSendMessage, 1u);
    return xxxSendTransformableMessageTimeout((ULONG_PTR)a1, 0, 0, 0LL, 1, 1);
  }
  v8 = v5 != 0;
  v9 = *((_QWORD *)a1 + 5);
  v48 = v8;
  v49 = (unsigned __int16)(v5 != 0 ? 3616 : 3600);
  v10 = v49 >> 8;
  v50 = v49 >> 8;
  v11 = (v5 != 0 ? 32 : 16) & *(_BYTE *)(v9 + (v49 >> 8) + 16);
  v53 = v11;
  v46 = v11 != 0;
  v45 = v46;
  if ( (*(_DWORD *)(v6 + 4) & 1) != 0 || v11 || *((_QWORD *)a1 + 19) )
  {
    inited = *((_QWORD *)a1 + 19);
    if ( inited )
    {
      v13 = 0;
    }
    else
    {
      v13 = 1;
      inited = InitPwSB(a1);
      if ( !inited )
        return 0LL;
    }
    if ( !(unsigned int)SBSetParms(
                          (struct tagSBDATA *)(16LL * (v5 != 0) + 4 + inited),
                          (struct tagSCROLLINFO *)a3,
                          &v45,
                          &v47)
      && !v13 )
    {
      if ( v11 && a4 )
      {
LABEL_67:
        xxxWindowEvent(0x800Eu, 1);
        v42 = *(_QWORD *)(*((_QWORD *)a1 + 2) + 712LL);
        if ( !v42
          || a1 != *(struct tagWND **)(v42 + 8)
          || ((*(_DWORD *)v42 >> 1) & 1) != v8
          || *(__int64 (__usercall **)@<rax>(struct tagWND *@<rcx>, struct tagSBCALC *))(v42 + 48) != xxxTrackThumb )
        {
          xxxDrawThumb(a1, v41, v8);
        }
        return (unsigned int)v47;
      }
      return (unsigned int)v47;
    }
    v14 = (_DWORD *)*((_QWORD *)a1 + 5);
    v15 = v49;
    v16 = v14[7];
    v17 = v14[6];
    v43 = v14[58];
    *((_BYTE *)v14 + v10 + 16) &= ~(_BYTE)v49;
    if ( !(unsigned int)IsWindowDesktopComposed(a1) )
      goto LABEL_14;
    v18 = (unsigned int *)*((_QWORD *)a1 + 5);
    v19 = v43;
    v20 = v18[7];
    v21 = v18[6];
    v22 = v18[58];
    if ( v16 != v20 )
      goto LABEL_10;
    if ( v17 != (_DWORD)v21 || v43 != v22 )
    {
      if ( v16 != v20 )
      {
LABEL_10:
        v23 = ((v16 ^ v20) & 0xB1CF0000) != 0;
        v19 = -((v16 ^ v20) & 0xB1CF0000);
        goto LABEL_11;
      }
      if ( v17 != (_DWORD)v21 )
      {
        v23 = ((v17 ^ (unsigned int)v21) & 0x4E27A9) != 0;
        v19 = -((v17 ^ (unsigned int)v21) & 0x4E27A9);
        goto LABEL_11;
      }
      if ( ((v43 ^ v22) & 0x2E00300) != 0 )
      {
        v23 = 1LL;
LABEL_11:
        if ( v23 )
        {
          v37 = (void *)ReferenceDwmApiPort(v19, v23, v21);
          DwmAsyncChildStyleChange(v37);
        }
      }
    }
    v15 = v49;
LABEL_14:
    v24 = v45;
    v25 = *((_QWORD *)a1 + 5);
    if ( !v45 )
    {
      if ( (*(_BYTE *)(v25 + 30) & 0x30) == 0 )
      {
        v35 = (_DWORD *)*((_QWORD *)a1 + 19);
        if ( v35[1] == v35[2] && v35[5] == v35[6] )
        {
          RtlFreeHeap(*(PVOID *)(*((_QWORD *)a1 + 3) + 128LL), 0, v35);
          *(_QWORD *)(*((_QWORD *)a1 + 5) + 144LL) = 0LL;
          *((_QWORD *)a1 + 19) = 0LL;
        }
      }
LABEL_21:
      if ( (*(_DWORD *)(a3 + 4) & 8) != 0 )
      {
        if ( v53 )
        {
          SetOrClrWF(1LL, a1, (unsigned __int16)v49, 1LL);
          xxxEnableWndSBArrows(a1, v5, v24 == 0 ? 3 : 0);
        }
      }
      else
      {
        v46 ^= v24;
        if ( v46 )
        {
          v36 = *(_QWORD *)(*((_QWORD *)a1 + 2) + 712LL);
          if ( v36 && a1 == *(struct tagWND **)(v36 + 8) )
            *(_DWORD *)v36 |= 8u;
          xxxSetWindowPos(a1, 0, 0, 55);
          return (unsigned int)v47;
        }
      }
      if ( v24 && a4 )
      {
        v39 = *(_BYTE *)(*((_QWORD *)a1 + 5) + 16LL);
        if ( v5 ? v39 & 2 : v39 & 4 )
        {
          v8 = v48;
          goto LABEL_67;
        }
      }
      return (unsigned int)v47;
    }
    v26 = *(_DWORD *)(v25 + 28);
    v27 = *(_DWORD *)(v25 + 24);
    v44 = *(_DWORD *)(v25 + 232);
    *(_BYTE *)(v50 + v25 + 16) |= v15;
    if ( (unsigned int)IsWindowDesktopComposed(a1) )
    {
      v28 = (unsigned int *)*((_QWORD *)a1 + 5);
      v29 = v44;
      v30 = v28[7];
      v31 = v28[6];
      v32 = v28[58];
      if ( v26 != v30 )
      {
LABEL_17:
        v33 = ((v26 ^ v30) & 0xB1CF0000) != 0;
        v29 = -((v26 ^ v30) & 0xB1CF0000);
        goto LABEL_18;
      }
      if ( v27 != (_DWORD)v31 || v44 != v32 )
      {
        if ( v26 != v30 )
          goto LABEL_17;
        if ( v27 != (_DWORD)v31 )
        {
          v33 = ((v27 ^ (unsigned int)v31) & 0x4E27A9) != 0;
          v29 = -((v27 ^ (unsigned int)v31) & 0x4E27A9);
          goto LABEL_18;
        }
        if ( ((v44 ^ v32) & 0x2E00300) != 0 )
        {
          v33 = 1LL;
LABEL_18:
          if ( v33 )
          {
            v38 = (void *)ReferenceDwmApiPort(v29, v33, v31);
            DwmAsyncChildStyleChange(v38);
          }
        }
      }
    }
    v5 = v51;
    goto LABEL_21;
  }
  UserSetLastError(1447LL, a2, a3, v6);
  return 0LL;
}
