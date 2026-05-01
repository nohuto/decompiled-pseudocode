/*
 * XREFs of Windows::Internal::ComTaskPool::CTaskWrapper__lambda_101c7afbd5e76fc2a50976d3f19be39a___::CTaskWrapper__lambda_101c7afbd5e76fc2a50976d3f19be39a_____lambda_101c7afbd5e76fc2a50976d3f19be39a___ @ 0x180254EB0
 * Callers:
 *     ?TabDropped@TabTransferManager@@UEAAJAEBU_GUID@@0HUtagPOINT@@@Z @ 0x18025A020 (-TabDropped@TabTransferManager@@UEAAJAEBU_GUID@@0HUtagPOINT@@@Z.c)
 * Callees:
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UIComPoolTask@Internal@Windows@@@WRL@Microsoft@@QEAA@XZ @ 0x180021B84 (--0-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@UIComPoolTask@Internal@Windows@@@WRL@M.c)
 */

__int64 __fastcall Windows::Internal::ComTaskPool::CTaskWrapper__lambda_101c7afbd5e76fc2a50976d3f19be39a___::CTaskWrapper__lambda_101c7afbd5e76fc2a50976d3f19be39a_____lambda_101c7afbd5e76fc2a50976d3f19be39a___(
        __int64 a1,
        __int64 a2)
{
  __int64 v4; // rax

  Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Internal::IComPoolTask>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Internal::IComPoolTask>(a1);
  *(_QWORD *)(a1 + 16) = *(_QWORD *)a2;
  v4 = *(_QWORD *)(a2 + 8);
  *(_QWORD *)(a2 + 8) = 0LL;
  *(_QWORD *)(a1 + 24) = v4;
  *(_OWORD *)(a1 + 32) = *(_OWORD *)(a2 + 16);
  *(_OWORD *)(a1 + 48) = *(_OWORD *)(a2 + 32);
  *(_DWORD *)(a1 + 64) = *(_DWORD *)(a2 + 48);
  *(_QWORD *)(a1 + 68) = *(_QWORD *)(a2 + 52);
  *(_QWORD *)a1 = off_180447A20;
  return a1;
}
