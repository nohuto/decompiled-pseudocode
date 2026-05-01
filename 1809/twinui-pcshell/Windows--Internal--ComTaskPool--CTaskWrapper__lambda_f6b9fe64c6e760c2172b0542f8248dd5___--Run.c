/*
 * XREFs of Windows::Internal::ComTaskPool::CTaskWrapper__lambda_f6b9fe64c6e760c2172b0542f8248dd5___::Run @ 0x180061FC0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18005C2F8 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$MakeAndInitialize@VCLaunchActivatedEventArgs@@V1@PEAUHSTRING__@@PEAU2@@Details@WRL@Microsoft@@YAJV?$ComPtrRef@V?$ComPtr@VCLaunchActivatedEventArgs@@@WRL@Microsoft@@@012@$$QEAPEAUHSTRING__@@1@Z @ 0x18006203C (--$MakeAndInitialize@VCLaunchActivatedEventArgs@@V1@PEAUHSTRING__@@PEAU2@@Details@WRL@Microsoft@.c)
 *     ??$AsAgile@UIActivatedEventArgs@Activation@ApplicationModel@Windows@@@WRL@Microsoft@@YAJPEAUIActivatedEventArgs@Activation@ApplicationModel@Windows@@PEAVAgileRef@01@@Z @ 0x1800634B8 (--$AsAgile@UIActivatedEventArgs@Activation@ApplicationModel@Windows@@@WRL@Microsoft@@YAJPEAUIAct.c)
 *     ??B?$ComPtrRef@VAgileRef@WRL@Microsoft@@@Details@WRL@Microsoft@@QEAAPEAVAgileRef@23@XZ @ 0x180063BE4 (--B-$ComPtrRef@VAgileRef@WRL@Microsoft@@@Details@WRL@Microsoft@@QEAAPEAVAgileRef@23@XZ.c)
 */

__int64 __fastcall Windows::Internal::ComTaskPool::CTaskWrapper__lambda_f6b9fe64c6e760c2172b0542f8248dd5___::Run(
        __int64 a1)
{
  _QWORD *v1; // rax
  __int64 v3; // rbx
  __int64 v4; // rax
  __int64 v6; // [rsp+30h] [rbp+8h] BYREF
  __int64 v7; // [rsp+38h] [rbp+10h] BYREF

  v1 = *(_QWORD **)(a1 + 16);
  v6 = 0LL;
  **(_DWORD **)(a1 + 32) = Microsoft::WRL::Details::MakeAndInitialize<CLaunchActivatedEventArgs,CLaunchActivatedEventArgs,HSTRING__ *,HSTRING__ *>(
                             &v6,
                             *v1,
                             v1[1]);
  if ( **(int **)(a1 + 32) >= 0 )
  {
    v3 = v6;
    v7 = *(_QWORD *)(a1 + 24);
    v4 = Microsoft::WRL::Details::ComPtrRef<Microsoft::WRL::AgileRef>::operator Microsoft::WRL::AgileRef *(&v7);
    **(_DWORD **)(a1 + 32) = Microsoft::WRL::AsAgile<Windows::ApplicationModel::Activation::IActivatedEventArgs>(v3, v4);
  }
  return Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v6);
}
