/*
 * XREFs of Controller_DisableController @ 0x1C000BE88
 * Callers:
 *     Controller_InitiateRecovery @ 0x1C000C898 (Controller_InitiateRecovery.c)
 *     Controller_InternalReset @ 0x1C000CB80 (Controller_InternalReset.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0001E30 (WPP_RECORDER_SF_.c)
 *     _guard_dispatch_icall_nop @ 0x1C0006C60 (_guard_dispatch_icall_nop.c)
 *     Controller_SetControllerGone @ 0x1C000DC30 (Controller_SetControllerGone.c)
 */

void __fastcall Controller_DisableController(__m128i *a1)
{
  void (__fastcall *v2)(__int64, _QWORD, __int16 *, __int64, int); // rax
  __int16 v3; // [rsp+40h] [rbp+8h] BYREF

  Controller_SetControllerGone(a1, 0LL);
  if ( a1[11].m128i_i32[1] != 1 || a1[29].m128i_i8[9] || (_mm_srli_si128(a1[17], 8).m128i_u8[0] & 0x10) != 0 )
  {
    WPP_RECORDER_SF_(a1[4].m128i_i64[1], 2u, 4u, 0xABu, (__int64)&Context.Logger + 4);
  }
  else
  {
    v2 = (void (__fastcall *)(__int64, _QWORD, __int16 *, __int64, int))a1[14].m128i_i64[0];
    v3 = 0;
    v2(a1[13].m128i_i64[1], 0LL, &v3, 4LL, 2);
  }
  KeFlushQueuedDpcs();
}
