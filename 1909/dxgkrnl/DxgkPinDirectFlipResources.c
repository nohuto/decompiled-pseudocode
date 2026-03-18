/*
 * XREFs of DxgkPinDirectFlipResources @ 0x1C0153770
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00250D0 (_guard_dispatch_icall_nop.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C01059F0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?DxgkPinDirectFlipResourcesInternal@@YAJPEBU_D3DKMT_PINDIRECTFLIPRESOURCES@@@Z @ 0x1C01537A0 (-DxgkPinDirectFlipResourcesInternal@@YAJPEBU_D3DKMT_PINDIRECTFLIPRESOURCES@@@Z.c)
 *     ?DxgCreateLiveDumpWithWdLogs@@YAJK_K000@Z @ 0x1C0200A00 (-DxgCreateLiveDumpWithWdLogs@@YAJK_K000@Z.c)
 */

__int64 __fastcall DxgkPinDirectFlipResources(const struct _D3DKMT_PINDIRECTFLIPRESOURCES *a1)
{
  __int64 v1; // rdx
  __int64 v2; // rcx
  unsigned int v3; // edi
  struct DXGPROCESS *Current; // rax
  unsigned __int64 v6; // rbx

  v3 = DxgkPinDirectFlipResourcesInternal(a1);
  if ( v3 == -1073741811 )
  {
    if ( byte_1C00A1E58 )
    {
      Current = DXGPROCESS::GetCurrent(v2, v1);
      v6 = (unsigned __int64)Current;
      if ( !Current || (*(unsigned int (**)(void))(*((_QWORD *)Current + 12) + 216LL))() )
      {
        DxgCreateLiveDumpWithWdLogs(0x193u, 0x80EuLL, (unsigned __int64)KeGetCurrentThread(), v6, 0LL);
        byte_1C00A1E58 = 0;
      }
    }
  }
  return v3;
}
