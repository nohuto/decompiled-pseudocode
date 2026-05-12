/*
 * XREFs of StorEtwIORequestDispatch @ 0x1C004CB00
 * Callers:
 *     RaUnitScsiIrp @ 0x1C00097A0 (RaUnitScsiIrp.c)
 * Callees:
 *     GetSrbScsiData @ 0x1C0021E90 (GetSrbScsiData.c)
 *     __security_check_cookie @ 0x1C0026060 (__security_check_cookie.c)
 *     McTemplateK0puxipu @ 0x1C004C2F8 (McTemplateK0puxipu.c)
 *     StRtlIoStorInfoGetNvCachePriority @ 0x1C005363C (StRtlIoStorInfoGetNvCachePriority.c)
 */

char __fastcall StorEtwIORequestDispatch(__int64 a1)
{
  __int64 v1; // rax
  char v2; // di
  __int64 v3; // rbx
  unsigned int v4; // r12d
  char v5; // r15
  __int64 v6; // r14
  __int64 v8; // rcx
  unsigned __int8 v9; // al
  int v10; // r13d
  _BYTE *SrbScsiData; // rax
  _BYTE *v12; // r9
  __int64 v13; // r14
  int NvCachePriority; // eax
  const EVENT_DESCRIPTOR *v15; // rdx
  __int64 v17; // [rsp+20h] [rbp-60h]
  char v18; // [rsp+50h] [rbp-30h] BYREF
  unsigned __int8 v19[3]; // [rsp+51h] [rbp-2Fh] BYREF
  unsigned int v20; // [rsp+54h] [rbp-2Ch]
  __int64 v21; // [rsp+58h] [rbp-28h]
  GUID v22; // [rsp+60h] [rbp-20h] BYREF

  v1 = *(_QWORD *)(a1 + 184);
  v2 = 0;
  v3 = 0LL;
  v4 = 0;
  v18 = 0;
  v5 = -1;
  v21 = 0LL;
  v6 = *(_QWORD *)(v1 + 8);
  v20 = 0;
  *(_QWORD *)&v22.Data1 = 0LL;
  *(_QWORD *)v22.Data4 = 0LL;
  v19[0] = -1;
  IoGetActivityIdIrp(a1, &v22);
  v9 = *(_BYTE *)(v6 + 2);
  if ( v9 == 40 )
  {
    v10 = *(_DWORD *)(v6 + 20);
    SrbScsiData = (_BYTE *)GetSrbScsiData(v6, &v18, 0LL, 0LL, 0LL, 0LL);
    v12 = SrbScsiData;
    if ( SrbScsiData )
      v2 = *SrbScsiData;
    v13 = *(_QWORD *)(v6 + 104);
    LOBYTE(NvCachePriority) = v18;
  }
  else
  {
    v12 = (_BYTE *)(v6 + 72);
    v10 = v9;
    LOBYTE(NvCachePriority) = *(_BYTE *)(v6 + 10);
    v2 = *(_BYTE *)(v6 + 72);
    v13 = *(_QWORD *)(v6 + 56);
  }
  if ( v12 )
  {
    if ( (_BYTE)NvCachePriority == 16 )
    {
      HIBYTE(v21) = v12[2];
      BYTE6(v21) = v12[3];
      BYTE5(v21) = v12[4];
      BYTE4(v21) = v12[5];
      BYTE3(v21) = v12[6];
      BYTE2(v21) = v12[7];
      BYTE1(v21) = v12[8];
      LOBYTE(v21) = v12[9];
      HIBYTE(v20) = v12[10];
      BYTE2(v20) = v12[11];
      BYTE1(v20) = v12[12];
      LOBYTE(NvCachePriority) = v12[13];
    }
    else
    {
      BYTE3(v21) = v12[2];
      BYTE2(v21) = v12[3];
      BYTE1(v21) = v12[4];
      LOBYTE(v21) = v12[5];
      BYTE1(v20) = v12[7];
      LOBYTE(NvCachePriority) = v12[8];
    }
    v3 = v21;
    LOBYTE(v20) = NvCachePriority;
    v4 = v20;
  }
  if ( v13 )
  {
    NvCachePriority = StRtlIoStorInfoGetNvCachePriority(v13, v19);
    v8 = v19[0];
    if ( NvCachePriority < 0 )
      v8 = 255LL;
    v5 = v8;
  }
  if ( !v10 )
  {
    if ( ((v2 - 8) & 0x5F) != 0 )
    {
      LOBYTE(NvCachePriority) = v2 - 10;
      if ( ((v2 - 10) & 0x5F) == 0 )
      {
        NvCachePriority = *(_DWORD *)(a1 + 16);
        if ( (NvCachePriority & 0x42) != 0 )
        {
          if ( (byte_1C00617E1 & 0x10) != 0 )
          {
            v15 = (const EVENT_DESCRIPTOR *)&EventPagingWriteRequest;
            goto LABEL_28;
          }
        }
        else if ( (byte_1C00617E1 & 4) != 0 )
        {
          v15 = (const EVENT_DESCRIPTOR *)&EventWriteRequest;
          goto LABEL_28;
        }
      }
    }
    else
    {
      NvCachePriority = *(_DWORD *)(a1 + 16);
      if ( (NvCachePriority & 0x42) != 0 )
      {
        if ( (byte_1C00617E1 & 8) != 0 )
        {
          v15 = (const EVENT_DESCRIPTOR *)&EventPagingReadRequest;
          goto LABEL_28;
        }
      }
      else if ( (byte_1C00617E1 & 2) != 0 )
      {
        v15 = (const EVENT_DESCRIPTOR *)&EventReadRequest;
LABEL_28:
        LOBYTE(v17) = v2;
        LOBYTE(NvCachePriority) = McTemplateK0puxipu(
                                    (struct _MCGEN_TRACE_CONTEXT *)v8,
                                    v15,
                                    &v22,
                                    a1,
                                    v17,
                                    v4,
                                    v3,
                                    v13,
                                    v5);
      }
    }
  }
  return NvCachePriority;
}
