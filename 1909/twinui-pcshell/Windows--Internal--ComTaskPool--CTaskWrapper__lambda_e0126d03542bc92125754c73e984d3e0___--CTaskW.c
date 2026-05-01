/*
 * XREFs of Windows::Internal::ComTaskPool::CTaskWrapper__lambda_e0126d03542bc92125754c73e984d3e0___::CTaskWrapper__lambda_e0126d03542bc92125754c73e984d3e0_____lambda_e0126d03542bc92125754c73e984d3e0___ @ 0x1802FD518
 * Callers:
 *     CreationThreadDispatcher::RunAsync__lambda_b6c581e8b051b8d7b55a0d96c6d35adf___ @ 0x1802FE370 (CreationThreadDispatcher--RunAsync__lambda_b6c581e8b051b8d7b55a0d96c6d35adf___.c)
 * Callees:
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UIComPoolTask@Internal@Windows@@@WRL@Microsoft@@QEAA@XZ @ 0x18002AEF4 (--0-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@UIComPoolTask@Internal@Windows@@@WRL@M.c)
 */

__int64 __fastcall Windows::Internal::ComTaskPool::CTaskWrapper__lambda_e0126d03542bc92125754c73e984d3e0___::CTaskWrapper__lambda_e0126d03542bc92125754c73e984d3e0_____lambda_e0126d03542bc92125754c73e984d3e0___(
        __int64 a1,
        __int64 a2)
{
  char v4; // al
  _QWORD *v5; // rbx

  Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Internal::IComPoolTask>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Internal::IComPoolTask>(a1);
  *(_QWORD *)(a1 + 16) = *(_QWORD *)a2;
  *(_QWORD *)a2 = 0LL;
  v4 = *(_BYTE *)(a2 + 8);
  v5 = (_QWORD *)(a2 + 16);
  *(_BYTE *)(a1 + 24) = v4;
  *(_QWORD *)(a1 + 32) = 0LL;
  if ( (_QWORD *)(a1 + 32) != v5 )
  {
    *(_QWORD *)(a1 + 32) = *v5;
    *v5 = 0LL;
  }
  *(_QWORD *)a1 = off_1805BD2D8;
  return a1;
}
