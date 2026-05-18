/*
 * XREFs of sub_1800A4440 @ 0x1800A4440
 * Callers:
 *     sub_1800F8CD4 @ 0x1800F8CD4 (sub_1800F8CD4.c)
 * Callees:
 *     sub_18006DEEC @ 0x18006DEEC (sub_18006DEEC.c)
 *     sub_1800A1D84 @ 0x1800A1D84 (sub_1800A1D84.c)
 *     sub_1800A43FC @ 0x1800A43FC (sub_1800A43FC.c)
 *     j_j__o_free @ 0x180126094 (j_j__o_free.c)
 */

// Hidden C++ exception states: #wind=2
_QWORD *__fastcall sub_1800A4440(__int64 a1, _QWORD *a2, __int64 a3)
{
  unsigned int v6; // edi
  const void **v7; // rax
  __int64 v8; // rcx
  _QWORD v10[3]; // [rsp+48h] [rbp-50h] BYREF
  unsigned __int64 v11; // [rsp+60h] [rbp-38h]
  _BYTE v12[24]; // [rsp+68h] [rbp-30h] BYREF

  v6 = 0;
  *a2 = 0LL;
  a2[1] = 0LL;
  *a2 = sub_18006DEEC();
  do
  {
    if ( _bittest64(&a3, v6) )
    {
      v7 = (const void **)sub_1800A43FC(a1, v10, v6);
      sub_1800A1D84(a2, (__int64)v12, 0, v7);
      if ( v11 >= 0x10 )
      {
        v8 = v10[0];
        if ( v11 + 1 >= 0x1000 )
        {
          v8 = *(_QWORD *)(v10[0] - 8LL);
          if ( (unsigned __int64)(v10[0] - v8 - 8) > 0x1F )
          {
            o__invalid_parameter_noinfo_noreturn(v8, v11 + 40);
            JUMPOUT(0x1800A4520LL);
          }
        }
        j_j__o_free(v8);
      }
    }
    ++v6;
  }
  while ( v6 < 0x40 );
  return a2;
}
