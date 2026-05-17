/*
 * XREFs of RtlEnumerateGenericTableWithoutSplayingAvl @ 0x180067070
 * Callers:
 *     RtlEnumerateGenericTableAvl @ 0x180067050 (RtlEnumerateGenericTableAvl.c)
 * Callees:
 *     sub_1800670D0 @ 0x1800670D0 (sub_1800670D0.c)
 */

__int64 __fastcall RtlEnumerateGenericTableWithoutSplayingAvl(__int64 a1, __int64 *a2, __int64 a3)
{
  __int64 v3; // rax
  __int64 *v4; // r9
  __int64 i; // rcx

  if ( !*(_DWORD *)(a1 + 44) )
    return 0LL;
  if ( *a2 )
  {
    v3 = sub_1800670D0(*a2, a2, a3, a2);
    if ( v3 )
      *v4 = v3;
  }
  else
  {
    v3 = *(_QWORD *)(a1 + 16);
    for ( i = *(_QWORD *)(v3 + 8); i; i = *(_QWORD *)(i + 8) )
      v3 = i;
    *a2 = v3;
  }
  return (v3 + 32) & -(__int64)(v3 != 0);
}
