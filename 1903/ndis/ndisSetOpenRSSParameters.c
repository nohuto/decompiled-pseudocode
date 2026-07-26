/*
 * XREFs of ndisSetOpenRSSParameters @ 0x1C003B1AC
 * Callers:
 *     ndisOidPreRSSParameters @ 0x1C003B010 (ndisOidPreRSSParameters.c)
 * Callees:
 *     WPP_RECORDER_SF_qqL @ 0x1C00065A0 (WPP_RECORDER_SF_qqL.c)
 *     WPP_RECORDER_SF_qq @ 0x1C00066A0 (WPP_RECORDER_SF_qq.c)
 *     WPP_RECORDER_SF_qqq @ 0x1C0008AE0 (WPP_RECORDER_SF_qqq.c)
 *     WPP_RECORDER_SF_qqLd @ 0x1C001808C (WPP_RECORDER_SF_qqLd.c)
 *     ?ndisIsRssEnabledForMiniport@@YAEPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C003B48C (-ndisIsRssEnabledForMiniport@@YAEPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ndisCalculateRssParametersSize @ 0x1C003B634 (ndisCalculateRssParametersSize.c)
 *     memcmp @ 0x1C0040FC0 (memcmp.c)
 *     memmove @ 0x1C0041100 (memmove.c)
 *     McTemplateK0jqxqqq @ 0x1C0068C00 (McTemplateK0jqxqqq.c)
 */

