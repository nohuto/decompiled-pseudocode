/*
 * XREFs of _GetMenuState @ 0x1C000B0C4
 * Callers:
 *     ?xxxDWP_NCMouse@@YAXPEAUtagWND@@II_J@Z @ 0x1C000AF90 (-xxxDWP_NCMouse@@YAXPEAUtagWND@@II_J@Z.c)
 *     ?xxxDWP_SetCursor@@YAHPEAUtagWND@@PEAUHWND__@@HI@Z @ 0x1C0021D64 (-xxxDWP_SetCursor@@YAHPEAUtagWND@@PEAUHWND__@@HI@Z.c)
 *     xxxHandleNCMouseGuys @ 0x1C01359C0 (xxxHandleNCMouseGuys.c)
 *     xxxMNLoop @ 0x1C01E3580 (xxxMNLoop.c)
 * Callees:
 *     MNLookUpItem @ 0x1C0039D7C (MNLookUpItem.c)
 */

__int64 __fastcall GetMenuState(__int64 a1, __int64 a2)
{
  _QWORD *v2; // rax
  unsigned int v3; // r8d
  __int64 v4; // rax

  v2 = (_QWORD *)MNLookUpItem(a1, a2, 0LL, 0LL);
  if ( !v2 )
    return 0xFFFFFFFFLL;
  v3 = *(_DWORD *)*v2 | *(_DWORD *)(*v2 + 4LL);
  v4 = v2[2];
  if ( v4 )
    return (*(_DWORD *)(*(_QWORD *)(v4 + 40) + 44LL) << 8) + (v3 & 0xEF | 0x10);
  return v3;
}
