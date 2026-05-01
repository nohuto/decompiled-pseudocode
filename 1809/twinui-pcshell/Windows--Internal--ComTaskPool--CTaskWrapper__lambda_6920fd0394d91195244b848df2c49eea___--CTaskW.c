/*
 * XREFs of Windows::Internal::ComTaskPool::CTaskWrapper__lambda_6920fd0394d91195244b848df2c49eea___::CTaskWrapper__lambda_6920fd0394d91195244b848df2c49eea_____lambda_6920fd0394d91195244b848df2c49eea___ @ 0x180091B8C
 * Callers:
 *     Windows::Internal::ComTaskPool::QueueTask__lambda_6920fd0394d91195244b848df2c49eea___ @ 0x1800920EC (Windows--Internal--ComTaskPool--QueueTask__lambda_6920fd0394d91195244b848df2c49eea___.c)
 * Callees:
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UIComPoolTask@Internal@Windows@@@WRL@Microsoft@@QEAA@XZ @ 0x180035E08 (--0-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@UIComPoolTask@Internal@Windows@@@WRL@M.c)
 */

__int64 __fastcall Windows::Internal::ComTaskPool::CTaskWrapper__lambda_6920fd0394d91195244b848df2c49eea___::CTaskWrapper__lambda_6920fd0394d91195244b848df2c49eea_____lambda_6920fd0394d91195244b848df2c49eea___(
        __int64 a1,
        __int64 a2)
{
  Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Internal::IComPoolTask>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Internal::IComPoolTask>(a1);
  *(_QWORD *)(a1 + 32) = 0LL;
  *(_QWORD *)(a1 + 40) = 0LL;
  *(_OWORD *)(a1 + 16) = *(_OWORD *)a2;
  *(_OWORD *)(a1 + 32) = *(_OWORD *)(a2 + 16);
  *(_QWORD *)(a2 + 16) = 0LL;
  *(_QWORD *)(a2 + 24) = 7LL;
  *(_WORD *)a2 = 0;
  *(_QWORD *)(a1 + 48) = *(_QWORD *)(a2 + 32);
  *(_QWORD *)a1 = off_1803CB308;
  return a1;
}
