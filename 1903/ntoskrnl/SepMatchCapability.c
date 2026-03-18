/*
 * XREFs of SepMatchCapability @ 0x140086A44
 * Callers:
 *     SepMaximumAccessCheck @ 0x1400862C0 (SepMaximumAccessCheck.c)
 *     SepNormalAccessCheck @ 0x1400C7500 (SepNormalAccessCheck.c)
 *     SepMaximumAccessCheckEx @ 0x1401566F8 (SepMaximumAccessCheckEx.c)
 *     SepNormalAccessCheckEx @ 0x140156818 (SepNormalAccessCheckEx.c)
 * Callees:
 *     SepSidInTokenSidHash @ 0x140086AE4 (SepSidInTokenSidHash.c)
 */

_BYTE *__fastcall SepMatchCapability(__int64 a1, int a2, __int64 a3, int a4, _BYTE *a5, _DWORD *a6)
{
  _BYTE *result; // rax
  char v9; // [rsp+20h] [rbp-28h]
  char v10; // [rsp+28h] [rbp-20h]
  char v11; // [rsp+30h] [rbp-18h]

  v11 = 0;
  v10 = 0;
  v9 = 1;
  result = (_BYTE *)SepSidInTokenSidHash(a1 + 808, 0LL, a3, 0LL, v9, v10, v11);
  if ( (_BYTE)result )
  {
    *a6 |= a4 & a2;
    result = a5;
    *a5 = 1;
  }
  return result;
}
