/*
 * XREFs of FindMaterialProperty @ 0x1C008B6F4
 * Callers:
 *     FindOrCreateMaterialProperty @ 0x1C008B638 (FindOrCreateMaterialProperty.c)
 *     NtDCompositionGetMaterialProperty @ 0x1C0167010 (NtDCompositionGetMaterialProperty.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall FindMaterialProperty(__int64 a1, __int64 a2, _QWORD *a3)
{
  __int128 v3; // rax
  __int64 v4; // rbx
  _QWORD *v6; // rax
  __int128 v8; // [rsp+20h] [rbp-28h] BYREF
  __int64 v9; // [rsp+30h] [rbp-18h]

  *((_QWORD *)&v3 + 1) = a2;
  *(_QWORD *)&v3 = a1;
  v4 = 0LL;
  if ( !Table )
    return 3221225659LL;
  v8 = v3;
  v9 = 0LL;
  v6 = RtlLookupElementGenericTable(Table, &v8);
  if ( v6 )
    v4 = v6[2];
  *a3 = v4;
  return v4 == 0 ? 0xC0000225 : 0;
}
