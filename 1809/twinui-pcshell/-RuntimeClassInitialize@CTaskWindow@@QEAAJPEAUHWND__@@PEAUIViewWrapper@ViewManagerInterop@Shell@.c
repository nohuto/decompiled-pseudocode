/*
 * XREFs of ?RuntimeClassInitialize@CTaskWindow@@QEAAJPEAUHWND__@@PEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@W4TASK_WINDOW_TYPE@@PEAUIImmersiveApplicationInternal@@PEBUtagRECT@@PEBUAPPLICATION_VIEW_DATA@@@Z @ 0x180046010
 * Callers:
 *     ??$MakeAndInitialize@VCTaskWindow@@UITaskWindow@@AEAPEAUHWND__@@AEAPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@AEAW4TASK_WINDOW_TYPE@@AEAPEAUIImmersiveApplicationInternal@@AEAPEBUtagRECT@@AEAPEBUAPPLICATION_VIEW_DATA@@@Details@WRL@Microsoft@@YAJPEAPEAUITaskWindow@@AEAPEAUHWND__@@AEAPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@AEAW4TASK_WINDOW_TYPE@@AEAPEAUIImmersiveApplicationInternal@@AEAPEBUtagRECT@@AEAPEBUAPPLICATION_VIEW_DATA@@@Z @ 0x180045F1C (--$MakeAndInitialize@VCTaskWindow@@UITaskWindow@@AEAPEAUHWND__@@AEAPEAUIViewWrapper@ViewManagerI.c)
 * Callees:
 *     ?_RegisterForViewReadinessChanges@CTaskWindow@@AEAAJXZ @ 0x180046100 (-_RegisterForViewReadinessChanges@CTaskWindow@@AEAAJXZ.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18005C2F8 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180060730 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     ?ResultFromKnownLastError@@YAJXZ @ 0x1800F1F40 (-ResultFromKnownLastError@@YAJXZ.c)
 *     ?_QueryCloakedState@CTaskWindow@@AEAAXXZ @ 0x180125474 (-_QueryCloakedState@CTaskWindow@@AEAAXXZ.c)
 *     ?s_ValidateCreationZbidAndConvert@CTaskWindow@@CA_NW4ZBID@@PEAW4BAND_ID@1@@Z @ 0x180125748 (-s_ValidateCreationZbidAndConvert@CTaskWindow@@CA_NW4ZBID@@PEAW4BAND_ID@1@@Z.c)
 */

__int64 __fastcall CTaskWindow::RuntimeClassInitialize(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        int a4,
        __int64 a5,
        __int64 a6,
        __int64 a7)
{
  __int64 v8; // rax
  __int64 v12; // rdi
  __int64 v13; // rax
  __int64 result; // rax
  __int64 v15; // [rsp+40h] [rbp+8h] BYREF
  unsigned int v16; // [rsp+58h] [rbp+20h] BYREF

  *(_QWORD *)(a1 + 40) = a2;
  v8 = *(_QWORD *)(a1 + 56);
  if ( v8 != a3 )
  {
    if ( a3 )
    {
      (*(void (__fastcall **)(__int64))(*(_QWORD *)a3 + 8LL))(a3);
      v8 = *(_QWORD *)(a1 + 56);
    }
    v15 = v8;
    *(_QWORD *)(a1 + 56) = a3;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v15);
  }
  v12 = a5;
  *(_DWORD *)(a1 + 48) = a4;
  v13 = *(_QWORD *)(a1 + 136);
  if ( v13 != v12 )
  {
    if ( v12 )
    {
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 8LL))(v12);
      v13 = *(_QWORD *)(a1 + 136);
    }
    a5 = v13;
    *(_QWORD *)(a1 + 136) = v12;
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&a5);
  }
  if ( a2 )
  {
    if ( !(unsigned int)GetWindowBand(*(_QWORD *)(a1 + 40), &v16) )
    {
      result = ResultFromKnownLastError();
      if ( (int)result < 0 )
        return result;
    }
    if ( !(unsigned __int8)CTaskWindow::s_ValidateCreationZbidAndConvert(v16, a1 + 52) )
      return 2147947423LL;
  }
  else
  {
    *(_DWORD *)(a1 + 52) = 5;
  }
  if ( !a6
    || !a7
    || (result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(a1 + 8) + 64LL))(a1 + 8), (int)result >= 0) )
  {
    if ( *(_QWORD *)(a1 + 40) )
      CTaskWindow::_QueryCloakedState((CTaskWindow *)a1);
    (*(void (__fastcall **)(__int64))(*(_QWORD *)(a1 + 8) + 152LL))(a1 + 8);
    return CTaskWindow::_RegisterForViewReadinessChanges((CTaskWindow *)a1);
  }
  return result;
}
