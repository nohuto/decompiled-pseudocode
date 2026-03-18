/*
 * XREFs of CalcVisRgn @ 0x1C003C7D0
 * Callers:
 *     NtUserGetWindowRgnEx @ 0x1C0067F20 (NtUserGetWindowRgnEx.c)
 *     ?SwpCalcVisRgn@@YAHPEAUtagWND@@PEAUHRGN__@@@Z @ 0x1C0077888 (-SwpCalcVisRgn@@YAHPEAUtagWND@@PEAUHRGN__@@@Z.c)
 *     zzzResetSharedDesktops @ 0x1C0104B90 (zzzResetSharedDesktops.c)
 *     _VisrgnFromWindow @ 0x1C011D5A8 (_VisrgnFromWindow.c)
 *     InvalidateGDIWindows @ 0x1C01D48E4 (InvalidateGDIWindows.c)
 *     UserGetClientRgn @ 0x1C01D4A28 (UserGetClientRgn.c)
 * Callees:
 *     GetStyleWindow @ 0x1C0039EC0 (GetStyleWindow.c)
 *     ?CalcVisRgnWorker@@YAHQEAUtagWND@@PEAPEAUHRGN__@@K@Z @ 0x1C003CB30 (-CalcVisRgnWorker@@YAHQEAUtagWND@@PEAPEAUHRGN__@@K@Z.c)
 *     _IsDescendant @ 0x1C0043A2C (_IsDescendant.c)
 */

__int64 __fastcall CalcVisRgn(HRGN *a1, __int64 a2, struct tagWND *a3, unsigned int a4)
{
  __int64 v5; // r8
  __int64 v7; // rcx
  unsigned int v8; // esi
  __int64 v10; // rdx
  char v11; // al
  _QWORD *v12; // rcx
  __int64 v13; // rdx
  _QWORD *Prop; // rax
  _QWORD *v16; // rbx
  int v17; // ecx
  __int64 v18; // rcx
  _QWORD *v19; // rax
  __int64 v20; // rdx
  _QWORD *v21; // rax
  __int64 v22; // r8
  int v23; // eax

  v5 = *(_QWORD *)(a2 + 24);
  v7 = a2;
  v8 = a4;
  do
  {
    v10 = *(_QWORD *)(v7 + 40);
    v11 = *(_BYTE *)(v10 + 31);
    if ( (v11 & 0x10) == 0 || (v11 & 0x20) != 0 && v7 != a2 )
      goto LABEL_26;
    if ( (*(_WORD *)(v10 + 42) & 0x2FFF) == 0x29D )
      break;
    v7 = *(_QWORD *)(v7 + 80);
  }
  while ( v7 );
  if ( v5 != grpdeskRitInput
    && (a4 & 0x4000) == 0
    && (!GetStyleWindow(a2, 2568) || (v8 & 0x8000000) != 0 && !(unsigned int)IsWindowDesktopComposed(a2)) )
  {
    goto LABEL_26;
  }
  if ( (v8 & 0x4000) != 0 )
  {
    v12 = (_QWORD *)a2;
    while ( 1 )
    {
      v13 = v12[5];
      if ( (*(_BYTE *)(v13 + 27) & 0x20) != 0 )
        break;
      v12 = (_QWORD *)v12[10];
      if ( !v12 )
        goto LABEL_21;
    }
    if ( (*(_WORD *)(v13 + 42) & 0x2FFF) != 0x29D || v12 == (_QWORD *)a2 )
    {
      Prop = (_QWORD *)RealGetProp(v12[15], (unsigned __int16)atomLayer, 1LL);
      if ( !Prop || !*Prop )
      {
LABEL_26:
        SetOrCreateRectRgnIndirectPublic(a1, gZero);
        return 0LL;
      }
    }
  }
LABEL_21:
  if ( gspwndLockUpdate && (v8 & 0x400) == 0 && (unsigned int)IsDescendant(gspwndLockUpdate, a2) )
    goto LABEL_26;
  if ( (unsigned int)UpdatesLockedForDwm() )
  {
    if ( (v8 & 0x4000) == 0 )
      goto LABEL_26;
    goto LABEL_28;
  }
  if ( (v8 & 0x4000) != 0 )
  {
LABEL_28:
    v16 = (_QWORD *)a2;
    while ( 1 )
    {
      v17 = *(_DWORD *)(v16[5] + 24LL);
      if ( (v17 & 0x80000) != 0 || (v17 & 0x20000000) != 0 )
        break;
      v16 = (_QWORD *)v16[10];
      if ( !v16 )
        return CalcVisRgnWorker(a3, a1, v8);
    }
    if ( v16 )
    {
      if ( v16 == (_QWORD *)a2 )
        goto LABEL_39;
      v18 = v16[3];
      v19 = 0LL;
      if ( v18 )
      {
        v20 = *(_QWORD *)(v18 + 8);
        if ( v20 )
          v19 = *(_QWORD **)(v20 + 24);
      }
      if ( v16 != v19 )
      {
LABEL_39:
        v21 = (_QWORD *)RealGetProp(v16[15], (unsigned __int16)atomLayer, 1LL);
        if ( v21 )
        {
          if ( *v21 )
          {
            v22 = v16[5];
            if ( (*(_DWORD *)(v22 + 24) & 0x20000000) != 0 )
            {
              v23 = *(_DWORD *)(v22 + 232);
              if ( (v23 & 0x20) != 0 && (v23 & 4) == 0 )
                v8 &= ~0x4000u;
            }
          }
        }
      }
    }
  }
  return CalcVisRgnWorker(a3, a1, v8);
}
