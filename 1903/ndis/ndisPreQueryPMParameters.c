/*
 * XREFs of ndisPreQueryPMParameters @ 0x1C0075720
 * Callers:
 *     ndisOidPrePMParameters @ 0x1C0034D90 (ndisOidPrePMParameters.c)
 * Callees:
 *     WPP_RECORDER_SF_qq @ 0x1C00066A0 (WPP_RECORDER_SF_qq.c)
 *     WPP_RECORDER_SF_qDD @ 0x1C001AD38 (WPP_RECORDER_SF_qDD_ea_1C001AD38.c)
 *     GetMiniportFromReqTracker @ 0x1C0035134 (GetMiniportFromReqTracker.c)
 */

char __fastcall ndisPreQueryPMParameters(__int64 a1)
{
  __int64 v1; // rdi
  __int64 MiniportFromReqTracker; // rax
  int v4; // edx
  __int64 v5; // rcx
  __int64 v6; // rbp
  __int64 v7; // rsi
  unsigned int v8; // r10d
  int v9; // edx
  char v10; // r9
  __int64 v11; // rax
  __int64 v12; // rcx
  __int64 v13; // rcx
  __int16 v14; // r8
  int v16; // [rsp+38h] [rbp-20h]

  v1 = *(_QWORD *)(a1 + 32);
  MiniportFromReqTracker = GetMiniportFromReqTracker((__int64 *)a1);
  v6 = *(_QWORD *)(v5 + 24);
  v7 = MiniportFromReqTracker;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v4) = 4;
    WPP_RECORDER_SF_qq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v4,
      11,
      48,
      (struct _GUID *)&WPP_091de2f669683db8988ab996bc16e527_Traceguids,
      MiniportFromReqTracker,
      v1);
  }
  *(_DWORD *)(a1 + 40) = 0;
  v8 = *(_DWORD *)(v1 + 48);
  v9 = 16;
  if ( v8 < 0x10 )
  {
    *(_DWORD *)(v1 + 56) = 16;
    *(_DWORD *)(a1 + 40) = -1073676268;
    goto LABEL_17;
  }
  v10 = 2;
  if ( *(_DWORD *)(v1 + 4) == 2 )
  {
    v11 = v7 + 1120;
LABEL_13:
    v13 = *(_QWORD *)(v1 + 40);
    v14 = 20;
    *(_OWORD *)v13 = *(_OWORD *)v11;
    if ( v8 >= 0x14 )
    {
      v9 = 20;
      *(_DWORD *)(v13 + 16) = *(_DWORD *)(v11 + 16);
    }
    else
    {
      v10 = 1;
      v14 = 16;
    }
    *(_BYTE *)v13 = 0x80;
    *(_WORD *)(v13 + 2) = v14;
    *(_BYTE *)(v13 + 1) = v10;
    *(_DWORD *)(v1 + 52) = v9;
    *(_DWORD *)(v1 + 56) = 0;
    goto LABEL_17;
  }
  if ( *(_QWORD *)(a1 + 24) )
  {
    v11 = v6 + 308;
    goto LABEL_13;
  }
  v12 = *(_QWORD *)(a1 + 8);
  if ( v12 && (*(_DWORD *)(v1 + 88) & 0x4000) == 0 )
  {
    v11 = v12 + 736;
    goto LABEL_13;
  }
  *(_DWORD *)(a1 + 40) = -1073741637;
LABEL_17:
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v16 = 1;
    WPP_RECORDER_SF_qDD(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xBu,
      0x31u,
      (struct _GUID *)&WPP_091de2f669683db8988ab996bc16e527_Traceguids,
      v7,
      *(_DWORD *)(a1 + 40),
      v16);
  }
  return 1;
}
