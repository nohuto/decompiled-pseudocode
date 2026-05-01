/*
 * XREFs of Windows::Internal::ComTaskPool::QueueTaskWithDelay__lambda_036c3b4f3fb2a4a583399dad52518042___ @ 0x18018A708
 * Callers:
 *     ?OnTransitionStateChanged@FullScreenPositioner@@UEAAJ_K_J@Z @ 0x18018CC10 (-OnTransitionStateChanged@FullScreenPositioner@@UEAAJ_K_J@Z.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIComPoolTask@Internal@Windows@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180059100 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIComPoolTask@Int.c)
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 *     Microsoft::WRL::Details::Make_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_036c3b4f3fb2a4a583399dad52518042_____lambda_036c3b4f3fb2a4a583399dad52518042___ @ 0x18018A0D0 (Microsoft--WRL--Details--Make_Windows--Internal--ComTaskPool--CTaskWrapper__lambda_036c3b4f3fb2a.c)
 */

__int64 __fastcall Windows::Internal::ComTaskPool::QueueTaskWithDelay__lambda_036c3b4f3fb2a4a583399dad52518042___(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        _QWORD *a4)
{
  __int64 *v4; // rax
  volatile int *v5; // rdx
  __int64 v6; // rbx
  __int64 v7; // rcx
  DWORD CurrentThreadId; // eax
  unsigned int v9; // edi
  __int64 v11; // [rsp+50h] [rbp+18h] BYREF

  v11 = a3;
  v4 = Microsoft::WRL::Details::Make_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_036c3b4f3fb2a4a583399dad52518042_____lambda_036c3b4f3fb2a4a583399dad52518042___(
         &v11,
         a4);
  v6 = *v4;
  *v4 = 0LL;
  v7 = v11;
  if ( v11 )
  {
    v11 = 0LL;
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,Windows::Internal::IComPoolTask>::Release(
      v7,
      v5);
  }
  CurrentThreadId = GetCurrentThreadId();
  v9 = SHTaskPoolQueueTask(2LL, 0LL, CurrentThreadId);
  if ( v6 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
  return v9;
}
