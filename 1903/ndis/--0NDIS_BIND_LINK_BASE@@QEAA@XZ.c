/*
 * XREFs of ??0NDIS_BIND_LINK_BASE@@QEAA@XZ @ 0x1C0102D30
 * Callers:
 *     ??$make_unique_nothrow@UNDIS_BIND_FILTER_LINK@@$$V@wil@@YA?AV?$unique_ptr@UNDIS_BIND_FILTER_LINK@@U?$default_delete@UNDIS_BIND_FILTER_LINK@@@wistd@@@wistd@@XZ @ 0x1C0023D6C (--$make_unique_nothrow@UNDIS_BIND_FILTER_LINK@@$$V@wil@@YA-AV-$unique_ptr@UNDIS_BIND_FILTER_LINK.c)
 *     ?BuildProtocolLink@BindStack@Ndis@@AEAA?AV?$unique_ptr@UNDIS_BIND_PROTOCOL_LINK@@U?$default_delete@UNDIS_BIND_PROTOCOL_LINK@@@wistd@@@wistd@@AEAV?$KRef@UNDIS_BIND_PROTOCOL_DRIVER@@@@@Z @ 0x1C0102C18 (-BuildProtocolLink@BindStack@Ndis@@AEAA-AV-$unique_ptr@UNDIS_BIND_PROTOCOL_LINK@@U-_ea_1C0102C18.c)
 * Callees:
 *     ??0BindState@Ndis@@QEAA@XZ @ 0x1C0102D58 (--0BindState@Ndis@@QEAA@XZ.c)
 */

NDIS_BIND_LINK_BASE *__fastcall NDIS_BIND_LINK_BASE::NDIS_BIND_LINK_BASE(NDIS_BIND_LINK_BASE *this)
{
  Ndis::BindState::BindState(&this->BindState);
  this->DriverLinkage.Blink = &this->DriverLinkage;
  this->DriverLinkage.Flink = &this->DriverLinkage;
  return this;
}
