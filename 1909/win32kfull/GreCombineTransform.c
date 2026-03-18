/*
 * XREFs of GreCombineTransform @ 0x1C0167304
 * Callers:
 *     NtGdiCombineTransform @ 0x1C00DD340 (NtGdiCombineTransform.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0163A80 (__security_check_cookie.c)
 *     memset @ 0x1C0168440 (memset.c)
 */

__int64 __fastcall GreCombineTransform(struct _XFORML *a1, __int64 a2, __int64 a3)
{
  unsigned int v6; // ebx
  _BYTE *v8; // [rsp+20h] [rbp-59h] BYREF
  int v9; // [rsp+2Ch] [rbp-4Dh]
  _BYTE v10[40]; // [rsp+30h] [rbp-49h] BYREF
  _BYTE v11[40]; // [rsp+58h] [rbp-21h] BYREF
  _BYTE v12[40]; // [rsp+80h] [rbp+7h] BYREF

  memset(v11, 0, 0x24uLL);
  memset(v10, 0, 0x24uLL);
  memset(v12, 0, 0x24uLL);
  vConvertXformToMatrix(a2, v11);
  vConvertXformToMatrix(a3, v10);
  v6 = 0;
  v8 = v12;
  v9 = 0;
  if ( EXFORMOBJ::bMultiply((EXFORMOBJ *)&v8, (struct MATRIX *)v11, (struct MATRIX *)v10, 0) )
  {
    *((_DWORD *)v8 + 8) = 32;
    EXFORMOBJ::vGetCoefficient((EXFORMOBJ *)&v8, a1);
    return 1;
  }
  return v6;
}
