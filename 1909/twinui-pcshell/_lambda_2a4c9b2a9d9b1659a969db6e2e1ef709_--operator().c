/*
 * XREFs of _lambda_2a4c9b2a9d9b1659a969db6e2e1ef709_::operator() @ 0x18035185C
 * Callers:
 *     wistd::__function::__func__lambda_2a4c9b2a9d9b1659a969db6e2e1ef709__void___cdecl(unsigned_long_const_&)_::operator() @ 0x180351AA0 (wistd--__function--__func__lambda_2a4c9b2a9d9b1659a969db6e2e1ef709__void___cdecl(un_ea_180351AA0.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIComPoolTask@Internal@Windows@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180059100 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIComPoolTask@Int.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006145C (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18007560C (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 *     Microsoft::WRL::Details::Make_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_65f83399764af5810282f797b2baf339_____lambda_65f83399764af5810282f797b2baf339___ @ 0x18035081C (Microsoft--WRL--Details--Make_Windows--Internal--ComTaskPool--CTaskWrapper__lambda_65f83399764af.c)
 */

__int64 __fastcall lambda_2a4c9b2a9d9b1659a969db6e2e1ef709_::operator()(__int64 *a1, int *a2)
{
  __int64 v2; // rcx
  __int64 *v4; // rax
  volatile int *v5; // rdx
  __int64 v6; // rbx
  __int64 v7; // rcx
  DWORD CurrentThreadId; // eax
  int v9; // edi
  __int64 v11; // [rsp+30h] [rbp-18h] BYREF
  int v12; // [rsp+38h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  __int64 v14; // [rsp+50h] [rbp+8h] BYREF

  v2 = *a1;
  v11 = v2;
  if ( v2 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 8LL))(v2);
  v12 = *a2;
  v4 = Microsoft::WRL::Details::Make_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_65f83399764af5810282f797b2baf339_____lambda_65f83399764af5810282f797b2baf339___(
         &v14,
         &v11);
  v6 = *v4;
  *v4 = 0LL;
  v7 = v14;
  if ( v14 )
  {
    v14 = 0LL;
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,Windows::Internal::IComPoolTask>::Release(
      v7,
      v5);
  }
  CurrentThreadId = GetCurrentThreadId();
  v9 = SHTaskPoolQueueTask(3LL, 0LL, CurrentThreadId);
  if ( v6 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
  if ( v9 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x63,
      (__int64)"pcshell\\twinui\\accessibilityexperiencemanager\\lib\\accessibilityexperiencemanager.cpp",
      (const char *)(unsigned int)v9);
  return Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v11);
}
