/*
 * XREFs of Windows::Internal::ComTaskPool::QueueTask__lambda_2ade507f68d5c466c2155bc3180ec4d7___ @ 0x18016FC50
 * Callers:
 *     ?_FireFullScreenModeChangedEvent@CFullScreenManager@@AEAAXH@Z @ 0x180173A04 (-_FireFullScreenModeChangedEvent@CFullScreenManager@@AEAAXH@Z.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIComPoolTask@Internal@Windows@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18005A170 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIComPoolTask@Int.c)
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 *     Microsoft::WRL::Details::Make_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_2ade507f68d5c466c2155bc3180ec4d7_____lambda_2ade507f68d5c466c2155bc3180ec4d7___ @ 0x18016F70C (Microsoft--WRL--Details--Make_Windows--Internal--ComTaskPool--CTaskWrapper__lambda_2ade507f68d5c.c)
 */

__int64 __fastcall Windows::Internal::ComTaskPool::QueueTask__lambda_2ade507f68d5c466c2155bc3180ec4d7___(
        __int64 a1,
        _DWORD *a2)
{
  volatile signed __int32 **v2; // rax
  volatile signed __int32 *v3; // rbx
  volatile signed __int32 *v4; // rcx
  DWORD CurrentThreadId; // eax
  unsigned int v6; // edi
  volatile signed __int32 *v8; // [rsp+50h] [rbp+18h] BYREF

  v2 = Microsoft::WRL::Details::Make_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_2ade507f68d5c466c2155bc3180ec4d7_____lambda_2ade507f68d5c466c2155bc3180ec4d7___(
         &v8,
         a2);
  v3 = *v2;
  *v2 = 0LL;
  v4 = v8;
  if ( v8 )
  {
    v8 = 0LL;
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,Windows::Internal::IComPoolTask>::Release(v4);
  }
  CurrentThreadId = GetCurrentThreadId();
  v6 = SHTaskPoolQueueTask(3LL, 0LL, CurrentThreadId, 0LL, v3, 0LL);
  if ( v3 )
    (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v3 + 16LL))(v3);
  return v6;
}
