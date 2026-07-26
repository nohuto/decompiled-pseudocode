/*
 * XREFs of ?ndisSetMiniportRSSv1ParametersForMiniportV2@@YAEPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@PEAH@Z @ 0x1C00C5EDC
 * Callers:
 *     ndisOidPreRSSParameters @ 0x1C003B000 (ndisOidPreRSSParameters.c)
 * Callees:
 *     WPP_RECORDER_SF_qqL @ 0x1C00065A0 (WPP_RECORDER_SF_qqL.c)
 *     ndisCalculateRssParametersSize @ 0x1C003B624 (ndisCalculateRssParametersSize.c)
 *     memmove @ 0x1C0041380 (memmove.c)
 *     ?ndisAllocateCombinedRSSParameters@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@PEAPEAU_NDIS_VPORT_BLOCK@@PEAPEAU_NDIS_RECEIVE_SCALE_PARAMETERS@@33@Z @ 0x1C00C46B8 (-ndisAllocateCombinedRSSParameters@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@PEAPEAU_.c)
 *     ?ndisAreProcessorsEqual@@YAEU_PROCESSOR_NUMBER@@0@Z @ 0x1C00C48E4 (-ndisAreProcessorsEqual@@YAEU_PROCESSOR_NUMBER@@0@Z.c)
 *     ?ndisInternalSetRSSInitialize@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@K@Z @ 0x1C00C4D54 (-ndisInternalSetRSSInitialize@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@K@Z.c)
 *     ?ndisInternalSetRSSv2IndirectionTable@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@GPEAU_PROCESSOR_NUMBER@@U3@G22@Z @ 0x1C00C4E20 (-ndisInternalSetRSSv2IndirectionTable@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@GPEAU.c)
 *     ?ndisInternalSetRSSv2Parameters@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@KKGKKPEAX@Z @ 0x1C00C5200 (-ndisInternalSetRSSv2Parameters@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@KKGKKPEAX@Z.c)
 *     ?ndisIsTargetNonDefaultVPort@@YAEPEBU_NDIS_OID_REQUEST@@PEAK@Z @ 0x1C00C532C (-ndisIsTargetNonDefaultVPort@@YAEPEBU_NDIS_OID_REQUEST@@PEAK@Z.c)
 *     ?ndisSetCombinedRSSParameters@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@PEAU_NDIS_VPORT_BLOCK@@PEAU_NDIS_RECEIVE_SCALE_PARAMETERS@@@Z @ 0x1C00C5E5C (-ndisSetCombinedRSSParameters@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@PEAU_NDIS_VPO.c)
 *     WPP_RECORDER_SF_dqqL @ 0x1C00C7034 (WPP_RECORDER_SF_dqqL.c)
 */

