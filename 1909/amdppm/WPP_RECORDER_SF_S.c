/*
 * XREFs of WPP_RECORDER_SF_s @ 0x1C000413C
 * Callers:
 *     Display_PCT_PTC @ 0x1C00052B8 (Display_PCT_PTC.c)
 *     Display_xSD @ 0x1C00056E0 (Display_xSD.c)
 *     Display_CPC @ 0x1C0005FDC (Display_CPC.c)
 *     DisplayGenAddr @ 0x1C00061A4 (DisplayGenAddr.c)
 *     DisplayPPMFlags @ 0x1C0006E2C (DisplayPPMFlags.c)
 *     DecodeAcpiIdleState @ 0x1C000A438 (DecodeAcpiIdleState.c)
 *     AcpiEval_PCT_PTC @ 0x1C00229CC (AcpiEval_PCT_PTC.c)
 *     AcpiEval_PSD_TSD @ 0x1C0022BC4 (AcpiEval_PSD_TSD.c)
 *     CpcGuaranteedNotifyWorker @ 0x1C002DD58 (CpcGuaranteedNotifyWorker.c)
 *     CpcHighestNotifyWorker @ 0x1C002E018 (CpcHighestNotifyWorker.c)
 *     ValidateAcpiCPC @ 0x1C002F618 (ValidateAcpiCPC.c)
 *     ProcLibGlobalInit @ 0x1C0035560 (ProcLibGlobalInit.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C000DFB0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall WPP_RECORDER_SF_s(
        __int64 a1,
        unsigned __int8 a2,
        unsigned int a3,
        unsigned __int16 a4,
        __int64 a5,
        const char *a6)
{
  const char *v6; // rbp
  unsigned __int64 v10; // rsi
  __int64 v11; // rbx
  int v12; // eax
  __int64 v13; // rdx
  __int64 v14; // rdx
  const char *v15; // rcx
  int v17; // [rsp+20h] [rbp-48h]
  __int64 v18; // [rsp+70h] [rbp+8h]

  v18 = a1;
  v6 = "NULL";
  v10 = (unsigned __int64)a3 >> 16;
  v11 = -1LL;
  v12 = *((_DWORD *)&WPP_GLOBAL_Control->Timer + 20 * v10 + (((a3 - 1) >> 5) & 0x7FF) + 1);
  if ( _bittest(&v12, ((_BYTE)a3 - 1) & 0x1F) && *((_BYTE *)&WPP_GLOBAL_Control->Timer + 80 * v10 + 1) >= a2 )
  {
    if ( a6 )
    {
      v13 = -1LL;
      do
        ++v13;
      while ( a6[v13] );
      v14 = v13 + 1;
    }
    else
    {
      v14 = 5LL;
    }
    v15 = "NULL";
    if ( a6 )
      v15 = a6;
    ((void (__fastcall *)(_QWORD, __int64, __int64, _QWORD, const char *, __int64, _QWORD))pfnWppTraceMessage)(
      *((_QWORD *)&WPP_GLOBAL_Control->AttachedDevice + 10 * v10),
      43LL,
      a5,
      a4,
      v15,
      v14,
      0LL);
    a1 = v18;
  }
  if ( a6 )
  {
    do
      ++v11;
    while ( a6[v11] );
  }
  if ( a6 )
    v6 = a6;
  LOWORD(v17) = a4;
  return WppAutoLogTrace(a1, a2, a3, a5, v17, v6);
}
