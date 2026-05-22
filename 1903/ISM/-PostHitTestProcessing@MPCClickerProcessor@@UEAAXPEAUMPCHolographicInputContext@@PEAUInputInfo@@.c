/*
 * XREFs of ?PostHitTestProcessing@MPCClickerProcessor@@UEAAXPEAUMPCHolographicInputContext@@PEAUInputInfo@@@Z @ 0x18013FF70
 * Callers:
 *     <none>
 * Callees:
 *     ??0?$com_ptr_t@VInputSite@@Uerr_exception_policy@wil@@@wil@@QEAA@PEAVInputSite@@@Z @ 0x180057368 (--0-$com_ptr_t@VInputSite@@Uerr_exception_policy@wil@@@wil@@QEAA@PEAVInputSite@@@Z.c)
 *     ?DownLevelTo2D@MPCGestureHandlerManager@@QEAAXPEAUInputInfo@@V?$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception_policy@wil@@@wil@@@Z @ 0x180086124 (-DownLevelTo2D@MPCGestureHandlerManager@@QEAAXPEAUInputInfo@@V-$com_ptr_t@UIMPCInputProviderBase.c)
 *     ?GetInstance@MPCGestureHandlerManager@@SAPEAV1@XZ @ 0x1800863AC (-GetInstance@MPCGestureHandlerManager@@SAPEAV1@XZ.c)
 *     ?IsPrimary@MPCInputProviderBase@@UEBA_NXZ @ 0x18013D0D0 (-IsPrimary@MPCInputProviderBase@@UEBA_NXZ.c)
 *     ?PopulateDownLevelInfo@MPCClickerProcessor@@AEAAXPEAUInputInfo@@@Z @ 0x18013FF00 (-PopulateDownLevelInfo@MPCClickerProcessor@@AEAAXPEAUInputInfo@@@Z.c)
 */

void __fastcall MPCClickerProcessor::PostHitTestProcessing(
        unsigned __int64 this,
        struct MPCHolographicInputContext *a2,
        struct InputInfo *a3)
{
  MPCClickerProcessor *v5; // rcx
  __int64 **v6; // rax
  __int64 **v7; // rbx
  __int64 *v8; // rax
  const char *v9; // r9
  __int64 v10; // [rsp+30h] [rbp+8h] BYREF

  if ( MPCInputProviderBase::IsPrimary(this) )
  {
    *(_DWORD *)(this + 4612) = *((_DWORD *)a3 + 179);
    if ( *((_BYTE *)a3 + 152) )
    {
      MPCClickerProcessor::PopulateDownLevelInfo(v5, a3);
      MPCGestureHandlerManager::GetInstance();
      v7 = v6;
      v8 = wil::com_ptr_t<InputSite,wil::err_exception_policy>::com_ptr_t<InputSite,wil::err_exception_policy>(
             &v10,
             this & -(__int64)(this != 24));
      MPCGestureHandlerManager::DownLevelTo2D(v7, (__int64)a3, v8, v9);
    }
  }
}
