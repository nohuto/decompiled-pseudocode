/*
 * XREFs of ?SetWinlogonHotKeys@@YAXXZ @ 0x1C0131290
 * Callers:
 *     RawInputThread @ 0x1C00D2920 (RawInputThread.c)
 * Callees:
 *     _RegisterHotKey @ 0x1C00A50DC (_RegisterHotKey.c)
 */

void SetWinlogonHotKeys(void)
{
  ULONG_PTR BugCheckParameter2; // [rsp+20h] [rbp-18h]
  ULONG_PTR BugCheckParameter2a; // [rsp+20h] [rbp-18h]
  ULONG_PTR BugCheckParameter2b; // [rsp+20h] [rbp-18h]
  ULONG_PTR BugCheckParameter2c; // [rsp+20h] [rbp-18h]
  ULONG_PTR BugCheckParameter2d; // [rsp+20h] [rbp-18h]
  ULONG_PTR BugCheckParameter2e; // [rsp+20h] [rbp-18h]
  ULONG_PTR BugCheckParameter2f; // [rsp+20h] [rbp-18h]
  ULONG_PTR BugCheckParameter2g; // [rsp+20h] [rbp-18h]
  ULONG_PTR BugCheckParameter2h; // [rsp+20h] [rbp-18h]
  ULONG_PTR BugCheckParameter2i; // [rsp+20h] [rbp-18h]
  ULONG_PTR BugCheckParameter2j; // [rsp+20h] [rbp-18h]
  ULONG_PTR BugCheckParameter2k; // [rsp+20h] [rbp-18h]
  ULONG_PTR BugCheckParameter2l; // [rsp+20h] [rbp-18h]
  ULONG_PTR BugCheckParameter2m; // [rsp+20h] [rbp-18h]
  ULONG_PTR BugCheckParameter2n; // [rsp+20h] [rbp-18h]
  ULONG_PTR BugCheckParameter2o; // [rsp+20h] [rbp-18h]
  ULONG_PTR BugCheckParameter2p; // [rsp+20h] [rbp-18h]
  ULONG_PTR BugCheckParameter2q; // [rsp+20h] [rbp-18h]
  ULONG_PTR BugCheckParameter2r; // [rsp+20h] [rbp-18h]
  ULONG_PTR BugCheckParameter2s; // [rsp+20h] [rbp-18h]
  ULONG_PTR BugCheckParameter2t; // [rsp+20h] [rbp-18h]
  ULONG_PTR BugCheckParameter2u; // [rsp+20h] [rbp-18h]
  ULONG_PTR BugCheckParameter2v; // [rsp+20h] [rbp-18h]
  ULONG_PTR BugCheckParameter2w; // [rsp+20h] [rbp-18h]
  ULONG_PTR BugCheckParameter2x; // [rsp+20h] [rbp-18h]

  LODWORD(BugCheckParameter2) = 46;
  RegisterHotKey(0LL, (__int64)WinlogonHotkeyCallback, 0LL, 32771LL, BugCheckParameter2);
  LODWORD(BugCheckParameter2a) = 27;
  RegisterHotKey(0LL, (__int64)WinlogonHotkeyCallback, 4LL, 6LL, BugCheckParameter2a);
  LODWORD(BugCheckParameter2b) = 76;
  RegisterHotKey(0LL, (__int64)WinlogonHotkeyCallback, 5LL, 32776LL, BugCheckParameter2b);
  LODWORD(BugCheckParameter2c) = 85;
  RegisterHotKey(0LL, (__int64)WinlogonHotkeyCallback, 6LL, 8200LL, BugCheckParameter2c);
  LODWORD(BugCheckParameter2d) = 13;
  RegisterHotKey(0LL, (__int64)WinlogonHotkeyCallback, 13LL, 24586LL, BugCheckParameter2d);
  LODWORD(BugCheckParameter2e) = 13;
  RegisterHotKey(0LL, (__int64)WinlogonHotkeyCallback, 14LL, 24584LL, BugCheckParameter2e);
  LODWORD(BugCheckParameter2f) = 187;
  RegisterHotKey(0LL, (__int64)WinlogonHotkeyCallback, 12LL, 24584LL, BugCheckParameter2f);
  LODWORD(BugCheckParameter2g) = 107;
  RegisterHotKey(0LL, (__int64)WinlogonHotkeyCallback, 12LL, 24584LL, BugCheckParameter2g);
  LODWORD(BugCheckParameter2h) = 125;
  RegisterHotKey(0LL, (__int64)WinlogonHotkeyCallback, 10LL, 24586LL, BugCheckParameter2h);
  LODWORD(BugCheckParameter2i) = 80;
  RegisterHotKey(0LL, (__int64)WinlogonHotkeyCallback, 7LL, 8200LL, BugCheckParameter2i);
  LODWORD(BugCheckParameter2j) = 80;
  RegisterHotKey(0LL, (__int64)WinlogonHotkeyCallback, 8LL, 8202LL, BugCheckParameter2j);
  LODWORD(BugCheckParameter2k) = 80;
  RegisterHotKey(0LL, (__int64)WinlogonHotkeyCallback, 9LL, 8204LL, BugCheckParameter2k);
  LODWORD(BugCheckParameter2l) = 79;
  RegisterHotKey(0LL, (__int64)RotationLockCallback, 4294967284LL, 8200LL, BugCheckParameter2l);
  LODWORD(BugCheckParameter2m) = 32;
  RegisterHotKey(0LL, (__int64)WinlogonWinSpaceCallback, 4294967288LL, 8200LL, BugCheckParameter2m);
  LODWORD(BugCheckParameter2n) = 32;
  RegisterHotKey(0LL, (__int64)WinlogonWinSpaceCallback, 4294967287LL, 8202LL, BugCheckParameter2n);
  LODWORD(BugCheckParameter2o) = 32;
  RegisterHotKey(0LL, (__int64)WinlogonWinSpaceCallback, 4294967286LL, 8204LL, BugCheckParameter2o);
  LODWORD(BugCheckParameter2p) = 32;
  RegisterHotKey(0LL, (__int64)WinlogonWinSpaceCallback, 4294967285LL, 8206LL, BugCheckParameter2p);
  LODWORD(BugCheckParameter2q) = 133;
  RegisterHotKey(0LL, (__int64)WinlogonHotkeyCallback, 7LL, 8200LL, BugCheckParameter2q);
  LODWORD(BugCheckParameter2r) = 133;
  RegisterHotKey(0LL, (__int64)WinlogonHotkeyCallback, 8LL, 8202LL, BugCheckParameter2r);
  LODWORD(BugCheckParameter2s) = 133;
  RegisterHotKey(0LL, (__int64)WinlogonHotkeyCallback, 9LL, 8204LL, BugCheckParameter2s);
  LODWORD(BugCheckParameter2t) = 125;
  RegisterHotKey(0LL, (__int64)RotationLockCallback, 4294967283LL, 24584LL, BugCheckParameter2t);
  LODWORD(BugCheckParameter2u) = 127;
  RegisterHotKey(0LL, (__int64)WinlogonHotkeyCallback, 11LL, 26632LL, BugCheckParameter2u);
  LODWORD(BugCheckParameter2v) = 135;
  RegisterHotKey(0LL, (__int64)PTPEnableHotkeyCallback, 4294967282LL, 18442LL, BugCheckParameter2v);
  LODWORD(BugCheckParameter2w) = 66;
  RegisterHotKey(0LL, (__int64)DisplayDiagHotkeyCallback, 4294967281LL, 24590LL, BugCheckParameter2w);
  LODWORD(BugCheckParameter2x) = 128;
  RegisterHotKey(0LL, (__int64)DisplayDiagHotkeyCallback, 4294967280LL, 26632LL, BugCheckParameter2x);
}
