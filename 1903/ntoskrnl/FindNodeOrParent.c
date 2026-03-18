/*
 * XREFs of FindNodeOrParent @ 0x1400021D0
 * Callers:
 *     RtlInsertElementGenericTableAvl @ 0x140001F10 (RtlInsertElementGenericTableAvl.c)
 *     RtlEnumerateGenericTableLikeADirectory @ 0x140002620 (RtlEnumerateGenericTableLikeADirectory.c)
 *     RtlLookupFirstMatchingElementGenericTableAvl @ 0x140135940 (RtlLookupFirstMatchingElementGenericTableAvl.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1401CC5F0 (_guard_dispatch_icall.c)
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
    if ( v9 )
      break;
    v10 = *(_QWORD *)(v7 + 8);
    if ( !v10 )
    {
      v8 = 2;
      goto LABEL_11;
    }
LABEL_7:
    v7 = v10;
  }
  if ( v9 != 1 )
    goto LABEL_11;
  v10 = *(_QWORD *)(v7 + 16);
  if ( v10 )
    goto LABEL_7;
  v8 = 3;
LABEL_11:
  *a3 = v7;
  return v8;
}
