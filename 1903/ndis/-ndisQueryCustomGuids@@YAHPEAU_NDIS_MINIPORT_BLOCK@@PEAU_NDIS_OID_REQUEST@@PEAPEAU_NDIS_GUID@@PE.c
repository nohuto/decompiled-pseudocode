/*
 * XREFs of ?ndisQueryCustomGuids@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@PEAPEAU_NDIS_GUID@@PEAG@Z @ 0x1C0029918
 * Callers:
 *     ?ndisQuerySupportedGuidToOidList@@YAHPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C003347C (-ndisQuerySupportedGuidToOidList@@YAHPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x1C0006260 (WPP_RECORDER_SF_q.c)
 *     WPP_RECORDER_SF_qL @ 0x1C0006320 (WPP_RECORDER_SF_qL.c)
 *     ndisQuerySetMiniportEx @ 0x1C0006A60 (ndisQuerySetMiniportEx.c)
 *     memset @ 0x1C0041440 (memset.c)
 */

__int64 __fastcall ndisQueryCustomGuids(
        struct _NDIS_MINIPORT_BLOCK *a1,
        struct _NDIS_OID_REQUEST *a2,
        struct _NDIS_GUID **a3,
        unsigned __int16 *a4)
{
  struct _NDIS_GUID **v5; // r15
  struct _NDIS_OID_REQUEST *v6; // rbx
  unsigned __int128 v8; // rax
  unsigned __int16 MethodId; // r14
  int SetMiniport; // ebx
  unsigned __int16 v12; // di
  struct _NDIS_GUID *v13; // rbp
  unsigned int *p_Flags; // rax
  __int64 v15; // rcx
  unsigned int *v16; // rax
  __int64 v17; // rcx
  int *v18; // r15
  __int64 v19; // r12
  int v20; // ecx
  void *v21; // r14
  PVOID DataBlockObject; // [rsp+88h] [rbp+10h] BYREF
  struct _NDIS_GUID **v23; // [rsp+90h] [rbp+18h]

  v23 = a3;
  v5 = a3;
  v6 = a2;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(a2) = 4;
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      (int)a2,
      18,
      13,
      (struct _GUID *)&WPP_2fa07f5a7b83311c1860bef7c182ade8_Traceguids,
      (char)a1);
  }
  *v5 = 0LL;
  *a4 = 0;
  memset(v6, 0, 0xF8uLL);
  *(_DWORD *)&v6->NdisReserved[16] |= 8u;
  *(_QWORD *)&v6->NdisReserved[32] = &ndisIntReqWmi;
  *(_QWORD *)&v6->Header.Type = 15466902LL;
  v6->DATA.QUERY_INFORMATION.Oid = 65815;
  v6->PortNumber = 0;
  v6->DATA.QUERY_INFORMATION.InformationBuffer = 0LL;
  v6->DATA.QUERY_INFORMATION.InformationBufferLength = 0;
  LODWORD(v8) = ndisQuerySetMiniportEx((__int64)a1, 0LL, (__int64)v6, 0, 0LL, 0LL);
  MethodId = v6->DATA.METHOD_INFORMATION.MethodId;
  if ( (((_DWORD)v8 + 1073676268) & 0xFFFFFFFD) == 0 )
  {
    if ( MethodId )
    {
      v8 = MethodId * (unsigned __int128)0x2492492492492493uLL;
      v12 = MethodId / 0x1Cu;
      if ( MethodId / 0x1Cu )
      {
        *(_QWORD *)&v8 = ExAllocatePoolWithTag(NonPagedPoolNx, MethodId, 0x3177444Eu);
        v13 = (struct _NDIS_GUID *)v8;
        if ( !(_QWORD)v8 )
        {
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            BYTE8(v8) = 2;
            WPP_RECORDER_SF_q(
              *((_QWORD *)WPP_GLOBAL_Control + 8),
              SDWORD2(v8),
              18,
              15,
              (struct _GUID *)&WPP_2fa07f5a7b83311c1860bef7c182ade8_Traceguids,
              (char)a1);
          }
          SetMiniport = -1073741670;
          goto LABEL_7;
        }
        v6->DATA.QUERY_INFORMATION.InformationBufferLength = MethodId;
        v6->DATA.QUERY_INFORMATION.InformationBuffer = (PVOID)v8;
        SetMiniport = ndisQuerySetMiniportEx((__int64)a1, 0LL, (__int64)v6, 0, 0LL, 0LL);
        if ( SetMiniport )
        {
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            BYTE8(v8) = 2;
            WPP_RECORDER_SF_q(
              *((_QWORD *)WPP_GLOBAL_Control + 8),
              SDWORD2(v8),
              18,
              16,
              (struct _GUID *)&WPP_2fa07f5a7b83311c1860bef7c182ade8_Traceguids,
              (char)a1);
          }
        }
        else
        {
          if ( (a1->Flags & 0x20000) != 0 )
          {
            p_Flags = &v13->Flags;
            v15 = v12;
            do
            {
              *p_Flags |= 0x10000000u;
              p_Flags += 7;
              --v15;
            }
            while ( v15 );
          }
          if ( a1->MajorNdisVersion >= 6u )
          {
            v16 = &v13->Flags;
            v17 = v12;
            do
            {
              *v16 |= 0x8000000u;
              v16 += 7;
              --v17;
            }
            while ( v17 );
            goto LABEL_25;
          }
          v18 = (int *)&v13->Flags;
          v19 = v12;
          do
          {
            v20 = *v18;
            if ( (*(_BYTE *)v18 & 0x60) == 0x60 )
            {
              v21 = &AllUsersReadWriteSecurityDescriptor;
            }
            else if ( (v20 & 0x20) != 0 )
            {
              v21 = &AllUsersReadSecurityDescriptor;
            }
            else
            {
              v21 = &AllUsersWriteSecurityDescriptor;
              if ( (v20 & 0x40) == 0 )
                v21 = &AdminsSecurityDescriptor;
            }
            *v18 = v20 | 0x8000000;
            SetMiniport = IoWMIOpenBlock((LPCGUID)(v18 - 6), 0x40000u, &DataBlockObject);
            if ( SetMiniport >= 0 )
            {
              SetMiniport = ObSetSecurityObjectByPointer(DataBlockObject, 7LL, v21);
              ObfDereferenceObject(DataBlockObject);
            }
            v18 += 7;
            --v19;
          }
          while ( v19 );
          v5 = v23;
        }
        if ( SetMiniport )
        {
          ExFreePoolWithTag(v13, 0);
          goto LABEL_7;
        }
LABEL_25:
        *v5 = v13;
        *a4 = v12;
        goto LABEL_7;
      }
    }
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    BYTE8(v8) = 4;
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      SDWORD2(v8),
      18,
      14,
      (struct _GUID *)&WPP_2fa07f5a7b83311c1860bef7c182ade8_Traceguids,
      (char)a1);
  }
  SetMiniport = -1073741637;
LABEL_7:
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    BYTE8(v8) = 4;
    WPP_RECORDER_SF_qL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      SDWORD2(v8),
      18,
      17,
      (struct _GUID *)&WPP_2fa07f5a7b83311c1860bef7c182ade8_Traceguids,
      (char)a1,
      SetMiniport);
  }
  return (unsigned int)SetMiniport;
}
