/*
 * XREFs of zzzResetSharedDesktops @ 0x1C00EC900
 * Callers:
 *     <none>
 * Callees:
 *     ?zzzInternalSetCursorPos@@YAXHHKW4_SetCursorPosReason@@@Z @ 0x1C00456D0 (-zzzInternalSetCursorPos@@YAXHHKW4_SetCursorPosReason@@@Z.c)
 *     zzzLockDisplayAreaAndInvalidateDCCache @ 0x1C00C3604 (zzzLockDisplayAreaAndInvalidateDCCache.c)
 *     CalcVisRgn @ 0x1C00C4BF0 (CalcVisRgn.c)
 *     zzzUpdateWindowsAfterModeChange @ 0x1C00ED094 (zzzUpdateWindowsAfterModeChange.c)
 *     __security_check_cookie @ 0x1C0162AB0 (__security_check_cookie.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall zzzResetSharedDesktops(__int64 a1, unsigned __int64 a2, unsigned int a3)
{
  unsigned int v4; // esi
  __int64 v5; // rbx
  __int64 v6; // rax
  __int64 v7; // r9
  int v8; // r10d
  int v9; // r11d
  unsigned __int64 v10; // r8
  __int64 v11; // rcx
  __int64 v12; // rdx
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 *v15; // rcx
  _DWORD *v16; // r9
  __int64 v18; // [rsp+20h] [rbp-28h]
  HRGN v19[2]; // [rsp+28h] [rbp-20h] BYREF

  v4 = a2;
  v5 = a1;
  v6 = *(_QWORD *)(a1 + 40);
  *(_OWORD *)v19 = *(_OWORD *)(*gpDispInfo + 24LL);
  v7 = *(_QWORD *)(v6 + 16);
  if ( v7 )
  {
    v8 = (int)v19[0];
    v9 = (int)v19[1];
    a2 = (unsigned __int64)v19[0] >> 32;
    v10 = (unsigned __int64)v19[1] >> 32;
    do
    {
      v11 = *(_QWORD *)(*(_QWORD *)(v7 + 8) + 24LL);
      *(_DWORD *)(*(_QWORD *)(v11 + 40) + 88LL) = v8;
      *(_DWORD *)(*(_QWORD *)(v11 + 40) + 92LL) = a2;
      *(_DWORD *)(*(_QWORD *)(v11 + 40) + 96LL) = v9;
      *(_DWORD *)(*(_QWORD *)(v11 + 40) + 100LL) = v10;
      a1 = *(_QWORD *)(*(_QWORD *)(v7 + 8) + 24LL);
      *(_DWORD *)(*(_QWORD *)(a1 + 40) + 104LL) = v8;
      *(_DWORD *)(*(_QWORD *)(a1 + 40) + 108LL) = a2;
      *(_DWORD *)(*(_QWORD *)(a1 + 40) + 112LL) = v9;
      *(_DWORD *)(*(_QWORD *)(a1 + 40) + 116LL) = v10;
      v7 = *(_QWORD *)(v7 + 32);
    }
    while ( v7 );
  }
  v19[0] = (HRGN)CreateEmptyRgn(a1, a2);
  CalcVisRgn(v19, *(_QWORD *)(*(_QWORD *)(v5 + 8) + 24LL), *(struct tagWND **)(*(_QWORD *)(v5 + 8) + 24LL), 1u);
  GreLockVisRgn(*(_QWORD *)(gpDispInfo + 40LL), v12, v13, v14);
  GreSelectVisRgn(*(_QWORD *)(gpDispInfo + 56LL), v19[0], 1LL);
  GreUnlockVisRgn(*(_QWORD *)(gpDispInfo + 40LL));
  zzzUpdateWindowsAfterModeChange(v4, a3);
  v15 = *(__int64 **)(v5 + 8);
  if ( (*(_DWORD *)(*v15 + 64) & 1) == 0 )
    zzzLockDisplayAreaAndInvalidateDCCache(v15[3], 0, 0LL);
  CCursorClip::ClearClip(gpCursorClip);
  v16 = *(_DWORD **)(*(_QWORD *)(gpDispInfo + 96LL) + 40LL);
  LODWORD(v18) = (v16[9] - v16[7]) / 2;
  HIDWORD(v18) = (v16[10] - v16[8]) / 2;
  *(_QWORD *)gptSSCursor = v18;
  return zzzInternalSetCursorPos(v18, HIDWORD(v18), 2, 0);
}
