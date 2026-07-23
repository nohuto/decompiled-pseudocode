/*
 * XREFs of RtlpHpStackTraceConfig @ 0x180102268
 * Callers:
 *     RtlSetHeapInformation @ 0x1800796C0 (RtlSetHeapInformation.c)
 * Callees:
 *     memset @ 0x1800A3DC0 (memset.c)
 *     RtlpHeapPerformCrossProcessQuery @ 0x1800F093C (RtlpHeapPerformCrossProcessQuery.c)
 *     RtlpHpStackTraceDisable @ 0x1801022DC (RtlpHpStackTraceDisable.c)
 *     RtlpHpStackTraceEnable @ 0x180102330 (RtlpHpStackTraceEnable.c)
 */

__int64 __fastcall RtlpHpStackTraceConfig(__int64 a1)
{
  void *v1; // rdi
  unsigned __int16 v2; // bx
  HANDLE Buffer[13]; // [rsp+20h] [rbp-68h] BYREF

  v1 = *(void **)(a1 + 8);
  v2 = *(_WORD *)(a1 + 2);
  if ( v1 == (void *)-1LL )
  {
    if ( (v2 & 1) != 0 )
      RtlpHpStackTraceEnable();
    else
      RtlpHpStackTraceDisable();
    return 0LL;
  }
  else
  {
    memset(Buffer, 0, 0x60uLL);
    Buffer[10] = (HANDLE)v2;
    LODWORD(Buffer[3]) = 0x10000000;
    return RtlpHeapPerformCrossProcessQuery(v1, Buffer);
  }
}
