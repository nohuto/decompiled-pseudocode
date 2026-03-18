/*
 * XREFs of ?IsPointerVisible@ADAPTER_DISPLAY@@QEBAEI@Z @ 0x1C001B614
 * Callers:
 *     ?SetVidPnSourceVisibility@ADAPTER_DISPLAY@@QEAAJIEIE@Z @ 0x1C00D20C0 (-SetVidPnSourceVisibility@ADAPTER_DISPLAY@@QEAAJIEIE@Z.c)
 *     ?Initialize@VIDPNSOURCEINFO@@QEAAJPEAVDXGADAPTER@@I@Z @ 0x1C02963CC (-Initialize@VIDPNSOURCEINFO@@QEAAJPEAVDXGADAPTER@@I@Z.c)
 * Callees:
 *     <none>
 */

unsigned __int8 __fastcall ADAPTER_DISPLAY::IsPointerVisible(ADAPTER_DISPLAY *this, __int64 a2)
{
  __int64 v3; // rbx
  __int64 v5; // rax

  v3 = (unsigned int)a2;
  if ( (unsigned int)a2 >= *((_DWORD *)this + 20) )
  {
    v5 = WdLogNewEntry5_WdAssertion(this, a2);
    *(_QWORD *)(v5 + 24) = 5521LL;
    WdLogEvent5_WdAssertion(v5);
  }
  return *(_BYTE *)(3968 * v3 + *((_QWORD *)this + 14) + 724);
}
