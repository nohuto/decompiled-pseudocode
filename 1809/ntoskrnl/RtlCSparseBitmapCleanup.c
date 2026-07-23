/*
 * XREFs of RtlCSparseBitmapCleanup @ 0x1401591AC
 * Callers:
 *     RtlHpHeapManagerCleanup @ 0x140154AF4 (RtlHpHeapManagerCleanup.c)
 * Callees:
 *     RtlpHpEnvFreeVA @ 0x14000D2A8 (RtlpHpEnvFreeVA.c)
 *     RtlpEnvRegisterFaultRange @ 0x140170658 (RtlpEnvRegisterFaultRange.c)
 */

__int64 __fastcall RtlCSparseBitmapCleanup(__int64 a1)
{
  unsigned __int64 v1; // r10
  unsigned __int64 v3; // rdi
  __int64 v4; // rsi
  __int64 result; // rax
  unsigned __int64 v6; // [rsp+50h] [rbp+8h] BYREF
  unsigned __int64 v7; // [rsp+58h] [rbp+10h] BYREF

  v1 = *(_QWORD *)(a1 + 16);
  if ( v1 )
  {
    v3 = (((unsigned __int64)(*(_QWORD *)(a1 + 24) + 7LL) >> 3) + 4095) & 0xFFFFFFFFFFFFF000uLL;
    if ( *(_QWORD *)(a1 + 8) )
    {
      RtlpEnvRegisterFaultRange(v1, v3, *(unsigned __int8 *)(a1 + 57), *(unsigned __int8 *)(a1 + 58), 1);
      v1 = *(_QWORD *)(a1 + 16);
    }
    v4 = 1LL << *(_BYTE *)(a1 + 59);
    v7 = v1;
    v6 = ~(v4 - 1) & (v4 + (((((v3 >> 12) + 7) >> 3) + 4095) & 0xFFFFFFFFFFFFF000uLL) + v3 - 1);
    return RtlpHpEnvFreeVA(&v7, &v6, 0x8000LL);
  }
  return result;
}
