/*
 * XREFs of Windows::Internal::ComTaskPool::QueueTaskWithDelay__lambda_adf88bafc3ef94521e0755b235cf6fdc__&___ptr64_ @ 0x18035A65C
 * Callers:
 *     ?Show@WindowArrangementView@@UEAAJPEAUtagRECT@@AEBUtagPOINT@@0@Z @ 0x18035D720 (-Show@WindowArrangementView@@UEAAJPEAUtagRECT@@AEBUtagPOINT@@0@Z.c)
 * Callees:
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UIComPoolTask@Internal@Windows@@@WRL@Microsoft@@QEAA@XZ @ 0x180035E08 (--0-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@UIComPoolTask@Internal@Windows@@@WRL@M.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180084460 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     ?InternalAddRef@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCCommonApplicationViewPositionImpl@@VFtmBase@23@@Details@WRL@Microsoft@@IEAAKXZ @ 0x1801236A4 (-InternalAddRef@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCCommonAp.c)
 */

__int64 __fastcall Windows::Internal::ComTaskPool::QueueTaskWithDelay__lambda_adf88bafc3ef94521e0755b235cf6fdc______ptr64_(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 *a4)
{
  _QWORD *v5; // rax
  _QWORD *v6; // rdi
  _QWORD *v7; // rbx
  volatile int *v8; // rdx
  __int64 v9; // rcx
  DWORD CurrentThreadId; // eax
  unsigned int v11; // ebx

  v5 = operator new(0x18uLL, (const struct std::nothrow_t *)&std::nothrow);
  v6 = 0LL;
  v7 = v5;
  if ( v5 )
  {
    Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Internal::IComPoolTask>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Internal::IComPoolTask>((__int64)v5);
    v9 = *a4;
    v7[2] = *a4;
    if ( v9 )
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,CCommonApplicationViewPositionImpl,Microsoft::WRL::FtmBase>::InternalAddRef(
        v9,
        v8);
    v6 = v7;
    *v7 = off_1803FAFA8;
  }
  CurrentThreadId = GetCurrentThreadId();
  v11 = SHTaskPoolQueueTask(2LL, 0LL, CurrentThreadId, 50LL, v6, 0LL);
  if ( v6 )
    (*(void (__fastcall **)(_QWORD *))(*v6 + 16LL))(v6);
  return v11;
}
