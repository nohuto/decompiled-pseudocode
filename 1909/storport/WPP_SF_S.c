/*
 * XREFs of WPP_SF_S @ 0x1C004A15C
 * Callers:
 *     RaUnitScsiGetDumpPointersIoctl @ 0x1C0017634 (RaUnitScsiGetDumpPointersIoctl.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0024A40 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall WPP_SF_S(__int64 a1, __int64 a2, __int64 a3, char *a4)
{
  __int64 v5; // rax
  __int64 v6; // rcx

  if ( a4 )
  {
    v5 = -1LL;
    do
      ++v5;
    while ( *(_WORD *)&a4[2 * v5] );
    v6 = 2 * v5 + 2;
  }
  else
  {
    v6 = 10LL;
  }
  if ( !a4 )
    a4 = (char *)&Context.Logger + 4;
  return ((__int64 (__fastcall *)(__int64, __int64, void *, __int64, char *, __int64, _QWORD))pfnWppTraceMessage)(
           a1,
           43LL,
           &WPP_bda341a9323f32b668d48d296e0ff956_Traceguids,
           33LL,
           a4,
           v6,
           0LL);
}
