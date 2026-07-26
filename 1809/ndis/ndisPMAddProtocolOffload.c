/*
 * XREFs of ndisPMAddProtocolOffload @ 0x1C0014904
 * Callers:
 *     ndisOidPMAddRemove @ 0x1C0016A60 (ndisOidPMAddRemove.c)
 * Callees:
 *     ndisQuerySetMiniportEx @ 0x1C000AC50 (ndisQuerySetMiniportEx.c)
 *     ndisCreatePMRejectWorkItem @ 0x1C0025828 (ndisCreatePMRejectWorkItem.c)
 *     __security_check_cookie @ 0x1C0026050 (__security_check_cookie.c)
 *     memset @ 0x1C0027180 (memset.c)
 *     WPP_SF_qqq @ 0x1C003A960 (WPP_SF_qqq.c)
 *     WPP_SF_D @ 0x1C0041770 (WPP_SF_D.c)
 *     WPP_SF_qqqL @ 0x1C004207C (WPP_SF_qqqL.c)
 *     ndisClonePMPatternList @ 0x1C0049EB4 (ndisClonePMPatternList.c)
 *     ndisGetPMProtocolOffloadSize @ 0x1C00E66B8 (ndisGetPMProtocolOffloadSize.c)
 *     ndisRemovePMLowestPriorityEntry @ 0x1C00E8244 (ndisRemovePMLowestPriorityEntry.c)
 */

