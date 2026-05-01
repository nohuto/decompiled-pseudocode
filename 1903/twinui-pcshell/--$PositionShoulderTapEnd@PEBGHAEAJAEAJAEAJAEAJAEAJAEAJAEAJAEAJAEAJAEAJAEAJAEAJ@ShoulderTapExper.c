/*
 * XREFs of ??$PositionShoulderTapEnd@PEBGHAEAJAEAJAEAJAEAJAEAJAEAJAEAJAEAJAEAJAEAJAEAJAEAJ@ShoulderTapExperienceManagerTelemetry@@SAX$$QEAPEBG$$QEAHAEAJ22222222222@Z @ 0x180193AC8
 * Callers:
 *     ?PositionShoulderTap@CShoulderTapExperienceManager@@AEAAJXZ @ 0x1801947B4 (-PositionShoulderTap@CShoulderTapExperienceManager@@AEAAJXZ.c)
 * Callees:
 *     atexit @ 0x18008753C (atexit.c)
 *     ??1Completer@?$static_lazy@VShoulderTapExperienceManagerTelemetry@@@details@wil@@QEAA@XZ @ 0x180193F88 (--1Completer@-$static_lazy@VShoulderTapExperienceManagerTelemetry@@@details@wil@@QEAA@XZ.c)
 *     ?IsEnabled@ShoulderTapExperienceManagerTelemetry@@SA_NE_K@Z @ 0x180194460 (-IsEnabled@ShoulderTapExperienceManagerTelemetry@@SA_NE_K@Z.c)
 *     ?PositionShoulderTapEnd_@ShoulderTapExperienceManagerTelemetry@@QEAAXPEBGHHHHHHHHHHHHH@Z @ 0x180194BD4 (-PositionShoulderTapEnd_@ShoulderTapExperienceManagerTelemetry@@QEAAXPEBGHHHHHHHHHHHHH@Z.c)
 */

void __fastcall ShoulderTapExperienceManagerTelemetry::PositionShoulderTapEnd<unsigned short const *,int,long &,long &,long &,long &,long &,long &,long &,long &,long &,long &,long &,long &>(
        const unsigned __int16 **a1,
        int *a2,
        int *a3,
        int *a4,
        int *a5,
        int *a6,
        int *a7,
        int *a8,
        int *a9,
        int *a10,
        int *a11,
        int *a12,
        int *a13,
        int *a14)
{
  WINBOOL fPending; // [rsp+80h] [rbp-28h] BYREF
  LPVOID Context; // [rsp+88h] [rbp-20h] BYREF
  union _RTL_RUN_ONCE *v20; // [rsp+90h] [rbp-18h] BYREF
  int v21; // [rsp+98h] [rbp-10h]

  if ( ShoulderTapExperienceManagerTelemetry::IsEnabled((unsigned __int8)a1, (unsigned __int64)a2) )
  {
    Context = 0LL;
    if ( InitOnceBeginInitialize(
           &`ShoulderTapExperienceManagerTelemetry::Instance'::`2'::wrapper,
           0,
           &fPending,
           &Context) )
    {
      if ( fPending )
      {
        v20 = &`ShoulderTapExperienceManagerTelemetry::Instance'::`2'::wrapper;
        Context = &qword_18059A3A8;
        qword_18059A3A8 = (__int64)&IamTraceLogging::`vftable';
        atexit(lambda_43b277c613f9e9ea449b850c5995e33f_::_lambda_invoker_cdecl_);
        v21 = 0;
        wil::details::static_lazy<ShoulderTapExperienceManagerTelemetry>::Completer::~Completer(&v20);
      }
    }
    ShoulderTapExperienceManagerTelemetry::PositionShoulderTapEnd_(
      (ShoulderTapExperienceManagerTelemetry *)(unsigned int)*a5,
      *a1,
      *a2,
      *a3,
      *a4,
      *a5,
      *a6,
      *a7,
      *a8,
      *a9,
      *a10,
      *a11,
      *a12,
      *a13,
      *a14);
  }
}
