/*
 * XREFs of RtlpHpLfhBucketAllocateSlot @ 0x18007EACC
 * Callers:
 *     RtlpHpLfhBucketUpdateAffinityMapping @ 0x18007E924 (RtlpHpLfhBucketUpdateAffinityMapping.c)
 * Callees:
 *     RtlpHpLfhOwnerInitialize @ 0x1800625C8 (RtlpHpLfhOwnerInitialize.c)
 *     _guard_dispatch_icall_nop @ 0x1800A3D00 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1800A7100 (memset.c)
 */

_BYTE *__fastcall RtlpHpLfhBucketAllocateSlot(unsigned __int64 a1, __int64 a2, int a3)
{
  _BYTE *v5; // rax
  _BYTE *v6; // rbx

  v5 = (_BYTE *)((__int64 (__fastcall *)(_QWORD, __int64))(a1 ^ RtlpHpHeapGlobals ^ *(_QWORD *)(a1 + 40)))(
                  *(_QWORD *)a1,
                  ((((unsigned int)RtlpHpLfhPerfFlags >> 10) & 1) + 1LL) << 6);
  v6 = v5;
  if ( v5 )
  {
    memset(v5, 0, 0x40uLL);
    RtlpHpLfhOwnerInitialize(v6, *(_BYTE *)(a2 + 1), a3);
  }
  return v6;
}
