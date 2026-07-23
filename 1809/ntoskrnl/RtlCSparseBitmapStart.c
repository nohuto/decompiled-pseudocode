/*
 * XREFs of RtlCSparseBitmapStart @ 0x140170508
 * Callers:
 *     RtlHpHeapManagerStart @ 0x140170368 (RtlHpHeapManagerStart.c)
 *     RtlpHpVaMgrCtxStart @ 0x140170438 (RtlpHpVaMgrCtxStart.c)
 * Callees:
 *     RtlpHpEnvAllocVA @ 0x14000D060 (RtlpHpEnvAllocVA.c)
 *     RtlpEnvRegisterFaultRange @ 0x140170658 (RtlpEnvRegisterFaultRange.c)
 */

__int64 __fastcall RtlCSparseBitmapStart(__int64 a1, __int64 a2, unsigned __int8 a3, int a4)
{
  unsigned __int64 v5; // rdi
  unsigned __int64 v6; // rsi
  __int64 *v7; // r14
  __int64 result; // rax
  unsigned __int64 v9; // rax
  int v10; // r9d
  int v11; // r8d
  __int64 v12; // rcx
  __int64 v13; // [rsp+38h] [rbp-30h]
  __int64 v14; // [rsp+38h] [rbp-30h]
  unsigned __int64 v15; // [rsp+70h] [rbp+8h] BYREF
  unsigned __int64 v16; // [rsp+78h] [rbp+10h] BYREF

  *(_QWORD *)(a1 + 32) = 0LL;
  *(_QWORD *)(a1 + 48) = 0LL;
  *(_BYTE *)(a1 + 57) = a3;
  *(_BYTE *)(a1 + 58) = a4;
  *(_QWORD *)(a1 + 24) = a2;
  *(_BYTE *)(a1 + 56) = a4 != 0;
  v5 = (((unsigned __int64)(a2 + 7) >> 3) + 4095) & 0xFFFFFFFFFFFFF000uLL;
  v6 = ((((v5 >> 12) + 7) >> 3) + 4095) & 0xFFFFFFFFFFFFF000uLL;
  v16 = v6;
  if ( (((v6 >> 12) + 7) & 0xFFFFFFFFFFFFFFF8uLL) > 0x40 )
    return 2147483653LL;
  v7 = (__int64 *)(a1 + 16);
  v15 = v6 + v5;
  result = RtlpHpEnvAllocVA((__int64 *)(a1 + 16), (__int64 *)&v15, 0LL, 1056768, 4, a3, (unsigned __int8)a4, v13, 0);
  if ( (int)result >= 0 )
  {
    _BitScanForward64(&v9, v15);
    v10 = *(unsigned __int8 *)(a1 + 58);
    v11 = *(unsigned __int8 *)(a1 + 57);
    v12 = *v7;
    *(_BYTE *)(a1 + 59) = v9;
    result = RtlpEnvRegisterFaultRange(v12, v5, v11, v10, 0);
    if ( (int)result >= 0 )
    {
      *(_QWORD *)(a1 + 8) = v5 + *v7;
      if ( v6 <= 0x1000 )
      {
        result = RtlpHpEnvAllocVA(
                   (__int64 *)(a1 + 8),
                   (__int64 *)&v16,
                   0LL,
                   1073745920,
                   4,
                   *(unsigned __int8 *)(a1 + 57),
                   *(unsigned __int8 *)(a1 + 58),
                   v14,
                   0);
        if ( (int)result < 0 )
          return result;
        *(_QWORD *)a1 = 1LL;
      }
      return 0LL;
    }
  }
  return result;
}
