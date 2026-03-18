/*
 * XREFs of ?OpmValidateAdapterHandle@ADAPTER_DISPLAY@@AEAAEPEAX@Z @ 0x1C0151D98
 * Callers:
 *     ?OpmTranslateAndDestroyHandle@ADAPTER_DISPLAY@@QEAAJPEAXPEAPEAX@Z @ 0x1C0150FE4 (-OpmTranslateAndDestroyHandle@ADAPTER_DISPLAY@@QEAAJPEAXPEAPEAX@Z.c)
 *     ?OpmTranslateHandle@ADAPTER_DISPLAY@@QEAAJPEAXPEAPEAX@Z @ 0x1C0151CF8 (-OpmTranslateHandle@ADAPTER_DISPLAY@@QEAAJPEAXPEAPEAX@Z.c)
 * Callees:
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00070E4 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 */

unsigned __int8 __fastcall ADAPTER_DISPLAY::OpmValidateAdapterHandle(DXGADAPTER **this, DXGADAPTER **a2)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  DXGADAPTER **i; // rax
  __int64 v8; // rax
  __int64 v9; // rax

  if ( !DXGADAPTER::IsCoreResourceSharedOwner(this[2]) )
  {
    v9 = WdLogNewEntry5_WdAssertion(v5, v4);
    *(_QWORD *)(v9 + 24) = 6413LL;
    WdLogEvent5_WdAssertion(v9);
  }
  if ( this[40] != KeGetCurrentThread() )
  {
    v8 = WdLogNewEntry5_WdAssertion(v5, v4);
    *(_QWORD *)(v8 + 24) = 6414LL;
    WdLogEvent5_WdAssertion(v8);
  }
  for ( i = (DXGADAPTER **)this[36]; i != this + 36; i = (DXGADAPTER **)*i )
  {
    if ( i == a2 )
      return 1;
  }
  return 0;
}
