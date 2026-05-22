/*
 * XREFs of ?GetDragManagerInputSite@DragNDropProcessor@@QEAAJUtagPOINT@@PEAUHMONITOR__@@PEAVBamoDragManagerClientProxy@@PEAPEAVInputSite@@@Z @ 0x18006BA30
 * Callers:
 *     ?CancelDrag@DragNDropProcessor@@QEAAJKPEAVBamoDragManagerClientProxy@@@Z @ 0x18006AC0C (-CancelDrag@DragNDropProcessor@@QEAAJKPEAVBamoDragManagerClientProxy@@@Z.c)
 *     ?StartAnimation@DragNDropProcessor@@QEAAJKPEAVBamoDragManagerClientProxy@@@Z @ 0x18006CB00 (-StartAnimation@DragNDropProcessor@@QEAAJKPEAVBamoDragManagerClientProxy@@@Z.c)
 *     ?StartDrag@DragNDropProcessor@@QEAAJK_KPEAVBamoDragManagerClientProxy@@@Z @ 0x18006CF2C (-StartDrag@DragNDropProcessor@@QEAAJK_KPEAVBamoDragManagerClientProxy@@@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@VAsyncHRESULTPrincipal@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x180002344 (--1-$com_ptr_t@VAsyncHRESULTPrincipal@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?_Tidy@?$vector@V?$ComPtr@VInputSite@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VInputSite@@@WRL@Microsoft@@@std@@@std@@AEAAXXZ @ 0x180005CF0 (-_Tidy@-$vector@V-$ComPtr@VInputSite@@@WRL@Microsoft@@V-$allocator@V-$ComPtr@VInputSite@@@WRL@Mi.c)
 *     __security_check_cookie @ 0x18002C580 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180037DA0 (_guard_dispatch_icall_nop.c)
 *     ??$GetAttachedObject@UIDragManagerClientProxy@@VBamoDragManagerClientProxy@@@InputSite@@QEAA?AV?$ComPtr@VBamoDragManagerClientProxy@@@WRL@Microsoft@@XZ @ 0x18006941C (--$GetAttachedObject@UIDragManagerClientProxy@@VBamoDragManagerClientProxy@@@InputSite@@QEAA-AV-.c)
 *     ?InternalRelease@?$ComPtr@VBamoCustomCursorControllerClientProxy@@@WRL@Microsoft@@IEAAKXZ @ 0x18006C1EC (-InternalRelease@-$ComPtr@VBamoCustomCursorControllerClientProxy@@@WRL@Microsoft@@IEAAKXZ.c)
 */

__int64 __fastcall DragNDropProcessor::GetDragManagerInputSite(
        DragNDropProcessor *this,
        struct tagPOINT a2,
        HMONITOR a3,
        struct BamoDragManagerClientProxy *a4,
        struct InputSite **a5)
{
  __int64 *v6; // rbx
  __int64 *v7; // rdi
  __int64 v9[2]; // [rsp+30h] [rbp-A8h] BYREF
  _BYTE v10[8]; // [rsp+40h] [rbp-98h] BYREF
  _QWORD v11[3]; // [rsp+48h] [rbp-90h] BYREF
  __int64 v12; // [rsp+60h] [rbp-78h]

  (*(void (__fastcall **)(_QWORD, _BYTE *, struct tagPOINT, HMONITOR, int))(**((_QWORD **)this + 3) + 32LL))(
    *((_QWORD *)this + 3),
    v10,
    a2,
    a3,
    2);
  v6 = (__int64 *)v11[0];
  v7 = (__int64 *)v11[1];
  while ( v6 != v7 )
  {
    InputSite::GetAttachedObject<IDragManagerClientProxy,BamoDragManagerClientProxy>(*v6, v9);
    if ( v9[0] && (struct BamoDragManagerClientProxy *)v9[0] == a4 )
    {
      wil::com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>::~com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>(v6);
      *a5 = (struct InputSite *)*v6;
      Microsoft::WRL::ComPtr<BamoCustomCursorControllerClientProxy>::InternalRelease(v9);
      break;
    }
    Microsoft::WRL::ComPtr<BamoCustomCursorControllerClientProxy>::InternalRelease(v9);
    ++v6;
  }
  if ( (unsigned __int64)(v12 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
    NtCloseCompositionInputSink(v12);
  std::vector<Microsoft::WRL::ComPtr<InputSite>>::_Tidy((__int64)v11);
  return 0LL;
}
