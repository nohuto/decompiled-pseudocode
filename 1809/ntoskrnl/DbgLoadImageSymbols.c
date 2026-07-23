/*
 * XREFs of DbgLoadImageSymbols @ 0x1400F4CE0
 * Callers:
 *     DbgLoadImageSymbolsUnicode @ 0x1400F4C8C (DbgLoadImageSymbolsUnicode.c)
 *     KdInitSystem @ 0x140916140 (KdInitSystem.c)
 *     InitBootProcessor @ 0x1409B5EDC (InitBootProcessor.c)
 * Callees:
 *     RtlImageNtHeader @ 0x14009DA20 (RtlImageNtHeader.c)
 *     DebugService2 @ 0x1401C5500 (DebugService2.c)
 */

void __stdcall DbgLoadImageSymbols(PSTRING Name, PVOID Base, ULONG_PTR ProcessId)
{
  PIMAGE_NT_HEADERS v4; // rax
  _QWORD v5[2]; // [rsp+20h] [rbp-28h] BYREF
  unsigned int CheckSum; // [rsp+30h] [rbp-18h]
  unsigned int SizeOfImage; // [rsp+34h] [rbp-14h]

  v5[0] = Base;
  v5[1] = ProcessId;
  v4 = RtlImageNtHeader(Base);
  if ( v4 )
  {
    CheckSum = v4->OptionalHeader.CheckSum;
    SizeOfImage = v4->OptionalHeader.SizeOfImage;
  }
  else
  {
    SizeOfImage = 0;
    CheckSum = 0;
  }
  DebugService2(Name, v5, 3LL);
}
