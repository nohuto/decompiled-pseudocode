/*
 * XREFs of ?ProcessSetSourceModifiers@CManipulation@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_MANIPULATION_SETSOURCEMODIFIERS@@@Z @ 0x1801E2D18
 * Callers:
 *     ?ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x18009D840 (-ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z.c)
 * Callees:
 *     ?GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z @ 0x18009D7D0 (-GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800EC570 (_guard_dispatch_icall_nop.c)
 *     ??4?$ComPtr@VCConditionalExpression@@@WRL@Microsoft@@QEAAAEAV012@PEAVCConditionalExpression@@@Z @ 0x1801D87F8 (--4-$ComPtr@VCConditionalExpression@@@WRL@Microsoft@@QEAAAEAV012@PEAVCConditionalExpression@@@Z.c)
 */

__int64 __fastcall CManipulation::ProcessSetSourceModifiers(
        CManipulation *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_MANIPULATION_SETSOURCEMODIFIERS *a3)
{
  __int64 Resource; // rax
  __int64 v7; // rax
  __int64 v8; // rax
  __int64 v9; // rax
  __int64 v10; // rax

  Resource = CResourceTable::GetResource((__int64)a2, *((_DWORD *)a3 + 2), 0x29u);
  Microsoft::WRL::ComPtr<CConditionalExpression>::operator=((__int64 *)this + 60, Resource);
  v7 = CResourceTable::GetResource((__int64)a2, *((_DWORD *)a3 + 3), 0x29u);
  Microsoft::WRL::ComPtr<CConditionalExpression>::operator=((__int64 *)this + 61, v7);
  v8 = CResourceTable::GetResource((__int64)a2, *((_DWORD *)a3 + 4), 0x29u);
  Microsoft::WRL::ComPtr<CConditionalExpression>::operator=((__int64 *)this + 62, v8);
  v9 = CResourceTable::GetResource((__int64)a2, *((_DWORD *)a3 + 5), 0x29u);
  Microsoft::WRL::ComPtr<CConditionalExpression>::operator=((__int64 *)this + 63, v9);
  v10 = CResourceTable::GetResource((__int64)a2, *((_DWORD *)a3 + 6), 0x29u);
  Microsoft::WRL::ComPtr<CConditionalExpression>::operator=((__int64 *)this + 64, v10);
  (*(void (__fastcall **)(CManipulation *, __int64, CManipulation *))(*(_QWORD *)this + 64LL))(this, 13LL, this);
  return 0LL;
}
