/*
 * XREFs of ?xxxSetClassIconEnum@@YAHPEAUtagWND@@_J@Z @ 0x1C023AD50
 * Callers:
 *     xxxSetClassIcon @ 0x1C023ADB4 (xxxSetClassIcon.c)
 * Callees:
 *     xxxRedrawTitle @ 0x1C0017BF0 (xxxRedrawTitle.c)
 *     IsToplevelWindowDesktopComposed @ 0x1C0022D88 (IsToplevelWindowDesktopComposed.c)
 *     SendDwmIconChange @ 0x1C00483E8 (SendDwmIconChange.c)
 *     DestroyWindowSmIcon @ 0x1C00972D0 (DestroyWindowSmIcon.c)
 */

__int64 __fastcall xxxSetClassIconEnum(struct tagWND *a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rcx

  if ( *((_QWORD *)a1 + 17) == a2 )
  {
    v4 = *((_QWORD *)a1 + 5);
    if ( (*(_BYTE *)(v4 + 23) & 0x20) != 0 )
    {
      DestroyWindowSmIcon((__int64)a1, a2, a3);
      v4 = *((_QWORD *)a1 + 5);
    }
    if ( !*(_QWORD *)(v4 + 264) )
      xxxRedrawTitle(a1, 0xCu);
    if ( (unsigned int)IsToplevelWindowDesktopComposed((__int64)a1) )
      SendDwmIconChange((ULONG_PTR)a1);
  }
  return 1LL;
}
