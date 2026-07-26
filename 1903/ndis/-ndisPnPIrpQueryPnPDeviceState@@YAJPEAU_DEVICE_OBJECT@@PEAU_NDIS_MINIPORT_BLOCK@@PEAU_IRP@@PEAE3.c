/*
 * XREFs of ?ndisPnPIrpQueryPnPDeviceState@@YAJPEAU_DEVICE_OBJECT@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_IRP@@PEAE3@Z @ 0x1C003F248
 * Callers:
 *     ndisPnPDispatch @ 0x1C0018190 (ndisPnPDispatch.c)
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x1C0006260 (WPP_RECORDER_SF_q.c)
 *     McTemplateK0jqxq @ 0x1C0061768 (McTemplateK0jqxq.c)
 */

__int64 __fastcall ndisPnPIrpQueryPnPDeviceState(
        struct _DEVICE_OBJECT *a1,
        struct _NDIS_MINIPORT_BLOCK *a2,
        struct _IRP *a3,
        unsigned __int8 *a4,
        unsigned __int8 *a5)
{
  unsigned int PnPFlags; // eax
  struct _NDIS_MINIPORT_BLOCK *v7; // rdi
  char v9; // [rsp+28h] [rbp-20h]

  PnPFlags = a2->PnPFlags;
  v7 = a2;
  if ( (PnPFlags & 0x1000) != 0 )
  {
    a3->IoStatus.Information |= 2uLL;
    PnPFlags = a2->PnPFlags;
  }
  if ( (PnPFlags & 0x100) != 0 && (a2->WSyncFlags & 4) == 0 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v9 = (char)a2;
      LOBYTE(a2) = 2;
      WPP_RECORDER_SF_q(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        (int)a2,
        13,
        47,
        (struct _GUID *)&WPP_1c97764dd9a33bffc5a8311029b1d223_Traceguids,
        v9);
    }
    if ( (byte_1C00E8042 & 0x20) != 0 )
      McTemplateK0jqxq(
        (_DWORD)a1,
        (unsigned int)&QueryPnPDeviceStateFailed,
        (_DWORD)v7 + 4008,
        (_DWORD)v7 + 4008,
        v7->IfIndex,
        v7->NetLuid.Value,
        1);
    a3->IoStatus.Information |= 4uLL;
  }
  if ( v7->PagingPathCount )
    a3->IoStatus.Information |= 0x20uLL;
  a3->IoStatus.Status = 0;
  *a5 = 1;
  return 0LL;
}
