/*
 * XREFs of ?_AttemptPendingActivationTracking@CApplicationManager@@AEAAXPEAUHWND__@@PEAUIImmersiveApplication@@@Z @ 0x1800F62C8
 * Callers:
 *     ?ActivateApplicationInternal@CApplicationManager@@UEAAJW4IAM_ACTIVATE_APPLICATION_OPTION@@PEAUIImmersiveApplication@@@Z @ 0x18005D890 (-ActivateApplicationInternal@CApplicationManager@@UEAAJW4IAM_ACTIVATE_APPLICATION_OPTION@@PEAUII.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18005C2F8 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18006C60C (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     CDelayIAMOperations::AddOperation__lambda_bb299bb733d931796faa9380238be063___ @ 0x1800E85E8 (CDelayIAMOperations--AddOperation__lambda_bb299bb733d931796faa9380238be063___.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall CApplicationManager::_AttemptPendingActivationTracking(
        int **this,
        HWND a2,
        struct IImmersiveApplication *a3)
{
  HWND ForegroundWindow; // rax
  HWND v7; // rbx
  _QWORD v8[3]; // [rsp+28h] [rbp-30h] BYREF
  __int64 v9[3]; // [rsp+40h] [rbp-18h] BYREF
  struct IImmersiveApplication *v10; // [rsp+78h] [rbp+20h] BYREF

  ForegroundWindow = GetForegroundWindow();
  v7 = ForegroundWindow;
  if ( !ForegroundWindow || ForegroundWindow == a2 )
  {
    v10 = a3;
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v10);
    v8[0] = this;
    v8[1] = a2;
    v8[2] = v7;
    v9[0] = (__int64)a3;
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(v9);
    CDelayIAMOperations::AddOperation__lambda_bb299bb733d931796faa9380238be063___(this[100], (HWND)v8);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(v9);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v10);
  }
}
