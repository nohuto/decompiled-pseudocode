/*
 * XREFs of Windows::Internal::ComTaskPool::QueueTask__lambda_fb23503d9b3566a26ea1a9c0ca33164d___ @ 0x18006AB94
 * Callers:
 *     ?PerformLicenseCheck@AtmosCheck@@QEAAJ_N@Z @ 0x180037244 (-PerformLicenseCheck@AtmosCheck@@QEAAJ_N@Z.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIAudioProcessNotification@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180048E20 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIAudioProcessNot.c)
 *     Microsoft::WRL::Details::Make_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_fb23503d9b3566a26ea1a9c0ca33164d_____lambda_fb23503d9b3566a26ea1a9c0ca33164d___ @ 0x18006A9CC (Microsoft--WRL--Details--Make_Windows--Internal--ComTaskPool--CTaskWrapper__lambda_fb23503d9b356.c)
 *     _guard_dispatch_icall_nop @ 0x18006C990 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Windows::Internal::ComTaskPool::QueueTask__lambda_fb23503d9b3566a26ea1a9c0ca33164d___(
        unsigned int a1,
        __int64 a2,
        unsigned int a3,
        __int64 *a4)
{
  __int64 *v6; // rax
  __int64 v7; // rbx
  __int64 v8; // rcx
  unsigned int v9; // edi
  __int64 v11[3]; // [rsp+30h] [rbp-18h] BYREF

  v6 = Microsoft::WRL::Details::Make_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_fb23503d9b3566a26ea1a9c0ca33164d_____lambda_fb23503d9b3566a26ea1a9c0ca33164d___(
         v11,
         a4);
  v7 = *v6;
  *v6 = 0LL;
  v8 = v11[0];
  if ( v11[0] )
  {
    v11[0] = 0LL;
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IAudioProcessNotification>::Release(v8);
  }
  v9 = SHTaskPoolQueueTask(a1, 32LL, a3);
  if ( v7 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
  return v9;
}
