/*
 * XREFs of CreateSpb @ 0x1C0136078
 * Callers:
 *     ?zzzChangeStates@@YAJPEAUtagWND@@PEAUtagSMWP@@@Z @ 0x1C002E6CC (-zzzChangeStates@@YAJPEAUtagWND@@PEAUtagSMWP@@@Z.c)
 *     zzzLockWindowUpdate2 @ 0x1C0059870 (zzzLockWindowUpdate2.c)
 * Callees:
 *     IntersectRect @ 0x1C002D204 (IntersectRect.c)
 *     _GetDesktopWindow @ 0x1C002E65C (_GetDesktopWindow.c)
 *     _MonitorFromRect @ 0x1C0072BA0 (_MonitorFromRect.c)
 *     IsDesktopWindow @ 0x1C0076580 (IsDesktopWindow.c)
 *     GreCreateCompatibleBitmapInternal @ 0x1C0096D9C (GreCreateCompatibleBitmapInternal.c)
 *     NtGdiBitBltInternal @ 0x1C0097220 (NtGdiBitBltInternal.c)
 *     SetOrClrWF @ 0x1C00C3E94 (SetOrClrWF.c)
 *     SubtractRect @ 0x1C00EE444 (SubtractRect.c)
 *     __security_check_cookie @ 0x1C0139660 (__security_check_cookie.c)
 *     ?SpbTransfer@@YAHPEAUtagSPB@@PEAUtagWND@@H@Z @ 0x1C01CE4E0 (-SpbTransfer@@YAHPEAUtagSPB@@PEAUtagWND@@H@Z.c)
 *     SpbCheck @ 0x1C01CEA10 (SpbCheck.c)
 *     GreSaveScreenBits @ 0x1C026E4A4 (GreSaveScreenBits.c)
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
  __int64 v12; // r9
  __int64 v13; // rbx
  __int64 v14; // rax
  int v15; // r15d
  int v16; // r13d
  int v17; // ebx
  __int64 CompatibleBitmapInternal; // rax
  __int64 v19; // rbp
  int v20; // ebx
  __int64 v21; // r8
  __int64 v22; // r9
  __int64 v23; // rcx
  struct tagWND *v24; // rdx
  __int128 v27; // [rsp+70h] [rbp-68h] BYREF
  __int128 v28; // [rsp+80h] [rbp-58h] BYREF

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
  v27 = *(_OWORD *)(*gpDispInfo + 24LL);
  if ( !(unsigned int)IntersectRect((_DWORD *)(v8 + 24), (int *)(v8 + 24), (int *)&v27) )
  {
LABEL_38:
    Win32FreePool(*(_QWORD *)(v8 + 64));
    goto LABEL_39;
  }
  *(_QWORD *)(v8 + 40) = 0LL;
  *(_QWORD *)(v8 + 16) = 0LL;
  *(_QWORD *)&v27 = v8 + 8;
  *((_QWORD *)&v27 + 1) = v4;
  *(_DWORD *)(v8 + 48) = a2;
  HMAssignmentLock(&v27);
  if ( (a2 & 2) == 0 )
  {
    v28 = *(_OWORD *)v10;
    if ( *(_DWORD *)(gpsi + 2220LL)
      || ((v13 = MonitorFromRect((struct tagRECT *)(v8 + 24), 1LL, 0LL, v12),
           !SubtractRect((__int64)&v27, (int *)(v8 + 24), (int *)(*(_QWORD *)(v13 + 40) + 28LL)))
       || !(unsigned int)GreRectInRegion(*(_QWORD *)(gpDispInfo + 120LL), &v27))
      && (unsigned int)IntersectRect((_DWORD *)(v8 + 24), (int *)(v8 + 24), (int *)(*(_QWORD *)(v13 + 40) + 28LL))
      && v13 == *(_QWORD *)(gpDispInfo + 96LL) )
    {
      if ( !*(_QWORD *)(*((_QWORD *)v4 + 5) + 168LL) )
      {
        v14 = GreSaveScreenBits(*(_QWORD *)(gpDispInfo + 40LL), 0LL, 0LL, &v28);
        *(_QWORD *)(v8 + 56) = v14;
        if ( v14 )
        {
          *(_DWORD *)(v8 + 48) |= 1u;
LABEL_29:
          SetOrClrWF(1, (__int64)v4, 128, 1);
          v4 = (struct tagWND *)*((_QWORD *)v4 + 8);
          goto LABEL_30;
        }
      }
      v15 = *(_DWORD *)(v8 + 32) - *v10;
      v16 = *(_DWORD *)(v8 + 36) - *(_DWORD *)(v8 + 28);
      v17 = *v10 & 7;
      CompatibleBitmapInternal = GreCreateCompatibleBitmapInternal(a3, v15 + v17, v16, 0, 0LL, 0LL);
      *(_QWORD *)(v8 + 16) = CompatibleBitmapInternal;
      if ( CompatibleBitmapInternal )
      {
        v19 = GreSelectBitmap(ghdcMem, CompatibleBitmapInternal);
        if ( v19 )
        {
          v20 = NtGdiBitBltInternal(ghdcMem, v17, 0, v15, v16, a3, *v10, *(_DWORD *)(v8 + 28), 13369344, 0, 0);
          GreSelectBitmap(ghdcMem, v19);
          if ( v20 )
          {
            GreSetBitmapOwner(*(_QWORD *)(v8 + 16), 0LL);
            goto LABEL_29;
          }
        }
      }
    }
    v23 = *(_QWORD *)(v8 + 16);
    if ( v23 )
      GreDeleteObject(v23);
    HMAssignmentUnlock(v8 + 8);
    goto LABEL_38;
  }
LABEL_30:
  *(_QWORD *)v8 = *(_QWORD *)(gpDispInfo + 32LL);
  *(_QWORD *)(gpDispInfo + 32LL) = v8;
  SetRectRgnIndirect(ghrgnSPB2, v8 + 24);
  v21 = *(_QWORD *)(*(_QWORD *)(*v11 + 40) + 168LL);
  if ( !v21 || (LODWORD(DesktopWindow) = GreCombineRgn(ghrgnSPB2, ghrgnSPB2, v21, 1LL), (_DWORD)DesktopWindow) )
  {
    LOBYTE(DesktopWindow) = IsDesktopWindow(*v11);
    if ( (_DWORD)DesktopWindow || (DesktopWindow = *(_QWORD *)(v22 + 40), (*(_BYTE *)(DesktopWindow + 26) & 8) == 0) )
    {
      v24 = *(struct tagWND **)(v22 + 80);
      if ( !v24 || (LODWORD(DesktopWindow) = SpbTransfer((struct tagSPB *)v8, v24, 0), (_DWORD)DesktopWindow) )
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
      LOBYTE(DesktopWindow) = SpbTransfer((struct tagSPB *)v8, (struct tagWND *)v22, 1);
    }
  }
  return DesktopWindow;
}
