/*
 * XREFs of RtlpQueryRunLevel @ 0x1800320F8
 * Callers:
 *     RtlQueryInformationActivationContext @ 0x18002DE20 (RtlQueryInformationActivationContext.c)
 * Callees:
 *     RtlpLocateActivationContextSectionForQuery @ 0x18002FF04 (RtlpLocateActivationContextSectionForQuery.c)
 *     DbgPrintEx @ 0x18004D290 (DbgPrintEx.c)
 */

__int64 __fastcall RtlpQueryRunLevel(__int64 a1, _DWORD *a2, _DWORD *a3)
{
  unsigned int v3; // ebx
  __int64 v6; // rax
  unsigned int v7; // r8d
  char *v8; // rdx
  __int64 v9; // rax
  _BYTE *v10; // rcx
  __int64 v11; // rax
  __int64 v13; // [rsp+38h] [rbp-90h]
  int v14; // [rsp+60h] [rbp-68h] BYREF
  __int64 v15; // [rsp+68h] [rbp-60h] BYREF
  size_t v16[2]; // [rsp+70h] [rbp-58h] BYREF
  __int64 v17; // [rsp+80h] [rbp-48h] BYREF
  unsigned int v18; // [rsp+D0h] [rbp+8h] BYREF
  int v19; // [rsp+E8h] [rbp+20h] BYREF

  v18 = -1073741595;
  v3 = 0;
  v19 = 0;
  RtlpLocateActivationContextSectionForQuery(&v19, (int *)&v18, &v17, 0x40uLL, v16, 0x40uLL, a2, v13, 1u, &v15, &v14);
  if ( v19 != 1 )
    return v18;
  v6 = (unsigned int)a2[6];
  v7 = *(_DWORD *)((char *)a2 + v6 + 8);
  v8 = (char *)a2 + *(unsigned int *)((char *)a2 + v6 + 12);
  v9 = 1LL;
  if ( v7 > 1 )
  {
    v10 = v8 + 24;
    do
    {
      if ( (*v10 & 2) != 0 )
        break;
      v9 = (unsigned int)(v9 + 1);
      v10 += 24;
    }
    while ( (unsigned int)v9 < v7 );
  }
  if ( (_DWORD)v9 == v7 )
  {
    DbgPrintEx(
      0x33u,
      0,
      "SXS: %s() found activation context data at %p with assembly roster that has no root\n",
      "RtlpQueryRunLevel",
      a2);
    return (unsigned int)-1072365565;
  }
  v11 = *(unsigned int *)&v8[24 * v9 + 16];
  if ( *(_DWORD *)((char *)a2 + v11) != 108 )
  {
    DbgPrintEx(0x33u, 0, "SXS: %s() found activation context data at %p with wrong format\n", "RtlpQueryRunLevel", a2);
    return (unsigned int)-1072365565;
  }
  *a3 = 0;
  a3[1] = *(_DWORD *)((char *)a2 + v11 + 100);
  a3[2] = *(_DWORD *)((char *)a2 + v11 + 104);
  return v3;
}
