/*
 * XREFs of Windows::Internal::ComTaskPool::QueueTask__lambda_5fdb99dacccac904988dd17345bbe3cc___ @ 0x180126560
 * Callers:
 *     CFrameApplicationPresentation::_AddTaskToQueue__lambda_6d34880a2f63f7d50ab492b5e04756d2___ @ 0x1801268D8 (CFrameApplicationPresentation--_AddTaskToQueue__lambda_6d34880a2f63f7d50ab492b5e04756d2___.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIComPoolTask@Internal@Windows@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180053B90 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIComPoolTask@Int.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     Microsoft::WRL::Details::Make_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_5fdb99dacccac904988dd17345bbe3cc_____lambda_5fdb99dacccac904988dd17345bbe3cc___ @ 0x180126114 (Microsoft--WRL--Details--Make_Windows--Internal--ComTaskPool--CTaskWrapper__lambda_5fdb99dacccac.c)
 */

__int64 __fastcall Windows::Internal::ComTaskPool::QueueTask__lambda_5fdb99dacccac904988dd17345bbe3cc___(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        _QWORD *a4)
{
  __int64 *v5; // rax
  volatile int *v6; // rdx
  __int64 v7; // rbx
  __int64 v8; // rcx
  unsigned int v9; // edi
  __int64 v11[3]; // [rsp+30h] [rbp-18h] BYREF

  v5 = Microsoft::WRL::Details::Make_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_5fdb99dacccac904988dd17345bbe3cc_____lambda_5fdb99dacccac904988dd17345bbe3cc___(
         v11,
         a4);
  v7 = *v5;
  *v5 = 0LL;
  v8 = v11[0];
  if ( v11[0] )
  {
    v11[0] = 0LL;
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,Windows::Internal::IComPoolTask>::Release(
      v8,
      v6);
  }
  v9 = SHTaskPoolQueueTask(3LL, 2LL, a3, 0LL, v7, 0LL);
  if ( v7 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
  return v9;
}
