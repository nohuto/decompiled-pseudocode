/*
 * XREFs of ?TraceStateChanged@CFlipToken@@AEBAXXZ @ 0x1C001C830
 * Callers:
 *     ?InitializeCompleted@CFlipToken@@IEAAJAEBU_D3DKMT_FLIPMODEL_PRESENTHISTORYTOKEN@@_NW4TokenState@CTokenBase@@@Z @ 0x1C000A5FC (-InitializeCompleted@CFlipToken@@IEAAJAEBU_D3DKMT_FLIPMODEL_PRESENTHISTORYTOKEN@@_NW4TokenState@.c)
 *     ?CanReleaseAnalogToken@CFlipToken@@UEAAJIPEA_N@Z @ 0x1C005B0C0 (-CanReleaseAnalogToken@CFlipToken@@UEAAJIPEA_N@Z.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C000C510 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C00250D0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CFlipToken::TraceStateChanged(CFlipToken *this, __int64 a2)
{
  __int64 v2; // r13
  char v3; // bl
  __int64 v4; // rbp
  int v5; // r15d
  __int64 v6; // rsi
  unsigned int v7; // r12d
  struct DXGGLOBAL *Global; // rax
  BOOL v9; // edi
  int v10; // ebx
  void (__fastcall *v11)(__int64, _QWORD, _QWORD, _QWORD, int, int, BOOL, __int64, __int64); // r14
  unsigned int v12; // eax

  v2 = *((_QWORD *)this + 4);
  v3 = *((_BYTE *)this + 559);
  v4 = *((_QWORD *)this + 5);
  v5 = *((_DWORD *)this + 6);
  v6 = *(_QWORD *)(v2 + 24);
  v7 = *((_DWORD *)this + 26);
  Global = DXGGLOBAL::GetGlobal((__int64)this, a2);
  v9 = v3 == 0;
  v10 = *((unsigned __int8 *)this + 556);
  v11 = *(void (__fastcall **)(__int64, _QWORD, _QWORD, _QWORD, int, int, BOOL, __int64, __int64))(*((_QWORD *)Global + 38000)
                                                                                                 + 120LL);
  v12 = (*(__int64 (__fastcall **)(CFlipToken *))(*(_QWORD *)this + 112LL))(this);
  v11(v2, v7, v12, *((_QWORD *)this + 12), v5, v10, v9, v6, v4);
}
