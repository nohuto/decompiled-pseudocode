/*
 * XREFs of ?ndisMIndicateHwTimestampCapabilitiesChange@@YAEPEAU_NDIS_MINIPORT_BLOCK@@HPEAXKEPEAE@Z @ 0x1C00971C8
 * Callers:
 *     ndisIndicateStatusInternal @ 0x1C0015988 (ndisIndicateStatusInternal.c)
 *     ?ndisMRawIndicateStatusEx@@YAXPEAUNDIS_MINIPORT_ADAPTER_HANDLE__@@PEAU_NDIS_STATUS_INDICATION@@@Z @ 0x1C0017430 (-ndisMRawIndicateStatusEx@@YAXPEAUNDIS_MINIPORT_ADAPTER_HANDLE__@@PEAU_NDIS_STATUS_INDICATION@@@.c)
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x1C0006260 (WPP_RECORDER_SF_q.c)
 *     WPP_RECORDER_SF_qdL @ 0x1C00158A0 (WPP_RECORDER_SF_qdL.c)
 *     memcmp @ 0x1C0040FC0 (memcmp.c)
 *     memmove @ 0x1C0041100 (memmove.c)
 *     WPP_RECORDER_SF_qDqLLLL @ 0x1C009916C (WPP_RECORDER_SF_qDqLLLL.c)
 */

char __fastcall ndisMIndicateHwTimestampCapabilitiesChange(
        struct _NDIS_MINIPORT_BLOCK *a1,
        int a2,
        _WORD *Src,
        unsigned int a4,
        char a5,
        unsigned __int8 *a6)
{
  char v6; // r13
  unsigned __int8 v8; // si
  _UNKNOWN **v12; // rdx
  unsigned __int16 v13; // ax
  size_t v14; // rbp
  _NDIS_TIMESTAMP_CAPABILITIES *TopTimestampConfig; // rbx
  _NDIS_TIMESTAMP_CAPABILITIES *PoolWithTag; // rax
  unsigned __int16 v18; // ax
  int v19; // edx
  __int64 v20; // [rsp+38h] [rbp-50h]

  v6 = 0;
  v8 = 0;
  v12 = &WPP_RECORDER_INITIALIZED;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    HIDWORD(v20) = HIDWORD(Src);
    WPP_RECORDER_SF_qDqLLLL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      (unsigned int)&WPP_RECORDER_INITIALIZED,
      *(unsigned __int8 *)Src,
      (unsigned __int16)Src[1]);
    v12 = &WPP_RECORDER_INITIALIZED;
  }
  if ( a6 )
    *a6 = 0;
  if ( a4 < 0x36 )
    goto LABEL_32;
  if ( *(_BYTE *)Src != 0x80 )
    goto LABEL_32;
  v13 = Src[1];
  if ( v13 < 0x36u || !*((_BYTE *)Src + 1) )
    goto LABEL_32;
  if ( a5 )
  {
    v14 = 56LL;
    if ( a2 == 1074073601 )
    {
      TopTimestampConfig = a1->TopTimestampConfig;
      if ( !TopTimestampConfig )
      {
        PoolWithTag = (_NDIS_TIMESTAMP_CAPABILITIES *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x38uLL, 0x7374444Eu);
        a1->TopTimestampConfig = PoolWithTag;
        goto LABEL_13;
      }
LABEL_25:
      if ( !memcmp(TopTimestampConfig, Src, v13) )
        goto LABEL_27;
      goto LABEL_26;
    }
    TopTimestampConfig = a1->TopHwTimestampCapabilities;
    if ( TopTimestampConfig )
      goto LABEL_25;
    PoolWithTag = (_NDIS_TIMESTAMP_CAPABILITIES *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x38uLL, 0x7374444Eu);
    a1->TopHwTimestampCapabilities = PoolWithTag;
  }
  else
  {
    TopTimestampConfig = a1->HwTimestampCapabilities;
    if ( a2 == 1074073601 )
    {
      if ( !TopTimestampConfig )
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(v12) = 4;
          WPP_RECORDER_SF_q(
            *((_QWORD *)WPP_GLOBAL_Control + 8),
            (int)v12,
            24,
            275,
            (struct _GUID *)&WPP_529e9a8d17733b7c5a0c4606a55c84c2_Traceguids,
            (char)a1);
        }
        return 0;
      }
      TopTimestampConfig = a1->HwTimestampCurrentConfig;
      v14 = 56LL;
      if ( TopTimestampConfig )
        goto LABEL_25;
      PoolWithTag = (_NDIS_TIMESTAMP_CAPABILITIES *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x38uLL, 0x7374444Eu);
      a1->HwTimestampCurrentConfig = PoolWithTag;
    }
    else
    {
      v14 = 56LL;
      if ( TopTimestampConfig )
        goto LABEL_25;
      PoolWithTag = (_NDIS_TIMESTAMP_CAPABILITIES *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x38uLL, 0x7374444Eu);
      a1->HwTimestampCapabilities = PoolWithTag;
    }
  }
LABEL_13:
  TopTimestampConfig = PoolWithTag;
  if ( !PoolWithTag )
    return 0;
LABEL_26:
  v8 = 1;
LABEL_27:
  if ( TopTimestampConfig )
  {
    v18 = Src[1];
    if ( v18 < 0x38u )
      v14 = v18;
    memmove(TopTimestampConfig, Src, v14);
    v6 = 1;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LODWORD(v20) = v8;
      WPP_RECORDER_SF_qdL(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        v19,
        0x18u,
        0x114u,
        (struct _GUID *)&WPP_529e9a8d17733b7c5a0c4606a55c84c2_Traceguids,
        (char)a1,
        a2,
        v20);
    }
  }
LABEL_32:
  if ( a6 )
    *a6 = v8;
  return v6;
}
