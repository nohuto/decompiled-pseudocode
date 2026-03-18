/*
 * XREFs of ?IsRemoteConnection@DXGPROCESS@@QEBAEXZ @ 0x1C00122E8
 * Callers:
 *     DxgkEscape @ 0x1C01124E0 (DxgkEscape.c)
 *     ?DxgkQueryAdapterInfoInternal@@YAJPEBU_D3DKMT_QUERYADAPTERINFO@@EPEAVDXGADAPTER@@@Z @ 0x1C0113370 (-DxgkQueryAdapterInfoInternal@@YAJPEBU_D3DKMT_QUERYADAPTERINFO@@EPEAVDXGADAPTER@@@Z.c)
 *     ?DxgkGetSharedPrimaryHandle@@YAJPEAU_D3DKMT_GETSHAREDPRIMARYHANDLE@@@Z @ 0x1C01D2660 (-DxgkGetSharedPrimaryHandle@@YAJPEAU_D3DKMT_GETSHAREDPRIMARYHANDLE@@@Z.c)
 *     ?SubmitPresentLda@DXGCONTEXT@@QEAAJPEBU_D3DKMT_PRESENT@@IPEAPEAV1@PEAVDXGALLOCATION@@PEAU_DXGKARG_PRESENT@@PEAUVIDSCH_SUBMIT_DATA_BASE@@@Z @ 0x1C02266C0 (-SubmitPresentLda@DXGCONTEXT@@QEAAJPEBU_D3DKMT_PRESENT@@IPEAPEAV1@PEAVDXGALLOCATION@@PEAU_DXGKAR.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0022E60 (_guard_dispatch_icall_nop.c)
 */

bool __fastcall DXGPROCESS::IsRemoteConnection(DXGPROCESS *this)
{
  __int64 v1; // rax
  char v2; // bl

  v1 = *((_QWORD *)this + 13);
  v2 = 0;
  if ( v1 )
    return (*(unsigned int (__fastcall **)(_QWORD, _QWORD, _QWORD))(v1 + 224))(0LL, 0LL, 0LL) != 0;
  return v2;
}
