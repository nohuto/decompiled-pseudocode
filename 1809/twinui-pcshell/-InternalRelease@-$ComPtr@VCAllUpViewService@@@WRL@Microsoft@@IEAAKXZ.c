/*
 * XREFs of ?InternalRelease@?$ComPtr@VCAllUpViewService@@@WRL@Microsoft@@IEAAKXZ @ 0x1802E29CC
 * Callers:
 *     ??$MakeAndInitialize@VCAllUpViewService@@V1@AEAPEAUIMultitaskingViewTaskScheduler@@@Details@WRL@Microsoft@@YAJPEAPEAVCAllUpViewService@@AEAPEAUIMultitaskingViewTaskScheduler@@@Z @ 0x1802E2398 (--$MakeAndInitialize@VCAllUpViewService@@V1@AEAPEAUIMultitaskingViewTaskScheduler@@@Details@WRL@.c)
 *     ?CAllUpViewService_CreateInstance@@YAJPEAUIMultitaskingViewTaskScheduler@@AEBU_GUID@@PEAPEAX@Z @ 0x1802E28C4 (-CAllUpViewService_CreateInstance@@YAJPEAUIMultitaskingViewTaskScheduler@@AEBU_GUID@@PEAPEAX@Z.c)
 *     ??_G?$CTaskWrapper@V_lambda_efd0a2201cba9b434f5cd15cf706417f_@@@ComTaskPool@Internal@Windows@@UEAAPEAXI@Z @ 0x18035FAF0 (--_G-$CTaskWrapper@V_lambda_efd0a2201cba9b434f5cd15cf706417f_@@@ComTaskPool@Internal@Windows@@UE.c)
 *     ?AppResizeView_CreateInstance@@YAJAEBU_GUID@@PEAPEAX@Z @ 0x18035FBA8 (-AppResizeView_CreateInstance@@YAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?Hide@AppResizeView@@UEAAX_N@Z @ 0x18035FF80 (-Hide@AppResizeView@@UEAAX_N@Z.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCIAMSpecialWindowBase@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1800FE3D0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCIAMSpecialWindo.c)
 */

__int64 __fastcall Microsoft::WRL::ComPtr<CAllUpViewService>::InternalRelease(volatile int **a1)
{
  volatile int *v1; // rdx
  __int64 result; // rax

  v1 = *a1;
  result = 0LL;
  if ( *a1 )
  {
    *a1 = 0LL;
    return Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,CIAMSpecialWindowBase>::Release(
             (__int64)v1,
             v1);
  }
  return result;
}
