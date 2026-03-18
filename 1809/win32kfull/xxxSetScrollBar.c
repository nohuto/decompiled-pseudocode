/*
 * XREFs of xxxSetScrollBar @ 0x1C00784FC
 * Callers:
 *     NtUserSetScrollInfo @ 0x1C00783D0 (NtUserSetScrollInfo.c)
 * Callees:
 *     SetOrClrWF @ 0x1C000DA60 (SetOrClrWF.c)
 *     DwmAsyncChildStyleChange @ 0x1C000DBA0 (DwmAsyncChildStyleChange.c)
 *     xxxWindowEvent @ 0x1C0018330 (xxxWindowEvent.c)
 *     _InitPwSB @ 0x1C002150C (_InitPwSB.c)
 *     xxxSendTransformableMessageTimeout @ 0x1C002CE60 (xxxSendTransformableMessageTimeout.c)
 *     xxxSetWindowPos @ 0x1C0071C80 (xxxSetWindowPos.c)
 *     UserSetLastError @ 0x1C0073CC4 (UserSetLastError.c)
 *     ?SBSetParms@@YAHPEAUtagSBDATA@@PEAUtagSCROLLINFO@@PEAHPEAJ@Z @ 0x1C00788C4 (-SBSetParms@@YAHPEAUtagSBDATA@@PEAUtagSCROLLINFO@@PEAHPEAJ@Z.c)
 *     ?xxxEnableWndSBArrows@@YAHPEAUtagWND@@II@Z @ 0x1C0078BA4 (-xxxEnableWndSBArrows@@YAHPEAUtagWND@@II@Z.c)
 *     IsVisible @ 0x1C0079A24 (IsVisible.c)
 *     ?xxxDrawThumb@@YAXPEAUtagWND@@PEAUtagSBCALC@@H@Z @ 0x1C0228B64 (-xxxDrawThumb@@YAXPEAUtagWND@@PEAUtagSBCALC@@H@Z.c)
 */

