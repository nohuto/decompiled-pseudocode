/*
 * XREFs of Windows::Internal::ComTaskPool::CTaskWrapper__lambda_8475afa15079342a15ccc51689e4ed78___::CTaskWrapper__lambda_8475afa15079342a15ccc51689e4ed78_____lambda_8475afa15079342a15ccc51689e4ed78___ @ 0x18009BF48
 * Callers:
 *     Windows::Internal::ComTaskPool::QueueTask__lambda_8475afa15079342a15ccc51689e4ed78___ @ 0x18009C444 (Windows--Internal--ComTaskPool--QueueTask__lambda_8475afa15079342a15ccc51689e4ed78___.c)
 * Callees:
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UIComPoolTask@Internal@Windows@@@WRL@Microsoft@@QEAA@XZ @ 0x180021B84 (--0-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@UIComPoolTask@Internal@Windows@@@WRL@M.c)
 */

__int64 __fastcall Windows::Internal::ComTaskPool::CTaskWrapper__lambda_8475afa15079342a15ccc51689e4ed78___::CTaskWrapper__lambda_8475afa15079342a15ccc51689e4ed78_____lambda_8475afa15079342a15ccc51689e4ed78___(
        __int64 a1,
        __int64 a2)
{
  _QWORD *v4; // rcx

  Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Internal::IComPoolTask>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Internal::IComPoolTask>(a1);
  *(_DWORD *)(a1 + 16) = *(_DWORD *)a2;
  v4 = (_QWORD *)(a2 + 24);
  *(_OWORD *)(a1 + 20) = *(_OWORD *)(a2 + 4);
  *(_BYTE *)(a1 + 36) = *(_BYTE *)(a2 + 20);
  *(_QWORD *)(a1 + 40) = 0LL;
  if ( a1 + 40 != a2 + 24 )
  {
    *(_QWORD *)(a1 + 40) = *v4;
    *v4 = 0LL;
  }
  *(_QWORD *)(a1 + 48) = *(_QWORD *)(a2 + 32);
  *(_QWORD *)a1 = off_18042EA60;
  return a1;
}
