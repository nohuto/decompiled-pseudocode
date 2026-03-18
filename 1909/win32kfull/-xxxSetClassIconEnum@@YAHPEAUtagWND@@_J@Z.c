/*
 * XREFs of ?xxxSetClassIconEnum@@YAHPEAUtagWND@@_J@Z @ 0x1C023A730
 * Callers:
 *     xxxSetClassIcon @ 0x1C023A794 (xxxSetClassIcon.c)
 * Callees:
 *     xxxRedrawTitle @ 0x1C0017A40 (xxxRedrawTitle.c)
 *     IsToplevelWindowDesktopComposed @ 0x1C00291F8 (IsToplevelWindowDesktopComposed.c)
 *     DestroyWindowSmIcon @ 0x1C0038000 (DestroyWindowSmIcon.c)
 *     SendDwmIconChange @ 0x1C008CDB8 (SendDwmIconChange.c)
 */

__int64 __fastcall xxxSetClassIconEnum(__int64 BugCheckParameter2, __int64 a2, __int64 a3)
{
  __int64 v4; // rcx

  if ( *(_QWORD *)(BugCheckParameter2 + 136) == a2 )
  {
    v4 = *(_QWORD *)(BugCheckParameter2 + 40);
    if ( (*(_BYTE *)(v4 + 23) & 0x20) != 0 )
    {
      DestroyWindowSmIcon(BugCheckParameter2, a2, a3);
      v4 = *(_QWORD *)(BugCheckParameter2 + 40);
    }
    if ( !*(_QWORD *)(v4 + 264) )
      xxxRedrawTitle((struct tagWND *)BugCheckParameter2, 0xCu);
    if ( (unsigned int)IsToplevelWindowDesktopComposed(BugCheckParameter2) )
      SendDwmIconChange((__int64 *)BugCheckParameter2);
  }
  return 1LL;
}
