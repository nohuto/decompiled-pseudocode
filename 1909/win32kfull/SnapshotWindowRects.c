/*
 * XREFs of SnapshotWindowRects @ 0x1C01DA430
 * Callers:
 *     SnapShotDesktopsMonitorsAndWindowsRects @ 0x1C01DA358 (SnapShotDesktopsMonitorsAndWindowsRects.c)
 * Callees:
 *     DesktopWindowFromDesktop @ 0x1C0010E5C (DesktopWindowFromDesktop.c)
 *     _GetProp @ 0x1C00692EC (_GetProp.c)
 *     BuildHwndList @ 0x1C006DEF0 (BuildHwndList.c)
 *     FreeHwndList @ 0x1C006E0B0 (FreeHwndList.c)
 *     HMValidateHandleNoSecure @ 0x1C0072018 (HMValidateHandleNoSecure.c)
 *     IsNonImmersiveBand @ 0x1C012FC10 (IsNonImmersiveBand.c)
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
  __int64 v13; // rsi
  unsigned __int64 v14; // rcx
  __int64 v15; // rbx
  __int64 v16; // rax
  __int64 v17; // r9
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
    if ( v2 && (v10 = Win32AllocPoolWithQuotaZInit(48LL * v2, 2004054869LL), (v13 = v10) != 0) )
    {
      v14 = *v7;
      if ( *v7 != 1 )
      {
        v15 = v10 + 32;
        do
        {
          LOBYTE(v11) = 1;
          v16 = HMValidateHandleNoSecure(v14, v11, v12);
          if ( v16
            && *(char *)(*(_QWORD *)(v16 + 40) + 24LL) >= 0
            && IsNonImmersiveBand(v16)
            && (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v17 + 16) + 416LL) + 812LL) & 0x30) != 0x10 )
          {
            v18 = *((unsigned __int16 *)&WPP_MAIN_CB.DeviceQueue.Size + 1);
            *(_QWORD *)(v15 + 8) = *v7;
            *(_OWORD *)(v15 - 32) = *(_OWORD *)(*(_QWORD *)(v17 + 40) + 88LL);
            Prop = (__int128 *)GetProp(v17, v18, 1LL);
            if ( Prop )
            {
              v20 = *Prop;
              *(_DWORD *)v15 |= 1u;
              *(_OWORD *)(v15 - 16) = v20;
            }
            else
            {
              *(_DWORD *)v15 &= ~1u;
            }
            ++*a2;
            v15 += 48LL;
          }
          v14 = *++v7;
        }
        while ( *v7 != 1 );
      }
      if ( *a2 )
        return v13;
      Win32FreePool(v13);
    }
    else
    {
LABEL_20:
      FreeHwndList(v6);
    }
  }
  return 0LL;
}
