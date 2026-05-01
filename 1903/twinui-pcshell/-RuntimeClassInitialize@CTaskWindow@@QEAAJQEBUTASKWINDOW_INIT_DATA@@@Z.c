/*
 * XREFs of ?RuntimeClassInitialize@CTaskWindow@@QEAAJQEBUTASKWINDOW_INIT_DATA@@@Z @ 0x18014E5BC
 * Callers:
 *     ??$MakeAndInitialize@VCTaskWindow@@UITaskWindow@@AEBQEBUTASKWINDOW_INIT_DATA@@@Details@WRL@Microsoft@@YAJPEAPEAUITaskWindow@@AEBQEBUTASKWINDOW_INIT_DATA@@@Z @ 0x18014DDB4 (--$MakeAndInitialize@VCTaskWindow@@UITaskWindow@@AEBQEBUTASKWINDOW_INIT_DATA@@@Details@WRL@Micro.c)
 * Callees:
 *     ??4?$ComPtr@UIDWriteTextFormat@@@WRL@Microsoft@@QEAAAEAV012@PEAUIDWriteTextFormat@@@Z @ 0x18000E500 (--4-$ComPtr@UIDWriteTextFormat@@@WRL@Microsoft@@QEAAAEAV012@PEAUIDWriteTextFormat@@@Z.c)
 *     ?_RegisterForViewReadinessChanges@CTaskWindow@@AEAAJXZ @ 0x180014A18 (-_RegisterForViewReadinessChanges@CTaskWindow@@AEAAJXZ.c)
 *     ??4?$ComPtr@UIImmersiveMonitorManager@@@WRL@Microsoft@@QEAAAEAV012@PEAUIImmersiveMonitorManager@@@Z @ 0x180056494 (--4-$ComPtr@UIImmersiveMonitorManager@@@WRL@Microsoft@@QEAAAEAV012@PEAUIImmersiveMonitorManager@.c)
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 *     ?s_ValidateCreationZbidAndConvert@CTaskWindow@@CA_NW4ZBID@@PEAW4BAND_ID@1@@Z @ 0x18014EE68 (-s_ValidateCreationZbidAndConvert@CTaskWindow@@CA_NW4ZBID@@PEAW4BAND_ID@1@@Z.c)
 */

__int64 __fastcall CTaskWindow::RuntimeClassInitialize(CTaskWindow *this, const struct TASKWINDOW_INIT_DATA *const a2)
{
  __int64 result; // rax
  bool v5; // zf
  int v6; // [rsp+30h] [rbp+8h] BYREF

  *((_QWORD *)this + 5) = *(_QWORD *)a2;
  *((_DWORD *)this + 12) = *((_DWORD *)a2 + 4);
  *((_DWORD *)this + 17) = *((_DWORD *)a2 + 25);
  Microsoft::WRL::ComPtr<IDWriteTextFormat>::operator=((__int64 *)this + 7, *((_QWORD *)a2 + 1));
  Microsoft::WRL::ComPtr<IImmersiveMonitorManager>::operator=((__int64 *)this + 17, *((_QWORD *)a2 + 11));
  if ( !(unsigned __int8)CTaskWindow::s_ValidateCreationZbidAndConvert(*((unsigned int *)a2 + 5), &v6) )
    return 2147947423LL;
  v5 = (*((_BYTE *)this + 68) & 8) == 0;
  *((_DWORD *)this + 13) = v6;
  if ( !v5
    || (result = (*(__int64 (__fastcall **)(char *, char *, char *))(*((_QWORD *)this + 1) + 64LL))(
                   (char *)this + 8,
                   (char *)a2 + 24,
                   (char *)a2 + 40),
        (int)result >= 0) )
  {
    if ( *((_DWORD *)a2 + 4) == 1 )
      (*(void (__fastcall **)(char *))(*((_QWORD *)this + 1) + 152LL))((char *)this + 8);
    return CTaskWindow::_RegisterForViewReadinessChanges(this);
  }
  return result;
}
