/*
 * XREFs of ?ContainsAllocation@?$CSectionBitmapAllocator@$0GAAA@$0GA@@NSInstrumentation@@QEAA_NPEBX@Z @ 0x1C01D4978
 * Callers:
 *     ?Free@?$CSectionBitmapAllocator@$0GAAA@$0GA@@NSInstrumentation@@QEAAXPEAX@Z @ 0x1C01D4B24 (-Free@-$CSectionBitmapAllocator@$0GAAA@$0GA@@NSInstrumentation@@QEAAXPEAX@Z.c)
 *     ?Free@?$CTypeIsolation@$0GAAA@$0GA@@NSInstrumentation@@IEAAXPEAX@Z @ 0x1C01D4BE4 (-Free@-$CTypeIsolation@$0GAAA@$0GA@@NSInstrumentation@@IEAAXPEAX@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall NSInstrumentation::CSectionBitmapAllocator<24576,96>::ContainsAllocation(
        _QWORD *a1,
        unsigned __int64 a2)
{
  __int64 v2; // rbx
  __int64 v3; // r11
  unsigned __int64 v4; // rax

  v2 = a1[1];
  v3 = a1[2];
  v4 = v3 ^ v2;
  return a2
      && a2 >= v4
      && a2 <= v4 + 24576
      && !((a2 & 0xFFF) % 0x60)
      && RtlTestBit(
           (PRTL_BITMAP)(v3 ^ a1[3]),
           (a2 & 0xFFF) / 0x60 + 42 * (((unsigned int)a2 - ((unsigned int)v2 ^ (unsigned int)v3)) >> 12)) != 0;
}
