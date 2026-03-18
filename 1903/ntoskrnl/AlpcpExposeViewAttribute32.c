/*
 * XREFs of AlpcpExposeViewAttribute32 @ 0x1406CAD6C
 * Callers:
 *     AlpcpExposeAttributes @ 0x1405DF780 (AlpcpExposeAttributes.c)
 * Callees:
 *     memset @ 0x1401D6BC0 (memset.c)
 *     AlpcpExposeViewAttribute @ 0x1406CADE0 (AlpcpExposeViewAttribute.c)
 */

__int64 __fastcall AlpcpExposeViewAttribute32(__int64 a1, __int64 a2, _DWORD *a3, _DWORD *a4)
{
  __int64 v7; // rcx
  __int64 result; // rax
  _DWORD v9[10]; // [rsp+20h] [rbp-28h] BYREF

  memset(v9, 0, 0x20uLL);
  result = AlpcpExposeViewAttribute(v7, a2, v9, a4);
  if ( (*a4 & 0x40000000) != 0 )
  {
    *a3 = v9[0];
    a3[1] = v9[2];
    a3[2] = v9[4];
    result = v9[6];
    a3[3] = v9[6];
  }
  return result;
}
