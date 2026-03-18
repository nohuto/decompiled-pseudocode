/*
 * XREFs of ?ContainsAllocation@?$CSectionBitmapAllocator@$0DJAAA@$0DJA@@NSInstrumentation@@QEAA_NPEBX@Z @ 0x1C013C524
 * Callers:
 *     ??$FreeIsolatedType@V?$CTypeIsolation@$0DJAAA@$0DJA@@NSInstrumentation@@@@YAXPEAX@Z @ 0x1C013C200 (--$FreeIsolatedType@V-$CTypeIsolation@$0DJAAA@$0DJA@@NSInstrumentation@@@@YAXPEAX@Z.c)
 *     ?Free@?$CSectionBitmapAllocator@$0DJAAA@$0DJA@@NSInstrumentation@@QEAAXPEAX@Z @ 0x1C013C738 (-Free@-$CSectionBitmapAllocator@$0DJAAA@$0DJA@@NSInstrumentation@@QEAAXPEAX@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall NSInstrumentation::CSectionBitmapAllocator<233472,912>::ContainsAllocation(
        _QWORD *a1,
        unsigned __int64 a2)
{
  __int64 v2; // r11
  __int64 v3; // r9
  unsigned __int64 v4; // rax
  unsigned __int64 v6; // rcx
  bool result; // al

  v2 = a1[1];
  v3 = a1[2];
  v4 = v3 ^ v2;
  result = a2
        && a2 >= v4
        && a2 <= v4 + 233472
        && (v6 = a2 & 0xFFF, !(v6 % 0x390))
        && RtlTestBit(
             (PRTL_BITMAP)(v3 ^ a1[3]),
             v6 / 0x390 + 4 * (((unsigned int)a2 - ((unsigned int)v2 ^ (unsigned int)v3)) >> 12)) != 0;
  return result;
}
