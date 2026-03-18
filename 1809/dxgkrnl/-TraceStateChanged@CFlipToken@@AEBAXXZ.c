/*
 * XREFs of ?TraceStateChanged@CFlipToken@@AEBAXXZ @ 0x1C0008A9C
 * Callers:
 *     ?Retire@CFlipToken@@UEAAXAEBUDXGI_FRAME_STATISTICS@@@Z @ 0x1C0007110 (-Retire@CFlipToken@@UEAAXAEBUDXGI_FRAME_STATISTICS@@@Z.c)
 *     ?Confirm@CFlipToken@@UEAAXXZ @ 0x1C0007780 (-Confirm@CFlipToken@@UEAAXXZ.c)
 *     ?Discard@CFlipToken@@UEAAXXZ @ 0x1C0007DA0 (-Discard@CFlipToken@@UEAAXXZ.c)
 *     ?InitializeCompleted@CFlipToken@@IEAAJAEBU_D3DKMT_FLIPMODEL_PRESENTHISTORYTOKEN@@_NW4TokenState@CTokenBase@@@Z @ 0x1C0008800 (-InitializeCompleted@CFlipToken@@IEAAJAEBU_D3DKMT_FLIPMODEL_PRESENTHISTORYTOKEN@@_NW4TokenState@.c)
 *     ?InFrame@CFlipToken@@UEAAJPEAVCCompositionFrame@@PEA_N@Z @ 0x1C000A090 (-InFrame@CFlipToken@@UEAAJPEAVCCompositionFrame@@PEA_N@Z.c)
 *     ?CanReleaseAnalogToken@CFlipToken@@UEAAJIPEA_N@Z @ 0x1C0054410 (-CanReleaseAnalogToken@CFlipToken@@UEAAJIPEA_N@Z.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0011DE0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C0022E60 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CFlipToken::TraceStateChanged(CFlipToken *this)
{
  __int64 v1; // r13
  char v2; // bl
  __int64 v3; // rbp
  int v4; // r15d
  __int64 v5; // rsi
  unsigned int v6; // r12d
  struct DXGGLOBAL *Global; // rax
  BOOL v8; // edi
  int v9; // ebx
  void (__fastcall *v10)(__int64, _QWORD, _QWORD, _QWORD, int, int, BOOL, __int64, __int64); // r14
  unsigned int v11; // eax

  v1 = *((_QWORD *)this + 4);
  v2 = *((_BYTE *)this + 559);
  v3 = *((_QWORD *)this + 5);
  v4 = *((_DWORD *)this + 6);
  v5 = *(_QWORD *)(v1 + 24);
  v6 = *((_DWORD *)this + 26);
  Global = DXGGLOBAL::GetGlobal();
  v8 = v2 == 0;
  v9 = *((unsigned __int8 *)this + 556);
  v10 = *(void (__fastcall **)(__int64, _QWORD, _QWORD, _QWORD, int, int, BOOL, __int64, __int64))(*((_QWORD *)Global + 2541)
                                                                                                 + 80LL);
  v11 = (*(__int64 (__fastcall **)(CFlipToken *))(*(_QWORD *)this + 112LL))(this);
  v10(v1, v6, v11, *((_QWORD *)this + 12), v4, v9, v8, v5, v3);
}
