/*
 * XREFs of RtlpEnsureBufferSize @ 0x18007F3B0
 * Callers:
 *     RtlNtPathNameToDosPathName @ 0x1800021A0 (RtlNtPathNameToDosPathName.c)
 *     sub_1800267DC @ 0x1800267DC (sub_1800267DC.c)
 *     RtlMultiAppendUnicodeStringBuffer @ 0x180029690 (RtlMultiAppendUnicodeStringBuffer.c)
 *     sub_1800DE4C8 @ 0x1800DE4C8 (sub_1800DE4C8.c)
 *     sub_1800DE690 @ 0x1800DE690 (sub_1800DE690.c)
 * Callees:
 *     sub_18006D6B8 @ 0x18006D6B8 (sub_18006D6B8.c)
 *     RtlDeleteBoundaryDescriptor @ 0x18006D6E0 (RtlDeleteBoundaryDescriptor.c)
 *     memmove @ 0x1800A32C0 (memmove.c)
 */

__int64 __fastcall RtlpEnsureBufferSize(int a1, __int64 a2, SIZE_T a3)
{
  char v5; // bp
  PVOID v6; // rax
  PVOID v7; // rsi

  v5 = a1;
  if ( (a1 & 0xFFFFFFFE) != 0 || !a2 )
    return 3221225485LL;
  if ( a3 <= *(_QWORD *)(a2 + 16) )
    return 0LL;
  if ( *(_QWORD *)a2 == *(_QWORD *)(a2 + 8) && a3 <= *(_QWORD *)(a2 + 24) )
  {
    *(_QWORD *)(a2 + 16) = a3;
    return 0LL;
  }
  v6 = sub_18006D6B8(a3);
  v7 = v6;
  if ( v6 )
  {
    if ( (v5 & 1) == 0 )
      memmove(v6, *(const void **)a2, *(_QWORD *)(a2 + 16));
    if ( *(_QWORD *)a2 != *(_QWORD *)(a2 + 8) )
      RtlDeleteBoundaryDescriptor(*(POBJECT_BOUNDARY_DESCRIPTOR *)a2);
    *(_QWORD *)a2 = v7;
    *(_QWORD *)(a2 + 16) = a3;
    return 0LL;
  }
  return 3221225495LL;
}
