/*
 * XREFs of ?HasOpenGlContext@DXGDEVICE@@QEAAEXZ @ 0x1C013962C
 * Callers:
 *     ?AcquireVidPnSourceOwner@ADAPTER_DISPLAY@@QEAAJPEAVDXGDEVICE@@PEBW4_D3DKMT_VIDPNSOURCEOWNER_TYPE@@PEBIIU_D3DKMT_VIDPNSOURCEOWNER_FLAGS@@@Z @ 0x1C00CFD48 (-AcquireVidPnSourceOwner@ADAPTER_DISPLAY@@QEAAJPEAVDXGDEVICE@@PEBW4_D3DKMT_VIDPNSOURCEOWNER_TYPE.c)
 * Callees:
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C0011E50 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 */

unsigned __int8 __fastcall DXGDEVICE::HasOpenGlContext(DXGDEVICE *this)
{
  __int64 v2; // rcx
  DXGDEVICE *i; // rax
  DXGDEVICE *v4; // rcx
  __int64 v6; // rax

  if ( !DXGADAPTER::IsCoreResourceSharedOwner(*(DXGADAPTER **)(*((_QWORD *)this + 2) + 16LL)) )
  {
    v6 = WdLogNewEntry5_WdAssertion(v2);
    *(_QWORD *)(v6 + 24) = 5140LL;
    WdLogEvent5_WdAssertion(v6);
  }
  for ( i = (DXGDEVICE *)*((_QWORD *)this + 45); ; i = *(DXGDEVICE **)i )
  {
    v4 = 0LL;
    if ( i != (DXGDEVICE *)((char *)this + 360) )
      v4 = i;
    if ( !v4 )
      return 0;
    if ( *((_DWORD *)v4 + 36) == 1 )
      break;
  }
  return 1;
}
