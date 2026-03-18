/*
 * XREFs of GreCombineTransform @ 0x1C0162168
 * Callers:
 *     NtGdiCombineTransform @ 0x1C00F9220 (NtGdiCombineTransform.c)
 * Callees:
 *     __security_check_cookie @ 0x1C015AF60 (__security_check_cookie.c)
 */

__int64 __fastcall GreCombineTransform(struct _XFORML *a1, __int64 a2, __int64 a3)
{
  unsigned int v5; // ebx
  char *v7; // [rsp+20h] [rbp-98h] BYREF
  int v8; // [rsp+2Ch] [rbp-8Ch]
  _BYTE v9[40]; // [rsp+30h] [rbp-88h] BYREF
  _BYTE v10[40]; // [rsp+58h] [rbp-60h] BYREF
  char v11; // [rsp+80h] [rbp-38h] BYREF

  vConvertXformToMatrix(a2, v10);
  vConvertXformToMatrix(a3, v9);
  v5 = 0;
  v7 = &v11;
  v8 = 0;
  if ( EXFORMOBJ::bMultiply((EXFORMOBJ *)&v7, (struct MATRIX *)v10, (struct MATRIX *)v9, 0) )
  {
    *((_DWORD *)v7 + 8) = 32;
    EXFORMOBJ::vGetCoefficient((EXFORMOBJ *)&v7, a1);
    return 1;
  }
  return v5;
}
