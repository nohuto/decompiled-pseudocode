/*
 * XREFs of FindNodeOrParent @ 0x1400071B0
 * Callers:
 *     RtlEnumerateGenericTableLikeADirectory @ 0x140006880 (RtlEnumerateGenericTableLikeADirectory.c)
 *     RtlInsertElementGenericTableAvl @ 0x140006F00 (RtlInsertElementGenericTableAvl.c)
 *     RtlLookupFirstMatchingElementGenericTableAvl @ 0x140168E10 (RtlLookupFirstMatchingElementGenericTableAvl.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1401C6030 (_guard_dispatch_icall.c)
 */

__int64 __fastcall FindNodeOrParent(__int64 a1, __int64 a2, _QWORD *a3)
{
  __int64 v7; // rbx
  unsigned int v8; // edi
  int v9; // eax
  __int64 v10; // rax

  if ( !*(_DWORD *)(a1 + 44) )
    return 0LL;
  v7 = *(_QWORD *)(a1 + 16);
  v8 = 1;
  while ( 1 )
  {
    v9 = (*(__int64 (__fastcall **)(__int64, __int64, __int64))(a1 + 72))(a1, a2, v7 + 32);
    if ( !v9 )
      break;
    if ( v9 != 1 )
      goto LABEL_11;
    v10 = *(_QWORD *)(v7 + 16);
    if ( !v10 )
    {
      v8 = 3;
      goto LABEL_11;
    }
LABEL_9:
    v7 = v10;
  }
  v10 = *(_QWORD *)(v7 + 8);
  if ( v10 )
    goto LABEL_9;
  v8 = 2;
LABEL_11:
  *a3 = v7;
  return v8;
}
