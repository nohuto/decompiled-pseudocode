/*
 * XREFs of ?Log_HrIfMsg@in1diag3@details@wil@@YA_NPEAXIPEBDJ_N1ZZ @ 0x180081684
 * Callers:
 *     ?GetLockAppHost@@YAJPEAPEAUILockAppHost@@@Z @ 0x18007CCA4 (-GetLockAppHost@@YAJPEAPEAUILockAppHost@@@Z.c)
 * Callees:
 *     ?ReportFailure_HrMsg@details@wil@@YAXPEAXIPEBD110W4FailureType@2@J1PEAD@Z @ 0x180003508 (-ReportFailure_HrMsg@details@wil@@YAXPEAXIPEBD110W4FailureType@2@J1PEAD@Z.c)
 */

char wil::details::in1diag3::Log_HrIfMsg(
        wil::details::in1diag3 *this,
        void *a2,
        __int64 a3,
        const char *a4,
        char a5,
        __int64 a6,
        const char *a7,
        ...)
{
  __int64 v8; // [rsp+20h] [rbp-38h]
  __int64 retaddr; // [rsp+58h] [rbp+0h]

  if ( a5 )
    wil::details::ReportFailure_HrMsg(
      (__int64)this,
      (unsigned int)a2,
      a3,
      (__int64)a4,
      v8,
      retaddr,
      2,
      (unsigned int)a4,
      a6,
      (char *)&a7);
  return a5;
}
