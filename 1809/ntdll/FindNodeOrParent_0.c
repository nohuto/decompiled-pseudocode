/*
 * XREFs of FindNodeOrParent_0 @ 0x18006C790
 * Callers:
 *     RtlDeleteElementGenericTable @ 0x18006C310 (RtlDeleteElementGenericTable.c)
 *     RtlInsertElementGenericTable @ 0x18006C3A0 (RtlInsertElementGenericTable.c)
 *     RtlLookupElementGenericTableFull @ 0x1800F6A30 (RtlLookupElementGenericTableFull.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800A3D00 (_guard_dispatch_icall_nop.c)
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
      goto LABEL_7;
    v9 = *(_QWORD *)(v3 + 16);
    if ( !v9 )
    {
      v7 = 3;
      goto LABEL_7;
    }
LABEL_9:
    v3 = v9;
  }
  v9 = *(_QWORD *)(v3 + 8);
  if ( v9 )
    goto LABEL_9;
  v7 = 2;
LABEL_7:
  *a3 = v3;
  return v7;
}
