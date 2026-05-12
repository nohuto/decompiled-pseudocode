/*
 * XREFs of WPP_SF_qqs @ 0x1C0044A50
 * Callers:
 *     RaidAdapterQueryPowerIrp @ 0x1C0013360 (RaidAdapterQueryPowerIrp.c)
 *     RaidAdapterSetPowerIrp @ 0x1C0014034 (RaidAdapterSetPowerIrp.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C002C060 (_guard_dispatch_icall_nop.c)
 */

__int64 WPP_SF_qqs(__int64 a1, unsigned __int16 a2, __int64 a3, ...)
{
  const struct _MCGEN_TRACE_CONTEXT *v3; // r9
  __int64 v4; // r8
  __int64 v5; // r8
  __int64 v7; // [rsp+88h] [rbp+20h] BYREF
  va_list va; // [rsp+88h] [rbp+20h]
  __int64 v9; // [rsp+90h] [rbp+28h] BYREF
  va_list va1; // [rsp+90h] [rbp+28h]
  const struct _MCGEN_TRACE_CONTEXT *v11; // [rsp+98h] [rbp+30h]
  va_list va2; // [rsp+A0h] [rbp+38h] BYREF

  va_start(va2, a3);
  va_start(va1, a3);
  va_start(va, a3);
  v7 = va_arg(va1, _QWORD);
  va_copy(va2, va1);
  v9 = va_arg(va2, _QWORD);
  v11 = va_arg(va2, const struct _MCGEN_TRACE_CONTEXT *);
  v3 = v11;
  if ( v11 )
  {
    v4 = -1LL;
    do
      ++v4;
    while ( *((_BYTE *)&v11->RegistrationHandle + v4) );
    v5 = v4 + 1;
  }
  else
  {
    v5 = 5LL;
  }
  if ( !v11 )
    v3 = &stru_1C0055A88;
  return ((__int64 (__fastcall *)(__int64, __int64, void *, _QWORD, __int64 *, __int64, __int64 *, __int64, const struct _MCGEN_TRACE_CONTEXT *, __int64, _QWORD))pfnWppTraceMessage)(
           a1,
           43LL,
           &WPP_05398c2a44fb388ff25b1754e24905f8_Traceguids,
           a2,
           (__int64 *)va,
           8LL,
           (__int64 *)va1,
           8LL,
           v3,
           v5,
           0LL);
}
