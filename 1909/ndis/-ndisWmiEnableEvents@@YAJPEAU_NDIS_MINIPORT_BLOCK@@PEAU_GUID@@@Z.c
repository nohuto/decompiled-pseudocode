/*
 * XREFs of ?ndisWmiEnableEvents@@YAJPEAU_NDIS_MINIPORT_BLOCK@@PEAU_GUID@@@Z @ 0x1C0027ABC
 * Callers:
 *     ndisWMIDispatch @ 0x1C00191AC (ndisWMIDispatch.c)
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x1C0006260 (WPP_RECORDER_SF_q.c)
 *     WPP_RECORDER_SF_qL @ 0x1C0006320 (WPP_RECORDER_SF_qL.c)
 *     ndisWmiGetGuid @ 0x1C002806C (ndisWmiGetGuid.c)
 */

__int64 __fastcall ndisWmiEnableEvents(struct _NDIS_MINIPORT_BLOCK *a1, struct _GUID *a2)
{
  unsigned int v2; // ebx
  struct _GUID *v3; // rdi
  int v5; // edx
  __int64 v6; // rax
  __int64 v7; // rax
  __int64 v8; // rax
  __int64 v9; // rax
  __int64 v10; // rax
  __int64 v11; // rax
  __int64 v12; // rax
  __int64 v13; // rax
  __int64 v14; // rax
  __int64 v15; // rax
  int v16; // eax
  __int64 v18; // [rsp+70h] [rbp+18h] BYREF

  v2 = 0;
  v3 = a2;
  v18 = 0LL;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(a2) = 4;
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      (int)a2,
      18,
      67,
      (struct _GUID *)&WPP_2fa07f5a7b83311c1860bef7c182ade8_Traceguids,
      (char)a1);
  }
  ndisWmiGetGuid(&v18, a1, v3, 0LL);
  if ( v18 )
  {
    v6 = *(_QWORD *)&v3->Data1 - *(_QWORD *)&GUID_NDIS_NOTIFY_BIND.Data1;
    if ( *(_QWORD *)&v3->Data1 == *(_QWORD *)&GUID_NDIS_NOTIFY_BIND.Data1 )
      v6 = *(_QWORD *)v3->Data4 - *(_QWORD *)GUID_NDIS_NOTIFY_BIND.Data4;
    if ( !v6 )
      goto LABEL_39;
    v7 = *(_QWORD *)&v3->Data1 - *(_QWORD *)&GUID_NDIS_NOTIFY_UNBIND.Data1;
    if ( *(_QWORD *)&v3->Data1 == *(_QWORD *)&GUID_NDIS_NOTIFY_UNBIND.Data1 )
      v7 = *(_QWORD *)v3->Data4 - *(_QWORD *)GUID_NDIS_NOTIFY_UNBIND.Data4;
    if ( !v7 )
      goto LABEL_39;
    v8 = *(_QWORD *)&v3->Data1 - *(_QWORD *)&GUID_NDIS_NOTIFY_DEVICE_POWER_ON.Data1;
    if ( *(_QWORD *)&v3->Data1 == *(_QWORD *)&GUID_NDIS_NOTIFY_DEVICE_POWER_ON.Data1 )
      v8 = *(_QWORD *)v3->Data4 - *(_QWORD *)GUID_NDIS_NOTIFY_DEVICE_POWER_ON.Data4;
    if ( !v8 )
      goto LABEL_39;
    v9 = *(_QWORD *)&v3->Data1 - *(_QWORD *)&GUID_NDIS_NOTIFY_DEVICE_POWER_OFF.Data1;
    if ( *(_QWORD *)&v3->Data1 == *(_QWORD *)&GUID_NDIS_NOTIFY_DEVICE_POWER_OFF.Data1 )
      v9 = *(_QWORD *)v3->Data4 - *(_QWORD *)GUID_NDIS_NOTIFY_DEVICE_POWER_OFF.Data4;
    if ( !v9 )
      goto LABEL_39;
    v10 = *(_QWORD *)&v3->Data1 - *(_QWORD *)&GUID_NDIS_NOTIFY_ADAPTER_ARRIVAL.Data1;
    if ( *(_QWORD *)&v3->Data1 == *(_QWORD *)&GUID_NDIS_NOTIFY_ADAPTER_ARRIVAL.Data1 )
      v10 = *(_QWORD *)v3->Data4 - *(_QWORD *)GUID_NDIS_NOTIFY_ADAPTER_ARRIVAL.Data4;
    if ( !v10 )
      goto LABEL_39;
    v11 = *(_QWORD *)&v3->Data1 - *(_QWORD *)&GUID_NDIS_NOTIFY_ADAPTER_REMOVAL.Data1;
    if ( *(_QWORD *)&v3->Data1 == *(_QWORD *)&GUID_NDIS_NOTIFY_ADAPTER_REMOVAL.Data1 )
      v11 = *(_QWORD *)v3->Data4 - *(_QWORD *)GUID_NDIS_NOTIFY_ADAPTER_REMOVAL.Data4;
    if ( !v11 )
      goto LABEL_39;
    v12 = *(_QWORD *)&v3->Data1 - *(_QWORD *)&GUID_NDIS_NOTIFY_FILTER_REMOVAL.Data1;
    if ( *(_QWORD *)&v3->Data1 == *(_QWORD *)&GUID_NDIS_NOTIFY_FILTER_REMOVAL.Data1 )
      v12 = *(_QWORD *)v3->Data4 - *(_QWORD *)GUID_NDIS_NOTIFY_FILTER_REMOVAL.Data4;
    if ( !v12 )
      goto LABEL_39;
    v13 = *(_QWORD *)&v3->Data1 - *(_QWORD *)&GUID_NDIS_NOTIFY_FILTER_ARRIVAL.Data1;
    if ( *(_QWORD *)&v3->Data1 == *(_QWORD *)&GUID_NDIS_NOTIFY_FILTER_ARRIVAL.Data1 )
      v13 = *(_QWORD *)v3->Data4 - *(_QWORD *)GUID_NDIS_NOTIFY_FILTER_ARRIVAL.Data4;
    if ( !v13 )
      goto LABEL_39;
    v14 = *(_QWORD *)&v3->Data1 - *(_QWORD *)&GUID_NDIS_NOTIFY_DEVICE_POWER_ON_EX.Data1;
    if ( *(_QWORD *)&v3->Data1 == *(_QWORD *)&GUID_NDIS_NOTIFY_DEVICE_POWER_ON_EX.Data1 )
      v14 = *(_QWORD *)v3->Data4 - *(_QWORD *)GUID_NDIS_NOTIFY_DEVICE_POWER_ON_EX.Data4;
    if ( !v14 )
      goto LABEL_39;
    v15 = *(_QWORD *)&v3->Data1 - *(_QWORD *)&GUID_NDIS_NOTIFY_DEVICE_POWER_OFF_EX.Data1;
    if ( *(_QWORD *)&v3->Data1 == *(_QWORD *)&GUID_NDIS_NOTIFY_DEVICE_POWER_OFF_EX.Data1 )
      v15 = *(_QWORD *)v3->Data4 - *(_QWORD *)GUID_NDIS_NOTIFY_DEVICE_POWER_OFF_EX.Data4;
    if ( v15 )
    {
      v16 = *(_DWORD *)(v18 + 24);
      if ( (v16 & 2) != 0 )
        *(_DWORD *)(v18 + 24) = v16 | 0x80000000;
      else
        v2 = -1073741808;
    }
    else
    {
LABEL_39:
      *(_DWORD *)(v18 + 24) |= 0x80000000;
    }
  }
  else
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v5) = 2;
      WPP_RECORDER_SF_q(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        v5,
        18,
        68,
        (struct _GUID *)&WPP_2fa07f5a7b83311c1860bef7c182ade8_Traceguids,
        (char)a1);
    }
    v2 = -1073741811;
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v5) = 4;
    WPP_RECORDER_SF_qL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v5,
      18,
      69,
      (struct _GUID *)&WPP_2fa07f5a7b83311c1860bef7c182ade8_Traceguids,
      (char)a1,
      v2);
  }
  return v2;
}