__int64 __fastcall xxxSetScrollBar(struct tagWND *a1, __int64 a2, __int64 a3, int a4)
{
  __int64 *BugCheckParameter3; // r9
  unsigned int v7; // ebp
  int v9; // eax
  __int64 v10; // rax
  unsigned __int64 v11; // r13
  char v12; // r15
  char v13; // r15
  __int64 v14; // rsi
  __int64 inited; // rdx
  _DWORD *v16; // rcx
  char v17; // si
  int v18; // r15d
  int v19; // r12d
  _DWORD *v20; // rax
  __int64 v21; // rcx
  int v22; // r9d
  int v23; // r8d
  int v24; // esi
  unsigned int v25; // ecx
  _BOOL8 v26; // rdx
  int v27; // r15d
  int v28; // r15d
  __int64 v29; // rax
  int v30; // r13d
  int v31; // r12d
  _DWORD *v32; // rax
  __int64 v33; // rcx
  int v34; // r9d
  int v35; // r8d
  int v36; // esi
  _BOOL8 v37; // rdx
  int v38; // r12d
  _DWORD *v40; // r8
  __int64 v41; // rcx
  void *v42; // rax
  int v43; // ecx
  void *v44; // rax
  char v45; // cl
  struct tagSBCALC *v47; // rdx
  __int64 v48; // rcx
  int v49; // [rsp+50h] [rbp-58h]
  int v50; // [rsp+54h] [rbp-54h] BYREF
  int v51; // [rsp+58h] [rbp-50h]
  int v52; // [rsp+5Ch] [rbp-4Ch] BYREF
  unsigned __int64 v53; // [rsp+60h] [rbp-48h]
  unsigned __int64 v54; // [rsp+68h] [rbp-40h]
  char v55; // [rsp+B8h] [rbp+10h]
  unsigned int v57; // [rsp+C8h] [rbp+20h]
  unsigned int v58; // [rsp+C8h] [rbp+20h]

  BugCheckParameter3 = 0LL;
  v7 = a2;
  if ( a4 )
    a4 = IsVisible(a1, a2, a3, 0LL);
  if ( v7 == 2 )
  {
    _InterlockedAdd(&glSendMessage, 1u);
    return xxxSendTransformableMessageTimeout(
             (__int64 *)a1,
             0xE9u,
             a4,
             a3,
             (int)BugCheckParameter3,
             (int)BugCheckParameter3,
             BugCheckParameter3,
             1,
             1);
  }
  v9 = (int)BugCheckParameter3;
  LOBYTE(v9) = v7 != 0;
  v49 = v9;
  v10 = *((_QWORD *)a1 + 5);
  v53 = (unsigned __int16)(v7 != 0 ? 3616 : 3600);
  v11 = v53 >> 8;
  v54 = v53 >> 8;
  v12 = *(_BYTE *)(v10 + (v53 >> 8) + 16);
  LODWORD(v10) = (_DWORD)BugCheckParameter3;
  v13 = (v7 != 0 ? 32 : 16) & v12;
  v55 = v13;
  LOBYTE(v10) = v13 != 0;
  v51 = v10;
  v50 = v10;
  if ( (*(_DWORD *)(a3 + 4) & 1) != 0 || v13 || *((__int64 **)a1 + 16) != BugCheckParameter3 )
  {
    v14 = *((_QWORD *)a1 + 16);
    inited = v14;
    if ( !v14 )
    {
      inited = InitPwSB((__int64)a1);
      if ( !inited )
        return 0LL;
    }
    if ( !(unsigned int)SBSetParms(
                          (struct tagSBDATA *)(inited + (v7 != 0 ? 20LL : 4LL)),
                          (struct tagSCROLLINFO *)a3,
                          &v50,
                          &v52)
      && v14 )
    {
      if ( v13 && a4 )
      {
LABEL_64:
        xxxWindowEvent(0x800Eu, (__int64)a1, (v7 != 0) - 6, 0, 1u);
        v48 = *(_QWORD *)(*((_QWORD *)a1 + 2) + 720LL);
        if ( !v48
          || a1 != *(struct tagWND **)(v48 + 8)
          || ((*(_DWORD *)v48 >> 1) & 1) != v49
          || *(__int64 (__usercall **)@<rax>(struct tagWND *@<rcx>, struct tagSBCALC *))(v48 + 48) != xxxTrackThumb )
        {
          xxxDrawThumb(a1, v47, v49);
        }
      }
      return (unsigned int)v52;
    }
    v16 = (_DWORD *)*((_QWORD *)a1 + 5);
    v17 = v53;
    v18 = v16[7];
    v19 = v16[6];
    v57 = v16[58];
    *((_BYTE *)v16 + v11 + 16) &= ~(_BYTE)v53;
    if ( !(unsigned int)IsWindowDesktopComposed(a1) )
    {
LABEL_13:
      v28 = v50;
      v29 = *((_QWORD *)a1 + 5);
      if ( v50 )
      {
        v30 = *(_DWORD *)(v29 + 28);
        v31 = *(_DWORD *)(v29 + 24);
        v58 = *(_DWORD *)(v29 + 232);
        *(_BYTE *)(v54 + v29 + 16) |= v17;
        if ( !(unsigned int)IsWindowDesktopComposed(a1) )
          goto LABEL_19;
        v32 = (_DWORD *)*((_QWORD *)a1 + 5);
        v33 = v58;
        v34 = v32[7];
        v35 = v32[6];
        v36 = v32[58];
        if ( v30 != v34 )
          goto LABEL_16;
        if ( v31 == v35 && v58 == v36 )
          goto LABEL_19;
        if ( v30 == v34 )
        {
          if ( v31 == v35 )
          {
            if ( ((v58 ^ v36) & 0x2E00300) == 0 )
              goto LABEL_19;
            v37 = 1LL;
            v38 = -268435456;
          }
          else
          {
            v43 = (v31 ^ v35) & 0x4E27A9;
            v37 = v43 != 0;
            v38 = v43 != 0 ? 0xFFFFFFEC : 0;
            v33 = (unsigned int)-v43;
            v36 = (_DWORD)v33 != 0 ? v35 : 0;
          }
        }
        else
        {
LABEL_16:
          v37 = ((v30 ^ v34) & 0xB9CF0000) != 0;
          v38 = ((v30 ^ v34) & 0xB9CF0000) != 0 ? 0xFFFFFFF0 : 0;
          v33 = -((v30 ^ v34) & 0xB9CF0000);
          v36 = ((v30 ^ v34) & 0xB9CF0000) != 0 ? v34 : 0;
        }
        if ( v37 )
        {
          v44 = (void *)ReferenceDwmApiPort(v33, v37);
          DwmAsyncChildStyleChange(v44, *(_QWORD *)a1, v38, v36);
        }
      }
      else if ( (*(_BYTE *)(v29 + 30) & 0x30) == 0 )
      {
        v40 = (_DWORD *)*((_QWORD *)a1 + 16);
        if ( v40[1] == v40[2] && v40[5] == v40[6] )
        {
          RtlFreeHeap(*(PVOID *)(*((_QWORD *)a1 + 3) + 128LL), 0, v40);
          *(_QWORD *)(*((_QWORD *)a1 + 5) + 144LL) = 0LL;
          *((_QWORD *)a1 + 16) = 0LL;
        }
      }
LABEL_19:
      if ( (*(_DWORD *)(a3 + 4) & 8) != 0 )
      {
        if ( v55 )
        {
          SetOrClrWF(1, (__int64)a1, v53, 1);
          xxxEnableWndSBArrows(a1, v7, v28 == 0 ? 3 : 0);
        }
      }
      else
      {
        v51 ^= v28;
        if ( v51 )
        {
          v41 = *(_QWORD *)(*((_QWORD *)a1 + 2) + 720LL);
          if ( v41 && a1 == *(struct tagWND **)(v41 + 8) )
            *(_DWORD *)v41 |= 8u;
          xxxSetWindowPos(a1, 0LL, 0LL, 0LL, 0, 0, 55);
          return (unsigned int)v52;
        }
      }
      if ( v28 && a4 )
      {
        v45 = *(_BYTE *)(*((_QWORD *)a1 + 5) + 16LL);
        if ( v7 ? v45 & 2 : v45 & 4 )
          goto LABEL_64;
      }
      return (unsigned int)v52;
    }
    v20 = (_DWORD *)*((_QWORD *)a1 + 5);
    v21 = v57;
    v22 = v20[7];
    v23 = v20[6];
    v24 = v20[58];
    if ( v18 != v22 )
      goto LABEL_9;
    if ( v19 != v23 || v57 != v24 )
    {
      if ( v18 != v22 )
      {
LABEL_9:
        v25 = (v18 ^ v22) & 0xB9CF0000;
        v26 = v25 != 0;
        v27 = v25 != 0 ? 0xFFFFFFF0 : 0;
        v21 = -v25;
        v24 = (_DWORD)v21 != 0 ? v22 : 0;
        goto LABEL_10;
      }
      if ( v19 != v23 )
      {
        v26 = ((v19 ^ v23) & 0x4E27A9) != 0;
        v27 = ((v19 ^ v23) & 0x4E27A9) != 0 ? 0xFFFFFFEC : 0;
        v21 = -((v19 ^ v23) & 0x4E27A9);
        v24 = ((v19 ^ v23) & 0x4E27A9) != 0 ? v23 : 0;
        goto LABEL_10;
      }
      if ( ((v57 ^ v24) & 0x2E00300) != 0 )
      {
        v26 = 1LL;
        v27 = -268435456;
LABEL_10:
        if ( v26 )
        {
          v42 = (void *)ReferenceDwmApiPort(v21, v26);
          DwmAsyncChildStyleChange(v42, *(_QWORD *)a1, v27, v24);
        }
      }
    }
    v17 = v53;
    goto LABEL_13;
  }
  UserSetLastError(1447LL, a2, a3, (__int64)BugCheckParameter3);
  return 0LL;
}
