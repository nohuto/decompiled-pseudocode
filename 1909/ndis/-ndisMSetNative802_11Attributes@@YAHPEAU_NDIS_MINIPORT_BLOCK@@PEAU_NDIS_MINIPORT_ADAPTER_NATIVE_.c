/*
 * XREFs of ?ndisMSetNative802_11Attributes@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_MINIPORT_ADAPTER_NATIVE_802_11_ATTRIBUTES@@@Z @ 0x1C0097C14
 * Callers:
 *     NdisMSetMiniportAttributes @ 0x1C002F6A0 (NdisMSetMiniportAttributes.c)
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x1C0006260 (WPP_RECORDER_SF_q.c)
 *     Duplicate802_11AttachAttributesCommon @ 0x1C00C853C (Duplicate802_11AttachAttributesCommon.c)
 */

__int64 __fastcall ndisMSetNative802_11Attributes(
        struct _NDIS_MINIPORT_BLOCK *a1,
        struct _NDIS_MINIPORT_ADAPTER_NATIVE_802_11_ATTRIBUTES *a2,
        int a3,
        int a4)
{
  int v4; // edi
  unsigned int v6; // edi
  int v7; // edx
  int v9; // [rsp+20h] [rbp-38h]
  void *v10; // [rsp+28h] [rbp-30h]
  int v11; // [rsp+30h] [rbp-28h]
  __int64 v12; // [rsp+38h] [rbp-20h]
  __int64 v13; // [rsp+60h] [rbp+8h] BYREF

  v13 = 0LL;
  v4 = (int)a2;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(a2) = 4;
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      (int)a2,
      1,
      130,
      (struct _GUID *)&WPP_529e9a8d17733b7c5a0c4606a55c84c2_Traceguids,
      (char)a1);
  }
  if ( a1->MediaSpecificAttributes )
  {
    return (unsigned int)-1073676267;
  }
  else
  {
    v6 = Duplicate802_11AttachAttributesCommon(
           _byteswap_ushort(*(_WORD *)&a1->DriverHandle->MajorNdisVersion),
           v4,
           a3,
           a4,
           v9,
           v10,
           v11,
           v12,
           (__int64)&v13);
    if ( v6 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v7) = 4;
        WPP_RECORDER_SF_q(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          v7,
          1,
          131,
          (struct _GUID *)&WPP_529e9a8d17733b7c5a0c4606a55c84c2_Traceguids,
          (char)a1);
      }
    }
    else
    {
      a1->MediaSpecificAttributes = (_NDIS_OBJECT_HEADER *)v13;
    }
  }
  return v6;
}
