/*
 * XREFs of ?CalcVirtualScreenClipRegion@@YAXPEAUHRGN__@@PEAUtagWND@@@Z @ 0x1C00642F8
 * Callers:
 *     _ExcludeUpdateRgn @ 0x1C0064044 (_ExcludeUpdateRgn.c)
 * Callees:
 *     GetMonitorRectForDpi @ 0x1C00737A0 (GetMonitorRectForDpi.c)
 *     __security_check_cookie @ 0x1C0139660 (__security_check_cookie.c)
 *     GetScreenRectForWindow @ 0x1C022B0E8 (GetScreenRectForWindow.c)
 */

void __fastcall CalcVirtualScreenClipRegion(HRGN a1, struct tagWND *a2, __int64 a3)
{
  __int64 v5; // rax
  unsigned __int16 v6; // di
  __int64 v7; // rdx
  __int64 DispInfo; // rax
  __int128 *MonitorRectForDpi; // rax
  __int64 EmptyRgn; // rbp
  __int64 i; // rbx
  _BYTE v12[16]; // [rsp+20h] [rbp-48h] BYREF
  __int128 v13; // [rsp+30h] [rbp-38h] BYREF

  v5 = *(_QWORD *)(*((_QWORD *)a2 + 2) + 448LL);
  if ( v5
    && (*(_DWORD *)(**(_QWORD **)(v5 + 8) + 52LL) & 1) != 0
    && (v6 = (*(_DWORD *)(*((_QWORD *)a2 + 5) + 288LL) >> 8) & 0x1FF) != 0 )
  {
    SetEmptyRgn(a1, a2, a3);
    if ( *(_DWORD *)*gpDispInfo == 1 )
    {
      DispInfo = GetDispInfo();
      MonitorRectForDpi = (__int128 *)GetMonitorRectForDpi(v12, *(_QWORD *)(DispInfo + 96), v6);
LABEL_6:
      v13 = *MonitorRectForDpi;
      SetRectRgnIndirect(a1, &v13);
      return;
    }
    EmptyRgn = CreateEmptyRgn(gpDispInfo, v7);
    if ( !EmptyRgn )
    {
      MonitorRectForDpi = (__int128 *)GetScreenRectForWindow(v12, a2);
      goto LABEL_6;
    }
    for ( i = *(_QWORD *)(gpDispInfo + 104LL); i; i = *(_QWORD *)(i + 56) )
    {
      if ( (*(_DWORD *)(*(_QWORD *)(i + 40) + 24LL) & 1) != 0 )
      {
        v13 = *(_OWORD *)GetMonitorRectForDpi(v12, i, v6);
        SetRectRgnIndirect(EmptyRgn, &v13);
        GreCombineRgn(a1, a1, EmptyRgn, 2LL);
      }
    }
    GreDeleteObject(EmptyRgn);
  }
  else
  {
    GreCombineRgn(a1, *(_QWORD *)(gpDispInfo + 120LL), 0LL, 5LL);
  }
}
