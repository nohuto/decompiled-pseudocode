/*
 * XREFs of sub_180064148 @ 0x180064148
 * Callers:
 *     RtlDeleteElementGenericTableAvl @ 0x180063F20 (RtlDeleteElementGenericTableAvl.c)
 *     RtlInsertElementGenericTableAvl @ 0x180063F60 (RtlInsertElementGenericTableAvl.c)
 *     RtlLookupElementGenericTableFullAvl @ 0x180064110 (RtlLookupElementGenericTableFullAvl.c)
 *     RtlLookupFirstMatchingElementGenericTableAvl @ 0x1800877E0 (RtlLookupFirstMatchingElementGenericTableAvl.c)
 *     RtlEnumerateGenericTableLikeADirectory @ 0x1800F3D90 (RtlEnumerateGenericTableLikeADirectory.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800A0100 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_180064148(__int64 a1, __int64 a2, _QWORD *a3)
{
  __int64 v6; // rbx
  unsigned int v7; // edi
  int v8; // eax
  __int64 v10; // rax

  if ( !*(_DWORD *)(a1 + 44) )
    return 0LL;
  v6 = *(_QWORD *)(a1 + 16);
  v7 = 1;
  while ( 1 )
  {
    v8 = (*(__int64 (__fastcall **)(__int64, __int64, __int64))(a1 + 72))(a1, a2, v6 + 32);
    if ( v8 )
      break;
    v10 = *(_QWORD *)(v6 + 8);
    if ( !v10 )
    {
      v7 = 2;
      goto LABEL_5;
    }
LABEL_7:
    v6 = v10;
  }
  if ( v8 != 1 )
    goto LABEL_5;
  v10 = *(_QWORD *)(v6 + 16);
  if ( v10 )
    goto LABEL_7;
  v7 = 3;
LABEL_5:
  *a3 = v6;
  return v7;
}
