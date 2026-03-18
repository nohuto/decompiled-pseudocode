/*
 * XREFs of ?ProcessSetDiagnosticItemId@CAnimationLoggingManager@@QEAAJPEAVCResourceTable@@PEBUMILCMD_ANIMATIONLOGGINGMANAGER_SETDIAGNOSTICITEMID@@@Z @ 0x18018BEE8
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z @ 0x1800D0FD0 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x18002FAC8 (--2@YAPEAX_K@Z.c)
 *     ?RemoveResourceDebugInfo@CAnimationLoggingManager@@QEAAXPEAVCResource@@@Z @ 0x18005D6A4 (-RemoveResourceDebugInfo@CAnimationLoggingManager@@QEAAXPEAVCResource@@@Z.c)
 *     ?GetResourceWithoutType@CResourceTable@@QEBAPEAVCResource@@I@Z @ 0x1800BDA68 (-GetResourceWithoutType@CResourceTable@@QEBAPEAVCResource@@I@Z.c)
 *     ?GetDebugInfoForResource@CAnimationLoggingManager@@AEAAAEAUResourceDebugInfo@1@PEAVCResource@@@Z @ 0x1800C3540 (-GetDebugInfoForResource@CAnimationLoggingManager@@AEAAAEAUResourceDebugInfo@1@PEAVCResource@@@Z.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800EE364 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??0?$com_ptr_t@UIDXGIAdapter@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAUIDXGIAdapter@@@Z @ 0x1800EF06C (--0-$com_ptr_t@UIDXGIAdapter@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAUIDXGIAdapter@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CAnimationLoggingManager::ProcessSetDiagnosticItemId(
        CAnimationLoggingManager *this,
        struct CResourceTable *a2,
        const struct MILCMD_ANIMATIONLOGGINGMANAGER_SETDIAGNOSTICITEMID *a3)
{
  struct CResource *ResourceWithoutType; // rax
  struct CResource *v6; // rdi
  struct CAnimationLoggingManager::ResourceDebugInfo *DebugInfoForResource; // rax
  int v8; // edx
  _DWORD *v9; // rbp
  int v10; // esi
  int v11; // ebx
  __int64 v12; // rdi
  __int64 v13; // rax
  int v14; // eax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  ResourceWithoutType = CResourceTable::GetResourceWithoutType(
                          *(CResourceTable **)(*((_QWORD *)this + 6) + 24LL),
                          *((_DWORD *)a3 + 2));
  v6 = ResourceWithoutType;
  if ( ResourceWithoutType )
  {
    DebugInfoForResource = CAnimationLoggingManager::GetDebugInfoForResource(this, ResourceWithoutType);
    v8 = *((_DWORD *)a3 + 4);
    *((_DWORD *)DebugInfoForResource + 10) = v8;
    *((_DWORD *)DebugInfoForResource + 11) = *((_DWORD *)a3 + 5);
    if ( *((_DWORD *)a3 + 4) )
    {
      if ( *((_DWORD *)a3 + 3) != -1 )
      {
        v9 = operator new(0x20uLL);
        if ( v9 )
        {
          v10 = *((_DWORD *)a3 + 3);
          v11 = *((_DWORD *)a3 + 2);
          v12 = *(_QWORD *)(*((_QWORD *)this + 2) + 368LL);
          wil::com_ptr_t<IDXGIAdapter,wil::err_returncode_policy>::com_ptr_t<IDXGIAdapter,wil::err_returncode_policy>(
            v9,
            (__int64)this);
          v9[2] = v11;
          *((_QWORD *)v9 + 2) = v12;
          v9[6] = v10;
        }
        else
        {
          v9 = 0LL;
        }
        if ( v9 )
        {
          v13 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(*((_QWORD *)this + 2) + 536LL) + 96LL))(*(_QWORD *)(*((_QWORD *)this + 2) + 536LL));
          v14 = (*(__int64 (__fastcall **)(__int64, __int64 (__fastcall *)(CD3DResourceSourceReference *), _DWORD *, __int64))(*(_QWORD *)v13 + 128LL))(
                  v13,
                  lambda_5cb01a28023b22f26d38fb52fab6b0f8_::_lambda_invoker_cdecl_,
                  v9,
                  3LL);
          if ( v14 < 0 )
          {
            wil::details::in1diag3::FailFast_Hr(
              retaddr,
              (void *)0x163,
              (__int64)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\animationloggingmanager.cpp",
              (const char *)(unsigned int)v14);
            JUMPOUT(0x18018C020LL);
          }
        }
      }
    }
    else if ( !*((_QWORD *)DebugInfoForResource + 3) && !v8 )
    {
      CAnimationLoggingManager::RemoveResourceDebugInfo(this, v6);
    }
  }
  return 0LL;
}
