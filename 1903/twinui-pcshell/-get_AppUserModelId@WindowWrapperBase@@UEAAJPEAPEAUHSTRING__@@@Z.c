/*
 * XREFs of ?get_AppUserModelId@WindowWrapperBase@@UEAAJPEAPEAUHSTRING__@@@Z @ 0x180073FF0
 * Callers:
 *     <none>
 * Callees:
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008BCF4 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall WindowWrapperBase::get_AppUserModelId(HSTRING *this, HSTRING *a2)
{
  HRESULT v2; // eax
  const char *v4; // r9
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v2 = WindowsDuplicateString(this[38], a2);
  if ( v2 >= 0 )
    return 0LL;
  try
  {
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x16A,
      (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowwrapperbase.cpp",
      (const char *)(unsigned int)v2,
      -2);
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x16D,
                           (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowwrapperbase.cpp",
                           v4);
  }
  __debugbreak();
  JUMPOUT(0x1800F6AA6LL);
}
