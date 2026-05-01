/*
 * XREFs of Windows::Internal::ComTaskPool::CTaskWrapper__lambda_0c9591b3b7af47026ef620a0b989ad73___::CTaskWrapper__lambda_0c9591b3b7af47026ef620a0b989ad73_____lambda_0c9591b3b7af47026ef620a0b989ad73___ @ 0x1801CDBEC
 * Callers:
 *     Windows::Internal::ComTaskPool::QueueTask__lambda_0c9591b3b7af47026ef620a0b989ad73___ @ 0x1801D038C (Windows--Internal--ComTaskPool--QueueTask__lambda_0c9591b3b7af47026ef620a0b989ad73___.c)
 * Callees:
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UIComPoolTask@Internal@Windows@@@WRL@Microsoft@@QEAA@XZ @ 0x180035E08 (--0-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@UIComPoolTask@Internal@Windows@@@WRL@M.c)
 */

__int64 __fastcall Windows::Internal::ComTaskPool::CTaskWrapper__lambda_0c9591b3b7af47026ef620a0b989ad73___::CTaskWrapper__lambda_0c9591b3b7af47026ef620a0b989ad73_____lambda_0c9591b3b7af47026ef620a0b989ad73___(
        __int64 a1,
        __int64 a2)
{
  _QWORD *v4; // rcx
  __int64 v5; // rax

  Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Internal::IComPoolTask>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Internal::IComPoolTask>(a1);
  *(_QWORD *)(a1 + 16) = *(_QWORD *)a2;
  v4 = (_QWORD *)(a2 + 8);
  *(_QWORD *)(a1 + 24) = 0LL;
  if ( a1 + 24 != a2 + 8 )
  {
    *(_QWORD *)(a1 + 24) = *v4;
    *v4 = 0LL;
  }
  v5 = *(_QWORD *)(a2 + 16);
  *(_QWORD *)(a2 + 16) = 0LL;
  *(_QWORD *)(a1 + 32) = v5;
  *(_OWORD *)(a1 + 40) = *(_OWORD *)(a2 + 24);
  *(_QWORD *)(a1 + 56) = *(_QWORD *)(a2 + 40);
  *(_QWORD *)a1 = off_1803DDDF0;
  return a1;
}
