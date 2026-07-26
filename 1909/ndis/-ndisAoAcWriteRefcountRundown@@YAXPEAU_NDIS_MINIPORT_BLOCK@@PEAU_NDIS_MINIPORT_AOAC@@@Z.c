/*
 * XREFs of ?ndisAoAcWriteRefcountRundown@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_MINIPORT_AOAC@@@Z @ 0x1C00BB900
 * Callers:
 *     ?ndisCsStateChange@@YAXPEAU_NDIS_MINIPORT_BLOCK@@EE@Z @ 0x1C00BBA94 (-ndisCsStateChange@@YAXPEAU_NDIS_MINIPORT_BLOCK@@EE@Z.c)
 * Callees:
 *     McTemplateK0xq @ 0x1C0072420 (McTemplateK0xq.c)
 *     McTemplateK0jqx @ 0x1C00A6360 (McTemplateK0jqx.c)
 *     McTemplateK0xqq @ 0x1C00BE0BC (McTemplateK0xqq.c)
 */

void __fastcall ndisAoAcWriteRefcountRundown(struct _NDIS_MINIPORT_BLOCK *a1, struct _NDIS_MINIPORT_AOAC *a2)
{
  _GUID *p_InterfaceGuid; // rsi
  unsigned int v5; // edi
  int *ComponentRefCounts; // r14
  __int64 v7; // rcx
  __int64 v8; // [rsp+20h] [rbp-18h]

  p_InterfaceGuid = &a1->InterfaceGuid;
  if ( (byte_1C00E8083 & 4) != 0 )
    McTemplateK0jqx(
      (__int64)a1,
      &NicActiveRefRundownBegin,
      &a1->InterfaceGuid,
      (__int64)&a1->InterfaceGuid,
      a1->IfIndex,
      a1->NetLuid.Value);
  v5 = 0;
  ComponentRefCounts = a2->ComponentRefCounts;
  do
  {
    v7 = (unsigned int)*ComponentRefCounts;
    if ( (int)v7 > 0 && (byte_1C00E8083 & 4) != 0 )
      McTemplateK0xqq(v7, (_DWORD)a2, (_DWORD)p_InterfaceGuid, a1->NetLuid.Value, v5, *ComponentRefCounts);
    ++v5;
    ++ComponentRefCounts;
  }
  while ( v5 < 0x11 );
  if ( (byte_1C00E8083 & 4) != 0 )
  {
    LODWORD(v8) = a2->StopFlags.Value;
    McTemplateK0xq(v7, &NicActiveRefRundownEnd, p_InterfaceGuid, a1->NetLuid.Value, v8);
  }
}
