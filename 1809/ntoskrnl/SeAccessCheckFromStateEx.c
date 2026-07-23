/*
 * XREFs of SeAccessCheckFromStateEx @ 0x140015700
 * Callers:
 *     SeAccessCheckFromState @ 0x1400155F0 (SeAccessCheckFromState.c)
 * Callees:
 *     SeAccessCheckWithHint @ 0x1400157C0 (SeAccessCheckWithHint.c)
 *     memset @ 0x1401D1980 (memset.c)
 */

__int64 __fastcall SeAccessCheckFromStateEx(
        int a1,
        __int64 a2,
        __int64 a3,
        int a4,
        int a5,
        __int64 a6,
        __int64 a7,
        char a8,
        __int64 a9,
        __int64 a10)
{
  int v14; // r9d
  _QWORD v16[4]; // [rsp+60h] [rbp-28h] BYREF

  memset(v16, 0, sizeof(v16));
  v16[2] = a2;
  if ( a3 )
  {
    LODWORD(v16[1]) = *(_DWORD *)(a3 + 196);
    v16[0] = a3;
  }
  LOBYTE(v14) = 1;
  return SeAccessCheckWithHint(a1, 0, (unsigned int)v16, v14, a4, a5, a6, a7, a8, a9, a10);
}
