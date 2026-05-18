/*
 * XREFs of sub_18002DE44 @ 0x18002DE44
 * Callers:
 *     sub_18002EC2C @ 0x18002EC2C (sub_18002EC2C.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x180126108 (--2@YAPEAX_K@Z.c)
 */

__int64 __fastcall sub_18002DE44(__int64 a1, __int64 a2, int a3, int a4)
{
  _QWORD *v8; // rax
  _QWORD *v9; // rcx
  __int64 result; // rax

  v8 = operator new(0x1CuLL);
  v9 = v8;
  if ( v8 )
  {
    *(_OWORD *)v8 = *(_OWORD *)a2;
    v8[2] = *(_QWORD *)(a2 + 16);
    *((_DWORD *)v8 + 6) = *(_DWORD *)(a2 + 24);
  }
  else
  {
    v9 = 0LL;
  }
  *(_QWORD *)a1 = v9;
  result = a1;
  *(_DWORD *)(a1 + 8) = a3;
  *(_DWORD *)(a1 + 12) = a4;
  return result;
}
