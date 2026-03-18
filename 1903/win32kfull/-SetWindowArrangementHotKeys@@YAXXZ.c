/*
 * XREFs of ?SetWindowArrangementHotKeys@@YAXXZ @ 0x1C00D6D80
 * Callers:
 *     RawInputThread @ 0x1C00D7680 (RawInputThread.c)
 * Callees:
 *     _RegisterHotKey @ 0x1C00882EC (_RegisterHotKey.c)
 */

void SetWindowArrangementHotKeys(void)
{
  unsigned int *v0; // rbx
  __int64 v1; // rdi
  __int64 v2; // r9
  ULONG_PTR BugCheckParameter2; // [rsp+20h] [rbp-18h]

  v0 = (unsigned int *)&unk_1C02DADD4;
  v1 = 14LL;
  do
  {
    v2 = *v0;
    LODWORD(v2) = v2 | 0x4000;
    LODWORD(BugCheckParameter2) = v0[1];
    RegisterHotKey(0LL, (__int64)WindowArrangementHotKeyCallback, *(v0 - 1), v2, BugCheckParameter2);
    v0 += 4;
    --v1;
  }
  while ( v1 );
}
