/*
 * XREFs of ndisPostSetMiniportRSSParameters @ 0x1C003B9E4
 * Callers:
 *     ndisOidPostRSSParameters @ 0x1C003B6A0 (ndisOidPostRSSParameters.c)
 * Callees:
 *     WPP_RECORDER_SF_qqL @ 0x1C00065A0 (WPP_RECORDER_SF_qqL.c)
 *     ??0NDIS_PCW_CONTEXT@@QEAA@PEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C003BBBC (--0NDIS_PCW_CONTEXT@@QEAA@PEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisShouldCacheRSSParameters@@YAEPEBU_NDIS_OID_REQUEST@@@Z @ 0x1C003BBEC (-ndisShouldCacheRSSParameters@@YAEPEBU_NDIS_OID_REQUEST@@@Z.c)
 *     memmove @ 0x1C0041100 (memmove.c)
 */

void __fastcall ndisPostSetMiniportRSSParameters(struct _NDIS_MINIPORT_BLOCK *a1, __int64 a2, int a3)
{
  __int64 v4; // rsi
  KIRQL v6; // al
  struct _KTHREAD *CurrentThread; // rcx
  KIRQL v8; // r15
  _NDIS_RECEIVE_SCALE_PARAMETERS *RssParametersBuffer; // r9
  __int64 v10; // rbx
  unsigned int v11; // r8d
  unsigned int v12; // eax
  __int16 v13; // cx
  unsigned int CurrentCpu; // r8d
  char *v15; // r8
  unsigned __int64 v16; // rax
  char v17; // [rsp+30h] [rbp-48h]
  NDIS_PCW_CONTEXT v18; // [rsp+40h] [rbp-38h] BYREF

  v4 = a2;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v17 = a2;
    LOBYTE(a2) = 4;
    WPP_RECORDER_SF_qqL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      a2,
      11,
      165,
      (struct _GUID *)&WPP_5739fd541b2a398e5b965a8c6ad6e7df_Traceguids,
      (char)a1,
      v17,
      a3);
  }
  if ( !a3 && ndisShouldCacheRSSParameters((const struct _NDIS_OID_REQUEST *)v4) )
  {
    v6 = KeAcquireSpinLockRaiseToDpc(&a1->Lock);
    CurrentThread = KeGetCurrentThread();
    v8 = v6;
    RssParametersBuffer = (_NDIS_RECEIVE_SCALE_PARAMETERS *)a1->RssParametersBuffer;
    a1->CombinedNdisRSSParameters = RssParametersBuffer;
    a1->MiniportThread = CurrentThread;
    v10 = *(_QWORD *)(v4 + 40);
    v11 = *(_DWORD *)(v10 + 16) + *(unsigned __int16 *)(v10 + 12);
    if ( *(_BYTE *)(v10 + 1) < 2u )
      v12 = 0;
    else
      v12 = *(_DWORD *)(v10 + 28) + *(_DWORD *)(v10 + 32) * *(_DWORD *)(v10 + 36);
    if ( v11 <= *(_DWORD *)(v10 + 24) + (unsigned int)*(unsigned __int16 *)(v10 + 20) )
      v11 = *(_DWORD *)(v10 + 24) + *(unsigned __int16 *)(v10 + 20);
    if ( v11 > v12 )
      v12 = v11;
    if ( v12 > 0x394 )
      v12 = 916;
    if ( v12 )
      memmove(RssParametersBuffer, *(const void **)(v4 + 40), v12);
    v13 = *(_WORD *)(v10 + 4);
    if ( (v13 & 0x10) != 0 || !*(_BYTE *)(v10 + 8) )
    {
      a1->CombinedNdisRSSParameters = 0LL;
    }
    else if ( (v13 & 4) == 0 )
    {
      NDIS_PCW_CONTEXT::NDIS_PCW_CONTEXT(&v18, a1);
      CurrentCpu = v18.CurrentCpu;
      if ( (v18.DatapathEventsMask & 0x800) != 0 )
      {
        if ( v18.CurrentCpu == -1 )
          CurrentCpu = KeGetPcr()->Prcb.Number;
        ++*(_QWORD *)((char *)&v18.PcwBlock->DatapathEventReferences[22]
                    + CurrentCpu * ndisPcwPerCpuDataStride
                    + ndisPcwOffsetToPerCpuData);
      }
      if ( (v18.DatapathCyclesMask & 0x800) != 0 )
      {
        if ( CurrentCpu == -1 )
          CurrentCpu = KeGetPcr()->Prcb.Number;
        v15 = (char *)v18.PcwBlock + CurrentCpu * ndisPcwPerCpuDataStride + ndisPcwOffsetToPerCpuData;
        v16 = __rdtsc();
        *((_QWORD *)v15 + 24) += (((unsigned __int64)HIDWORD(v16) << 32) | (unsigned int)v16) - *(_QWORD *)(v4 + 144);
        *((_QWORD *)v15 + 49) = 0LL;
      }
    }
    a1->MiniportThread = 0LL;
    KeReleaseSpinLock(&a1->Lock, v8);
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(a2) = 4;
    WPP_RECORDER_SF_qqL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      a2,
      11,
      166,
      (struct _GUID *)&WPP_5739fd541b2a398e5b965a8c6ad6e7df_Traceguids,
      (char)a1,
      v4,
      a3);
  }
}
