/*
 * XREFs of Windows::Internal::ComTaskPool::QueueTask__lambda_d064192a2b953b8de01ade2ddfeadb45___ @ 0x1802952A4
 * Callers:
 *     ?ChangeSuppressPopupsCount@ViewWrapperBase@@UEAA?AW4StateChangeResult@@W4PopupCountOperation@@_K@Z @ 0x1802973E0 (-ChangeSuppressPopupsCount@ViewWrapperBase@@UEAA-AW4StateChangeResult@@W4PopupCountOperation@@_K.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIComPoolTask@Internal@Windows@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18005A170 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIComPoolTask@Int.c)
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 *     Microsoft::WRL::Details::Make_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_d064192a2b953b8de01ade2ddfeadb45_____lambda_d064192a2b953b8de01ade2ddfeadb45___ @ 0x180294D8C (Microsoft--WRL--Details--Make_Windows--Internal--ComTaskPool--CTaskWrapper__lambda_d064192a2b953.c)
 */

__int64 __fastcall Windows::Internal::ComTaskPool::QueueTask__lambda_d064192a2b953b8de01ade2ddfeadb45___(
        __int64 a1,
        _QWORD *a2)
{
  volatile signed __int32 **v2; // rax
  volatile signed __int32 *v3; // rbx
  volatile signed __int32 *v4; // rcx
  DWORD CurrentThreadId; // eax
  unsigned int v6; // edi
  volatile signed __int32 *v8; // [rsp+50h] [rbp+18h] BYREF

  v2 = Microsoft::WRL::Details::Make_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_d064192a2b953b8de01ade2ddfeadb45_____lambda_d064192a2b953b8de01ade2ddfeadb45___(
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
