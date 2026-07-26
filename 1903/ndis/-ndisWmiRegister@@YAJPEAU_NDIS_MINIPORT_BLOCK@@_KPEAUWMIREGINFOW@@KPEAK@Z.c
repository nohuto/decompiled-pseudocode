/*
 * XREFs of ?ndisWmiRegister@@YAJPEAU_NDIS_MINIPORT_BLOCK@@_KPEAUWMIREGINFOW@@KPEAK@Z @ 0x1C0027E40
 * Callers:
 *     ndisWMIDispatch @ 0x1C00191AC (ndisWMIDispatch.c)
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x1C0006260 (WPP_RECORDER_SF_q.c)
 *     WPP_RECORDER_SF_qL @ 0x1C0006320 (WPP_RECORDER_SF_qL.c)
 *     ?ndisQuerySupportedGuidToOidList@@YAHPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C003347C (-ndisQuerySupportedGuidToOidList@@YAHPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     memmove @ 0x1C0041100 (memmove.c)
 *     memset @ 0x1C0041440 (memset.c)
 */

__int64 __fastcall ndisWmiRegister(
        struct _NDIS_MINIPORT_BLOCK *a1,
        ULONG *a2,
        struct WMIREGINFOW *a3,
        ULONG a4,
        unsigned int *a5)
{
  unsigned int v5; // edi
  const void **v7; // r15
  ULONG *v8; // rbx
  int v11; // eax
  ULONG v12; // ebp
  ULONG v13; // ebx
  ULONG v14; // r13d
  ULONG v15; // eax
  _NDIS_GUID *pNdisGuidMap; // rcx
  __int64 v17; // r8
  __int64 v18; // rax
  __int64 v19; // rax
  __int64 v20; // rax
  _GUID v21; // xmm0
  _NDIS_M_DRIVER_BLOCK *DriverHandle; // rax
  _NDIS_WRAPPER_HANDLE *NdisDriverInfo; // rcx
  _UNICODE_STRING *p_ServiceRegPath; // rax
  unsigned int v25; // ecx
  ULONG *p_NextWmiRegInfo; // rbx
  _NDIS_GUID *i; // rdx
  _GUID Guid; // xmm0
  char *v29; // rbx
  char *v30; // rbx
  ULONG v31; // [rsp+88h] [rbp+10h]

  v5 = 0;
  v31 = 0;
  v7 = 0LL;
  v8 = a2;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(a2) = 4;
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      (int)a2,
      18,
      21,
      (struct _GUID *)&WPP_2fa07f5a7b83311c1860bef7c182ade8_Traceguids,
      (char)a1);
  }
  *a5 = 0;
  if ( v8 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(a2) = 4;
      WPP_RECORDER_SF_q(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        (int)a2,
        18,
        24,
        (struct _GUID *)&WPP_2fa07f5a7b83311c1860bef7c182ade8_Traceguids,
        (char)a1);
    }
    v5 = -1073741811;
  }
  else if ( !a1->pNdisGuidMap && (unsigned int)ndisQuerySupportedGuidToOidList(a1) )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(a2) = 2;
      WPP_RECORDER_SF_q(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        (int)a2,
        18,
        22,
        (struct _GUID *)&WPP_2fa07f5a7b83311c1860bef7c182ade8_Traceguids,
        (char)a1);
    }
    v5 = -1073741823;
  }
  else
  {
    LOWORD(a2) = a1->cCustomGuidMap;
    if ( (_WORD)a2 )
    {
      DriverHandle = a1->DriverHandle;
      LODWORD(a2) = (unsigned __int16)a2;
      NdisDriverInfo = DriverHandle->NdisDriverInfo;
      p_ServiceRegPath = &DriverHandle->ServiceRegPath;
      v7 = (const void **)&NdisDriverInfo->ServiceRegPath;
      if ( !NdisDriverInfo )
        v7 = (const void **)p_ServiceRegPath;
      v11 = 32 * (unsigned __int16)a2 + *(unsigned __int16 *)v7 + 58;
      v31 = v11;
    }
    else
    {
      LODWORD(a2) = 0;
      v11 = 0;
    }
    v12 = a1->cNdisGuidMap - (_DWORD)a2;
    v13 = (v11 + 7) & 0xFFFFFFF8;
    v14 = 32 * v12 + 24;
    v15 = v13 + v14;
    if ( v13 + v14 < v13 )
    {
      v5 = -1073741823;
    }
    else if ( a4 < v15 )
    {
      a3->BufferSize = v15;
      v5 = -1073741789;
      *a5 = 4;
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        return v5;
      LOBYTE(a2) = 4;
      WPP_RECORDER_SF_q(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        (int)a2,
        18,
        23,
        (struct _GUID *)&WPP_2fa07f5a7b83311c1860bef7c182ade8_Traceguids,
        (char)a1);
    }
    else
    {
      *a5 = v15;
      memset(a3, 0, v15);
      if ( v13 && v7 )
      {
        v25 = 0;
        a3->NextWmiRegInfo = v13;
        p_NextWmiRegInfo = &a3[1].NextWmiRegInfo;
        a3->BufferSize = v31;
        a3->GuidCount = a1->cCustomGuidMap;
        for ( i = a1->pCustomGuidMap; v25 < a1->cCustomGuidMap; p_NextWmiRegInfo += 8 )
        {
          Guid = i->Guid;
          ++v25;
          ++i;
          *(_GUID *)p_NextWmiRegInfo = Guid;
        }
        a3->RegistryPath = (_DWORD)p_NextWmiRegInfo - (_DWORD)a3;
        *(_WORD *)p_NextWmiRegInfo = *(_WORD *)v7;
        v29 = (char *)p_NextWmiRegInfo + 2;
        memmove(v29, v7[1], *(unsigned __int16 *)v7);
        v30 = &v29[*(unsigned __int16 *)v7];
        a3->MofResourceName = (_DWORD)v30 - (_DWORD)a3;
        *(_WORD *)v30 = 30;
        *(_OWORD *)(v30 + 2) = *(_OWORD *)L"NdisMofResource";
        *(_QWORD *)(v30 + 18) = *(_QWORD *)L"esource";
        *(_DWORD *)(v30 + 26) = *(_DWORD *)L"rce";
        *((_WORD *)v30 + 15) = aNdismofresourc[14];
        a3 = (struct WMIREGINFOW *)((char *)a3 + a3->NextWmiRegInfo);
      }
      a3->BufferSize = v14;
      a2 = &a3[1].NextWmiRegInfo;
      a3->NextWmiRegInfo = 0;
      a3->GuidCount = v12;
      pNdisGuidMap = a1->pNdisGuidMap;
      if ( v12 )
      {
        v17 = v12;
        do
        {
          v18 = *(_QWORD *)&pNdisGuidMap->Guid.Data1 - *(_QWORD *)&GUID_POWER_DEVICE_ENABLE.Data1;
          if ( *(_QWORD *)&pNdisGuidMap->Guid.Data1 == *(_QWORD *)&GUID_POWER_DEVICE_ENABLE.Data1 )
            v18 = *(_QWORD *)pNdisGuidMap->Guid.Data4 - *(_QWORD *)GUID_POWER_DEVICE_ENABLE.Data4;
          if ( !v18 )
            goto LABEL_31;
          v19 = *(_QWORD *)&pNdisGuidMap->Guid.Data1 - *(_QWORD *)&GUID_POWER_DEVICE_WAKE_ENABLE.Data1;
          if ( *(_QWORD *)&pNdisGuidMap->Guid.Data1 == *(_QWORD *)&GUID_POWER_DEVICE_WAKE_ENABLE.Data1 )
            v19 = *(_QWORD *)pNdisGuidMap->Guid.Data4 - *(_QWORD *)GUID_POWER_DEVICE_WAKE_ENABLE.Data4;
          if ( !v19 )
            goto LABEL_31;
          v20 = *(_QWORD *)&pNdisGuidMap->Guid.Data1 - *(_QWORD *)&GUID_NDIS_WAKE_ON_MAGIC_PACKET_ONLY.Data1;
          if ( *(_QWORD *)&pNdisGuidMap->Guid.Data1 == *(_QWORD *)&GUID_NDIS_WAKE_ON_MAGIC_PACKET_ONLY.Data1 )
            v20 = *(_QWORD *)pNdisGuidMap->Guid.Data4 - *(_QWORD *)GUID_NDIS_WAKE_ON_MAGIC_PACKET_ONLY.Data4;
          if ( !v20 )
          {
LABEL_31:
            *((_QWORD *)a2 + 3) = a1->PhysicalDeviceObject;
            a2[4] = 32;
            a2[5] = 1;
          }
          v21 = pNdisGuidMap->Guid;
          ++pNdisGuidMap;
          *(_GUID *)a2 = v21;
          a2 += 8;
          --v17;
        }
        while ( v17 );
      }
      *(_QWORD *)&a3->RegistryPath = 0LL;
    }
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(a2) = 4;
    WPP_RECORDER_SF_qL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      (int)a2,
      18,
      25,
      (struct _GUID *)&WPP_2fa07f5a7b83311c1860bef7c182ade8_Traceguids,
      (char)a1,
      v5);
  }
  return v5;
}
