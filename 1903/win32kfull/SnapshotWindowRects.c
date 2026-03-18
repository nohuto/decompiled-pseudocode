/*
 * XREFs of SnapshotWindowRects @ 0x1C01DA5B0
 * Callers:
 *     SnapShotDesktopsMonitorsAndWindowsRects @ 0x1C01DA4D8 (SnapShotDesktopsMonitorsAndWindowsRects.c)
 * Callees:
 *     IsNonImmersiveBand @ 0x1C00168A0 (IsNonImmersiveBand.c)
 *     _GetProp @ 0x1C00C7C1C (_GetProp.c)
 *     BuildHwndList @ 0x1C00CC820 (BuildHwndList.c)
 *     FreeHwndList @ 0x1C00CC9E0 (FreeHwndList.c)
 *     HMValidateHandleNoSecure @ 0x1C00D0948 (HMValidateHandleNoSecure.c)
 *     DesktopWindowFromDesktop @ 0x1C0116170 (DesktopWindowFromDesktop.c)
 */

__int64 __fastcall SnapshotWindowRects(__int64 a1, _DWORD *a2)
{
  int v2; // ebx
  __int64 v4; // rax
  __int64 v5; // rax
  struct tagBWL *v6; // rbp
  unsigned __int64 *v7; // rdi
  bool v8; // zf
  _QWORD *v9; // rax
  __int64 v10; // rax
  __int64 v11; // rdx
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // rsi
  unsigned __int64 v15; // rcx
  __int64 v16; // rbx
  __int64 v17; // rax
  __int64 v18; // rdx
  __int128 *Prop; // rax
  __int128 v20; // xmm0

  v2 = 0;
  *a2 = 0;
  v4 = DesktopWindowFromDesktop(a1);
  v5 = BuildHwndList(*(struct tagWND **)(v4 + 112));
  v6 = (struct tagBWL *)v5;
  if ( v5 )
  {
    v7 = (unsigned __int64 *)(v5 + 32);
    v8 = *(_QWORD *)(v5 + 32) == 1LL;
    v9 = (_QWORD *)(v5 + 32);
    if ( v8 )
      goto LABEL_20;
    do
    {
      ++v2;
      ++v9;
    }
    while ( *v9 != 1LL );
    if ( v2 && (v10 = Win32AllocPoolWithQuotaZInit(48LL * v2, 2004054869LL), (v14 = v10) != 0) )
    {
      v15 = *v7;
      if ( *v7 != 1 )
      {
        v16 = v10 + 32;
        do
        {
          LOBYTE(v11) = 1;
          v17 = HMValidateHandleNoSecure(v15, v11, v12, v13);
          v13 = v17;
          if ( v17
            && *(char *)(*(_QWORD *)(v17 + 40) + 24LL) >= 0
            && IsNonImmersiveBand(v17)
            && (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v13 + 16) + 416LL) + 812LL) & 0x30) != 0x10 )
          {
            v18 = *((unsigned __int16 *)&WPP_MAIN_CB.DeviceQueue.Size + 1);
            *(_QWORD *)(v16 + 8) = *v7;
            *(_OWORD *)(v16 - 32) = *(_OWORD *)(*(_QWORD *)(v13 + 40) + 88LL);
            Prop = (__int128 *)GetProp(v13, v18, 1LL);
            if ( Prop )
            {
              v20 = *Prop;
              *(_DWORD *)v16 |= 1u;
              *(_OWORD *)(v16 - 16) = v20;
            }
            else
            {
              *(_DWORD *)v16 &= ~1u;
            }
            ++*a2;
            v16 += 48LL;
          }
          v15 = *++v7;
        }
        while ( *v7 != 1 );
      }
      if ( *a2 )
        return v14;
      Win32FreePool(v14);
    }
    else
    {
LABEL_20:
      FreeHwndList(v6);
    }
  }
  return 0LL;
}
