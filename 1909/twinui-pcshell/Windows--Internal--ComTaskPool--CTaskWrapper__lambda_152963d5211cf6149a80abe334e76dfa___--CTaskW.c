/*
 * XREFs of Windows::Internal::ComTaskPool::CTaskWrapper__lambda_152963d5211cf6149a80abe334e76dfa___::CTaskWrapper__lambda_152963d5211cf6149a80abe334e76dfa_____lambda_152963d5211cf6149a80abe334e76dfa___ @ 0x18030A624
 * Callers:
 *     Windows::Internal::ComTaskPool::QueueTask__lambda_152963d5211cf6149a80abe334e76dfa___ @ 0x18030AAA8 (Windows--Internal--ComTaskPool--QueueTask__lambda_152963d5211cf6149a80abe334e76dfa___.c)
 * Callees:
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UIComPoolTask@Internal@Windows@@@WRL@Microsoft@@QEAA@XZ @ 0x18002AEF4 (--0-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@UIComPoolTask@Internal@Windows@@@WRL@M.c)
 *     ?__abi_winrt_ptr_ctor@@YAPEAXQE$ADVObject@Platform@@@Z @ 0x1802D2F90 (-__abi_winrt_ptr_ctor@@YAPEAXQE$ADVObject@Platform@@@Z.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall Windows::Internal::ComTaskPool::CTaskWrapper__lambda_152963d5211cf6149a80abe334e76dfa___::CTaskWrapper__lambda_152963d5211cf6149a80abe334e76dfa_____lambda_152963d5211cf6149a80abe334e76dfa___(
        _QWORD *a1,
        __int64 *a2)
{
  __int64 v4; // rax
  __int64 v5; // rax

  Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Internal::IComPoolTask>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Internal::IComPoolTask>((__int64)a1);
  v4 = *a2;
  *a2 = 0LL;
  a1[2] = v4;
  v5 = a2[1];
  a2[1] = 0LL;
  a1[3] = v5;
  a1[4] = __abi_winrt_ptr_ctor(a2[2]);
  a1[5] = __abi_winrt_ptr_ctor(a2[3]);
  *a1 = off_1805BE8C8;
  return a1;
}