unsigned __int8 __fastcall ndisSetMiniportRSSv1ParametersForMiniportV2(
        struct _NDIS_MINIPORT_BLOCK *a1,
        struct _NDIS_OID_REQUEST *a2,
        int *a3,
        int a4)
{
  char *InformationBuffer; // r13
  unsigned __int16 v7; // r12
  __int16 v8; // cx
  int v9; // edx
  int v10; // edi
  KIRQL v11; // bl
  int v12; // eax
  int v13; // edx
  int v14; // r9d
  char v15; // al
  char v16; // di
  unsigned int v17; // ecx
  size_t v18; // rax
  struct _NDIS_RECEIVE_SCALE_PARAMETERS *v19; // r9
  char v20; // r10
  char v21; // cl
  int v22; // r15d
  struct _PROCESSOR_NUMBER DefaultProcessorNumber; // ebx
  __int16 v24; // r8
  bool v25; // al
  unsigned __int16 IndirectionTableSize; // dx
  unsigned __int16 v27; // dx
  unsigned int NumberOfReceiveQueues; // eax
  struct _PROCESSOR_NUMBER *v29; // rax
  KIRQL v30; // al
  size_t v31; // r8
  KIRQL v32; // bl
  void *v33; // rdx
  struct _NDIS_RECEIVE_SCALE_PARAMETERS *v34; // rcx
  unsigned __int8 result; // al
  bool v36; // [rsp+50h] [rbp-39h]
  char IsTargetNonDefaultVPort; // [rsp+51h] [rbp-38h]
  unsigned __int16 v38; // [rsp+52h] [rbp-37h]
  struct _PROCESSOR_NUMBER v39; // [rsp+54h] [rbp-35h] BYREF
  unsigned int v40; // [rsp+58h] [rbp-31h] BYREF
  void *Src; // [rsp+60h] [rbp-29h] BYREF
  struct _NDIS_RECEIVE_SCALE_PARAMETERS *v42; // [rsp+68h] [rbp-21h] BYREF
  struct _NDIS_VPORT_BLOCK *v43; // [rsp+70h] [rbp-19h] BYREF
  void *v44; // [rsp+78h] [rbp-11h]
  struct _PROCESSOR_NUMBER *v45; // [rsp+80h] [rbp-9h]
  struct _PROCESSOR_NUMBER *v46; // [rsp+88h] [rbp-1h]
  unsigned int v47; // [rsp+90h] [rbp+7h] BYREF
  size_t Size; // [rsp+98h] [rbp+Fh]
  struct _NDIS_RECEIVE_SCALE_PARAMETERS *v49; // [rsp+A0h] [rbp+17h] BYREF
  char v50; // [rsp+F8h] [rbp+6Fh]
  bool v52; // [rsp+108h] [rbp+7Fh]

  InformationBuffer = (char *)a2->DATA.QUERY_INFORMATION.InformationBuffer;
  v46 = 0LL;
  v45 = 0LL;
  v38 = 0;
  v7 = 0;
  v8 = *((_WORD *)InformationBuffer + 2);
  v43 = 0LL;
  v52 = 0;
  v36 = 0;
  v44 = 0LL;
  v42 = 0LL;
  InformationBuffer[43] = 0;
  if ( (v8 & 0x10) != 0 || !InformationBuffer[8] )
  {
    v50 = 0;
    goto LABEL_9;
  }
  v50 = 1;
  if ( (v8 & 4) != 0
    || (v9 = *((unsigned __int16 *)InformationBuffer + 6), v7 = (unsigned __int16)v9 >> 2, (unsigned __int16)v9 >> 2)
    && ((v7 - 1LL) & v7) == 0 )
  {
LABEL_9:
    v11 = KeAcquireSpinLockRaiseToDpc(&a1->Lock);
    a1->MiniportThread = KeGetCurrentThread();
    v12 = ndisAllocateCombinedRSSParameters(a1, a2, &v43, &v42, &v49, (struct _NDIS_RECEIVE_SCALE_PARAMETERS **)&Src);
    a1->MiniportThread = 0LL;
    v10 = v12;
    KeReleaseSpinLock(&a1->Lock, v11);
    if ( v10 )
    {
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_49;
      v14 = 12;
LABEL_12:
      LOBYTE(v13) = 2;
      WPP_RECORDER_SF_qqL(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        v13,
        11,
        v14,
        (struct _GUID *)&WPP_60d982881ddb3579f5f2a408934c8ece_Traceguids,
        (char)a1,
        (char)a2,
        v10);
      goto LABEL_49;
    }
    IsTargetNonDefaultVPort = ndisIsTargetNonDefaultVPort(a2, (NDIS_OBJECT_HEADER *)&v47);
    v10 = ndisCalculateRssParametersSize((__int64)InformationBuffer, &v40);
    if ( v10 )
    {
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_49;
      v14 = 13;
      goto LABEL_12;
    }
    v15 = InformationBuffer[1];
    v16 = 0;
    if ( v15 == 1 )
    {
      v17 = 28;
    }
    else if ( v15 == 2 )
    {
      v17 = 40;
    }
    else
    {
      v16 = 1;
      v17 = 44;
    }
    v18 = v40;
    if ( v40 <= v17 )
      v18 = v17;
    Size = v18;
    memmove(Src, InformationBuffer, (unsigned int)v18);
    v19 = v42;
    v20 = 0;
    v21 = v50;
    v22 = 0;
    DefaultProcessorNumber = v42->DefaultProcessorNumber;
    v39 = DefaultProcessorNumber;
    if ( v50 )
    {
      v24 = *((_WORD *)InformationBuffer + 2);
      v22 = ~(_BYTE)v24 & 2 | 1;
      if ( (v24 & 8) == 0 )
      {
        v22 = ~(unsigned __int8)*((_WORD *)InformationBuffer + 2) & 2 | 5;
        v44 = &InformationBuffer[*((unsigned int *)InformationBuffer + 6)];
      }
      if ( v16 && (v24 & 0x20) == 0 )
      {
        v39 = (struct _PROCESSOR_NUMBER)*((_DWORD *)InformationBuffer + 10);
        v39.Reserved = 0;
        v25 = ndisAreProcessorsEqual(DefaultProcessorNumber, v39);
        v21 = v50;
        v36 = !v25;
      }
      if ( (v24 & 4) == 0 )
      {
        IndirectionTableSize = v19->IndirectionTableSize;
        v46 = (struct _PROCESSOR_NUMBER *)(&v19->Header.Type + v19->IndirectionTableOffset);
        v27 = IndirectionTableSize >> 2;
        v38 = v27;
        v7 = *((_WORD *)Src + 6) >> 2;
        v45 = (struct _PROCESSOR_NUMBER *)((char *)Src + *((unsigned int *)Src + 4));
        v52 = v7 < v27;
        if ( v7 > v27 )
        {
          v22 |= 0x10u;
          v52 = v7 < v27;
        }
      }
    }
    if ( IsTargetNonDefaultVPort == v20 )
      NumberOfReceiveQueues = a1->RecvScaleCapabilities.NumberOfReceiveQueues;
    else
      NumberOfReceiveQueues = v43->VPortParams.NumQueuePairs;
    v40 = NumberOfReceiveQueues;
    if ( v21 && a1->RssV2Initialized == v20 )
    {
      v10 = ndisInternalSetRSSInitialize(a1, a2);
      if ( v10 )
        goto LABEL_49;
      a1->RssV2Initialized = 1;
    }
    v10 = ndisInternalSetRSSv2Parameters(
            a1,
            a2,
            v22,
            v40,
            v7,
            *((_DWORD *)InformationBuffer + 2),
            *((unsigned __int16 *)InformationBuffer + 10),
            v44);
    if ( v10 )
      goto LABEL_49;
    if ( v50 )
    {
      if ( v36 )
      {
        v29 = (struct _PROCESSOR_NUMBER *)((char *)Src + 40);
      }
      else
      {
        if ( (InformationBuffer[4] & 4) != 0 )
          goto LABEL_48;
        v29 = &v39;
      }
      v10 = ndisInternalSetRSSv2IndirectionTable(a1, a2, v38, v46, DefaultProcessorNumber, v7, v45, v29);
      if ( v10 )
        goto LABEL_49;
      if ( v52 )
      {
        v10 = ndisInternalSetRSSv2Parameters(a1, a2, v22 & 1 | 0x10u, 0, v7, 0, 0, 0LL);
        if ( v10 )
          goto LABEL_49;
      }
    }
LABEL_48:
    v10 = 0;
    v30 = KeAcquireSpinLockRaiseToDpc(&a1->Lock);
    v31 = Size;
    v32 = v30;
    v33 = Src;
    v34 = v42;
    a1->MiniportThread = KeGetCurrentThread();
    memmove(v34, v33, v31);
    ndisSetCombinedRSSParameters(a1, a2, v43, v42);
    a1->MiniportThread = 0LL;
    KeReleaseSpinLock(&a1->Lock, v32);
    goto LABEL_49;
  }
  v10 = -1073741811;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_dqqL(*((_QWORD *)WPP_GLOBAL_Control + 8), v9, 0, a4);
LABEL_49:
  result = 1;
  a2->DATA.QUERY_INFORMATION.BytesWritten = a2->DATA.QUERY_INFORMATION.InformationBufferLength;
  *a3 = v10;
  return result;
}
