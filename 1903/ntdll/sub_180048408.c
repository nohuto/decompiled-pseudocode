/*
 * XREFs of sub_180048408 @ 0x180048408
 * Callers:
 *     RtlProtectHeap @ 0x180048240 (RtlProtectHeap.c)
 *     RtlCreateHeap @ 0x180049100 (RtlCreateHeap.c)
 *     RtlDestroyHeap @ 0x18004A960 (RtlDestroyHeap.c)
 * Callees:
 *     RtlEnterCriticalSection @ 0x18001B380 (RtlEnterCriticalSection.c)
 *     RtlLeaveCriticalSection @ 0x18003A8A0 (RtlLeaveCriticalSection.c)
 *     sub_1800484A8 @ 0x1800484A8 (sub_1800484A8.c)
 *     sub_1800485B8 @ 0x1800485B8 (sub_1800485B8.c)
 *     sub_180048958 @ 0x180048958 (sub_180048958.c)
 *     sub_1800489CC @ 0x1800489CC (sub_1800489CC.c)
 */

NTSTATUS __fastcall sub_180048408(__int64 a1, int a2, int a3, int a4)
{
  int v8; // edi
  int v9; // ebx
  NTSTATUS result; // eax

  if ( !a4 )
    result = RtlEnterCriticalSection(&stru_180163BE0);
  if ( a2 )
  {
    v8 = a2 - 1;
    if ( v8 )
    {
      if ( v8 == 1 )
        result = sub_1800489CC(a1);
    }
    else
    {
      result = sub_1800485B8(a1);
    }
  }
  if ( a3 )
  {
    v9 = a3 - 1;
    if ( v9 )
    {
      if ( v9 == 1 )
        result = sub_180048958(a1);
    }
    else
    {
      result = sub_1800484A8(a1);
    }
  }
  if ( !a4 )
    return RtlLeaveCriticalSection(&stru_180163BE0);
  return result;
}
