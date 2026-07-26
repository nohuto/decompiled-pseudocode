/*
 * XREFs of ?ndisSetMiniportRSSv1ParametersForMiniportV2@@YAEPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@PEAH@Z @ 0x1C0080BFC
 * Callers:
 *     ndisOidPreRSSParameters @ 0x1C00CB5A0 (ndisOidPreRSSParameters.c)
 * Callees:
 *     ndisCalculateRssParametersSize @ 0x1C001FB34 (ndisCalculateRssParametersSize.c)
 *     memmove @ 0x1C0026E40 (memmove.c)
 *     WPP_SF_qqd @ 0x1C003A90C (WPP_SF_qqd.c)
 *     ?ndisAllocateCombinedRSSParameters@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@PEAPEAU_NDIS_VPORT_BLOCK@@PEAPEAU_NDIS_RECEIVE_SCALE_PARAMETERS@@33@Z @ 0x1C007F568 (-ndisAllocateCombinedRSSParameters@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@PEAPEAU_.c)
 *     ?ndisAreProcessorsEqual@@YAEU_PROCESSOR_NUMBER@@0@Z @ 0x1C007F794 (-ndisAreProcessorsEqual@@YAEU_PROCESSOR_NUMBER@@0@Z.c)
 *     ?ndisInternalSetRSSInitialize@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@K@Z @ 0x1C007FBFC (-ndisInternalSetRSSInitialize@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@K@Z.c)
 *     ?ndisInternalSetRSSv2IndirectionTable@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@GPEAU_PROCESSOR_NUMBER@@U3@G22@Z @ 0x1C007FCC8 (-ndisInternalSetRSSv2IndirectionTable@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@GPEAU.c)
 *     ?ndisInternalSetRSSv2Parameters@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@KKGKKPEAX@Z @ 0x1C00800A8 (-ndisInternalSetRSSv2Parameters@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@KKGKKPEAX@Z.c)
 *     ?ndisIsTargetNonDefaultVPort@@YAEPEBU_NDIS_OID_REQUEST@@PEAK@Z @ 0x1C00801D4 (-ndisIsTargetNonDefaultVPort@@YAEPEBU_NDIS_OID_REQUEST@@PEAK@Z.c)
 *     ?ndisSetCombinedRSSParameters@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@PEAU_NDIS_VPORT_BLOCK@@PEAU_NDIS_RECEIVE_SCALE_PARAMETERS@@@Z @ 0x1C0080B98 (-ndisSetCombinedRSSParameters@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@PEAU_NDIS_VPO.c)
 */

