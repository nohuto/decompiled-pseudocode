/*
 * XREFs of WPP_RECORDER_SF_s @ 0x1C010B84C
 * Callers:
 *     ?dumpLeaks@@YAHPEAU_LIST_ENTRY@@PEAD@Z @ 0x1C0092ECC (-dumpLeaks@@YAHPEAU_LIST_ENTRY@@PEAD@Z.c)
 *     ?dumpRimDevLeaksAndCleanup@@YAHPEAU_LIST_ENTRY@@PEAD@Z @ 0x1C0092F04 (-dumpRimDevLeaksAndCleanup@@YAHPEAU_LIST_ENTRY@@PEAD@Z.c)
 *     RIMConfigurePointerDevice @ 0x1C011A76C (RIMConfigurePointerDevice.c)
 *     tracePointerFlags @ 0x1C0122BA8 (tracePointerFlags.c)
 *     ?ivCallback@CHidInput@@MEAAJPEAX@Z @ 0x1C014D340 (-ivCallback@CHidInput@@MEAAJPEAX@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00AF730 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall WPP_RECORDER_SF_s(
        __int64 a1,
        unsigned __int8 a2,
        unsigned int a3,
        unsigned __int16 a4,
        __int64 a5,
        const struct _MCGEN_TRACE_CONTEXT *a6)
{
  __int64 v8; // rdi
  unsigned __int64 v10; // rsi
  const struct _MCGEN_TRACE_CONTEXT *v12; // rbx
  int v13; // eax
  __int64 v14; // rdx
  __int64 v15; // rdx
  const struct _MCGEN_TRACE_CONTEXT *v16; // rcx
  int v18; // [rsp+20h] [rbp-48h]

  v8 = -1LL;
  v10 = (unsigned __int64)a3 >> 16;
  v12 = a6;
  v13 = *((_DWORD *)&WPP_GLOBAL_Control->Timer + 20 * v10 + (((a3 - 1) >> 5) & 0x7FF) + 1);
  if ( _bittest(&v13, ((_BYTE)a3 - 1) & 0x1F) && *((_BYTE *)&WPP_GLOBAL_Control->Timer + 80 * v10 + 1) >= a2 )
  {
    if ( a6 )
    {
      v14 = -1LL;
      do
        ++v14;
      while ( *((_BYTE *)&a6->RegistrationHandle + v14) );
      v15 = v14 + 1;
    }
    else
    {
      v15 = 5LL;
    }
    v16 = a6;
    if ( !a6 )
      v16 = &stru_1C01A3F30;
    ((void (__fastcall *)(_QWORD, __int64, __int64, _QWORD, const struct _MCGEN_TRACE_CONTEXT *, __int64, _QWORD))WPP_MAIN_CB.Dpc.DeferredContext)(
      *((_QWORD *)&WPP_GLOBAL_Control->AttachedDevice + 10 * v10),
      43LL,
      a5,
      a4,
      v16,
      v15,
      0LL);
  }
  if ( a6 )
  {
    do
      ++v8;
    while ( *((_BYTE *)&a6->RegistrationHandle + v8) );
  }
  if ( !a6 )
    v12 = &stru_1C01A3F30;
  LOWORD(v18) = a4;
  return WppAutoLogTrace(a1, a2, a3, a5, v18, v12);
}
