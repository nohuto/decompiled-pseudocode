/*
 * XREFs of Windows::Internal::ComTaskPool::CTaskWrapper__lambda_5f9e95539f8e1465166802ff2b1874b7___::CTaskWrapper__lambda_5f9e95539f8e1465166802ff2b1874b7_____lambda_5f9e95539f8e1465166802ff2b1874b7___ @ 0x1801F49BC
 * Callers:
 *     Windows::Internal::ComTaskPool::QueueTask__lambda_5f9e95539f8e1465166802ff2b1874b7___ @ 0x1801F5370 (Windows--Internal--ComTaskPool--QueueTask__lambda_5f9e95539f8e1465166802ff2b1874b7___.c)
 * Callees:
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UIComPoolTask@Internal@Windows@@@WRL@Microsoft@@QEAA@XZ @ 0x180035E08 (--0-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@UIComPoolTask@Internal@Windows@@@WRL@M.c)
 */

__int64 __fastcall Windows::Internal::ComTaskPool::CTaskWrapper__lambda_5f9e95539f8e1465166802ff2b1874b7___::CTaskWrapper__lambda_5f9e95539f8e1465166802ff2b1874b7_____lambda_5f9e95539f8e1465166802ff2b1874b7___(
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
  v6 = *(_QWORD *)(a2 + 40);
  *(_QWORD *)(a2 + 40) = 0LL;
  *(_QWORD *)(a1 + 56) = v6;
  *(_QWORD *)a1 = off_1803DF1A0;
  return a1;
}
