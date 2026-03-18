/*
 * XREFs of xxxToUnicodeEx @ 0x1C0065210
 * Callers:
 *     NtUserToUnicodeEx @ 0x1C0065010 (NtUserToUnicodeEx.c)
 *     ?ForwardInputToISM@CKeyboardProcessor@@SAXHHEGGGPEAX@Z @ 0x1C014C2F0 (-ForwardInputToISM@CKeyboardProcessor@@SAXHHEGGGPEAX@Z.c)
 * Callees:
 *     xxxInternalToUnicode @ 0x1C0065320 (xxxInternalToUnicode.c)
 *     __security_check_cookie @ 0x1C00A63D0 (__security_check_cookie.c)
 *     memset @ 0x1C00AF780 (memset.c)
 */

__int64 __fastcall xxxToUnicodeEx(unsigned int a1, unsigned int a2, char *a3, __int64 a4, int a5, int a6, __int64 a7)
{
  int v11; // r8d
  unsigned __int8 v12; // al
  char v13; // r10
  char v14; // dl
  unsigned __int64 v15; // rcx
  char v16; // r9
  int v17; // eax
  int v18; // eax
  char v19; // r9
  int v20; // eax
  _BYTE v22[16]; // [rsp+40h] [rbp-88h] BYREF
  _BYTE v23[64]; // [rsp+50h] [rbp-78h] BYREF

  memset(v23, 0, sizeof(v23));
  v11 = 0;
  v12 = 0;
  do
  {
    v13 = *a3;
    v14 = v12 & 3;
    v15 = (unsigned __int64)v12 >> 2;
    v16 = 2 * (v12 & 3);
    v17 = (unsigned __int8)v23[v15];
    if ( *a3 < 0 )
      v18 = v17 | (1 << v16);
    else
      v18 = v17 & ~(1 << v16);
    v23[v15] = v18;
    v19 = 2 * v14 + 1;
    if ( (v13 & 1) != 0 )
      v20 = (unsigned __int8)v18 | (1 << v19);
    else
      v20 = (unsigned __int8)v18 & ~(1 << v19);
    ++v11;
    v23[v15] = v20;
    ++a3;
    v12 = v11;
  }
  while ( v11 < 256 );
  return xxxInternalToUnicode(a1, a2, v23, a4, a5, a6, v22, a7);
}
