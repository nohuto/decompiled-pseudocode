/*
 * XREFs of sub_18006FDFC @ 0x18006FDFC
 * Callers:
 *     sub_180014458 @ 0x180014458 (sub_180014458.c)
 *     sub_180084128 @ 0x180084128 (sub_180084128.c)
 * Callees:
 *     sub_1800157A4 @ 0x1800157A4 (sub_1800157A4.c)
 *     RtlLCIDToCultureName @ 0x180016330 (RtlLCIDToCultureName.c)
 *     RtlInitUnicodeString @ 0x180016AA0 (RtlInitUnicodeString.c)
 *     RtlAllocateHeap @ 0x18003AA20 (RtlAllocateHeap.c)
 *     RtlFreeHeap @ 0x180040690 (RtlFreeHeap.c)
 *     memmove @ 0x1800A32C0 (memmove.c)
 */

__int64 __fastcall sub_18006FDFC(__int64 a1, __int64 a2, unsigned int *a3, wchar_t *a4, unsigned int a5)
{
  unsigned int v5; // ebx
  __int64 v10; // rbp
  WCHAR *Heap; // r12
  __int16 v12; // ax
  unsigned int v13; // edi
  LCID v15; // ecx
  _UNICODE_STRING DestinationString; // [rsp+20h] [rbp-38h] BYREF

  v5 = 0;
  if ( !a2 || !a1 || !a3 )
    return 3221225485LL;
  v10 = *a3;
  Heap = (WCHAR *)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 8u, 0xAAuLL);
  if ( Heap )
  {
    v12 = *(_WORD *)(a2 + 6);
    if ( v12 <= 0 )
    {
      v15 = *(unsigned __int16 *)(a2 + 4);
      DestinationString.Buffer = Heap;
      *(_DWORD *)&DestinationString.Length = 11141120;
      if ( !RtlLCIDToCultureName(v15, &DestinationString) )
      {
        v5 = -1073741595;
        goto LABEL_13;
      }
    }
    else
    {
      RtlInitUnicodeString(
        &DestinationString,
        (PCWSTR)(*(_QWORD *)(*(_QWORD *)(a1 + 32) + 24LL)
               + 2LL * *(__int16 *)(*(_QWORD *)(*(_QWORD *)(a1 + 32) + 16LL) + 2LL * v12)));
    }
    if ( *a3 && *a3 <= a5 && sub_1800157A4(a4, DestinationString.Buffer, *a3) )
      goto LABEL_13;
    v13 = v10 + (DestinationString.Length >> 1) + 1;
    if ( a4 && (unsigned int)v10 < v13 )
    {
      if ( v13 < a5 )
      {
        memmove(&a4[v10], DestinationString.Buffer, DestinationString.Length);
        a4[v13 - 1] = 0;
LABEL_12:
        *a3 = v13;
LABEL_13:
        RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, Heap);
        return v5;
      }
    }
    else if ( v13 < a5 )
    {
      goto LABEL_12;
    }
    if ( a4 )
      v5 = -1073741789;
    goto LABEL_12;
  }
  return 3221225495LL;
}
