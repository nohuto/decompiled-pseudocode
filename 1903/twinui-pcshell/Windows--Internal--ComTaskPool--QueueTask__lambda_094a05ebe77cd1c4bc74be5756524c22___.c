/*
 * XREFs of Windows::Internal::ComTaskPool::QueueTask__lambda_094a05ebe77cd1c4bc74be5756524c22___ @ 0x180126190
 * Callers:
 *     ?_ScheduleLegacyModeNotification@CImmersiveMode@@AEAAXW4IMM_SYSTEM_MODE@@0@Z @ 0x1801281B8 (-_ScheduleLegacyModeNotification@CImmersiveMode@@AEAAXW4IMM_SYSTEM_MODE@@0@Z.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIComPoolTask@Internal@Windows@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18005A170 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIComPoolTask@Int.c)
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 *     Microsoft::WRL::Details::Make_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_094a05ebe77cd1c4bc74be5756524c22_____lambda_094a05ebe77cd1c4bc74be5756524c22___ @ 0x1801260F4 (Microsoft--WRL--Details--Make_Windows--Internal--ComTaskPool--CTaskWrapper__lambda_094a05ebe77cd.c)
 */

__int64 __fastcall Windows::Internal::ComTaskPool::QueueTask__lambda_094a05ebe77cd1c4bc74be5756524c22___(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        _DWORD *a4)
{
  volatile signed __int32 **v5; // rax
  volatile signed __int32 *v6; // rbx
  volatile signed __int32 *v7; // rcx
  unsigned int v8; // edi
  volatile signed __int32 *v10; // [rsp+30h] [rbp-18h] BYREF

  v5 = Microsoft::WRL::Details::Make_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_094a05ebe77cd1c4bc74be5756524c22_____lambda_094a05ebe77cd1c4bc74be5756524c22___(
         &v10,
         a4);
  v6 = *v5;
  *v5 = 0LL;
  v7 = v10;
  if ( v10 )
  {
    v10 = 0LL;
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,Windows::Internal::IComPoolTask>::Release(v7);
  }
  v8 = SHTaskPoolQueueTask(3LL, 2LL, a3, 0LL, v6, 0LL);
  if ( v6 )
    (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v6 + 16LL))(v6);
  return v8;
}
