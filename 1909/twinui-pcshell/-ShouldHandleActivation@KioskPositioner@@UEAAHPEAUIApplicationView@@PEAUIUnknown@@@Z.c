/*
 * XREFs of ?ShouldHandleActivation@KioskPositioner@@UEAAHPEAUIApplicationView@@PEAUIUnknown@@@Z @ 0x18007BDF0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall KioskPositioner::ShouldHandleActivation(
        KioskPositioner *this,
        struct IApplicationView *a2,
        struct IUnknown *a3,
        const char *a4)
{
  unsigned int v4; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v4 = 0;
  if ( *((_BYTE *)this + 520) )
  {
    try
    {
      if ( *((_BYTE *)this + 521)
        || (*(unsigned __int8 (__fastcall **)(_QWORD))(**((_QWORD **)this + 66) + 8LL))(*((_QWORD *)this + 66)) )
      {
        v4 = 1;
      }
    }
    catch ( ... )
    {
      wil::details::in1diag3::Log_CaughtException(
        retaddr,
        (void *)0x28E,
        (unsigned int)"pcshell\\twinui\\shellpositioners\\lib\\kioskpositioner.cpp",
        a4);
      return 0LL;
    }
  }
  return v4;
}