unsigned __int8 __fastcall ndisSetMiniportRSSv1ParametersForMiniportV2(
        struct _NDIS_MINIPORT_BLOCK *a1,
        struct _NDIS_OID_REQUEST *a2,
        int *a3)
{
  unsigned int *InformationBuffer; // r13
  KIRQL v6; // bl
  int v7; // eax
  int v8; // edi
  unsigned __int16 v9; // cx
  struct _PROCESSOR_NUMBER v10; // eax
  char v11; // al
  char v12; // di
  unsigned int v13; // ecx
  size_t v14; // rax
  _WORD *v15; // r12
  struct _NDIS_RECEIVE_SCALE_PARAMETERS *v16; // r9
  char v17; // r10
  __int16 v18; // r8
  int v19; // r14d
  struct _PROCESSOR_NUMBER DefaultProcessorNumber; // ebx
  char v21; // cl
  bool v22; // al
  unsigned __int16 IndirectionTableSize; // dx
  size_t v24; // rax
  unsigned __int16 v25; // dx
  unsigned __int16 v26; // r12
  unsigned int NumberOfReceiveQueues; // r12d
  struct _PROCESSOR_NUMBER *v28; // rax
  KIRQL v29; // bl
  size_t v30; // r8
  void *v31; // rdx
  struct _NDIS_RECEIVE_SCALE_PARAMETERS *v32; // rcx
  unsigned __int8 result; // al
  struct _PROCESSOR_NUMBER v34[2]; // [rsp+20h] [rbp-69h]
  size_t v35; // [rsp+30h] [rbp-59h]
  size_t v36; // [rsp+30h] [rbp-59h]
  char IsTargetNonDefaultVPort; // [rsp+40h] [rbp-49h]
  unsigned __int16 v38; // [rsp+42h] [rbp-47h]
  unsigned __int16 v39; // [rsp+44h] [rbp-45h]
  struct _PROCESSOR_NUMBER v40; // [rsp+48h] [rbp-41h] BYREF
  struct _NDIS_RECEIVE_SCALE_PARAMETERS *v41; // [rsp+50h] [rbp-39h] BYREF
  void *Src; // [rsp+58h] [rbp-31h] BYREF
  struct _NDIS_VPORT_BLOCK *v43; // [rsp+60h] [rbp-29h] BYREF
  void *v44; // [rsp+68h] [rbp-21h]
  size_t v45; // [rsp+70h] [rbp-19h]
  struct _PROCESSOR_NUMBER *v46; // [rsp+78h] [rbp-11h]
  unsigned int v47; // [rsp+80h] [rbp-9h] BYREF
  size_t Size; // [rsp+88h] [rbp-1h]
  struct _NDIS_RECEIVE_SCALE_PARAMETERS *v49; // [rsp+90h] [rbp+7h] BYREF
  unsigned int v50; // [rsp+F0h] [rbp+67h] BYREF
  bool v51; // [rsp+F8h] [rbp+6Fh]
  int *v52; // [rsp+100h] [rbp+77h]
  bool v53; // [rsp+108h] [rbp+7Fh]

  v52 = a3;
  InformationBuffer = (unsigned int *)a2->DATA.QUERY_INFORMATION.InformationBuffer;
  v46 = 0LL;
  v45 = 0LL;
  v39 = 0;
  *((_BYTE *)InformationBuffer + 43) = 0;
  v38 = 0;
  v43 = 0LL;
  v51 = 0;
  v53 = 0;
  v44 = 0LL;
  v41 = 0LL;
  v6 = KeAcquireSpinLockRaiseToDpc(&a1->Lock);
  a1->MiniportThread = KeGetCurrentThread();
  a1->LockDbg = 4130889;
  v7 = ndisAllocateCombinedRSSParameters(a1, a2, &v43, &v41, &v49, (struct _NDIS_RECEIVE_SCALE_PARAMETERS **)&Src);
  a1->MiniportThread = 0LL;
  a1->LockDbg = 0;
  v8 = v7;
  KeReleaseSpinLock(&a1->Lock, v6);
  if ( !v8 )
  {
    IsTargetNonDefaultVPort = ndisIsTargetNonDefaultVPort(a2, (NDIS_OBJECT_HEADER *)&v47);
    v10 = (struct _PROCESSOR_NUMBER)ndisCalculateRssParametersSize((__int64)InformationBuffer, &v50);
    v8 = (int)v10;
    if ( v10 )
    {
      if ( (unsigned __int8)byte_1C00A025A < 2u )
        goto LABEL_43;
      v9 = 12;
      v34[0] = v10;
      goto LABEL_4;
    }
    v11 = *((_BYTE *)InformationBuffer + 1);
    v12 = 0;
    if ( v11 == 1 )
    {
      v13 = 28;
    }
    else if ( v11 == 2 )
    {
      v13 = 40;
    }
    else
    {
      v12 = 1;
      v13 = 44;
    }
    v14 = v50;
    v15 = Src;
    if ( v50 <= v13 )
      v14 = v13;
    Size = v14;
    memmove(Src, InformationBuffer, (unsigned int)v14);
    v16 = v41;
    v17 = 0;
    v18 = *((_WORD *)InformationBuffer + 2);
    v19 = 0;
    DefaultProcessorNumber = v41->DefaultProcessorNumber;
    v40 = DefaultProcessorNumber;
    if ( (v18 & 0x10) != 0 || !*((_BYTE *)InformationBuffer + 8) )
    {
      v21 = 0;
      LOBYTE(v50) = 0;
    }
    else
    {
      v21 = 1;
      LOBYTE(v50) = 1;
      v19 = ~(_BYTE)v18 & 2 | 1;
      if ( (v18 & 8) == 0 )
      {
        v19 = ~(_BYTE)v18 & 2 | 5;
        v44 = (char *)InformationBuffer + InformationBuffer[6];
      }
      if ( v12 && (v18 & 0x20) == 0 )
      {
        v40 = (struct _PROCESSOR_NUMBER)InformationBuffer[10];
        v40.Reserved = 0;
        v22 = ndisAreProcessorsEqual(DefaultProcessorNumber, v40);
        v21 = v50;
        v53 = !v22;
      }
      if ( (v18 & 4) == 0 )
      {
        IndirectionTableSize = v16->IndirectionTableSize;
        v46 = (struct _PROCESSOR_NUMBER *)(&v16->Header.Type + v16->IndirectionTableOffset);
        v24 = (size_t)v15 + *((unsigned int *)v15 + 4);
        v25 = IndirectionTableSize >> 2;
        v26 = v15[6] >> 2;
        v45 = v24;
        v39 = v25;
        v38 = v26;
        v51 = v26 < v25;
        if ( v26 > v25 )
        {
          v19 |= 0x10u;
          v51 = v26 < v25;
        }
      }
    }
    if ( IsTargetNonDefaultVPort == v17 )
      NumberOfReceiveQueues = a1->RecvScaleCapabilities.NumberOfReceiveQueues;
    else
      NumberOfReceiveQueues = v43->VPortParams.NumQueuePairs;
    if ( v21 && a1->RssV2Initialized == v17 )
    {
      v8 = ndisInternalSetRSSInitialize(a1, a2);
      if ( v8 )
        goto LABEL_43;
      a1->RssV2Initialized = 1;
    }
    LODWORD(v35) = *((unsigned __int16 *)InformationBuffer + 10);
    v8 = ndisInternalSetRSSv2Parameters(a1, a2, v19, NumberOfReceiveQueues, v38, InformationBuffer[2], v35, v44);
    if ( v8 )
      goto LABEL_43;
    if ( (_BYTE)v50 )
    {
      if ( v53 )
      {
        v28 = (struct _PROCESSOR_NUMBER *)((char *)Src + 40);
      }
      else
      {
        if ( (InformationBuffer[1] & 4) != 0 )
          goto LABEL_42;
        v28 = &v40;
      }
      v8 = ndisInternalSetRSSv2IndirectionTable(
             a1,
             a2,
             v39,
             v46,
             DefaultProcessorNumber,
             v38,
             (struct _PROCESSOR_NUMBER *)v45,
             v28);
      if ( v8 )
        goto LABEL_43;
      if ( v51 )
      {
        LODWORD(v36) = 0;
        v8 = ndisInternalSetRSSv2Parameters(a1, a2, v19 & 1 | 0x10u, 0, v38, 0, v36, 0LL);
        if ( v8 )
          goto LABEL_43;
      }
    }
LABEL_42:
    v8 = 0;
    v29 = KeAcquireSpinLockRaiseToDpc(&a1->Lock);
    v30 = Size;
    v31 = Src;
    a1->MiniportThread = KeGetCurrentThread();
    v32 = v41;
    a1->LockDbg = 4131165;
    memmove(v32, v31, v30);
    ndisSetCombinedRSSParameters(a1, a2, v43, v41);
    a1->MiniportThread = 0LL;
    a1->LockDbg = 0;
    KeReleaseSpinLock(&a1->Lock, v29);
    goto LABEL_43;
  }
  if ( (unsigned __int8)byte_1C00A025A >= 2u )
  {
    v9 = 11;
    v34[0] = (struct _PROCESSOR_NUMBER)v8;
LABEL_4:
    WPP_SF_qqd(v9, &WPP_3f6e3b5cccdc3bc25dcf36d3a561497f_Traceguids, a1, a2, *(_QWORD *)&v34[0].Group);
  }
LABEL_43:
  result = 1;
  a2->DATA.QUERY_INFORMATION.BytesWritten = a2->DATA.QUERY_INFORMATION.InformationBufferLength;
  *v52 = v8;
  return result;
}
