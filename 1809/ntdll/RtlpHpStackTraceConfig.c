/*
 * XREFs of RtlpHpStackTraceConfig @ 0x180104B6C
 * Callers:
 *     RtlSetHeapInformation @ 0x18007E6A0 (RtlSetHeapInformation.c)
 * Callees:
 *     memset @ 0x1800A7100 (memset.c)
 *     RtlpHeapPerformCrossProcessQuery @ 0x1800F3788 (RtlpHeapPerformCrossProcessQuery.c)
 *     RtlpHpStackTraceDisable @ 0x180104BE0 (RtlpHpStackTraceDisable.c)
 *     RtlpHpStackTraceEnable @ 0x180104C34 (RtlpHpStackTraceEnable.c)
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
