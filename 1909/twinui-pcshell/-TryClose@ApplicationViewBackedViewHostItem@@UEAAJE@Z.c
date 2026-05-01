/*
 * XREFs of ?TryClose@ApplicationViewBackedViewHostItem@@UEAAJE@Z @ 0x18023BDB0
 * Callers:
 *     <none>
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIComPoolTask@Internal@Windows@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180059100 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIComPoolTask@Int.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006145C (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18006EC20 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800755D8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 *     Microsoft::WRL::Details::Make_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_f072ab1976064765ea58feb5e43056af_____lambda_f072ab1976064765ea58feb5e43056af___ @ 0x180238C0C (Microsoft--WRL--Details--Make_Windows--Internal--ComTaskPool--CTaskWrapper__lambda_f072ab1976064.c)
 */

__int64 __fastcall ApplicationViewBackedViewHostItem::TryClose(ApplicationViewBackedViewHostItem *this, char a2)
{
  __int64 *v2; // rax
  volatile int *v3; // rdx
  __int64 v4; // rbx
  __int64 v5; // rcx
  DWORD CurrentThreadId; // eax
  int v7; // edi
  _BYTE v9[8]; // [rsp+30h] [rbp-18h] BYREF
  __int64 v10[2]; // [rsp+38h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  __int64 v12; // [rsp+50h] [rbp+8h] BYREF

  v10[0] = *((_QWORD *)this + 25);
  v9[0] = a2;
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(v10);
  v2 = Microsoft::WRL::Details::Make_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_f072ab1976064765ea58feb5e43056af_____lambda_f072ab1976064765ea58feb5e43056af___(
         &v12,
         v9);
  v4 = *v2;
  *v2 = 0LL;
  v5 = v12;
  if ( v12 )
  {
    v12 = 0LL;
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,Windows::Internal::IComPoolTask>::Release(
      v5,
      v3);
  }
  CurrentThreadId = GetCurrentThreadId();
  v7 = SHTaskPoolQueueTask(0LL, 0LL, CurrentThreadId);
  if ( v4 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(v10);
  if ( v7 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x133,
    (__int64)"pcshell\\twinui\\holographicpositioner\\lib\\applicationviewbackedviewhostitem.cpp",
    (const char *)(unsigned int)v7);
  return (unsigned int)v7;
}
