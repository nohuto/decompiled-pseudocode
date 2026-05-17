/*
 * XREFs of sub_180077DBC @ 0x180077DBC
 * Callers:
 *     sub_180077CE4 @ 0x180077CE4 (sub_180077CE4.c)
 * Callees:
 *     <none>
 */

void (__stdcall *__fastcall sub_180077DBC(unsigned __int64 a1))(PEXCEPTION_RECORD ExceptionRecord)
{
  int v1; // ecx
  int v2; // ecx
  int v3; // ecx
  int v4; // ecx

  if ( a1 <= 5 )
  {
    if ( !(_DWORD)a1 )
      return (void (__stdcall *)(PEXCEPTION_RECORD))RtlUnwindEx;
    v1 = a1 - 1;
    if ( !v1 )
      return (void (__stdcall *)(PEXCEPTION_RECORD))_C_specific_handler;
    v2 = v1 - 1;
    if ( !v2 )
      return (void (__stdcall *)(PEXCEPTION_RECORD))sub_1800A1840;
    v3 = v2 - 1;
    if ( !v3 )
      return (void (__stdcall *)(PEXCEPTION_RECORD))sub_18006A670;
    v4 = v3 - 1;
    if ( !v4 )
      return RtlRaiseException;
    if ( v4 == 1 )
      return (void (__stdcall *)(PEXCEPTION_RECORD))KiUserExceptionDispatcher;
  }
  return 0LL;
}
