/*
 * XREFs of Windows::Internal::ComTaskPool::CTaskWrapper__lambda_42dce70c870a3964e7319458b8bf7bca___::CTaskWrapper__lambda_42dce70c870a3964e7319458b8bf7bca_____lambda_42dce70c870a3964e7319458b8bf7bca___ @ 0x1800A9D9C
 * Callers:
 *     Windows::Internal::ComTaskPool::QueueTask__lambda_42dce70c870a3964e7319458b8bf7bca___ @ 0x1800AA52C (Windows--Internal--ComTaskPool--QueueTask__lambda_42dce70c870a3964e7319458b8bf7bca___.c)
 * Callees:
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UIComPoolTask@Internal@Windows@@@WRL@Microsoft@@QEAA@XZ @ 0x180021B84 (--0-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@UIComPoolTask@Internal@Windows@@@WRL@M.c)
 */

__int64 __fastcall Windows::Internal::ComTaskPool::CTaskWrapper__lambda_42dce70c870a3964e7319458b8bf7bca___::CTaskWrapper__lambda_42dce70c870a3964e7319458b8bf7bca_____lambda_42dce70c870a3964e7319458b8bf7bca___(
        __int64 a1,
        __int64 a2)
{
  Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Internal::IComPoolTask>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Internal::IComPoolTask>(a1);
  *(_DWORD *)(a1 + 16) = *(_DWORD *)a2;
  *(_QWORD *)(a1 + 40) = 0LL;
  *(_QWORD *)(a1 + 48) = 0LL;
  *(_OWORD *)(a1 + 24) = *(_OWORD *)(a2 + 8);
  *(_OWORD *)(a1 + 40) = *(_OWORD *)(a2 + 24);
  *(_QWORD *)(a2 + 24) = 0LL;
  *(_QWORD *)(a2 + 32) = 7LL;
  *(_WORD *)(a2 + 8) = 0;
  *(_QWORD *)a1 = off_180431300;
  return a1;
}
