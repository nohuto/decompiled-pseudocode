/*
 * XREFs of ?ndisRollbackPortActivation@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PORT@@1@Z @ 0x1C0061548
 * Callers:
 *     ndisPnPPortActivation @ 0x1C0062064 (ndisPnPPortActivation.c)
 * Callees:
 *     WPP_RECORDER_SF_qq @ 0x1C00066A0 (WPP_RECORDER_SF_qq.c)
 */

void __fastcall ndisRollbackPortActivation(
        struct _NDIS_MINIPORT_BLOCK *a1,
        struct _NDIS_PORT *a2,
        struct _NDIS_PORT *a3)
{
  struct _NDIS_PORT *v4; // rbx
  struct _NDIS_PORT *i; // rdx
  char v7; // [rsp+30h] [rbp-18h]

  v4 = a2;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v7 = (char)a2;
    LOBYTE(a2) = 4;
    WPP_RECORDER_SF_qq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      (int)a2,
      23,
      38,
      (struct _GUID *)&WPP_e0f2aa06e6d63a65c11fd644ab7d6728_Traceguids,
      (char)a1,
      v7);
  }
  for ( i = v4; i; i = i->Next )
  {
    if ( i == a3 )
      break;
    *((_DWORD *)i->NdisReserved + 4) = *((_DWORD *)i->NdisReserved + 5);
    --a1->NumberOfActivePorts;
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(i) = 4;
    WPP_RECORDER_SF_qq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      (int)i,
      23,
      39,
      (struct _GUID *)&WPP_e0f2aa06e6d63a65c11fd644ab7d6728_Traceguids,
      (char)a1,
      (char)v4);
  }
}
