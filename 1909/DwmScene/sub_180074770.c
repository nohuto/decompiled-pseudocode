/*
 * XREFs of sub_180074770 @ 0x180074770
 * Callers:
 *     sub_180071A80 @ 0x180071A80 (sub_180071A80.c)
 *     sub_18007E0E0 @ 0x18007E0E0 (sub_18007E0E0.c)
 *     sub_18007E398 @ 0x18007E398 (sub_18007E398.c)
 *     sub_18007E8D0 @ 0x18007E8D0 (sub_18007E8D0.c)
 *     sub_18007EF04 @ 0x18007EF04 (sub_18007EF04.c)
 *     unknown_libname_57 @ 0x18012E162 (unknown_libname_57.c)
 * Callees:
 *     j_j__o_free @ 0x180126094 (j_j__o_free.c)
 */

void __fastcall sub_180074770(_QWORD *a1)
{
  unsigned __int64 v1; // rdx
  __int64 v3; // rcx
  unsigned __int64 v4; // rdx
  __int64 v5; // r8
  unsigned __int64 v6; // rdx
  __int64 v7; // rcx
  unsigned __int64 v8; // rdx
  __int64 v9; // rcx
  unsigned __int64 v10; // rdx
  __int64 v11; // r8

  v1 = a1[7];
  if ( v1 >= 0x10 )
  {
    v3 = a1[4];
    v4 = v1 + 1;
    if ( v4 >= 0x1000 )
    {
      v5 = *(_QWORD *)(v3 - 8);
      v6 = v4 + 39;
      v7 = v3 - v5;
      if ( (unsigned __int64)(v7 - 8) > 0x1F )
        goto LABEL_12;
      v3 = v5;
    }
    j_j__o_free(v3);
  }
  a1[6] = 0LL;
  a1[7] = 15LL;
  *((_BYTE *)a1 + 32) = 0;
  v8 = a1[3];
  if ( v8 >= 0x10 )
  {
    v9 = *a1;
    v10 = v8 + 1;
    if ( v10 < 0x1000 )
    {
LABEL_10:
      j_j__o_free(v9);
      goto LABEL_11;
    }
    v11 = *(_QWORD *)(v9 - 8);
    v6 = v10 + 39;
    v7 = v9 - v11;
    if ( (unsigned __int64)(v7 - 8) <= 0x1F )
    {
      v9 = v11;
      goto LABEL_10;
    }
LABEL_12:
    o__invalid_parameter_noinfo_noreturn(v7, v6);
    JUMPOUT(0x180074813LL);
  }
LABEL_11:
  a1[2] = 0LL;
  a1[3] = 15LL;
  *(_BYTE *)a1 = 0;
}
