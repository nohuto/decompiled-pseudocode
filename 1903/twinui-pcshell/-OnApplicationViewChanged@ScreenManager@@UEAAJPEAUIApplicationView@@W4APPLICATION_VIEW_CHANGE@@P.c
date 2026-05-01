/*
 * XREFs of ?OnApplicationViewChanged@ScreenManager@@UEAAJPEAUIApplicationView@@W4APPLICATION_VIEW_CHANGE@@PEAUIUnknown@@@Z @ 0x180079010
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x1800609CC (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18006A5CC (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     Windows::Internal::ComTaskPool::QueueTaskWithDelay__lambda_5da5069c1ec2393567e9fe231930dfb9___ @ 0x1803B8FCC (Windows--Internal--ComTaskPool--QueueTaskWithDelay__lambda_5da5069c1ec2393567e9fe231930dfb9___.c)
 *     ?InternalRelease@?$ComPtr@VScreenManager@@@WRL@Microsoft@@IEAAKXZ @ 0x1803B9EAC (-InternalRelease@-$ComPtr@VScreenManager@@@WRL@Microsoft@@IEAAKXZ.c)
 */

__int64 __fastcall ScreenManager::OnApplicationViewChanged(__int64 a1, __int64 a2, int a3)
{
  __int64 v6; // rcx
  __int64 v7; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // [rsp+20h] [rbp-20h] BYREF
  __int64 v12; // [rsp+28h] [rbp-18h] BYREF
  __int64 v13; // [rsp+30h] [rbp-10h] BYREF
  __int64 v14; // [rsp+38h] [rbp-8h] BYREF

  if ( (unsigned int)(a3 - 1) <= 1 && *(_QWORD *)(a1 + 296) )
  {
    v12 = a2;
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(&v12);
    v6 = a1 - 24;
    v11 = a1 - 24;
    v7 = a1 - 24;
    if ( a1 != 24 )
    {
      _InterlockedIncrement((volatile signed __int32 *)(v6 + 44));
      v7 = v11;
    }
    v13 = v7;
    if ( a1 != 24 )
      _InterlockedIncrement((volatile signed __int32 *)(v6 + 44));
    v14 = a2;
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(&v14);
    Windows::Internal::ComTaskPool::QueueTaskWithDelay__lambda_5da5069c1ec2393567e9fe231930dfb9___(v9, v8, v10, &v13);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v14);
    Microsoft::WRL::ComPtr<ScreenManager>::InternalRelease(&v13);
    Microsoft::WRL::ComPtr<ScreenManager>::InternalRelease(&v11);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v12);
  }
  return 0LL;
}
