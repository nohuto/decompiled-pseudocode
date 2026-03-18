/*
 * XREFs of ?SetWindowArrangementHotKeys@@YAXXZ @ 0x1C00774EC
 * Callers:
 *     RawInputThread @ 0x1C0077DE0 (RawInputThread.c)
 * Callees:
 *     _RegisterHotKey @ 0x1C008817C (_RegisterHotKey.c)
 */

void SetWindowArrangementHotKeys(void)
{
  _DWORD *v0; // rbx
  __int64 v1; // rdi
  ULONG_PTR BugCheckParameter2; // [rsp+20h] [rbp-18h]

  v0 = &unk_1C02D8614;
  v1 = 14LL;
  do
  {
    LODWORD(BugCheckParameter2) = v0[1];
    RegisterHotKey(0LL, BugCheckParameter2);
    v0 += 4;
    --v1;
  }
  while ( v1 );
}
