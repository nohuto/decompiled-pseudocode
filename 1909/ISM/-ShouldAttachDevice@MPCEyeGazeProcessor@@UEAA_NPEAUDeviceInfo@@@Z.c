/*
 * XREFs of ?ShouldAttachDevice@MPCEyeGazeProcessor@@UEAA_NPEAUDeviceInfo@@@Z @ 0x18013EF30
 * Callers:
 *     <none>
 * Callees:
 *     ?IsEnabled@ISMTracing@@SA_NE_K@Z @ 0x1800147E0 (-IsEnabled@ISMTracing@@SA_NE_K@Z.c)
 *     ?get@?$static_lazy@VISMTracing@@@details@wil@@QEAAPEAVISMTracing@@P6AXXZ@Z @ 0x180014814 (-get@-$static_lazy@VISMTracing@@@details@wil@@QEAAPEAVISMTracing@@P6AXXZ@Z.c)
 *     ?MPCEyeGazeProcessor_UnexpectedSecondEyeGazeProcessor_@ISMTracing@@QEAAXKK@Z @ 0x18013EBB0 (-MPCEyeGazeProcessor_UnexpectedSecondEyeGazeProcessor_@ISMTracing@@QEAAXKK@Z.c)
 */

bool __fastcall MPCEyeGazeProcessor::ShouldAttachDevice(MPCEyeGazeProcessor *this, struct DeviceInfo *a2)
{
  int v3; // edi
  __int64 v4; // rcx
  ISMTracing *v5; // rcx

  if ( (*((_DWORD *)a2 + 1) & 0x200000) != 0 )
  {
    v3 = **((_DWORD **)this + 6);
    if ( ISMTracing::IsEnabled((__int64)this) )
    {
      wil::details::static_lazy<ISMTracing>::get(v4, lambda_7fd51406feab050c3f0aab483d3938ea_::_lambda_invoker_cdecl_);
      ISMTracing::MPCEyeGazeProcessor_UnexpectedSecondEyeGazeProcessor_(v5, *(_DWORD *)a2, v3);
    }
  }
  return 0;
}
