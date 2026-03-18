/*
 * XREFs of ?Reset@BLTQUEUE@@QEAAXE@Z @ 0x1C027DBB8
 * Callers:
 *     ?RemoveVidPnOwnership@ADAPTER_DISPLAY@@QEAAXI@Z @ 0x1C00C77B4 (-RemoveVidPnOwnership@ADAPTER_DISPLAY@@QEAAXI@Z.c)
 *     ?Reset@ADAPTER_DISPLAY@@QEAAJPEAU_TDR_RECOVERY_CONTEXT@@@Z @ 0x1C01F4168 (-Reset@ADAPTER_DISPLAY@@QEAAJPEAU_TDR_RECOVERY_CONTEXT@@@Z.c)
 *     ?Stop@DXGDEVICE@@QEAAXE@Z @ 0x1C02308B0 (-Stop@DXGDEVICE@@QEAAXE@Z.c)
 * Callees:
 *     ?IssueCommand@BLTQUEUE@@AEAAJXZ @ 0x1C00D3CFC (-IssueCommand@BLTQUEUE@@AEAAJXZ.c)
 *     ?DestroyStagingBuffer@BLTQUEUE@@QEAAXXZ @ 0x1C027BDA8 (-DestroyStagingBuffer@BLTQUEUE@@QEAAXXZ.c)
 */

void __fastcall BLTQUEUE::Reset(BLTQUEUE *this, char a2)
{
  if ( *((_QWORD *)this + 55) )
  {
    *((_BYTE *)this + 401) = 1;
    BLTQUEUE::IssueCommand(this);
    BLTQUEUE::DestroyStagingBuffer(this);
    *((_QWORD *)this + 25) = 0LL;
    if ( !a2 )
      *((_DWORD *)this + 213) = 0;
  }
}
