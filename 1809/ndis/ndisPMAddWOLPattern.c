/*
 * XREFs of ndisPMAddWOLPattern @ 0x1C00256CC
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
 *     ndisGetWoLPatternSize @ 0x1C00BBB98 (ndisGetWoLPatternSize.c)
 *     ndisRemovePMLowestPriorityEntry @ 0x1C00E8244 (ndisRemovePMLowestPriorityEntry.c)
 */

__int64 __fastcall ndisPMAddWOLPattern(_QWORD *MiniportAdapterHandle, __int64 a2, PNDIS_OID_REQUEST Request)
{
  __int64 v4; // r12
  _QWORD *v6; // rbx
  char v7; // r13
  unsigned int SetMiniport; // eax
  unsigned int v9; // r14d
  _QWORD *v10; // rbx
  KIRQL v12; // r13
  unsigned __int8 v13; // cl
  void *v14; // rcx
  unsigned int v15; // eax
  unsigned int v16; // ebx
  unsigned int *InformationBuffer; // rsi
  _QWORD *v18; // rax
  unsigned int v19; // eax
  __int64 v20; // rcx
  __int64 v21; // r8
  _DWORD *v22; // rsi
  UINT WoLPatternSize; // eax
  int v24; // r9d
  void *v25; // rcx
  _QWORD *v26; // [rsp+30h] [rbp-D0h]
  PVOID P[2]; // [rsp+40h] [rbp-C0h] BYREF
  struct _NDIS_OID_REQUEST Requesta; // [rsp+50h] [rbp-B0h] BYREF

  v4 = a2;
  memset(&Requesta, 0, 0xF8uLL);
  v6 = 0LL;
  P[0] = 0LL;
  v7 = 0;
  v26 = 0LL;
  if ( (unsigned __int8)byte_1C00A025A >= 4u )
    WPP_SF_qqq(77LL, &WPP_293c7713174a39067998d2cc62157da6_Traceguids, MiniportAdapterHandle, v4, Request);
  KeWaitForSingleObject(MiniportAdapterHandle + 494, Executive, 0, 0, 0LL);
  while ( 1 )
  {
    *(_DWORD *)&Request->NdisReserved[16] |= 0x2000000u;
    SetMiniport = ndisQuerySetMiniportEx(MiniportAdapterHandle, 0LL, Request, 0, 0LL, v4);
    v9 = SetMiniport;
    if ( SetMiniport != -1071439869 && SetMiniport != -1073741670 )
    {
      if ( !SetMiniport || (unsigned __int8)byte_1C00A025D < 2u )
        goto LABEL_7;
      v20 = 78LL;
      v21 = SetMiniport;
LABEL_27:
      WPP_SF_D(v20, &WPP_293c7713174a39067998d2cc62157da6_Traceguids, v21);
      goto LABEL_7;
    }
    if ( !v7 )
      break;
LABEL_23:
    InformationBuffer = (unsigned int *)Request->DATA.QUERY_INFORMATION.InformationBuffer;
    v18 = (_QWORD *)ndisRemovePMLowestPriorityEntry(P, InformationBuffer[2]);
    if ( !v18 )
    {
      if ( (unsigned __int8)byte_1C00A025D >= 4u )
        WPP_SF_D(80LL, &WPP_293c7713174a39067998d2cc62157da6_Traceguids, InformationBuffer[2]);
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
    Requesta.DATA.QUERY_INFORMATION.Oid = -50265845;
    Requesta.RequestType = NdisRequestSetInformation;
    Requesta.PortNumber = *((_DWORD *)v6 + 11);
    *(_DWORD *)&Requesta.NdisReserved[16] |= 0x1800000u;
    Requesta.DATA.QUERY_INFORMATION.InformationBuffer = v6 + 5;
    Requesta.DATA.QUERY_INFORMATION.InformationBufferLength = 4;
    v19 = ndisQuerySetMiniportEx(MiniportAdapterHandle, 0LL, &Requesta, 0, 0LL, a2);
    if ( v19 )
    {
      if ( (unsigned __int8)byte_1C00A025D < 2u )
        goto LABEL_7;
      v20 = 81LL;
      v21 = v19;
      goto LABEL_27;
    }
  }
  v12 = KeAcquireSpinLockRaiseToDpc(MiniportAdapterHandle + 12);
  MiniportAdapterHandle[65] = KeGetCurrentThread();
  v13 = *((_BYTE *)MiniportAdapterHandle + 32);
  *((_DWORD *)MiniportAdapterHandle + 466) = 2757997;
  if ( v13 > 6u || v13 == 6 && *((_BYTE *)MiniportAdapterHandle + 33) >= 0x14u )
    v14 = (void *)MiniportAdapterHandle[121];
  else
    v14 = (void *)MiniportAdapterHandle[120];
  v15 = ndisClonePMPatternList(v14);
  MiniportAdapterHandle[65] = 0LL;
  *((_DWORD *)MiniportAdapterHandle + 466) = 0;
  v16 = v15;
  KeReleaseSpinLock(MiniportAdapterHandle + 12, v12);
  if ( !v16 )
  {
    v6 = v26;
    v7 = 1;
    goto LABEL_23;
  }
  if ( (unsigned __int8)byte_1C00A025D >= 2u )
    WPP_SF_D(79LL, &WPP_293c7713174a39067998d2cc62157da6_Traceguids, v16);
  v6 = v26;
LABEL_7:
  while ( v6 )
  {
    v22 = v6;
    v6 = (_QWORD *)*v6;
    memset(&Requesta, 0, 0xF8uLL);
    *(_QWORD *)&Requesta.NdisReserved[32] = &ndisIntReqGeneric;
    Requesta.Header = (NDIS_OBJECT_HEADER)15466902;
    *(_DWORD *)&Requesta.NdisReserved[16] |= 8u;
    Requesta.DATA.QUERY_INFORMATION.Oid = -50265846;
    Requesta.RequestType = NdisRequestSetInformation;
    Requesta.PortNumber = v22[11];
    Requesta.DATA.QUERY_INFORMATION.InformationBuffer = v22 + 12;
    WoLPatternSize = ndisGetWoLPatternSize();
    *(_DWORD *)&Requesta.NdisReserved[16] = v24 | 0x1800000;
    Requesta.DATA.QUERY_INFORMATION.InformationBufferLength = WoLPatternSize;
    if ( (unsigned int)ndisQuerySetMiniportEx(MiniportAdapterHandle, 0LL, &Requesta, 0, 0LL, v4) )
    {
      *(_QWORD *)v22 = v6;
      v6 = v22;
      break;
    }
    ExFreePoolWithTag(v22, 0);
  }
  KeReleaseSemaphore((PRKSEMAPHORE)(MiniportAdapterHandle + 494), 0, 1, 0);
  ndisCreatePMRejectWorkItem(MiniportAdapterHandle, v6, 1073938513LL);
  v10 = P[0];
  while ( v10 )
  {
    v25 = v10;
    v10 = (_QWORD *)*v10;
    ExFreePoolWithTag(v25, 0);
  }
  if ( (unsigned __int8)byte_1C00A025A >= 4u )
    WPP_SF_qqqL(82LL, &WPP_293c7713174a39067998d2cc62157da6_Traceguids, MiniportAdapterHandle, v4, Request, v9);
  return v9;
}
