/*
 * XREFs of Windows::Internal::ComTaskPool::CTaskWrapper__lambda_c73351efc5a47bb1a53229d554a2998e___::CTaskWrapper__lambda_c73351efc5a47bb1a53229d554a2998e_____lambda_c73351efc5a47bb1a53229d554a2998e___ @ 0x180245E7C
 * Callers:
 *     Windows::Internal::ComTaskPool::QueueTask__lambda_c73351efc5a47bb1a53229d554a2998e___ @ 0x180246894 (Windows--Internal--ComTaskPool--QueueTask__lambda_c73351efc5a47bb1a53229d554a2998e___.c)
 * Callees:
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UIComPoolTask@Internal@Windows@@@WRL@Microsoft@@QEAA@XZ @ 0x180021B84 (--0-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@UIComPoolTask@Internal@Windows@@@WRL@M.c)
 */

__int64 __fastcall Windows::Internal::ComTaskPool::CTaskWrapper__lambda_c73351efc5a47bb1a53229d554a2998e___::CTaskWrapper__lambda_c73351efc5a47bb1a53229d554a2998e_____lambda_c73351efc5a47bb1a53229d554a2998e___(
        __int64 a1,
        __int64 a2)
{
  __int64 v4; // rax
  __int64 v5; // rax
  __int64 v6; // rax

  Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Internal::IComPoolTask>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Internal::IComPoolTask>(a1);
  *(_QWORD *)(a1 + 16) = *(_QWORD *)a2;
  v4 = *(_QWORD *)(a2 + 8);
  *(_QWORD *)(a2 + 8) = 0LL;
  *(_QWORD *)(a1 + 24) = v4;
  v5 = *(_QWORD *)(a2 + 16);
  *(_QWORD *)(a2 + 16) = 0LL;
  *(_QWORD *)(a1 + 32) = v5;
  *(_OWORD *)(a1 + 40) = *(_OWORD *)(a2 + 24);
  *(_BYTE *)(a1 + 56) = *(_BYTE *)(a2 + 40);
  v6 = *(_QWORD *)(a2 + 48);
  *(_QWORD *)(a2 + 48) = 0LL;
  *(_QWORD *)(a1 + 64) = v6;
  *(_QWORD *)a1 = off_180446BD8;
  return a1;
}
