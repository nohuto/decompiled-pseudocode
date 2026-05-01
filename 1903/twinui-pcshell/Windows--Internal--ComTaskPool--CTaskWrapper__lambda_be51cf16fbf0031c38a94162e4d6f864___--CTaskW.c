/*
 * XREFs of Windows::Internal::ComTaskPool::CTaskWrapper__lambda_be51cf16fbf0031c38a94162e4d6f864___::CTaskWrapper__lambda_be51cf16fbf0031c38a94162e4d6f864_____lambda_be51cf16fbf0031c38a94162e4d6f864___ @ 0x18009C114
 * Callers:
 *     Windows::Internal::ComTaskPool::QueueTask__lambda_be51cf16fbf0031c38a94162e4d6f864___ @ 0x18009C694 (Windows--Internal--ComTaskPool--QueueTask__lambda_be51cf16fbf0031c38a94162e4d6f864___.c)
 * Callees:
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UIComPoolTask@Internal@Windows@@@WRL@Microsoft@@QEAA@XZ @ 0x180021B84 (--0-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@UIComPoolTask@Internal@Windows@@@WRL@M.c)
 */

__int64 __fastcall Windows::Internal::ComTaskPool::CTaskWrapper__lambda_be51cf16fbf0031c38a94162e4d6f864___::CTaskWrapper__lambda_be51cf16fbf0031c38a94162e4d6f864_____lambda_be51cf16fbf0031c38a94162e4d6f864___(
        __int64 a1,
        __int64 a2)
{
  _QWORD *v4; // rcx

  Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Internal::IComPoolTask>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Internal::IComPoolTask>(a1);
  *(_DWORD *)(a1 + 16) = *(_DWORD *)a2;
  v4 = (_QWORD *)(a2 + 8);
  *(_BYTE *)(a1 + 20) = *(_BYTE *)(a2 + 4);
  *(_QWORD *)(a1 + 24) = 0LL;
  if ( a1 + 24 != a2 + 8 )
  {
    *(_QWORD *)(a1 + 24) = *v4;
    *v4 = 0LL;
  }
  *(_QWORD *)(a1 + 32) = *(_QWORD *)(a2 + 16);
  *(_QWORD *)a1 = off_18042EAB0;
  return a1;
}
