/*
 * XREFs of ndisPnPCompleteRemoveDevice @ 0x1C0118868
 * Callers:
 *     ndisWdfDeviceObjectCleanup @ 0x1C0119240 (ndisWdfDeviceObjectCleanup.c)
 *     ndisPnPRemoveDevice @ 0x1C013A804 (ndisPnPRemoveDevice.c)
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x1C0006260 (WPP_RECORDER_SF_q.c)
 *     WPP_RECORDER_SF_qD @ 0x1C0009DA0 (WPP_RECORDER_SF_qD.c)
 *     ndisIsMiniportStarted @ 0x1C001B528 (ndisIsMiniportStarted.c)
 *     _guard_dispatch_icall_nop @ 0x1C00410C0 (_guard_dispatch_icall_nop.c)
 *     ndisMInvokeRemoveDevice @ 0x1C009AE28 (ndisMInvokeRemoveDevice.c)
 *     ndisIfRemoveIfBlockMiniportAssociation @ 0x1C0114E90 (ndisIfRemoveIfBlockMiniportAssociation.c)
 */

void __fastcall ndisPnPCompleteRemoveDevice(struct _NDIS_MINIPORT_BLOCK *a1)
{
  _NET_IF_ADMIN_STATUS v2; // edi
  void (__fastcall *VpciInterfaceDereference)(void *); // rax
  NTSTATUS v4; // eax
  int v5; // edx
  _NDIS_IF_BLOCK *IfBlock; // rcx

  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4,
      13,
      95,
      (struct _GUID *)&WPP_3bdda7144e74370204adec44604355d7_Traceguids,
      (char)a1);
  v2 = NET_IF_ADMIN_STATUS_UP;
  if ( (ndisIsMiniportStarted(a1) || (a1->Flags & 0x80u) != 0)
    && a1->OldPnPDeviceState == NdisPnPDeviceStarted
    && (a1->PnPFlags & 0x4000) == 0 )
  {
    v2 = NET_IF_ADMIN_STATUS_DOWN;
  }
  VpciInterfaceDereference = a1->VpciInterfaceDereference;
  if ( VpciInterfaceDereference )
    VpciInterfaceDereference(a1->VpciInterfaceContext);
  ndisMInvokeRemoveDevice((__int64)a1);
  if ( (a1->Flags & 0x80u) != 0 )
  {
    v4 = IoDeleteSymbolicLink(&a1->FdoName);
    if ( v4 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v5) = 3;
        WPP_RECORDER_SF_qD(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          v5,
          13,
          96,
          (struct _GUID *)&WPP_3bdda7144e74370204adec44604355d7_Traceguids,
          (char)a1,
          v4);
      }
    }
  }
  IoDeleteSymbolicLink(&a1->ExportName.__ptr_.__value_->_UNICODE_STRING);
  if ( a1->DevinterfaceNetSymbolicLinkName.Buffer )
  {
    RtlFreeUnicodeString(&a1->DevinterfaceNetSymbolicLinkName);
    a1->DevinterfaceNetSymbolicLinkName.Buffer = 0LL;
  }
  IfBlock = a1->IfBlock;
  a1->AdminStatus = v2;
  if ( IfBlock )
    ndisIfRemoveIfBlockMiniportAssociation((char)IfBlock, a1, v2);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4,
      13,
      97,
      (struct _GUID *)&WPP_3bdda7144e74370204adec44604355d7_Traceguids,
      (char)a1);
}