char __fastcall ndisSetOpenRSSParameters(_NDIS_OPEN_BLOCK *a1, __int64 a2, int *a3)
{
  struct _NDIS_MINIPORT_BLOCK *MiniportHandle; // rsi
  __int64 v4; // rbp
  unsigned int v6; // r14d
  _BYTE *v7; // rbx
  unsigned int v8; // eax
  unsigned __int8 v9; // cl
  int v10; // eax
  _NDIS_RECEIVE_SCALE_PARAMETERS *NdisRSSParameters; // rdx
  int v12; // edi
  unsigned int v13; // ecx
  _NDIS_RECEIVE_SCALE_PARAMETERS *v14; // r14
  _NDIS_MINIPORT_RSS_PARAMETERS_CACHE *PoolWithTag; // rax
  unsigned __int8 *v16; // rax
  KSPIN_LOCK *p_Lock; // r12
  KIRQL v18; // al
  KIRQL v19; // r13
  __int64 Oid; // r14
  char v21; // r14
  int v23; // r9d
  int v24; // r9d
  int v25; // r9d
  int v26; // r9d
  unsigned __int8 v27; // r13
  __int16 v28; // r12
  unsigned __int16 IndirectionTableSize; // ax
  unsigned __int16 HashSecretKeySize; // cx
  unsigned __int64 v31; // rcx
  int v32; // ecx
  int v33; // eax
  KIRQL v34; // dl
  KSPIN_LOCK *v35; // rcx
  _NDIS_MINIPORT_RSS_PARAMETERS_CACHE *RssParametersBuffer; // rbx
  int v37; // r13d
  bool v38; // r8
  __int16 v39; // dx
  __int16 v40; // dx
  unsigned __int16 v41; // r9
  char v42; // r12
  int v43; // ecx
  int v44; // eax
  unsigned __int16 v45; // ax
  _NDIS_OPEN_BLOCK *OpenQueue; // rcx
  int v47; // r13d
  _NDIS_RECEIVE_SCALE_PARAMETERS *v48; // rax
  int v49; // ebx
  char v50; // [rsp+30h] [rbp-78h]
  char v51; // [rsp+30h] [rbp-78h]
  char v52; // [rsp+38h] [rbp-70h]
  char v53; // [rsp+38h] [rbp-70h]
  unsigned int Size; // [rsp+50h] [rbp-58h] BYREF
  int Size_4; // [rsp+54h] [rbp-54h]
  KIRQL NewIrql; // [rsp+B0h] [rbp+8h]
  unsigned __int8 v57; // [rsp+B8h] [rbp+10h]
  unsigned __int8 v59; // [rsp+C8h] [rbp+20h]

  MiniportHandle = a1->MiniportHandle;
  Size = 0;
  v4 = a2;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v52 = a2;
    LOBYTE(a2) = 4;
    WPP_RECORDER_SF_qqq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      a2,
      11,
      139,
      (struct _GUID *)&WPP_5739fd541b2a398e5b965a8c6ad6e7df_Traceguids,
      (char)MiniportHandle,
      (char)a1,
      v52);
  }
  v6 = *(_DWORD *)(v4 + 48);
  *(_DWORD *)(v4 + 56) = 0;
  if ( v6 >= 0x1C )
  {
    v7 = *(_BYTE **)(v4 + 40);
    v8 = 40;
    v9 = v7[1];
    if ( v9 < 2u )
      goto LABEL_8;
    LODWORD(a2) = *((unsigned __int16 *)v7 + 1);
    if ( (unsigned __int16)a2 < 0x28u )
    {
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
LABEL_39:
        v12 = -1073676268;
        goto LABEL_34;
      }
      v24 = 141;
LABEL_38:
      LOBYTE(a2) = 2;
      WPP_RECORDER_SF_qq(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        a2,
        11,
        v24,
        (struct _GUID *)&WPP_5739fd541b2a398e5b965a8c6ad6e7df_Traceguids,
        (char)MiniportHandle,
        v4);
      goto LABEL_39;
    }
    if ( v9 >= 3u )
    {
      v8 = 44;
      if ( (unsigned __int16)a2 < 0x2Cu )
      {
        if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          goto LABEL_39;
        v24 = 142;
        goto LABEL_38;
      }
    }
    if ( v6 >= v8 )
    {
LABEL_8:
      v10 = ndisCalculateRssParametersSize(*(_QWORD *)(v4 + 40), &Size, 11LL);
      v12 = v10;
      if ( v10 )
      {
        if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
LABEL_50:
          v21 = 1;
          goto LABEL_35;
        }
        v53 = v10;
        v25 = 144;
        v51 = v4;
      }
      else
      {
        NdisRSSParameters = a1->NdisRSSParameters;
        if ( !NdisRSSParameters && ((v7[4] & 0x10) != 0 || !v7[8]) )
          goto LABEL_34;
        if ( *((_WORD *)v7 + 6) > 0x200u )
        {
          if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            goto LABEL_49;
          v26 = 145;
LABEL_48:
          LOBYTE(NdisRSSParameters) = 2;
          WPP_RECORDER_SF_qq(
            *((_QWORD *)WPP_GLOBAL_Control + 8),
            (int)NdisRSSParameters,
            11,
            v26,
            (struct _GUID *)&WPP_5739fd541b2a398e5b965a8c6ad6e7df_Traceguids,
            (char)MiniportHandle,
            (char)a1);
LABEL_49:
          v12 = -1073676267;
          goto LABEL_50;
        }
        if ( *((_WORD *)v7 + 10) != 40 && (v7[4] & 0x10) == 0 && v7[8] )
        {
          if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            goto LABEL_49;
          v26 = 146;
          goto LABEL_48;
        }
        v13 = Size;
        if ( !Size && (v7[4] & 0x10) != 0 )
        {
          v13 = *((unsigned __int16 *)v7 + 1);
          Size = v13;
        }
        v12 = 0;
        if ( v6 >= v13 )
        {
          v14 = 0LL;
          if ( NdisRSSParameters )
            v14 = NdisRSSParameters;
          if ( !MiniportHandle->RssParametersBuffer
            && (PoolWithTag = (_NDIS_MINIPORT_RSS_PARAMETERS_CACHE *)ExAllocatePoolWithTag(
                                                                       NonPagedPoolNxCacheAligned,
                                                                       0x728uLL,
                                                                       0x7372444Eu),
                (MiniportHandle->RssParametersBuffer = PoolWithTag) == 0LL)
            || !a1->RssParametersBuffer
            && (v16 = (unsigned __int8 *)ExAllocatePoolWithTag(NonPagedPoolNxCacheAligned, 0x394uLL, 0x7372444Eu),
                (a1->RssParametersBuffer = v16) == 0LL) )
          {
            v12 = -1073741670;
            goto LABEL_34;
          }
          p_Lock = &MiniportHandle->Lock;
          v18 = KeAcquireSpinLockRaiseToDpc(&MiniportHandle->Lock);
          v19 = v18;
          MiniportHandle->MiniportThread = KeGetCurrentThread();
          NewIrql = v18;
          if ( !v14 )
            goto LABEL_23;
          v27 = v7[1];
          if ( v14->Header.Revision == v27 && v7[8] )
          {
            v28 = *((_WORD *)v7 + 2);
            if ( (v28 & 0x10) == 0 )
            {
              IndirectionTableSize = v14->IndirectionTableSize;
              if ( IndirectionTableSize == *((_WORD *)v7 + 6)
                && !memcmp(
                      &v14->Header.Type + v14->IndirectionTableOffset,
                      &v7[*((unsigned int *)v7 + 4)],
                      IndirectionTableSize) )
              {
                HashSecretKeySize = v14->HashSecretKeySize;
                if ( HashSecretKeySize == *((_WORD *)v7 + 10)
                  && v14->BaseCpuNumber == *((_WORD *)v7 + 3)
                  && v14->Flags == v28
                  && !memcmp(
                        &v14->Header.Type + v14->HashSecretKeyOffset,
                        &v7[*((unsigned int *)v7 + 6)],
                        HashSecretKeySize) )
                {
                  v31 = *(_QWORD *)&v14->Header.Type - *(_QWORD *)v7;
                  if ( *(_QWORD *)&v14->Header.Type == *(_QWORD *)v7 )
                    v31 = v14->HashInformation - (unsigned __int64)*((unsigned int *)v7 + 2);
                  if ( !v31 )
                  {
                    if ( v27 < 2u
                      || (v32 = *((_DWORD *)v7 + 8), v14->NumberOfProcessorMasks == v32)
                      && (v33 = *((_DWORD *)v7 + 9), v14->ProcessorMasksEntrySize == v33)
                      && !memcmp(
                            &v14->Header.Type + v14->ProcessorMasksOffset,
                            &v7[*((unsigned int *)v7 + 7)],
                            (unsigned int)(v32 * v33))
                      && (v27 < 3u
                       || v14->DefaultProcessorNumber.Group == *((_WORD *)v7 + 20)
                       && v14->DefaultProcessorNumber.Number == v7[42]) )
                    {
                      v34 = NewIrql;
                      v35 = &MiniportHandle->Lock;
                      MiniportHandle->MiniportThread = 0LL;
LABEL_83:
                      KeReleaseSpinLock(v35, v34);
                      goto LABEL_34;
                    }
                  }
                }
              }
              v19 = NewIrql;
              p_Lock = &MiniportHandle->Lock;
LABEL_23:
              if ( Size <= 0x394 )
              {
                Oid = (__int64)MiniportHandle->RssParametersBuffer->Oid;
                memmove((void *)Oid, v7, Size);
                if ( ndisIsRssEnabledForMiniport(MiniportHandle) )
                {
                  RssParametersBuffer = MiniportHandle->RssParametersBuffer;
                  v37 = *(_DWORD *)(Oid + 8);
                  v57 = RssParametersBuffer->Combined[1];
                  v59 = *(_BYTE *)(Oid + 1);
                  v38 = 0;
                  v39 = *(_WORD *)(Oid + 4);
                  if ( (unsigned __int8)*(_DWORD *)&RssParametersBuffer->Combined[8] == (unsigned __int8)v37 )
                    v38 = RssParametersBuffer->Combined[1] == *(_BYTE *)(Oid + 1);
                  Size_4 = (unsigned __int8)v37;
                  v40 = v39 & 0x10;
                  v41 = *(_WORD *)(Oid + 12);
                  if ( *(_WORD *)&RssParametersBuffer->Combined[12] != v41 )
                    goto LABEL_93;
                  v42 = 0;
                  if ( (*(_WORD *)&RssParametersBuffer->Combined[4] & 0x10) == v40 )
                    v42 = v38;
                  if ( memcmp(
                         &RssParametersBuffer->Combined[*(unsigned int *)&RssParametersBuffer->Combined[16]],
                         (const void *)(Oid + *(unsigned int *)(Oid + 16)),
                         v41) )
                  {
LABEL_93:
                    v42 = 0;
                  }
                  if ( v57 >= 2u && v59 >= 2u )
                  {
                    v43 = *(_DWORD *)(Oid + 32);
                    if ( *(_DWORD *)&RssParametersBuffer->Combined[32] != v43
                      || (v44 = *(_DWORD *)(Oid + 36), *(_DWORD *)&RssParametersBuffer->Combined[36] != v44)
                      || memcmp(
                           &RssParametersBuffer->Combined[*(unsigned int *)&RssParametersBuffer->Combined[28]],
                           (const void *)(Oid + *(unsigned int *)(Oid + 28)),
                           (unsigned int)(v43 * v44)) )
                    {
                      v42 = 0;
                    }
                    if ( v57 >= 3u
                      && v59 >= 3u
                      && (*(_WORD *)&RssParametersBuffer->Combined[40] != *(_WORD *)(Oid + 40)
                       || RssParametersBuffer->Combined[42] != *(_BYTE *)(Oid + 42)) )
                    {
                      v42 = 0;
                    }
                  }
                  v45 = *(_WORD *)(Oid + 20);
                  if ( *(_WORD *)&RssParametersBuffer->Combined[20] != v45
                    || memcmp(
                         &RssParametersBuffer->Combined[*(unsigned int *)&RssParametersBuffer->Combined[24]],
                         (const void *)(Oid + *(unsigned int *)(Oid + 24)),
                         v45) )
                  {
                    v42 = 0;
                  }
                  OpenQueue = MiniportHandle->OpenQueue;
                  v47 = v37 & 0xFFFF00;
                  while ( OpenQueue )
                  {
                    v48 = OpenQueue->NdisRSSParameters;
                    if ( v48 && OpenQueue != a1 )
                      v47 |= v48->HashInformation & 0xFFFF00;
                    OpenQueue = OpenQueue->MiniportNextOpen;
                  }
                  *(_DWORD *)(Oid + 8) = v47 | Size_4;
                  v49 = *(_DWORD *)&RssParametersBuffer->Combined[8];
                  MiniportHandle->MiniportThread = 0LL;
                  KeReleaseSpinLock(&MiniportHandle->Lock, NewIrql);
                  v21 = 0;
                  if ( v47 == (v49 & 0xFFFF00) )
                    v21 = v42;
                  if ( v21 == 1 )
                    goto LABEL_35;
                }
                else
                {
                  MiniportHandle->MiniportThread = 0LL;
                  v21 = 0;
                  KeReleaseSpinLock(p_Lock, v19);
                }
                *(_DWORD *)(v4 + 88) |= 0x800u;
                MiniportHandle->SetInfoBuf = *(void **)(v4 + 40);
                MiniportHandle->SetInfoBufLen = *(_WORD *)(v4 + 48);
                *(_QWORD *)(v4 + 40) = MiniportHandle->RssParametersBuffer->Oid;
                *(_DWORD *)(v4 + 48) = Size;
                goto LABEL_27;
              }
              MiniportHandle->MiniportThread = 0LL;
              v12 = -1073676268;
              v34 = v19;
              v35 = p_Lock;
              goto LABEL_83;
            }
            p_Lock = &MiniportHandle->Lock;
          }
          v19 = v18;
          goto LABEL_23;
        }
        *(_DWORD *)(v4 + 56) = v13;
        v12 = -1073676268;
        if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          goto LABEL_50;
        v53 = 20;
        v25 = 147;
        v51 = (char)a1;
      }
      LOBYTE(NdisRSSParameters) = 2;
      WPP_RECORDER_SF_qqL(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        (int)NdisRSSParameters,
        11,
        v25,
        (struct _GUID *)&WPP_5739fd541b2a398e5b965a8c6ad6e7df_Traceguids,
        (char)MiniportHandle,
        v51,
        v53);
      goto LABEL_50;
    }
    *(_DWORD *)(v4 + 56) = v8;
    v12 = -1073676268;
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_34;
    v23 = 143;
    v50 = v4;
    goto LABEL_33;
  }
  *(_DWORD *)(v4 + 56) = 28;
  v12 = -1073676268;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v23 = 140;
    v50 = (char)a1;
LABEL_33:
    LOBYTE(a2) = 2;
    WPP_RECORDER_SF_qqL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      a2,
      11,
      v23,
      (struct _GUID *)&WPP_5739fd541b2a398e5b965a8c6ad6e7df_Traceguids,
      (char)MiniportHandle,
      v50,
      20);
  }
LABEL_34:
  v21 = 1;
LABEL_35:
  *(_DWORD *)(v4 + 52) = *(_DWORD *)(v4 + 48);
LABEL_27:
  *a3 = v12;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qqLd(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xBu,
      0x94u,
      (struct _GUID *)&WPP_5739fd541b2a398e5b965a8c6ad6e7df_Traceguids,
      (char)MiniportHandle,
      (char)a1,
      v21,
      v12);
  if ( v12 && (byte_1C00E8044 & 4) != 0 )
    McTemplateK0jqxqqq(
      MiniportHandle->IfIndex,
      (unsigned int)&SetOpenRSSCapsFailed,
      (_DWORD)MiniportHandle + 4008,
      (_DWORD)MiniportHandle + 4008,
      MiniportHandle->IfIndex,
      MiniportHandle->NetLuid.Value,
      v12,
      1,
      (char)a1);
  return v21;
}
