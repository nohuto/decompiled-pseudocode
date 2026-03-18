/*
 * XREFs of ?SetPenHotKeys@@YAXXZ @ 0x1C0163CF4
 * Callers:
 *     RawInputThread @ 0x1C00D7680 (RawInputThread.c)
 * Callees:
 *     _RegisterHotKey @ 0x1C00882EC (_RegisterHotKey.c)
 *     ?Feature_PenTailDockEvents__private_IsEnabled@@YAHXZ @ 0x1C0163BF0 (-Feature_PenTailDockEvents__private_IsEnabled@@YAHXZ.c)
 */

void SetPenHotKeys(void)
{
  ULONG_PTR BugCheckParameter2; // [rsp+20h] [rbp-18h]
  ULONG_PTR BugCheckParameter2a; // [rsp+20h] [rbp-18h]
  ULONG_PTR BugCheckParameter2b; // [rsp+20h] [rbp-18h]
  ULONG_PTR BugCheckParameter2c; // [rsp+20h] [rbp-18h]
  ULONG_PTR BugCheckParameter2d; // [rsp+20h] [rbp-18h]

  if ( Feature_PenTailDockEvents__private_IsEnabled() )
  {
    LODWORD(BugCheckParameter2) = 131;
    RegisterHotKey(0LL, (__int64)PenHotkeyCallback, 30LL, 16904LL, BugCheckParameter2);
    LODWORD(BugCheckParameter2a) = 130;
    RegisterHotKey(0LL, (__int64)PenHotkeyCallback, 31LL, 16904LL, BugCheckParameter2a);
    LODWORD(BugCheckParameter2b) = 129;
    RegisterHotKey(0LL, (__int64)PenHotkeyCallback, 32LL, 16904LL, BugCheckParameter2b);
    LODWORD(BugCheckParameter2c) = 131;
    RegisterHotKey(0LL, (__int64)PenHotkeyCallback, 33LL, 16906LL, BugCheckParameter2c);
    LODWORD(BugCheckParameter2d) = 130;
    RegisterHotKey(0LL, (__int64)PenHotkeyCallback, 34LL, 16906LL, BugCheckParameter2d);
  }
}
