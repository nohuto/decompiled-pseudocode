/*
 * XREFs of ?CreateCursorForDevice@SystemCursorController@@MEAAJPEAVBamoSystemCursorControllerStub@@_K@Z @ 0x1800921F0
 * Callers:
 *     <none>
 * Callees:
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800035E4 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000B58C (-_Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?CreateCursorForDevice@SystemCursorService@@QEAAJ_K@Z @ 0x1800956F4 (-CreateCursorForDevice@SystemCursorService@@QEAAJ_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18012DB90 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall SystemCursorController::CreateCursorForDevice(
        SystemCursorController *this,
        struct BamoSystemCursorControllerStub *a2,
        unsigned __int64 a3)
{
  int CursorForDevice; // eax
  const char *v6; // r9
  wil::details::in1diag3 *v7; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  if ( !*((_QWORD *)this + 12) )
  {
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x87,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\components\\cursor\\service\\lib\\syst"
               "emcursorcontroller.cpp",
      (const char *)0x8000FFFFLL);
    __debugbreak();
  }
  try
  {
    if ( *(_DWORD *)((*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(*((_QWORD *)a2 + 7) + 16LL) + 8LL))(*(_QWORD *)(*((_QWORD *)a2 + 7) + 16LL))
                   + 36) == *((_DWORD *)this + 18) )
    {
      CursorForDevice = SystemCursorService::CreateCursorForDevice(*((SystemCursorService **)this + 12), a3);
      v7 = retaddr;
      if ( CursorForDevice >= 0 )
        return 0LL;
    }
    else
    {
      wil::details::in1diag3::_Throw_Hr(
        retaddr,
        (void *)0x89,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\components\\cursor\\service\\lib\\sy"
                 "stemcursorcontroller.cpp",
        (const char *)0x80070005LL);
    }
    wil::details::in1diag3::_Throw_Hr(
      v7,
      (void *)0x8B,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\components\\cursor\\service\\lib\\syst"
               "emcursorcontroller.cpp",
      (const char *)(unsigned int)CursorForDevice);
    JUMPOUT(0x18009229DLL);
  }
  catch ( ... )
  {
    wil::details::in1diag3::Log_CaughtException(
      retaddr,
      (void *)0x8D,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\components\\cursor\\service\\lib\\"
                    "systemcursorcontroller.cpp",
      v6);
  }
  return 0LL;
}
