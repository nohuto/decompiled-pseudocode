/*
 * XREFs of ndisMAbortRequests @ 0x1C0099BD4
 * Callers:
 *     ?ndisMResetCompleteStage1@@YAHPEAU_NDIS_MINIPORT_BLOCK@@HE@Z @ 0x1C0097B4C (-ndisMResetCompleteStage1@@YAHPEAU_NDIS_MINIPORT_BLOCK@@HE@Z.c)
 *     ndisMCommonHaltMiniport @ 0x1C0136B28 (ndisMCommonHaltMiniport.c)
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x1C0006260 (WPP_RECORDER_SF_q.c)
 *     WPP_RECORDER_SF_qq @ 0x1C00066A0 (WPP_RECORDER_SF_qq.c)
 *     ndisOidRequestComplete @ 0x1C00076F0 (ndisOidRequestComplete.c)
 *     ndisOidFreeInternalCloneRequest @ 0x1C0009B60 (ndisOidFreeInternalCloneRequest.c)
 *     ndisMOidRequestCompleteInternal @ 0x1C001DCEC (ndisMOidRequestCompleteInternal.c)
 *     McTemplateK0jqxq @ 0x1C0061938 (McTemplateK0jqxq.c)
 *     ndisCompleteLegacyRequest @ 0x1C006A4C8 (ndisCompleteLegacyRequest.c)
 */

struct _KTHREAD *__fastcall ndisMAbortRequests(__int64 a1)
{
  struct _KTHREAD *result; // rax
  __int64 v3; // rdi
  __int64 ***v4; // rax
  __int64 **v5; // rcx
  _QWORD *v6; // rcx
  int v7; // edx
  __int64 *v8; // rdi
  __int64 *v9; // rax
  __int64 **v10; // rcx
  __int64 *v11; // rdi
  __int128 v12; // xmm0
  unsigned int v13; // r8d
  char *v14; // rdx
  __int128 v15; // xmm1
  __int128 *v16; // rdi
  int v17; // edx
  int v18; // r8d
  int v19; // r9d
  __int64 v20; // rdi
  __int64 v21; // r14
  __int128 v22; // xmm0
  unsigned int v23; // r8d
  char *v24; // rdx
  __int64 *v25; // [rsp+40h] [rbp-40h] BYREF
  __int64 **v26; // [rsp+48h] [rbp-38h]
  __int64 v27; // [rsp+50h] [rbp-30h] BYREF
  __int128 v28; // [rsp+58h] [rbp-28h]
  __int64 v29; // [rsp+68h] [rbp-18h]
  __int128 *v30; // [rsp+70h] [rbp-10h]
  int v31; // [rsp+78h] [rbp-8h]
  int v32; // [rsp+7Ch] [rbp-4h]
  __int64 v33; // [rsp+A0h] [rbp+20h] BYREF

