/*
 * XREFs of _lambda_036c3b4f3fb2a4a583399dad52518042_::operator() @ 0x18018AEE0
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_036c3b4f3fb2a4a583399dad52518042___::Run @ 0x18018D4D0 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_036c3b4f3fb2a4a583399dad52518042___--Run.c)
 * Callees:
 *     ??$As@UIInspectable@@@WeakRef@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIInspectable@@@WRL@Microsoft@@@Details@12@@Z @ 0x18001476C (--$As@UIInspectable@@@WeakRef@WRL@Microsoft@@QEBAJV-$ComPtrRef@V-$ComPtr@UIInspectable@@@WRL@Mic.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006145C (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800755D8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 *     ?TraceLoggingInfo@FullScreenPositionerLogging@@SAXPEBDZZ @ 0x18018E084 (-TraceLoggingInfo@FullScreenPositionerLogging@@SAXPEBDZZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall lambda_036c3b4f3fb2a4a583399dad52518042_::operator()(Microsoft::WRL::WeakRef *a1)
{
  int v2; // eax
  unsigned int v3; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  char v6; // [rsp+40h] [rbp+8h] BYREF
  struct IInspectable *v7; // [rsp+48h] [rbp+10h] BYREF

  v7 = 0LL;
  v2 = Microsoft::WRL::WeakRef::As<IInspectable>(a1, &v7);
  v3 = v2;
  if ( v2 >= 0 )
  {
    if ( v7 )
    {
      FullScreenPositionerLogging::TraceLoggingInfo("FullScreenPositioner - Fading out overlay window now that time allowed for view repositioning is up.");
      (*(void (__fastcall **)(_QWORD, _QWORD, char *))(**(_QWORD **)(*((_QWORD *)a1 + 1) + 296LL) + 40LL))(
        *(_QWORD *)(*((_QWORD *)a1 + 1) + 296LL),
        *(_QWORD *)(*((_QWORD *)a1 + 1) + 344LL),
        &v6);
    }
    v3 = 0;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x3B6,
      (__int64)"pcshell\\twinui\\fullscreen\\lib\\fullscreenpositioner.cpp",
      (const char *)(unsigned int)v2);
  }
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v7);
  return v3;
}
