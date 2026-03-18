/*
 * XREFs of ?ContainsAllocation@?$CSectionBitmapAllocator@$0JAAA@$0JA@@NSInstrumentation@@QEAA_NPEBX@Z @ 0x1C00DF968
 * Callers:
 *     ?Free@?$CTypeIsolation@$0JAAA@$0JA@@NSInstrumentation@@IEAAXPEAX@Z @ 0x1C00DF54C (-Free@-$CTypeIsolation@$0JAAA@$0JA@@NSInstrumentation@@IEAAXPEAX@Z.c)
 *     ?Free@?$CSectionBitmapAllocator@$0JAAA@$0JA@@NSInstrumentation@@QEAAXPEAX@Z @ 0x1C00DF8A4 (-Free@-$CSectionBitmapAllocator@$0JAAA@$0JA@@NSInstrumentation@@QEAAXPEAX@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall NSInstrumentation::CSectionBitmapAllocator<36864,144>::ContainsAllocation(
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
      && a2 <= v4 + 36864
      && !((a2 & 0xFFF) % 0x90)
      && RtlTestBit(
           (PRTL_BITMAP)(v3 ^ a1[3]),
           (a2 & 0xFFF) / 0x90 + 28 * (((unsigned int)a2 - ((unsigned int)v2 ^ (unsigned int)v3)) >> 12)) != 0;
}
