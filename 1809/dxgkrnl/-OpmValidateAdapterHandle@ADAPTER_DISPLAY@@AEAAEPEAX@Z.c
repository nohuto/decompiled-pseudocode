/*
 * XREFs of ?OpmValidateAdapterHandle@ADAPTER_DISPLAY@@AEAAEPEAX@Z @ 0x1C01C3C94
 * Callers:
 *     ?OpmTranslateAndDestroyHandle@ADAPTER_DISPLAY@@QEAAJPEAXPEAPEAX@Z @ 0x1C01C3AB0 (-OpmTranslateAndDestroyHandle@ADAPTER_DISPLAY@@QEAAJPEAXPEAPEAX@Z.c)
 *     ?OpmTranslateHandle@ADAPTER_DISPLAY@@QEAAJPEAXPEAPEAX@Z @ 0x1C01C3BB0 (-OpmTranslateHandle@ADAPTER_DISPLAY@@QEAAJPEAXPEAPEAX@Z.c)
 * Callees:
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C0011E50 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 */

unsigned __int8 __fastcall ADAPTER_DISPLAY::OpmValidateAdapterHandle(DXGADAPTER **this, ADAPTER_DISPLAY *a2)
{
  __int64 v4; // rcx
  __int64 v5; // rax
  __int64 v6; // rax
  ADAPTER_DISPLAY *i; // rax

  if ( !DXGADAPTER::IsCoreResourceSharedOwner(this[2]) )
  {
    v5 = WdLogNewEntry5_WdAssertion(v4);
    *(_QWORD *)(v5 + 24) = 6167LL;
    WdLogEvent5_WdAssertion(v5);
  }
  if ( this[26] != KeGetCurrentThread() )
  {
    v6 = WdLogNewEntry5_WdAssertion(v4);
    *(_QWORD *)(v6 + 24) = 6168LL;
    WdLogEvent5_WdAssertion(v6);
  }
  for ( i = this[23]; ; i = *(ADAPTER_DISPLAY **)i )
  {
    if ( i == (ADAPTER_DISPLAY *)(this + 23) )
      return 0;
    if ( i == a2 )
      break;
  }
  return 1;
}
