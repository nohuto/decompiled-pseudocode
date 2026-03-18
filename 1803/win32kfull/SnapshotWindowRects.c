/*
 * XREFs of SnapshotWindowRects @ 0x1C01A5050
 * Callers:
 *     SnapShotDesktopsMonitorsAndWindowsRects @ 0x1C01A4F8C (SnapShotDesktopsMonitorsAndWindowsRects.c)
 * Callees:
 *     HMValidateHandleNoSecure @ 0x1C00270B8 (HMValidateHandleNoSecure.c)
 *     FreeHwndList @ 0x1C002A0E0 (FreeHwndList.c)
 *     BuildHwndList @ 0x1C002A170 (BuildHwndList.c)
 *     IsNonImmersiveBand @ 0x1C005F640 (IsNonImmersiveBand.c)
 *     DesktopWindowFromDesktop @ 0x1C00F2610 (DesktopWindowFromDesktop.c)
 */

__int64 __fastcall SnapshotWindowRects(__int64 a1, _DWORD *a2)
{
  int v2; // ebx
  __int64 v4; // rax
  struct tagBWL *v5; // rax
  struct tagBWL *v6; // rbp
  unsigned __int64 *v7; // rdi
  bool v8; // zf
  _QWORD *v9; // rax
  __int64 v10; // rax
  __int64 v11; // rdx
  __int64 v12; // rsi
  unsigned __int64 v13; // rcx
  __int64 v14; // rbx
  __int64 v15; // rax
  _QWORD *v16; // r8
  __int64 v17; // rdx
  __int128 *Prop; // rax
  __int128 v19; // xmm0

  v2 = 0;
  *a2 = 0;
  v4 = DesktopWindowFromDesktop(a1);
  v5 = BuildHwndList(*(_QWORD **)(v4 + 88), 2, 0LL);
  v6 = v5;
  if ( v5 )
  {
    v7 = (unsigned __int64 *)((char *)v5 + 32);
    v8 = *((_QWORD *)v5 + 4) == 1LL;
    v9 = (_QWORD *)((char *)v5 + 32);
    if ( v8 )
      goto LABEL_20;
    do
    {
      ++v2;
      ++v9;
    }
    while ( *v9 != 1LL );
    if ( v2 && (v10 = Win32AllocPoolWithQuotaZInit(48LL * v2, 2004054869LL), (v12 = v10) != 0) )
    {
      v13 = *v7;
      if ( *v7 != 1 )
      {
        v14 = v10 + 32;
        do
        {
          LOBYTE(v11) = 1;
          v15 = HMValidateHandleNoSecure(v13, v11);
          if ( v15
            && *(char *)(*(_QWORD *)(v15 + 40) + 24LL) >= 0
            && IsNonImmersiveBand(v15)
            && (*(_DWORD *)(*(_QWORD *)(v16[2] + 416LL) + 812LL) & 0x30) != 0x10 )
          {
            v17 = (unsigned __int16)atomCheckpointProp;
            *(_QWORD *)(v14 + 8) = *v7;
            *(_OWORD *)(v14 - 32) = *(_OWORD *)(v16[5] + 88LL);
            Prop = (__int128 *)RealGetProp(v16[15], v17, 1LL);
            if ( Prop )
            {
              v19 = *Prop;
              *(_DWORD *)v14 |= 1u;
              *(_OWORD *)(v14 - 16) = v19;
            }
            else
            {
              *(_DWORD *)v14 &= ~1u;
            }
            ++*a2;
            v14 += 48LL;
          }
          v13 = *++v7;
        }
        while ( *v7 != 1 );
      }
      if ( *a2 )
        return v12;
      Win32FreePool(v12);
    }
    else
    {
LABEL_20:
      FreeHwndList(v6);
    }
  }
  return 0LL;
}
