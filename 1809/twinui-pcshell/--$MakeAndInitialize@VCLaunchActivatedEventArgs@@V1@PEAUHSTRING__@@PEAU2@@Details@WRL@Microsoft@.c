/*
 * XREFs of ??$MakeAndInitialize@VCLaunchActivatedEventArgs@@V1@PEAUHSTRING__@@PEAU2@@Details@WRL@Microsoft@@YAJV?$ComPtrRef@V?$ComPtr@VCLaunchActivatedEventArgs@@@WRL@Microsoft@@@012@$$QEAPEAUHSTRING__@@1@Z @ 0x18006203C
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_f6b9fe64c6e760c2172b0542f8248dd5___::Run @ 0x180061FC0 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_f6b9fe64c6e760c2172b0542f8248dd5___--Run.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18005C2F8 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 */

__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<CLaunchActivatedEventArgs,CLaunchActivatedEventArgs,HSTRING__ *,HSTRING__ *>(
        __int64 *a1,
        __int64 a2,
        __int64 a3)
{
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(a1);
  return Microsoft::WRL::Details::MakeAndInitialize<CLaunchActivatedEventArgs,CLaunchActivatedEventArgs,HSTRING__ *,HSTRING__ *>(
           a1,
           a2,
           a3);
}
