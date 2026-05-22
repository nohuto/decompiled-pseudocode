/*
 * XREFs of ?ShouldAttachDevice@MPCHeadProcessor@@UEAA_NPEAUDeviceInfo@@@Z @ 0x1800FEF20
 * Callers:
 *     <none>
 * Callees:
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180003640 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 */

bool __fastcall MPCHeadProcessor::ShouldAttachDevice(
        MPCHeadProcessor *this,
        struct DeviceInfo *a2,
        __int64 a3,
        const char *a4)
{
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( (*((_DWORD *)a2 + 1) & 0x20000) != 0 )
  {
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x52,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcheadprocessor.cpp",
      a4);
    JUMPOUT(0x1800FEF4ALL);
  }
  return 0;
}
