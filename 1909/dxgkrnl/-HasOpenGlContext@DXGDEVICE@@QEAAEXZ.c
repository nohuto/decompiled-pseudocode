/*
 * XREFs of ?HasOpenGlContext@DXGDEVICE@@QEAAEXZ @ 0x1C00CAB20
 * Callers:
 *     ?AcquireVidPnSourceOwner@ADAPTER_DISPLAY@@QEAAJPEAVDXGDEVICE@@PEBW4_D3DKMT_VIDPNSOURCEOWNER_TYPE@@PEBIIU_D3DKMT_VIDPNSOURCEOWNER_FLAGS@@@Z @ 0x1C00CB2F0 (-AcquireVidPnSourceOwner@ADAPTER_DISPLAY@@QEAAJPEAVDXGDEVICE@@PEBW4_D3DKMT_VIDPNSOURCEOWNER_TYPE.c)
 * Callees:
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C000753C (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 */

unsigned __int8 __fastcall DXGDEVICE::HasOpenGlContext(DXGDEVICE *this)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  DXGDEVICE *i; // rax
  DXGDEVICE *v5; // rcx
  __int64 v7; // rax

  if ( !DXGADAPTER::IsCoreResourceSharedOwner(*(DXGADAPTER **)(*((_QWORD *)this + 2) + 16LL)) )
  {
    v7 = WdLogNewEntry5_WdAssertion(v3, v2);
    *(_QWORD *)(v7 + 24) = 5168LL;
    WdLogEvent5_WdAssertion(v7);
  }
  for ( i = (DXGDEVICE *)*((_QWORD *)this + 45); ; i = *(DXGDEVICE **)i )
  {
    v5 = 0LL;
    if ( i != (DXGDEVICE *)((char *)this + 360) )
      v5 = i;
    if ( !v5 )
      return 0;
    if ( *((_DWORD *)v5 + 36) == 1 )
      break;
  }
  return 1;
}
