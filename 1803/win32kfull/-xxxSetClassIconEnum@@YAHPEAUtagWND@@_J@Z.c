/*
 * XREFs of ?xxxSetClassIconEnum@@YAHPEAUtagWND@@_J@Z @ 0x1C01F9FB0
 * Callers:
 *     xxxSetClassIcon @ 0x1C01FA014 (xxxSetClassIcon.c)
 * Callees:
 *     IsToplevelWindowDesktopComposed @ 0x1C002DEDC (IsToplevelWindowDesktopComposed.c)
 *     DestroyWindowSmIcon @ 0x1C006AE84 (DestroyWindowSmIcon.c)
 *     xxxRedrawTitle @ 0x1C006E8C0 (xxxRedrawTitle.c)
 *     SendDwmIconChange @ 0x1C00C4848 (SendDwmIconChange.c)
 */

__int64 __fastcall xxxSetClassIconEnum(struct tagWND *a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rcx

  if ( *((_QWORD *)a1 + 14) == a2 )
  {
    v4 = *((_QWORD *)a1 + 5);
    if ( (*(_BYTE *)(v4 + 23) & 0x20) != 0 )
    {
      DestroyWindowSmIcon((__int64)a1, a2, a3);
      v4 = *((_QWORD *)a1 + 5);
    }
    if ( !*(_QWORD *)(v4 + 264) )
      xxxRedrawTitle((unsigned __int64 *)a1, 12);
    if ( (unsigned int)IsToplevelWindowDesktopComposed((__int64)a1) )
      SendDwmIconChange((ULONG_PTR)a1);
  }
  return 1LL;
}
