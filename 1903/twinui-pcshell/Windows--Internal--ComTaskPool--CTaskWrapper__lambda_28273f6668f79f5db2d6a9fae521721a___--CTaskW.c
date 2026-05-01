/*
 * XREFs of Windows::Internal::ComTaskPool::CTaskWrapper__lambda_28273f6668f79f5db2d6a9fae521721a___::CTaskWrapper__lambda_28273f6668f79f5db2d6a9fae521721a_____lambda_28273f6668f79f5db2d6a9fae521721a___ @ 0x1801D669C
 * Callers:
 *     CreationThreadDispatcher::RunAsync__lambda_8f2a2ffc4d06e565a800bfc0e8cd8d27___ @ 0x1801D6A0C (CreationThreadDispatcher--RunAsync__lambda_8f2a2ffc4d06e565a800bfc0e8cd8d27___.c)
 * Callees:
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UIComPoolTask@Internal@Windows@@@WRL@Microsoft@@QEAA@XZ @ 0x180021B84 (--0-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@UIComPoolTask@Internal@Windows@@@WRL@M.c)
 */

__int64 __fastcall Windows::Internal::ComTaskPool::CTaskWrapper__lambda_28273f6668f79f5db2d6a9fae521721a___::CTaskWrapper__lambda_28273f6668f79f5db2d6a9fae521721a_____lambda_28273f6668f79f5db2d6a9fae521721a___(
        __int64 a1,
        __int64 a2)
{
  _QWORD *v4; // rbx

  Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Internal::IComPoolTask>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Internal::IComPoolTask>(a1);
  *(_DWORD *)(a1 + 16) = *(_DWORD *)a2;
  *(_QWORD *)(a1 + 24) = 0LL;
  *(_QWORD *)(a1 + 32) = 0LL;
  *(_QWORD *)(a1 + 24) = *(_QWORD *)(a2 + 8);
  *(_QWORD *)(a1 + 32) = *(_QWORD *)(a2 + 16);
  *(_QWORD *)(a2 + 8) = 0LL;
  *(_QWORD *)(a2 + 16) = 0LL;
  v4 = (_QWORD *)(a2 + 24);
  *(_QWORD *)(a1 + 40) = 0LL;
  if ( (_QWORD *)(a1 + 40) != v4 )
  {
    *(_QWORD *)(a1 + 40) = *v4;
    *v4 = 0LL;
  }
  *(_QWORD *)a1 = off_18043E500;
  return a1;
}
