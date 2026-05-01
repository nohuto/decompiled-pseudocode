/*
 * XREFs of Windows::Internal::ComTaskPool::CTaskWrapper__lambda_129a5f8ae09b4447767ab88a8f768e93___::CTaskWrapper__lambda_129a5f8ae09b4447767ab88a8f768e93_____lambda_129a5f8ae09b4447767ab88a8f768e93___ @ 0x180117EEC
 * Callers:
 *     Windows::Internal::ComTaskPool::QueueTask__lambda_129a5f8ae09b4447767ab88a8f768e93___ @ 0x180118D54 (Windows--Internal--ComTaskPool--QueueTask__lambda_129a5f8ae09b4447767ab88a8f768e93___.c)
 * Callees:
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UIComPoolTask@Internal@Windows@@@WRL@Microsoft@@QEAA@XZ @ 0x180035E08 (--0-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@UIComPoolTask@Internal@Windows@@@WRL@M.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18006C60C (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 */

__int64 __fastcall Windows::Internal::ComTaskPool::CTaskWrapper__lambda_129a5f8ae09b4447767ab88a8f768e93___::CTaskWrapper__lambda_129a5f8ae09b4447767ab88a8f768e93_____lambda_129a5f8ae09b4447767ab88a8f768e93___(
        __int64 a1,
        __int64 a2)
{
  Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Internal::IComPoolTask>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Internal::IComPoolTask>(a1);
  *(_QWORD *)(a1 + 16) = *(_QWORD *)a2;
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)(a1 + 16));
  *(_QWORD *)(a1 + 24) = *(_QWORD *)(a2 + 8);
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)(a1 + 24));
  *(_DWORD *)(a1 + 32) = *(_DWORD *)(a2 + 16);
  *(_QWORD *)a1 = off_1803D0DD8;
  return a1;
}
