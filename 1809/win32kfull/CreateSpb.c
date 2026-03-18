/*
 * XREFs of CreateSpb @ 0x1C0157150
 * Callers:
 *     ?zzzChangeStates@@YAJPEAUtagWND@@PEAUtagSMWP@@@Z @ 0x1C0041894 (-zzzChangeStates@@YAJPEAUtagWND@@PEAUtagSMWP@@@Z.c)
 *     zzzLockWindowUpdate2 @ 0x1C00D817C (zzzLockWindowUpdate2.c)
 * Callees:
 *     SetOrClrWF @ 0x1C000DA60 (SetOrClrWF.c)
 *     IntersectRect @ 0x1C003D900 (IntersectRect.c)
 *     _GetDesktopWindow @ 0x1C0043A0C (_GetDesktopWindow.c)
 *     NtGdiBitBltInternal @ 0x1C00624D0 (NtGdiBitBltInternal.c)
 *     IsDesktopWindow @ 0x1C007A740 (IsDesktopWindow.c)
 *     _MonitorFromRect @ 0x1C007A8E0 (_MonitorFromRect.c)
 *     GreCreateCompatibleBitmapInternal @ 0x1C009A270 (GreCreateCompatibleBitmapInternal.c)
 *     SubtractRect @ 0x1C010956C (SubtractRect.c)
 *     __security_check_cookie @ 0x1C015AF60 (__security_check_cookie.c)
 *     ?SpbTransfer@@YAHPEAUtagSPB@@PEAUtagWND@@H@Z @ 0x1C01F2AC0 (-SpbTransfer@@YAHPEAUtagSPB@@PEAUtagWND@@H@Z.c)
 *     SpbCheck @ 0x1C01F306C (SpbCheck.c)
 *     GreSaveScreenBits @ 0x1C02824E4 (GreSaveScreenBits.c)
 */

