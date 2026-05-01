/*
 * XREFs of Windows::Internal::ComTaskPool::CTaskWrapper__lambda_b18e3bcd543815e33ea05325daf44312___::CTaskWrapper__lambda_b18e3bcd543815e33ea05325daf44312_____lambda_b18e3bcd543815e33ea05325daf44312___ @ 0x18015EDE8
 * Callers:
 *     Windows::Internal::ComTaskPool::QueueTask__lambda_b18e3bcd543815e33ea05325daf44312___ @ 0x18015FE88 (Windows--Internal--ComTaskPool--QueueTask__lambda_b18e3bcd543815e33ea05325daf44312___.c)
 * Callees:
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UIComPoolTask@Internal@Windows@@@WRL@Microsoft@@QEAA@XZ @ 0x18002AEF4 (--0-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@UIComPoolTask@Internal@Windows@@@WRL@M.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18006EC20 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 */

__int64 __fastcall Windows::Internal::ComTaskPool::CTaskWrapper__lambda_b18e3bcd543815e33ea05325daf44312___::CTaskWrapper__lambda_b18e3bcd543815e33ea05325daf44312_____lambda_b18e3bcd543815e33ea05325daf44312___(
        __int64 a1,
        __int64 a2)
{
  Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Internal::IComPoolTask>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Internal::IComPoolTask>(a1);
  *(_QWORD *)(a1 + 16) = *(_QWORD *)a2;
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)(a1 + 16));
  *(_QWORD *)(a1 + 24) = *(_QWORD *)(a2 + 8);
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)(a1 + 24));
  *(_DWORD *)(a1 + 32) = *(_DWORD *)(a2 + 16);
  *(_QWORD *)a1 = off_1804563A8;
  return a1;
}
