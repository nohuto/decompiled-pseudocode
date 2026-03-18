/*
 * XREFs of _GetMenuState @ 0x1C00BC924
 * Callers:
 *     ?xxxDWP_SetCursor@@YAHPEAUtagWND@@PEAUHWND__@@HI@Z @ 0x1C0069EDC (-xxxDWP_SetCursor@@YAHPEAUtagWND@@PEAUHWND__@@HI@Z.c)
 *     ?xxxDWP_NCMouse@@YAXPEAUtagWND@@II_J@Z @ 0x1C00BC7F0 (-xxxDWP_NCMouse@@YAXPEAUtagWND@@II_J@Z.c)
 *     xxxHandleNCMouseGuys @ 0x1C0156CFC (xxxHandleNCMouseGuys.c)
 *     xxxMNLoop @ 0x1C0209440 (xxxMNLoop.c)
 * Callees:
 *     MNLookUpItem @ 0x1C0021208 (MNLookUpItem.c)
 */

__int64 __fastcall GetMenuState(__int64 a1, __int64 a2)
{
  _QWORD *v2; // rax
  unsigned int v3; // r8d
  __int64 v4; // rax

  v2 = MNLookUpItem(a1, a2, 0, 0LL);
  if ( !v2 )
    return 0xFFFFFFFFLL;
  v3 = *(_DWORD *)*v2 | *(_DWORD *)(*v2 + 4LL);
  v4 = v2[2];
  if ( v4 )
    return (*(_DWORD *)(*(_QWORD *)(v4 + 40) + 44LL) << 8) + (v3 & 0xEF | 0x10);
  return v3;
}