  result = 0LL;
  v25 = 0LL;
  v26 = 0LL;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    result = (struct _KTHREAD *)WPP_RECORDER_SF_q(
                                  *((_QWORD *)WPP_GLOBAL_Control + 8),
                                  4,
                                  11,
                                  72,
                                  (struct _GUID *)&WPP_529e9a8d17733b7c5a0c4606a55c84c2_Traceguids,
                                  a1);
  if ( *(_BYTE *)(a1 + 32) < 6u )
  {
    *(_DWORD *)(a1 + 4420) &= ~2u;
    if ( *(_QWORD *)(a1 + 2208) || (result = (struct _KTHREAD *)(a1 + 2192), *(struct _KTHREAD **)result != result) )
    {
      v26 = &v25;
      v3 = a1 + 2192;
      v25 = (__int64 *)&v25;
      while ( *(_QWORD *)v3 != v3 )
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          WPP_RECORDER_SF_q(
            *((_QWORD *)WPP_GLOBAL_Control + 8),
            4,
            11,
            73,
            (struct _GUID *)&WPP_529e9a8d17733b7c5a0c4606a55c84c2_Traceguids,
            a1);
        v4 = *(__int64 ****)v3;
        if ( *(_QWORD *)(*(_QWORD *)v3 + 8LL) != v3
          || (v5 = *v4, (*v4)[1] != (__int64 *)v4)
          || (*(_QWORD *)v3 = v5, v5[1] = (__int64 *)v3, v6 = v26, *v26 != (__int64 *)&v25) )
        {
LABEL_26:
          __fastfail(3u);
        }
        v4[1] = v26;
        *v4 = &v25;
        *v6 = v4;
        v26 = (__int64 **)v4;
      }
      result = (struct _KTHREAD *)&v25;
      if ( v25 != (__int64 *)&v25 )
      {
        *(_QWORD *)(a1 + 520) = 0LL;
        KeReleaseSpinLockFromDpcLevel((PKSPIN_LOCK)(a1 + 96));
        while ( 1 )
        {
          v8 = v25;
          if ( v25 == (__int64 *)&v25 )
            break;
          if ( (__int64 **)v25[1] != &v25 )
            goto LABEL_26;
          v9 = (__int64 *)*v25;
          if ( *(__int64 **)(*v25 + 8) != v25 )
            goto LABEL_26;
          v29 = 0LL;
          v10 = &v25;
          v25 = v9;
          v11 = v8 - 9;
          v9[1] = (__int64)&v25;
          v30 = (__int128 *)v11;
          v31 = -1073676276;
          v32 = 1;
          v28 = 0LL;
          v27 = a1;
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            LOBYTE(v7) = 4;
            WPP_RECORDER_SF_qq(
              *((_QWORD *)WPP_GLOBAL_Control + 8),
              v7,
              11,
              74,
              (struct _GUID *)&WPP_529e9a8d17733b7c5a0c4606a55c84c2_Traceguids,
              a1,
              (char)v11);
          }
          if ( (Microsoft_Windows_NDISEnableBits & 0x10) != 0 )
            McTemplateK0jqxq(
              (__int64)v10,
              &AbortingRequestEx,
              (const GUID *)(a1 + 4008),
              a1 + 4008,
              *(_DWORD *)(a1 + 4056),
              *(_QWORD *)(a1 + 4024),
              *((_DWORD *)v11 + 8));
          KeAcquireSpinLockAtDpcLevel(&ndisAbortedRequestsListLock);
          v12 = *(_OWORD *)v11;
          v14 = (char *)&ndisAbortedRequests + 248 * ndisAbortedRequestsIndex++;
          v13 = ndisAbortedRequestsIndex;
          *(_OWORD *)v14 = v12;
          *((_OWORD *)v14 + 1) = *((_OWORD *)v11 + 1);
          *((_OWORD *)v14 + 2) = *((_OWORD *)v11 + 2);
          *((_OWORD *)v14 + 3) = *((_OWORD *)v11 + 3);
          *((_OWORD *)v14 + 4) = *((_OWORD *)v11 + 4);
          *((_OWORD *)v14 + 5) = *((_OWORD *)v11 + 5);
          *((_OWORD *)v14 + 6) = *((_OWORD *)v11 + 6);
          v14 += 128;
          v15 = *((_OWORD *)v11 + 7);
          v16 = (__int128 *)(v11 + 16);
          *((_OWORD *)v14 - 1) = v15;
          *(_OWORD *)v14 = *v16;
          *((_OWORD *)v14 + 1) = v16[1];
          *((_OWORD *)v14 + 2) = v16[2];
          *((_OWORD *)v14 + 3) = v16[3];
          *((_OWORD *)v14 + 4) = v16[4];
          *((_OWORD *)v14 + 5) = v16[5];
          *((_OWORD *)v14 + 6) = v16[6];
          *((_QWORD *)v14 + 14) = *((_QWORD *)v16 + 14);
          if ( v13 == 16 )
            ndisAbortedRequestsIndex = 0;
          KeReleaseSpinLockFromDpcLevel(&ndisAbortedRequestsListLock);
          ndisOidRequestComplete((__int64)&v27, v17, v18, v19);
        }
        KeAcquireSpinLockAtDpcLevel((PKSPIN_LOCK)(a1 + 96));
        result = KeGetCurrentThread();
        *(_QWORD *)(a1 + 520) = result;
      }
      v20 = *(_QWORD *)(a1 + 2208);
      if ( v20 )
      {
        *(_QWORD *)(a1 + 2208) = 0LL;
        v21 = *(_QWORD *)(a1 + 576);
        *(_QWORD *)(a1 + 576) = 0LL;
        v22 = *(_OWORD *)v20;
        v24 = (char *)&ndisAbortedRequests + 248 * ndisAbortedRequestsIndex++;
        v23 = ndisAbortedRequestsIndex;
        *(_OWORD *)v24 = v22;
        *((_OWORD *)v24 + 1) = *(_OWORD *)(v20 + 16);
        *((_OWORD *)v24 + 2) = *(_OWORD *)(v20 + 32);
        *((_OWORD *)v24 + 3) = *(_OWORD *)(v20 + 48);
        *((_OWORD *)v24 + 4) = *(_OWORD *)(v20 + 64);
        *((_OWORD *)v24 + 5) = *(_OWORD *)(v20 + 80);
        *((_OWORD *)v24 + 6) = *(_OWORD *)(v20 + 96);
        v24 += 128;
        *((_OWORD *)v24 - 1) = *(_OWORD *)(v20 + 112);
        *(_OWORD *)v24 = *(_OWORD *)(v20 + 128);
        *((_OWORD *)v24 + 1) = *(_OWORD *)(v20 + 144);
        *((_OWORD *)v24 + 2) = *(_OWORD *)(v20 + 160);
        *((_OWORD *)v24 + 3) = *(_OWORD *)(v20 + 176);
        *((_OWORD *)v24 + 4) = *(_OWORD *)(v20 + 192);
        *((_OWORD *)v24 + 5) = *(_OWORD *)(v20 + 208);
        *((_OWORD *)v24 + 6) = *(_OWORD *)(v20 + 224);
        *((_QWORD *)v24 + 14) = *(_QWORD *)(v20 + 240);
        if ( v23 == 16 )
          ndisAbortedRequestsIndex = 0;
        *(_QWORD *)(a1 + 520) = 0LL;
        KeReleaseSpinLockFromDpcLevel((PKSPIN_LOCK)(a1 + 96));
        if ( *(_BYTE *)(a1 + 32) < 6u )
        {
          ndisCompleteLegacyRequest((KSPIN_LOCK *)a1, -1073676276, v21);
        }
        else
        {
          if ( (*(_DWORD *)(v20 + 88) & 0x8000000) != 0 )
          {
            ndisOidFreeInternalCloneRequest((KSPIN_LOCK *)a1, v20, 0, (KSPIN_LOCK *)&v33);
            v20 = v33;
          }
          if ( v20 )
            ndisMOidRequestCompleteInternal(a1, v20, -1073676276, v20);
        }
        KeAcquireSpinLockAtDpcLevel((PKSPIN_LOCK)(a1 + 96));
        result = KeGetCurrentThread();
        *(_QWORD *)(a1 + 520) = result;
      }
    }
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    return (struct _KTHREAD *)WPP_RECORDER_SF_q(
                                *((_QWORD *)WPP_GLOBAL_Control + 8),
                                4,
                                11,
                                75,
                                (struct _GUID *)&WPP_529e9a8d17733b7c5a0c4606a55c84c2_Traceguids,
                                a1);
  return result;
}
