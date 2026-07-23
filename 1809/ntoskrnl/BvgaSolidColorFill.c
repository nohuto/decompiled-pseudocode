/*
 * XREFs of BvgaSolidColorFill @ 0x14027E4B0
 * Callers:
 *     <none>
 * Callees:
 *     HeadlessDispatch @ 0x140186250 (HeadlessDispatch.c)
 *     BvgaAcquireLock @ 0x14027E0C0 (BvgaAcquireLock.c)
 *     BvgaReleaseLock @ 0x14027E380 (BvgaReleaseLock.c)
 */

void __fastcall BvgaSolidColorFill(unsigned int a1, unsigned int a2, unsigned int a3, unsigned int a4, int a5)
{
  _DWORD v9[6]; // [rsp+30h] [rbp-18h] BYREF

  if ( !BvgaDisplayState )
  {
    BvgaAcquireLock();
    if ( BvgaBootDriverInstalled )
      VidSolidColorFill(a1, a2, a3, a4, a5);
    v9[0] = 37;
    BvgaTerminalBkgdColor = 40;
    v9[1] = 40;
    HeadlessDispatch(9LL, (__int64)v9, 8LL, 0LL, 0LL);
    HeadlessDispatch(4LL, 0LL, 0LL, 0LL, 0LL);
    BvgaReleaseLock();
  }
}
