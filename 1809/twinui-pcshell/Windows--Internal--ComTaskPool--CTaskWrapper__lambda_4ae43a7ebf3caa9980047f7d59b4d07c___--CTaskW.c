/*
 * XREFs of Windows::Internal::ComTaskPool::CTaskWrapper__lambda_4ae43a7ebf3caa9980047f7d59b4d07c___::CTaskWrapper__lambda_4ae43a7ebf3caa9980047f7d59b4d07c_____lambda_4ae43a7ebf3caa9980047f7d59b4d07c___ @ 0x180091B14
 * Callers:
 *     Windows::Internal::ComTaskPool::QueueTask__lambda_4ae43a7ebf3caa9980047f7d59b4d07c___ @ 0x180092064 (Windows--Internal--ComTaskPool--QueueTask__lambda_4ae43a7ebf3caa9980047f7d59b4d07c___.c)
 * Callees:
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UIComPoolTask@Internal@Windows@@@WRL@Microsoft@@QEAA@XZ @ 0x180035E08 (--0-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@UIComPoolTask@Internal@Windows@@@WRL@M.c)
 */

__int64 __fastcall Windows::Internal::ComTaskPool::CTaskWrapper__lambda_4ae43a7ebf3caa9980047f7d59b4d07c___::CTaskWrapper__lambda_4ae43a7ebf3caa9980047f7d59b4d07c_____lambda_4ae43a7ebf3caa9980047f7d59b4d07c___(
        __int64 a1,
        __int64 a2)
{
  _QWORD *v4; // rcx

  Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Internal::IComPoolTask>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Internal::IComPoolTask>(a1);
  *(_DWORD *)(a1 + 16) = *(_DWORD *)a2;
  v4 = (_QWORD *)(a2 + 24);
  *(_OWORD *)(a1 + 20) = *(_OWORD *)(a2 + 4);
  *(_BYTE *)(a1 + 36) = *(_BYTE *)(a2 + 20);
  *(_BYTE *)(a1 + 37) = *(_BYTE *)(a2 + 21);
  *(_BYTE *)(a1 + 38) = *(_BYTE *)(a2 + 22);
  *(_QWORD *)(a1 + 40) = 0LL;
  if ( a1 + 40 != a2 + 24 )
  {
    *(_QWORD *)(a1 + 40) = *v4;
    *v4 = 0LL;
  }
  *(_QWORD *)(a1 + 48) = *(_QWORD *)(a2 + 32);
  *(_QWORD *)a1 = off_1803CB380;
  return a1;
}
