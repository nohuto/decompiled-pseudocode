/*
 * XREFs of FindNodeOrParent_0 @ 0x14008EDD4
 * Callers:
 *     RtlInsertElementGenericTable @ 0x14008ED70 (RtlInsertElementGenericTable.c)
 *     RtlDeleteElementGenericTable @ 0x14008F470 (RtlDeleteElementGenericTable.c)
 *     RtlLookupElementGenericTableFull @ 0x1402F3200 (RtlLookupElementGenericTableFull.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1401C6030 (_guard_dispatch_icall.c)
 */

__int64 __fastcall FindNodeOrParent_0(__int64 *a1, __int64 a2, _QWORD *a3)
{
  __int64 v3; // rbx
  unsigned int v7; // edi
  int v8; // eax
  __int64 v9; // rax

  v3 = *a1;
  if ( !*a1 )
    return 0LL;
  v7 = 1;
  while ( 1 )
  {
    v8 = ((__int64 (__fastcall *)(__int64 *, __int64, __int64))a1[5])(a1, a2, v3 + 40);
    if ( !v8 )
      break;
    if ( v8 != 1 )
      goto LABEL_8;
    v9 = *(_QWORD *)(v3 + 16);
    if ( !v9 )
    {
      v7 = 3;
      goto LABEL_8;
    }
LABEL_6:
    v3 = v9;
  }
  v9 = *(_QWORD *)(v3 + 8);
  if ( v9 )
    goto LABEL_6;
  v7 = 2;
LABEL_8:
  *a3 = v3;
  return v7;
}
