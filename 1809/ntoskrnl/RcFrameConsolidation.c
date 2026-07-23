/*
 * XREFs of RcFrameConsolidation @ 0x1401C5BC0
 * Callers:
 *     RtlRestoreContext @ 0x1401C5900 (RtlRestoreContext.c)
 * Callees:
 *     KeCheckStackAndTargetAddress @ 0x140120720 (KeCheckStackAndTargetAddress.c)
 *     ZwContinue @ 0x1401B8B50 (ZwContinue.c)
 *     _guard_dispatch_icall @ 0x1401C6030 (_guard_dispatch_icall.c)
 */

// positive sp value has been detected, the output may be wrong!
NTSTATUS __fastcall RcFrameConsolidation(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        __int64 a9,
        unsigned __int64 a10)
{
  signed __int64 v10; // rax
  signed __int64 v12; // [rsp-48h] [rbp-48h] BYREF
  __int16 v13; // [rsp-40h] [rbp-40h]
  int v14; // [rsp-38h] [rbp-38h]
  unsigned __int64 v15; // [rsp-30h] [rbp-30h]
  __int16 v16; // [rsp-28h] [rbp-28h]
  int v17; // [rsp-18h] [rbp-18h]
  unsigned int v18; // [rsp-14h] [rbp-14h]
  __int16 v19; // [rsp-10h] [rbp-10h]
  __int16 v20; // [rsp-6h] [rbp-6h]
  int v21; // [rsp-4h] [rbp-4h]
  signed __int64 v22; // [rsp+B0h] [rbp+B0h]

  v10 = (*(__int64 (**)(void))(a1 + 32))();
  v22 = v10;
  if ( (v17 & 0xFFFFFFBF) == 0x10000F )
  {
    _mm_setcsr(v18);
    KeCheckStackAndTargetAddress(v10, a10);
    v16 = v20;
    v15 = a10;
    v14 = v21;
    v13 = v19;
    v12 = v22;
    _disable();
    __asm { iretq }
  }
  return ZwContinue((PCONTEXT)&v12, 0);
}