__int64 __fastcall ndisPMAddProtocolOffload(_QWORD *MiniportAdapterHandle, __int64 a2, PNDIS_OID_REQUEST Request)
{
  __int64 v4; // r12
  _DWORD *v6; // rbx
  char v7; // r13
  unsigned int SetMiniport; // eax
  unsigned int v9; // r14d
  _QWORD *v10; // rbx
  KIRQL v12; // al
  KIRQL v13; // bl
  void *v14; // rcx
  unsigned int v15; // eax
  unsigned int v16; // r12d
  unsigned int *InformationBuffer; // rdi
  _QWORD *v18; // rax
  unsigned int v19; // eax
  __int64 v20; // rcx
  __int64 v21; // r8
  UINT PMProtocolOffloadSize; // r13d
  _DWORD *v23; // rdi
  void *v24; // rcx
  _QWORD *v26; // [rsp+38h] [rbp-C8h]
  PVOID P[2]; // [rsp+40h] [rbp-C0h] BYREF
  struct _NDIS_OID_REQUEST Requesta; // [rsp+50h] [rbp-B0h] BYREF

  v4 = a2;
  memset(&Requesta, 0, 0xF8uLL);
  v6 = 0LL;
  P[0] = 0LL;
  v7 = 0;
  v26 = 0LL;
  if ( (unsigned __int8)byte_1C00A025A >= 4u )
    WPP_SF_qqq(97LL, &WPP_293c7713174a39067998d2cc62157da6_Traceguids, MiniportAdapterHandle, v4, Request);
  KeWaitForSingleObject(MiniportAdapterHandle + 498, Executive, 0, 0, 0LL);
  while ( 1 )
  {
    *(_DWORD *)&Request->NdisReserved[16] |= 0x2000000u;
    SetMiniport = ndisQuerySetMiniportEx(MiniportAdapterHandle, 0LL, Request, 0, 0LL, v4);
    v9 = SetMiniport;
    if ( SetMiniport != -1071439868 && SetMiniport != -1073741670 )
      break;
    if ( !v7 )
    {
      v12 = KeAcquireSpinLockRaiseToDpc(MiniportAdapterHandle + 12);
      MiniportAdapterHandle[65] = KeGetCurrentThread();
      v13 = v12;
      v14 = (void *)MiniportAdapterHandle[122];
      *((_DWORD *)MiniportAdapterHandle + 466) = 2759998;
      v15 = ndisClonePMPatternList(v14);
      MiniportAdapterHandle[65] = 0LL;
      *((_DWORD *)MiniportAdapterHandle + 466) = 0;
      v16 = v15;
      KeReleaseSpinLock(MiniportAdapterHandle + 12, v13);
      if ( v16 )
      {
        if ( (unsigned __int8)byte_1C00A025D >= 2u )
          WPP_SF_D(99LL, &WPP_293c7713174a39067998d2cc62157da6_Traceguids, v16);
        v6 = v26;
        goto LABEL_28;
      }
      v6 = v26;
      v7 = 1;
    }
    InformationBuffer = (unsigned int *)Request->DATA.QUERY_INFORMATION.InformationBuffer;
    v18 = (_QWORD *)ndisRemovePMLowestPriorityEntry(P, InformationBuffer[2]);
    if ( !v18 )
    {
      if ( (unsigned __int8)byte_1C00A025D >= 4u )
        WPP_SF_D(100LL, &WPP_293c7713174a39067998d2cc62157da6_Traceguids, InformationBuffer[2]);
LABEL_28:
      v4 = a2;
      goto LABEL_7;
    }
    *v18 = v6;
    v26 = v18;
    v6 = v18;
    memset(&Requesta, 0, 0xF8uLL);
    v4 = a2;
    *(_QWORD *)&Requesta.NdisReserved[32] = &ndisIntReqGeneric;
    *(_DWORD *)&Requesta.NdisReserved[16] |= 8u;
    Requesta.Header = (NDIS_OBJECT_HEADER)15466902;
    Requesta.DATA.QUERY_INFORMATION.Oid = -50265841;
    Requesta.RequestType = NdisRequestSetInformation;
    Requesta.PortNumber = v6[11];
    *(_DWORD *)&Requesta.NdisReserved[16] |= 0x1800000u;
    Requesta.DATA.QUERY_INFORMATION.InformationBuffer = v6 + 10;
    Requesta.DATA.QUERY_INFORMATION.InformationBufferLength = 4;
    v19 = ndisQuerySetMiniportEx(MiniportAdapterHandle, 0LL, &Requesta, 0, 0LL, a2);
    if ( v19 )
    {
      if ( (unsigned __int8)byte_1C00A025D < 2u )
        goto LABEL_7;
      v20 = 101LL;
      v21 = v19;
      goto LABEL_22;
    }
  }
  if ( SetMiniport && (unsigned __int8)byte_1C00A025D >= 2u )
  {
    v20 = 98LL;
    v21 = SetMiniport;
LABEL_22:
    WPP_SF_D(v20, &WPP_293c7713174a39067998d2cc62157da6_Traceguids, v21);
  }
LABEL_7:
  if ( v6 )
  {
    PMProtocolOffloadSize = ndisGetPMProtocolOffloadSize();
    while ( 1 )
    {
      v23 = v6;
      v6 = *(_DWORD **)v6;
      memset(&Requesta, 0, 0xF8uLL);
      *(_QWORD *)&Requesta.NdisReserved[32] = &ndisIntReqGeneric;
      *(_DWORD *)&Requesta.NdisReserved[16] |= 8u;
      Requesta.Header = (NDIS_OBJECT_HEADER)15466902;
      Requesta.DATA.QUERY_INFORMATION.Oid = -50265843;
      Requesta.RequestType = NdisRequestSetInformation;
      Requesta.PortNumber = v23[11];
      *(_DWORD *)&Requesta.NdisReserved[16] |= 0x1800000u;
      Requesta.DATA.QUERY_INFORMATION.InformationBuffer = v23 + 12;
      Requesta.DATA.QUERY_INFORMATION.InformationBufferLength = PMProtocolOffloadSize;
      if ( (unsigned int)ndisQuerySetMiniportEx(MiniportAdapterHandle, 0LL, &Requesta, 0, 0LL, v4) )
        break;
      ExFreePoolWithTag(v23, 0);
      if ( !v6 )
        goto LABEL_8;
    }
    *(_QWORD *)v23 = v6;
    v6 = v23;
  }
LABEL_8:
  KeReleaseSemaphore((PRKSEMAPHORE)(MiniportAdapterHandle + 498), 0, 1, 0);
  ndisCreatePMRejectWorkItem(MiniportAdapterHandle, v6, 1073938514LL);
  v10 = P[0];
  while ( v10 )
  {
    v24 = v10;
    v10 = (_QWORD *)*v10;
    ExFreePoolWithTag(v24, 0);
  }
  if ( (unsigned __int8)byte_1C00A025A >= 4u )
    WPP_SF_qqqL(102LL, &WPP_293c7713174a39067998d2cc62157da6_Traceguids, MiniportAdapterHandle, v4, Request, v9);
  return v9;
}
