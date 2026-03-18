/*
 * XREFs of MiCreatePteWsle @ 0x140A155B0
 * Callers:
 *     <none>
 * Callees:
 *     MiWriteWsle @ 0x1400FA424 (MiWriteWsle.c)
 */

__int64 __fastcall MiCreatePteWsle(__int64 a1, _BYTE *a2, __int64 a3)
{
  if ( (int)a3 < 1 && (*a2 & 1) != 0 )
  {
    LOBYTE(a3) = 9;
    MiWriteWsle(a1, (__int64)((_QWORD)a2 << 25) >> 16, a3);
  }
  return 0LL;
}
