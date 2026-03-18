/*
 * XREFs of SnapshotWindowRects @ 0x1C01C71F4
 * Callers:
 *     SnapShotDesktopsMonitorsAndWindowsRects @ 0x1C01C711C (SnapShotDesktopsMonitorsAndWindowsRects.c)
 * Callees:
 *     HMValidateHandleNoSecure @ 0x1C003730C (HMValidateHandleNoSecure.c)
 *     FreeHwndList @ 0x1C0070D10 (FreeHwndList.c)
 *     BuildHwndList @ 0x1C0070DA0 (BuildHwndList.c)
 *     _GetProp @ 0x1C0072450 (_GetProp.c)
 *     DesktopWindowFromDesktop @ 0x1C00BCE3C (DesktopWindowFromDesktop.c)
 *     IsNonImmersiveBand @ 0x1C00CEDF0 (IsNonImmersiveBand.c)
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
  __int64 v16; // r9
  __int64 v17; // rdx
  __int128 *Prop; // rax
  __int128 v19; // xmm0

  v2 = 0;
  *a2 = 0;
  v4 = DesktopWindowFromDesktop(a1);
  v5 = BuildHwndList(*(struct tagWND **)(v4 + 88), 2, 0LL);
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
            && (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v16 + 16) + 424LL) + 820LL) & 0x30) != 0x10 )
          {
            v17 = (unsigned __int16)atomCheckpointProp;
            *(_QWORD *)(v14 + 8) = *v7;
            *(_OWORD *)(v14 - 32) = *(_OWORD *)(*(_QWORD *)(v16 + 40) + 88LL);
            Prop = (__int128 *)GetProp(v16, v17, 1LL);
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
