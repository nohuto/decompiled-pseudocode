/*
 * XREFs of Windows::Internal::ComTaskPool::CTaskWrapper__lambda_e5ec5a2f5be6774a4b968c7ab4405170___::CTaskWrapper__lambda_e5ec5a2f5be6774a4b968c7ab4405170_____lambda_e5ec5a2f5be6774a4b968c7ab4405170___ @ 0x1803503D4
 * Callers:
 *     CreationThreadDispatcher::RunAsync__lambda_49edb9179b1ba6407f235e88a6b30a0e___ @ 0x180350D5C (CreationThreadDispatcher--RunAsync__lambda_49edb9179b1ba6407f235e88a6b30a0e___.c)
 * Callees:
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UIComPoolTask@Internal@Windows@@@WRL@Microsoft@@QEAA@XZ @ 0x18002AEF4 (--0-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@UIComPoolTask@Internal@Windows@@@WRL@M.c)
 */

__int64 __fastcall Windows::Internal::ComTaskPool::CTaskWrapper__lambda_e5ec5a2f5be6774a4b968c7ab4405170___::CTaskWrapper__lambda_e5ec5a2f5be6774a4b968c7ab4405170_____lambda_e5ec5a2f5be6774a4b968c7ab4405170___(
        __int64 a1,
        __int64 a2)
{
  __int64 v4; // xmm1_8
  _QWORD *v5; // rbx

  Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Internal::IComPoolTask>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Internal::IComPoolTask>(a1);
  *(_OWORD *)(a1 + 16) = *(_OWORD *)a2;
  v4 = *(_QWORD *)(a2 + 16);
  v5 = (_QWORD *)(a2 + 24);
  *(_QWORD *)(a1 + 32) = v4;
  *(_QWORD *)(a1 + 40) = 0LL;
  if ( (_QWORD *)(a1 + 40) != v5 )
  {
    *(_QWORD *)(a1 + 40) = *v5;
    *v5 = 0LL;
  }
  *(_QWORD *)a1 = off_1804736D0;
  return a1;
}
