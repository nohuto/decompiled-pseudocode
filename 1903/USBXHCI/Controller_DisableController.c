/*
 * XREFs of Controller_DisableController @ 0x1C000E1E4
 * Callers:
 *     Controller_InitiateRecovery @ 0x1C000EC78 (Controller_InitiateRecovery.c)
 *     Controller_InternalReset @ 0x1C000EF9C (Controller_InternalReset.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0001FE0 (WPP_RECORDER_SF_.c)
 *     _guard_dispatch_icall_nop @ 0x1C0008A20 (_guard_dispatch_icall_nop.c)
 *     Controller_SetControllerGone @ 0x1C00102A4 (Controller_SetControllerGone.c)
 */

void __fastcall Controller_DisableController(__m128i *a1)
{
  void (__fastcall *v2)(__int64, _QWORD, __int16 *, __int64, int); // rax
  __int16 v3; // [rsp+40h] [rbp+8h] BYREF

  Controller_SetControllerGone(a1, 0LL);
  if ( a1[15].m128i_i32[1] != 1 || a1[33].m128i_i8[9] || (_mm_srli_si128(a1[21], 8).m128i_u8[0] & 0x10) != 0 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_(a1[4].m128i_i64[1], 2u, 4u, 0xADu, (__int64)&Context.Logger + 4);
  }
  else
  {
    v2 = (void (__fastcall *)(__int64, _QWORD, __int16 *, __int64, int))a1[18].m128i_i64[0];
    v3 = 0;
    v2(a1[17].m128i_i64[1], 0LL, &v3, 4LL, 2);
  }
  KeFlushQueuedDpcs();
}
