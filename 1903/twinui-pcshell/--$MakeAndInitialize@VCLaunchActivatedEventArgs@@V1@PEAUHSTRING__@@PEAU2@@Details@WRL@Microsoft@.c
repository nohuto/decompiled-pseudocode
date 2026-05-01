/*
 * XREFs of ??$MakeAndInitialize@VCLaunchActivatedEventArgs@@V1@PEAUHSTRING__@@PEAU2@@Details@WRL@Microsoft@@YAJV?$ComPtrRef@V?$ComPtr@VCLaunchActivatedEventArgs@@@WRL@Microsoft@@@012@$$QEAPEAUHSTRING__@@1@Z @ 0x18006C2CC
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_c8b199a0feb076873244f725fed1af37___::Run @ 0x18006C250 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_c8b199a0feb076873244f725fed1af37___--Run.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x1800609CC (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
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
