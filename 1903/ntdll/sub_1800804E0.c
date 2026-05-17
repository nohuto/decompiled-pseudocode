/*
 * XREFs of sub_1800804E0 @ 0x1800804E0
 * Callers:
 *     sub_18008045C @ 0x18008045C (sub_18008045C.c)
 * Callees:
 *     sub_180047014 @ 0x180047014 (sub_180047014.c)
 */

void __fastcall sub_1800804E0(__int64 a1, __int64 *a2)
{
  __int64 v3; // rdx
  unsigned __int64 v4; // rax
  unsigned __int64 v5; // r8
  __int64 v6; // rax

  v3 = *(_QWORD *)(a1 + 320);
  if ( v3 )
  {
    v4 = *(unsigned int *)(v3 + 8);
    v5 = (unsigned __int64)a2[5] >> 12;
    while ( v5 >= v4 )
    {
      v6 = *(_QWORD *)v3;
      if ( !*(_QWORD *)v3 )
      {
        LODWORD(v5) = *(_DWORD *)(v3 + 8) - 1;
        break;
      }
      v3 = *(_QWORD *)v3;
      v4 = *(unsigned int *)(v6 + 8);
    }
    sub_180047014(a1, v3, 0, a2, v5, a2[5]);
  }
}
