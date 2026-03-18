/*
 * XREFs of CalcVisRgn @ 0x1C002B5D0
 * Callers:
 *     NtUserGetWindowRgnEx @ 0x1C0073970 (NtUserGetWindowRgnEx.c)
 *     ?SwpCalcVisRgn@@YAHPEAUtagWND@@PEAUHRGN__@@@Z @ 0x1C007B908 (-SwpCalcVisRgn@@YAHPEAUtagWND@@PEAUHRGN__@@@Z.c)
 *     zzzResetSharedDesktops @ 0x1C00E79D0 (zzzResetSharedDesktops.c)
 *     _VisrgnFromWindow @ 0x1C01B1B64 (_VisrgnFromWindow.c)
 *     InvalidateGDIWindows @ 0x1C01B2300 (InvalidateGDIWindows.c)
 *     UserGetClientRgn @ 0x1C01B2428 (UserGetClientRgn.c)
 * Callees:
 *     GetStyleWindow @ 0x1C0028180 (GetStyleWindow.c)
 *     ?CalcVisRgnWorker@@YAHQEAUtagWND@@PEAPEAUHRGN__@@K@Z @ 0x1C002B770 (-CalcVisRgnWorker@@YAHQEAUtagWND@@PEAPEAUHRGN__@@K@Z.c)
 *     _IsDescendant @ 0x1C00765A8 (_IsDescendant.c)
 */

__int64 __fastcall CalcVisRgn(HRGN *a1, __int64 a2, struct tagWND *a3, unsigned int a4)
{
  __int64 v6; // r9
  __int64 v9; // r10
  __int64 v10; // rdx
  char v11; // al
  _QWORD *v12; // r8
  _QWORD *Prop; // rax

  v6 = *(_QWORD *)(a2 + 24);
  v9 = a2;
  while ( 1 )
  {
    v10 = *(_QWORD *)(v9 + 40);
    v11 = *(_BYTE *)(v10 + 31);
    if ( (v11 & 0x10) == 0 || (v11 & 0x20) != 0 && v9 != a2 )
      break;
    if ( (*(_WORD *)(v10 + 42) & 0x3FFF) != 0x29D )
    {
      v9 = *(_QWORD *)(v9 + 80);
      if ( v9 )
        continue;
    }
    if ( v6 == grpdeskRitInput
      || (a4 & 0x4000) != 0
      || GetStyleWindow(a2, 2568) && ((a4 & 0x8000000) == 0 || (unsigned int)IsWindowDesktopComposed(a2)) )
    {
      if ( (a4 & 0x4000) == 0 )
        goto LABEL_29;
      v12 = (_QWORD *)a2;
      do
      {
        if ( (*(_BYTE *)(v12[5] + 27LL) & 0x20) != 0 )
          break;
        v12 = (_QWORD *)v12[10];
      }
      while ( v12 );
      if ( !v12
        || (*(_WORD *)(v12[5] + 42LL) & 0x3FFF) == 0x29D && v12 != (_QWORD *)a2
        || (Prop = (_QWORD *)RealGetProp(v12[15], (unsigned __int16)atomLayer, 1LL)) != 0LL && *Prop )
      {
LABEL_29:
        if ( (!gspwndLockUpdate || (a4 & 0x400) != 0 || !(unsigned int)IsDescendant(gspwndLockUpdate, a2))
          && (!(unsigned int)UpdatesLockedForDwm() || (a4 & 0x4000) != 0) )
        {
          return CalcVisRgnWorker(a3, a1, a4);
        }
      }
    }
    break;
  }
  SetOrCreateRectRgnIndirectPublic(a1, gZero, a3, v6);
  return 0LL;
}
