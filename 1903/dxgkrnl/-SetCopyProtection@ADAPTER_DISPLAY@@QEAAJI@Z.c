/*
 * XREFs of ?SetCopyProtection@ADAPTER_DISPLAY@@QEAAJI@Z @ 0x1C00CEFC4
 * Callers:
 *     ?PurgeCopyProtectionOnVidPnSource@ADAPTER_DISPLAY@@QEAAJI@Z @ 0x1C00CD618 (-PurgeCopyProtectionOnVidPnSource@ADAPTER_DISPLAY@@QEAAJI@Z.c)
 *     ?SetCopyProtectionWithLock@ADAPTER_DISPLAY@@QEAAJI@Z @ 0x1C00CEF00 (-SetCopyProtectionWithLock@ADAPTER_DISPLAY@@QEAAJI@Z.c)
 *     ?CreateCopyProtection@ADAPTER_DISPLAY@@QEAAJIIPEAI@Z @ 0x1C01F0600 (-CreateCopyProtection@ADAPTER_DISPLAY@@QEAAJIIPEAI@Z.c)
 *     ?DestroyCopyProtection@ADAPTER_DISPLAY@@QEAAJII@Z @ 0x1C01F0D1C (-DestroyCopyProtection@ADAPTER_DISPLAY@@QEAAJII@Z.c)
 *     ?UpdateCopyProtection@ADAPTER_DISPLAY@@QEAAJIII@Z @ 0x1C01F437C (-UpdateCopyProtection@ADAPTER_DISPLAY@@QEAAJIII@Z.c)
 * Callees:
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00070E4 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?DmmUpdateCopyProtectionOnAllClientVidPnPathsFromSource@@YAJQEAXIW4_D3DKMDT_VIDPN_PRESENT_PATH_COPYPROTECTION_TYPE@@I@Z @ 0x1C00CF030 (-DmmUpdateCopyProtectionOnAllClientVidPnPathsFromSource@@YAJQEAXIW4_D3DKMDT_VIDPN_PRESENT_PATH_C.c)
 */

__int64 __fastcall ADAPTER_DISPLAY::SetCopyProtection(DXGADAPTER **this, unsigned int a2)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  unsigned int v6; // ebx
  unsigned int v7; // r9d
  DXGADAPTER **i; // rcx
  DXGADAPTER *v9; // rcx
  __int64 v11; // rax

  v6 = 0;
  if ( !DXGADAPTER::IsCoreResourceSharedOwner(this[2]) )
  {
    v11 = WdLogNewEntry5_WdAssertion(v5, v4);
    *(_QWORD *)(v11 + 24) = 5528LL;
    WdLogEvent5_WdAssertion(v11);
  }
  v7 = 0;
  for ( i = (DXGADAPTER **)this[8]; i != this + 8 && i; i = (DXGADAPTER **)*i )
  {
    if ( *((_DWORD *)i + 13) == a2 && *((_DWORD *)i + 14) > v7 )
      v7 = *((_DWORD *)i + 14);
  }
  v9 = this[2];
  if ( v7 )
    return (unsigned int)DmmUpdateCopyProtectionOnAllClientVidPnPathsFromSource(
                           v9,
                           a2,
                           D3DKMDT_VPPMT_MACROVISION_APSTRIGGER,
                           v7);
  else
    DmmUpdateCopyProtectionOnAllClientVidPnPathsFromSource(v9, a2, D3DKMDT_VPPMT_NOPROTECTION, 0);
  return v6;
}