char __fastcall CreateSpb(struct tagWND *a1, int a2, HDC a3)
{
  struct tagWND *v4; // rsi
  __int64 DesktopWindow; // rax
  __int64 v6; // rdx
  _QWORD *i; // rbx
  __int64 v8; // rdi
  __int64 v9; // rax
  int *v10; // r14
  __int64 *v11; // r12
  __int64 v12; // rbx
  __int64 v13; // rax
  int v14; // r15d
  int v15; // r13d
  int v16; // ebx
  HSURF CompatibleBitmapInternal; // rax
  __int64 v18; // rbp
  int v19; // ebx
  __int64 v20; // r8
  __int64 v21; // r9
  __int64 v22; // rcx
  struct tagWND *v23; // rdx
  __int128 v26; // [rsp+70h] [rbp-68h] BYREF
  __int128 v27; // [rsp+80h] [rbp-58h] BYREF

  v4 = a1;
  LODWORD(DesktopWindow) = IsWindowDesktopComposed(a1);
  if ( (_DWORD)DesktopWindow && a2 != 2 )
    return DesktopWindow;
  if ( (a2 & 2) == 0 )
  {
    if ( *((_QWORD *)v4 + 10) )
    {
      DesktopWindow = GetDesktopWindow((__int64)v4);
      if ( v6 != DesktopWindow )
        return DesktopWindow;
    }
  }
  if ( *(_QWORD *)(gpDispInfo + 32LL) )
  {
    SpbCheck();
  }
  else
  {
    GreLockVisRgn(*(_QWORD *)(gpDispInfo + 40LL));
    for ( i = *(_QWORD **)(gpDispInfo + 24LL); i; i = (_QWORD *)*i )
      GreGetBounds(i[1], 0LL, 1LL);
    GreUnlockVisRgn(*(_QWORD *)(gpDispInfo + 40LL));
  }
  DesktopWindow = Win32AllocPoolWithQuota(72LL, 1651733333LL);
  v8 = DesktopWindow;
  if ( !DesktopWindow )
    return DesktopWindow;
  v9 = Win32AllocPoolNonPaged(88LL, 1651733333LL);
  *(_QWORD *)(v8 + 64) = v9;
  if ( !v9 )
  {
LABEL_39:
    LOBYTE(DesktopWindow) = Win32FreePool(v8);
    return DesktopWindow;
  }
  v10 = (int *)(v8 + 24);
  v11 = (__int64 *)(v8 + 8);
  *(_QWORD *)(v8 + 8) = 0LL;
  *(_OWORD *)(v8 + 24) = *(_OWORD *)(*((_QWORD *)v4 + 5) + 88LL);
  v26 = *(_OWORD *)(*gpDispInfo + 24LL);
  if ( !(unsigned int)IntersectRect((_DWORD *)(v8 + 24), (int *)(v8 + 24), (int *)&v26) )
  {
LABEL_38:
    Win32FreePool(*(_QWORD *)(v8 + 64));
    goto LABEL_39;
  }
  *(_QWORD *)(v8 + 40) = 0LL;
  *(_QWORD *)(v8 + 16) = 0LL;
  *(_QWORD *)&v26 = v8 + 8;
  *((_QWORD *)&v26 + 1) = v4;
  *(_DWORD *)(v8 + 48) = a2;
  HMAssignmentLock(&v26);
  if ( (a2 & 2) == 0 )
  {
    v27 = *(_OWORD *)v10;
    if ( *(_DWORD *)(gpsi + 2220LL)
      || ((v12 = MonitorFromRect((struct tagRECT *)(v8 + 24), 1u, 0),
           !SubtractRect((__int64)&v26, (int *)(v8 + 24), (int *)(*(_QWORD *)(v12 + 40) + 28LL)))
       || !(unsigned int)GreRectInRegion(*(_QWORD *)(gpDispInfo + 120LL), &v26))
      && (unsigned int)IntersectRect((_DWORD *)(v8 + 24), (int *)(v8 + 24), (int *)(*(_QWORD *)(v12 + 40) + 28LL))
      && v12 == *(_QWORD *)(gpDispInfo + 96LL) )
    {
      if ( !*(_QWORD *)(*((_QWORD *)v4 + 5) + 168LL) )
      {
        v13 = GreSaveScreenBits(*(_QWORD *)(gpDispInfo + 40LL), 0LL, 0LL, &v27);
        *(_QWORD *)(v8 + 56) = v13;
        if ( v13 )
        {
          *(_DWORD *)(v8 + 48) |= 1u;
LABEL_29:
          SetOrClrWF(1, (__int64)v4, 0x80u, 1);
          v4 = (struct tagWND *)*((_QWORD *)v4 + 8);
          goto LABEL_30;
        }
      }
      v14 = *(_DWORD *)(v8 + 32) - *v10;
      v15 = *(_DWORD *)(v8 + 36) - *(_DWORD *)(v8 + 28);
      v16 = *v10 & 7;
      CompatibleBitmapInternal = GreCreateCompatibleBitmapInternal(a3, v14 + v16, v15, 0, 0LL, 0LL);
      *(_QWORD *)(v8 + 16) = CompatibleBitmapInternal;
      if ( CompatibleBitmapInternal )
      {
        v18 = GreSelectBitmap(ghdcMem, CompatibleBitmapInternal);
        if ( v18 )
        {
          v19 = NtGdiBitBltInternal(ghdcMem, v16, 0, v14, v15, a3, *v10, *(_DWORD *)(v8 + 28), 13369344, 0, 0);
          GreSelectBitmap(ghdcMem, v18);
          if ( v19 )
          {
            GreSetBitmapOwner(*(_QWORD *)(v8 + 16), 0LL);
            goto LABEL_29;
          }
        }
      }
    }
    v22 = *(_QWORD *)(v8 + 16);
    if ( v22 )
      GreDeleteObject(v22);
    HMAssignmentUnlock(v8 + 8);
    goto LABEL_38;
  }
LABEL_30:
  *(_QWORD *)v8 = *(_QWORD *)(gpDispInfo + 32LL);
  *(_QWORD *)(gpDispInfo + 32LL) = v8;
  SetRectRgnIndirect(ghrgnSPB2, v8 + 24);
  v20 = *(_QWORD *)(*(_QWORD *)(*v11 + 40) + 168LL);
  if ( !v20 || (LODWORD(DesktopWindow) = GreCombineRgn(ghrgnSPB2, ghrgnSPB2, v20, 1LL), (_DWORD)DesktopWindow) )
  {
    LOBYTE(DesktopWindow) = IsDesktopWindow(*v11);
    if ( (_DWORD)DesktopWindow || (DesktopWindow = *(_QWORD *)(v21 + 40), (*(_BYTE *)(DesktopWindow + 26) & 8) == 0) )
    {
      v23 = *(struct tagWND **)(v21 + 80);
      if ( !v23 || (LODWORD(DesktopWindow) = SpbTransfer((struct tagSPB *)v8, v23, 0), (_DWORD)DesktopWindow) )
      {
        while ( v4 )
        {
          LODWORD(DesktopWindow) = SpbTransfer((struct tagSPB *)v8, v4, 1);
          if ( !(_DWORD)DesktopWindow )
            break;
          v4 = (struct tagWND *)*((_QWORD *)v4 + 8);
        }
      }
    }
    else
    {
      LOBYTE(DesktopWindow) = SpbTransfer((struct tagSPB *)v8, (struct tagWND *)v21, 1);
    }
  }
  return DesktopWindow;
}
