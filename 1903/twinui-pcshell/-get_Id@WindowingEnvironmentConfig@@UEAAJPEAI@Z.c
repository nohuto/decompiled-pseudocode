/*
 * XREFs of ?get_Id@WindowingEnvironmentConfig@@UEAAJPEAI@Z @ 0x1802AFBE0
 * Callers:
 *     <none>
 * Callees:
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008BCF4 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall WindowingEnvironmentConfig::get_Id(
        WindowingEnvironmentConfig *this,
        unsigned int *a2,
        __int64 a3,
        const char *a4)
{
  __int64 result; // rax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  try
  {
    *a2 = 0;
    if ( !*((_QWORD *)this + 4) )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        34LL,
        (__int64)"pcshell\\twinui\\windowingenvironment\\lib\\windowingenvironmentconfig.cpp",
        (const char *)0x8000FFFFLL);
    *a2 = *((_DWORD *)this + 10);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x29,
                           (__int64)"pcshell\\twinui\\windowingenvironment\\lib\\windowingenvironmentconfig.cpp",
                           a4);
  }
  return result;
}
