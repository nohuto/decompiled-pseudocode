/*
 * XREFs of Windows::Internal::ComTaskPool::QueueTaskWithDelay__lambda_6e311798af2a13a705896e3bfbb4f83e___ @ 0x1803105C0
 * Callers:
 *     ??$RelaunchExperienceWithDelay@UIStartExperienceManager@Experience@Shell@Internal@Windows@@@@YAXPEAUIStartExperienceManager@Experience@Shell@Internal@Windows@@P6AXXZ@Z @ 0x180310788 (--$RelaunchExperienceWithDelay@UIStartExperienceManager@Experience@Shell@Internal@Windows@@@@YAX.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIComPoolTask@Internal@Windows@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180059100 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIComPoolTask@Int.c)
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 *     Microsoft::WRL::Details::Make_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_6e311798af2a13a705896e3bfbb4f83e_____lambda_6e311798af2a13a705896e3bfbb4f83e___ @ 0x180310234 (Microsoft--WRL--Details--Make_Windows--Internal--ComTaskPool--CTaskWrapper__lambda_6e311798af2a1.c)
 */

__int64 __fastcall Windows::Internal::ComTaskPool::QueueTaskWithDelay__lambda_6e311798af2a13a705896e3bfbb4f83e___(
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
  v4 = Microsoft::WRL::Details::Make_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_6e311798af2a13a705896e3bfbb4f83e_____lambda_6e311798af2a13a705896e3bfbb4f83e___(
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
  v9 = SHTaskPoolQueueTask(3LL, 0LL, CurrentThreadId);
  if ( v6 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
  return v9;
}
