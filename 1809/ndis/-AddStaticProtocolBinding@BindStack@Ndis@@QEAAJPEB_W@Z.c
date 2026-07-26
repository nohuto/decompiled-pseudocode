/*
 * XREFs of ?AddStaticProtocolBinding@BindStack@Ndis@@QEAAJPEB_W@Z @ 0x1C00BFA48
 * Callers:
 *     KRegKey::QueryValueMultisz__lambda_85acd3deb7e2b285fd367942132eb91d___lambda_e719d81758cdea2b5e7ebe082982c952___ @ 0x1C00CEFA4 (KRegKey--QueryValueMultisz__lambda_85acd3deb7e2b285fd367942132eb91d___lambda_e719d81758cdea2b5e7.c)
 *     ?ndisBuildBindings@@YAJPEBU_GUID@@AEAUBindStack@Ndis@@@Z @ 0x1C0105B18 (-ndisBuildBindings@@YAJPEBU_GUID@@AEAUBindStack@Ndis@@@Z.c)
 * Callees:
 *     ?insertSortedUnique@?$KArray@V?$unique_ptr@UNDIS_BIND_PROTOCOL_LINK@@U?$default_delete@UNDIS_BIND_PROTOCOL_LINK@@@wistd@@@wistd@@$00@Rtl@@QEAA_N$$QEAV?$unique_ptr@UNDIS_BIND_PROTOCOL_LINK@@U?$default_delete@UNDIS_BIND_PROTOCOL_LINK@@@wistd@@@wistd@@P6A_NAEBV34@1@Z@Z @ 0x1C00BFAEC (-insertSortedUnique@-$KArray@V-$unique_ptr@UNDIS_BIND_PROTOCOL_LINK@@U-$default_delete@UNDIS_BIN.c)
 *     ?BuildProtocolLink@BindStack@Ndis@@AEAA?AV?$unique_ptr@UNDIS_BIND_PROTOCOL_LINK@@U?$default_delete@UNDIS_BIND_PROTOCOL_LINK@@@wistd@@@wistd@@PEAU_UNICODE_STRING@@@Z @ 0x1C00BFB70 (-BuildProtocolLink@BindStack@Ndis@@AEAA-AV-$unique_ptr@UNDIS_BIND_PROTOCOL_LINK@@U-$default_dele.c)
 *     ??_GKRefHolder@?$KRef@UNDIS_BIND_PROTOCOL_DRIVER@@@@QEAAPEAXI@Z @ 0x1C00ED8F0 (--_GKRefHolder@-$KRef@UNDIS_BIND_PROTOCOL_DRIVER@@@@QEAAPEAXI@Z.c)
 *     ??1NDIS_BIND_LINK_BASE@@QEAA@XZ @ 0x1C0106F14 (--1NDIS_BIND_LINK_BASE@@QEAA@XZ.c)
 */

__int64 __fastcall Ndis::BindStack::AddStaticProtocolBinding(Ndis::BindStack *this, const wchar_t *a2)
{
  __int64 v3; // rcx
  NDIS_BIND_LINK_BASE *v4; // rbx
  char inserted; // al
  unsigned int v6; // edi
  volatile signed __int32 *Miniport; // rcx
  _UNICODE_STRING DestinationString; // [rsp+20h] [rbp-18h] BYREF
  PVOID P; // [rsp+48h] [rbp+10h] BYREF

  if ( !*a2 )
    return 3221225485LL;
  RtlInitUnicodeString(&DestinationString, (PCWSTR)a2);
  RtlUpcaseUnicodeString(&DestinationString, &DestinationString, 0);
  Ndis::BindStack::BuildProtocolLink(v3, &P, &DestinationString);
  v4 = (NDIS_BIND_LINK_BASE *)P;
  if ( P
    && (inserted = Rtl::KArray<wistd::unique_ptr<NDIS_BIND_PROTOCOL_LINK,wistd::default_delete<NDIS_BIND_PROTOCOL_LINK>>,1>::insertSortedUnique(
                     this,
                     &P),
        v4 = (NDIS_BIND_LINK_BASE *)P,
        inserted) )
  {
    ++this->ChangeEpoch;
    v6 = 0;
  }
  else
  {
    v6 = -1073741670;
  }
  if ( v4 )
  {
    Miniport = (volatile signed __int32 *)v4[1].BindState.Miniport;
    if ( Miniport )
    {
      if ( _InterlockedExchangeAdd(Miniport + 12, 0xFFFFFFFF) == 1 )
        KRef<NDIS_BIND_PROTOCOL_DRIVER>::KRefHolder::`scalar deleting destructor'((PVOID)Miniport);
    }
    NDIS_BIND_LINK_BASE::~NDIS_BIND_LINK_BASE(v4);
    ExFreePoolWithTag(v4, 0x4C745042u);
  }
  return v6;
}
