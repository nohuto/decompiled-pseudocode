/*
 * XREFs of KeNumaInitialize @ 0x1409DFD20
 * Callers:
 *     InitBootProcessor @ 0x1409B5EDC (InitBootProcessor.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1401C6030 (_guard_dispatch_icall.c)
 */

__int64 (*KeNumaInitialize())()
{
  __int64 (*result)(); // rax
  __int16 v1; // [rsp+30h] [rbp-48h] BYREF
  __int64 (__fastcall *v2)(_QWORD); // [rsp+38h] [rbp-40h]
  __int64 v3; // [rsp+48h] [rbp-30h]
  __int64 v4; // [rsp+58h] [rbp-20h]
  __int64 (__fastcall *v5)(); // [rsp+60h] [rbp-18h]
  __int64 (__fastcall *v6)(); // [rsp+68h] [rbp-10h]
  __int64 v7; // [rsp+80h] [rbp+8h] BYREF

  result = (__int64 (*)())((__int64 (__fastcall *)(__int64, __int64, __int16 *, __int64 *))off_140401458[0])(
                            11LL,
                            64LL,
                            &v1,
                            &v7);
  if ( (int)result >= 0 )
  {
    KeNumberNodes = v1;
    KiNumaQueryProcessorNode = v2;
    KiNumaQueryNodeCapacity[0] = v5;
    KiNumaQueryNodeDistance = v6;
    KiNumaQueryProximityNode = v3;
    KiNumaQueryProximityId = v4;
    result = KiQueryProximityNode;
    PnpQueryProximityNode = (__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD))KiQueryProximityNode;
  }
  return result;
}
