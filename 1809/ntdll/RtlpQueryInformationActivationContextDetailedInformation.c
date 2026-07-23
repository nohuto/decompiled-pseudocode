/*
 * XREFs of RtlpQueryInformationActivationContextDetailedInformation @ 0x180031A58
 * Callers:
 *     RtlQueryInformationActivationContext @ 0x18002DE20 (RtlQueryInformationActivationContext.c)
 * Callees:
 *     RtlpLocateActivationContextSectionForQuery @ 0x18002FF04 (RtlpLocateActivationContextSectionForQuery.c)
 *     RtlpCrackActivationContextStringSectionHeader @ 0x180031CB0 (RtlpCrackActivationContextStringSectionHeader.c)
 *     DbgPrintEx @ 0x18004D290 (DbgPrintEx.c)
 *     memmove @ 0x1800A6DC0 (memmove.c)
 */

__int64 __fastcall RtlpQueryInformationActivationContextDetailedInformation(
        _DWORD *a1,
        __int64 a2,
        char *a3,
        size_t a4,
        size_t *a5)
{
  size_t *v5; // rsi
  unsigned __int64 v9; // rdi
  int v10; // r8d
  __int64 result; // rax
  char *v12; // r8
  __int64 v13; // rax
  char *v14; // rdx
  _BYTE *v15; // rcx
  _DWORD *v16; // r14
  _DWORD *v17; // r13
  char *v18; // rbx
  char *v19; // rbx
  char *v20; // rbx
  int v21; // [rsp+20h] [rbp-50h]
  int v22; // [rsp+28h] [rbp-48h]
  int v23; // [rsp+30h] [rbp-40h]
  __int64 v24; // [rsp+38h] [rbp-38h]
  int v25; // [rsp+38h] [rbp-38h]
  int v26; // [rsp+40h] [rbp-30h]
  __int64 v27; // [rsp+60h] [rbp-10h] BYREF
  int v28; // [rsp+B8h] [rbp+48h] BYREF
  _DWORD *v29; // [rsp+C0h] [rbp+50h] BYREF

  v5 = a5;
  LODWORD(v29) = -1073741595;
  v28 = 0;
  if ( a5 )
    *a5 = 0LL;
  v9 = 64LL;
  RtlpLocateActivationContextSectionForQuery(&v28, (int *)&v29, a3, a4, v5, 0x40uLL, a1, v24, 1u, &v27, &a5);
  if ( v28 == 2 )
    return (unsigned int)v29;
  result = RtlpCrackActivationContextStringSectionHeader(
             v27,
             (_DWORD)a5,
             v10,
             (unsigned int)&a5,
             v21,
             v22,
             v23,
             v25,
             v26,
             (__int64)&v28,
             (__int64)&v29);
  if ( (int)result >= 0 )
  {
    v12 = (char *)a1 + (unsigned int)a1[6];
    v13 = 1LL;
    v14 = (char *)a1 + *((unsigned int *)v12 + 3);
    if ( *((_DWORD *)v12 + 2) > 1u )
    {
      v15 = v14 + 24;
      do
      {
        if ( (*v15 & 2) != 0 )
          break;
        v13 = (unsigned int)(v13 + 1);
        v15 += 24;
      }
      while ( (unsigned int)v13 < *((_DWORD *)v12 + 2) );
    }
    if ( (_DWORD)v13 == *((_DWORD *)v12 + 2) )
    {
      DbgPrintEx(
        0x33u,
        0,
        "SXS: %s() found activation context data at %p with assembly roster that has no root\n",
        "RtlpQueryInformationActivationContextDetailedInformation",
        a1);
      return 3222601731LL;
    }
    else
    {
      v16 = (_DWORD *)((char *)a1 + *(unsigned int *)&v14[24 * v13 + 16]);
      if ( v16[5] )
        v9 = (unsigned int)v16[5] + 66LL;
      if ( v16[10] )
        v9 += (unsigned int)v16[10] + 2LL;
      v17 = v29;
      if ( v29[11] )
        v9 += (unsigned int)v29[11] + 2LL;
      if ( v9 <= a4 )
      {
        v18 = a3 + 64;
        *(_DWORD *)a3 = a1[7];
        *((_DWORD *)a3 + 1) = a1[2];
        *((_DWORD *)a3 + 2) = *((_DWORD *)v12 + 2) - 1;
        *((_DWORD *)a3 + 3) = v16[4];
        *((_DWORD *)a3 + 4) = v16[5] >> 1;
        *((_QWORD *)a3 + 5) = 0LL;
        *((_DWORD *)a3 + 5) = v16[9];
        *((_DWORD *)a3 + 6) = v16[10] >> 1;
        *((_QWORD *)a3 + 6) = 0LL;
        *((_DWORD *)a3 + 7) = v17[10];
        *((_DWORD *)a3 + 8) = v17[11] >> 1;
        *((_QWORD *)a3 + 7) = 0LL;
        if ( v16[5] )
        {
          memmove(a3 + 64, (const void *)(v27 + (unsigned int)v16[6]), (unsigned int)v16[5]);
          *((_QWORD *)a3 + 5) = v18;
          v19 = &v18[v16[5]];
          *(_WORD *)v19 = 0;
          v18 = v19 + 2;
        }
        if ( v16[10] )
        {
          memmove(v18, (const void *)(v27 + (unsigned int)v16[11]), (unsigned int)v16[10]);
          *((_QWORD *)a3 + 6) = v18;
          v20 = &v18[v16[10]];
          *(_WORD *)v20 = 0;
          v18 = v20 + 2;
        }
        if ( v17[11] )
        {
          memmove(v18, (char *)v17 + (unsigned int)v17[12], (unsigned int)v17[11]);
          *((_QWORD *)a3 + 7) = v18;
          *(_WORD *)&v18[v17[11]] = 0;
        }
        if ( v5 )
          *v5 = v9;
        return 0LL;
      }
      else
      {
        if ( v5 )
          *v5 = v9;
        return 3221225507LL;
      }
    }
  }
  return result;
}
