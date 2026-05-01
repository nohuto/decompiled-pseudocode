/*
 * XREFs of Windows::Internal::ComTaskPool::CTaskWrapper__lambda_637b889d7309fa55c34979987552fc96__&_::CTaskWrapper__lambda_637b889d7309fa55c34979987552fc96__&___lambda_637b889d7309fa55c34979987552fc96__&_ @ 0x18034BA2C
 * Callers:
 *     Windows::Internal::ComTaskPool::QueueTask__lambda_637b889d7309fa55c34979987552fc96__&_ @ 0x18034BC2C (Windows--Internal--ComTaskPool--QueueTask__lambda_637b889d7309fa55c34979987552fc96__-_.c)
 * Callees:
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UIComPoolTask@Internal@Windows@@@WRL@Microsoft@@QEAA@XZ @ 0x180021B84 (--0-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@UIComPoolTask@Internal@Windows@@@WRL@M.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18006A5CC (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Windows::Internal::ComTaskPool::CTaskWrapper__lambda_637b889d7309fa55c34979987552fc96____::CTaskWrapper__lambda_637b889d7309fa55c34979987552fc96______lambda_637b889d7309fa55c34979987552fc96____(
        __int64 a1,
        __int64 a2)
{
  __int64 v4; // rax
  __int64 v5; // rcx

  Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Internal::IComPoolTask>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Internal::IComPoolTask>(a1);
  *(_QWORD *)(a1 + 16) = *(_QWORD *)a2;
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)(a1 + 16));
  *(_QWORD *)(a1 + 24) = *(_QWORD *)(a2 + 8);
  *(_QWORD *)(a1 + 32) = *(_QWORD *)(a2 + 16);
  *(_QWORD *)(a1 + 40) = *(_QWORD *)(a2 + 24);
  *(_DWORD *)(a1 + 48) = *(_DWORD *)(a2 + 32);
  v4 = *(_QWORD *)(a2 + 40);
  *(_QWORD *)(a1 + 56) = v4;
  if ( v4 )
    _InterlockedIncrement((volatile signed __int32 *)(v4 + 44));
  v5 = *(_QWORD *)(a2 + 48);
  *(_QWORD *)(a1 + 64) = v5;
  if ( v5 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 8LL))(v5);
  *(_QWORD *)a1 = off_180456118;
  return a1;
}
