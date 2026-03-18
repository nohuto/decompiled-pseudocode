/*
 * XREFs of zzzResetSharedDesktops @ 0x1C00E79D0
 * Callers:
 *     <none>
 * Callees:
 *     CalcVisRgn @ 0x1C002B5D0 (CalcVisRgn.c)
 *     zzzLockDisplayAreaAndInvalidateDCCache @ 0x1C0033D9C (zzzLockDisplayAreaAndInvalidateDCCache.c)
 *     zzzInternalSetCursorPos @ 0x1C0067330 (zzzInternalSetCursorPos.c)
 *     zzzUpdateWindowsAfterModeChange @ 0x1C00E7FA8 (zzzUpdateWindowsAfterModeChange.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall zzzResetSharedDesktops(__int64 a1, unsigned __int64 a2, unsigned int a3)
{
  unsigned int v4; // esi
  __int64 v5; // rbx
  __int64 v6; // rax
  __int64 v7; // r9
  __int128 v8; // kr00_16
  __int64 v9; // r8
  __int64 v10; // rcx
  __int64 *v11; // rcx
  _DWORD *v12; // r9
  HRGN EmptyRgn; // [rsp+20h] [rbp-28h] BYREF
  __int128 v15; // [rsp+28h] [rbp-20h]

  v4 = a2;
  v5 = a1;
  v6 = *(_QWORD *)(a1 + 40);
  v15 = *(_OWORD *)(*gpDispInfo + 24LL);
  v7 = *(_QWORD *)(v6 + 16);
  if ( v7 )
  {
    v8 = v15;
    a2 = DWORD1(v15);
    v9 = HIDWORD(*((_QWORD *)&v15 + 1));
    do
    {
      v10 = *(_QWORD *)(*(_QWORD *)(v7 + 8) + 24LL);
      *(_DWORD *)(*(_QWORD *)(v10 + 40) + 88LL) = v8;
      *(_DWORD *)(*(_QWORD *)(v10 + 40) + 92LL) = a2;
      *(_DWORD *)(*(_QWORD *)(v10 + 40) + 96LL) = DWORD2(v8);
      *(_DWORD *)(*(_QWORD *)(v10 + 40) + 100LL) = v9;
      a1 = *(_QWORD *)(*(_QWORD *)(v7 + 8) + 24LL);
      *(_DWORD *)(*(_QWORD *)(a1 + 40) + 104LL) = v8;
      *(_DWORD *)(*(_QWORD *)(a1 + 40) + 108LL) = a2;
      *(_DWORD *)(*(_QWORD *)(a1 + 40) + 112LL) = DWORD2(v8);
      *(_DWORD *)(*(_QWORD *)(a1 + 40) + 116LL) = v9;
      v7 = *(_QWORD *)(v7 + 32);
    }
    while ( v7 );
  }
  EmptyRgn = (HRGN)CreateEmptyRgn(a1, a2);
  CalcVisRgn(&EmptyRgn, *(_QWORD *)(*(_QWORD *)(v5 + 8) + 24LL), *(struct tagWND **)(*(_QWORD *)(v5 + 8) + 24LL), 1u);
  GreLockVisRgn(*(_QWORD *)(gpDispInfo + 40LL));
  GreSelectVisRgn(*(_QWORD *)(gpDispInfo + 56LL), EmptyRgn, 1LL);
  GreUnlockVisRgn(*(_QWORD *)(gpDispInfo + 40LL));
  zzzUpdateWindowsAfterModeChange(v4, a3);
  v11 = *(__int64 **)(v5 + 8);
  if ( (*(_DWORD *)(*v11 + 52) & 1) == 0 )
    zzzLockDisplayAreaAndInvalidateDCCache(v11[3], 0, 0LL);
  CCursorClip::ClearClip(gpCursorClip);
  v12 = *(_DWORD **)(*(_QWORD *)(gpDispInfo + 96LL) + 40LL);
  LODWORD(v15) = (v12[9] - v12[7]) / 2;
  DWORD1(v15) = (v12[10] - v12[8]) / 2;
  *(_QWORD *)gptSSCursor = v15;
  return zzzInternalSetCursorPos(v15, DWORD1(v15), 2, 0);
}
