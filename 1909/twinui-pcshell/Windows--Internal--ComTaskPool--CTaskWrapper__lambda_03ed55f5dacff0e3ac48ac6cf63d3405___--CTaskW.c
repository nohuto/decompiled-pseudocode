/*
 * XREFs of Windows::Internal::ComTaskPool::CTaskWrapper__lambda_03ed55f5dacff0e3ac48ac6cf63d3405___::CTaskWrapper__lambda_03ed55f5dacff0e3ac48ac6cf63d3405_____lambda_03ed55f5dacff0e3ac48ac6cf63d3405___ @ 0x18037DDCC
 * Callers:
 *     Windows::Internal::ComTaskPool::QueueTask__lambda_03ed55f5dacff0e3ac48ac6cf63d3405___ @ 0x18037DEEC (Windows--Internal--ComTaskPool--QueueTask__lambda_03ed55f5dacff0e3ac48ac6cf63d3405___.c)
 * Callees:
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UIComPoolTask@Internal@Windows@@@WRL@Microsoft@@QEAA@XZ @ 0x18002AEF4 (--0-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@UIComPoolTask@Internal@Windows@@@WRL@M.c)
 *     ??0CMarshaledInterface@@QEAA@$$QEAV0@@Z @ 0x18016D2E8 (--0CMarshaledInterface@@QEAA@$$QEAV0@@Z.c)
 */

__int64 __fastcall Windows::Internal::ComTaskPool::CTaskWrapper__lambda_03ed55f5dacff0e3ac48ac6cf63d3405___::CTaskWrapper__lambda_03ed55f5dacff0e3ac48ac6cf63d3405_____lambda_03ed55f5dacff0e3ac48ac6cf63d3405___(
        __int64 a1,
        __int64 a2)
{
  _QWORD *v4; // rcx
  __int64 result; // rax

  Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Internal::IComPoolTask>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Internal::IComPoolTask>(a1);
  v4 = (_QWORD *)(a2 + 16);
  *(_OWORD *)(a1 + 16) = *(_OWORD *)a2;
  *(_QWORD *)(a1 + 32) = 0LL;
  if ( a1 + 32 != a2 + 16 )
  {
    *(_QWORD *)(a1 + 32) = *v4;
    *v4 = 0LL;
  }
  CMarshaledInterface::CMarshaledInterface((_QWORD *)(a1 + 40), (_QWORD *)(a2 + 24));
  result = a1;
  *(_QWORD *)a1 = off_180479400;
  return result;
}
