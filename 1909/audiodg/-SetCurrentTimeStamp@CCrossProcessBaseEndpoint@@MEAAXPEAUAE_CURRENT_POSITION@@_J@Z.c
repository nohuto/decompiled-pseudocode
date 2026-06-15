/*
 * XREFs of ?SetCurrentTimeStamp@CCrossProcessBaseEndpoint@@MEAAXPEAUAE_CURRENT_POSITION@@_J@Z @ 0x1400119F0
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x140015E90 (__security_check_cookie.c)
 */

void __fastcall CCrossProcessBaseEndpoint::SetCurrentTimeStamp(
        CCrossProcessBaseEndpoint *this,
        struct AE_CURRENT_POSITION *a2,
        __int64 a3)
{
  __int32 v4; // r9d
  __int64 v5; // r8
  AE_POSITION_FLAGS Flag; // [rsp+30h] [rbp-89h] BYREF
  _DWORD v7[3]; // [rsp+34h] [rbp-85h] BYREF
  CCrossProcessBaseEndpoint *v8; // [rsp+40h] [rbp-79h] BYREF
  _DWORD v9[2]; // [rsp+48h] [rbp-71h] BYREF
  __int64 v10; // [rsp+50h] [rbp-69h]
  void *v11; // [rsp+60h] [rbp-59h] BYREF
  int v12; // [rsp+68h] [rbp-51h]
  int v13; // [rsp+6Ch] [rbp-4Dh]
  void *v14; // [rsp+70h] [rbp-49h]
  int v15; // [rsp+78h] [rbp-41h]
  int v16; // [rsp+7Ch] [rbp-3Dh]
  CCrossProcessBaseEndpoint **v17; // [rsp+80h] [rbp-39h]
  __int64 v18; // [rsp+88h] [rbp-31h]
  AE_POSITION_FLAGS *p_Flag; // [rsp+90h] [rbp-29h]
  __int64 v20; // [rsp+98h] [rbp-21h]
  _DWORD *v21; // [rsp+A0h] [rbp-19h]
  __int64 v22; // [rsp+A8h] [rbp-11h]
  UINT64 *p_u64PaddingFrames; // [rsp+B0h] [rbp-9h]
  __int64 v24; // [rsp+B8h] [rbp-1h]
  HNSTIME *p_hnsQPCPosition; // [rsp+C0h] [rbp+7h]
  __int64 v26; // [rsp+C8h] [rbp+Fh]
  struct AE_CURRENT_POSITION *v27; // [rsp+D0h] [rbp+17h]
  __int64 v28; // [rsp+D8h] [rbp+1Fh]
  UINT64 *p_u64StreamPosition; // [rsp+E0h] [rbp+27h]
  __int64 v30; // [rsp+E8h] [rbp+2Fh]

  if ( *(_DWORD *)(*((_QWORD *)this + 9) + 160LL) )
  {
    v4 = 0;
    v5 = 0LL;
  }
  else
  {
    v4 = 1;
    v5 = 40LL;
  }
  *(struct AE_CURRENT_POSITION *)(v5 + *((_QWORD *)this + 9) + 32) = *a2;
  _InterlockedExchange((volatile __int32 *)(*((_QWORD *)this + 9) + 160LL), v4);
  v7[0] = _InterlockedCompareExchange((volatile signed __int32 *)(*((_QWORD *)this + 9) + 164LL), 0, 0);
  if ( (v7[0] & 2) == 0 )
  {
    *(_QWORD *)(*((_QWORD *)this + 9) + 112LL) = a2->u64DevicePosition;
    *(_QWORD *)(*((_QWORD *)this + 9) + 128LL) = a2->u64PaddingFrames;
    *(_QWORD *)(*((_QWORD *)this + 9) + 136LL) = a2->hnsQPCPosition;
    _InterlockedExchange64((volatile __int64 *)(*((_QWORD *)this + 9) + 152LL), a3);
    _InterlockedOr((volatile signed __int32 *)(*((_QWORD *)this + 9) + 164LL), 6u);
  }
  if ( (unsigned int)dword_140085000 > 5 )
  {
    v8 = this;
    v17 = &v8;
    Flag = a2->Flag;
    p_Flag = &Flag;
    v21 = v7;
    v18 = 8LL;
    v20 = 4LL;
    v22 = 4LL;
    p_u64PaddingFrames = &a2->u64PaddingFrames;
    v24 = 8LL;
    p_hnsQPCPosition = &a2->hnsQPCPosition;
    v26 = 8LL;
    v27 = a2;
    v28 = 8LL;
    p_u64StreamPosition = &a2->u64StreamPosition;
    v30 = 8LL;
    v9[1] = 5;
    v11 = off_140085008;
    v9[0] = 184549376;
    v10 = 0LL;
    v12 = *(unsigned __int16 *)off_140085008;
    v14 = &unk_14006FF51;
    v13 = 2;
    v15 = 112;
    v16 = 1;
    v7[1] = (unsigned int)&TraceLoggingMetadataEnd - (unsigned int)&TraceLoggingMetadata;
    EtwEventWriteTransfer(qword_140085020, v9, 0LL, 0LL, 9, &v11);
  }
}
