/*
 * XREFs of ?ndisLWMInitializeHandler@@YAHPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C01171B4
 * Callers:
 *     ndisMInitializeAdapter @ 0x1C012D618 (ndisMInitializeAdapter.c)
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x1C0006260 (WPP_RECORDER_SF_q.c)
 *     WPP_RECORDER_SF_qD @ 0x1C0009DA0 (WPP_RECORDER_SF_qD.c)
 *     NdisMSetMiniportAttributes @ 0x1C002F6A0 (NdisMSetMiniportAttributes.c)
 */

__int64 __fastcall ndisLWMInitializeHandler(struct _NDIS_MINIPORT_BLOCK *a1)
{
  int v2; // edx
  unsigned int v3; // edi
  int v5; // [rsp+40h] [rbp-28h] BYREF
  __int64 v6; // [rsp+44h] [rbp-24h]
  int v7; // [rsp+4Ch] [rbp-1Ch]
  int v8; // [rsp+50h] [rbp-18h]
  int v9; // [rsp+54h] [rbp-14h]
  int v10; // [rsp+58h] [rbp-10h]
  int v11; // [rsp+5Ch] [rbp-Ch]

  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4,
      1,
      10,
      (struct _GUID *)&WPP_529e9a8d17733b7c5a0c4606a55c84c2_Traceguids,
      (char)a1);
  v6 = 0LL;
  v7 = 0;
  v11 = 0;
  v9 = 0;
  v10 = 0;
  v8 = 0;
  v5 = 1835678;
  v3 = NdisMSetMiniportAttributes(a1, (PNDIS_MINIPORT_ADAPTER_ATTRIBUTES)&v5);
  if ( v3 )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      return v3;
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      2,
      1,
      11,
      (struct _GUID *)&WPP_529e9a8d17733b7c5a0c4606a55c84c2_Traceguids,
      (char)a1);
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v2) = 4;
    WPP_RECORDER_SF_qD(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v2,
      1,
      12,
      (struct _GUID *)&WPP_529e9a8d17733b7c5a0c4606a55c84c2_Traceguids,
      (char)a1,
      v3);
  }
  return v3;
}
