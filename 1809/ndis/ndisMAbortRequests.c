/*
 * XREFs of ndisMAbortRequests @ 0x1C0062084
 * Callers:
 *     ndisMResetCompleteStage1 @ 0x1C0063D20 (ndisMResetCompleteStage1.c)
 *     ndisMCommonHaltMiniport @ 0x1C0115B88 (ndisMCommonHaltMiniport.c)
 * Callees:
 *     ndisOidRequestComplete @ 0x1C000D320 (ndisOidRequestComplete.c)
 *     ndisOidFreeInternalCloneRequest @ 0x1C000F400 (ndisOidFreeInternalCloneRequest.c)
 *     memset @ 0x1C0027180 (memset.c)
 *     WPP_SF_q @ 0x1C003A798 (WPP_SF_q.c)
 *     WPP_SF_qq @ 0x1C003A868 (WPP_SF_qq.c)
 *     McTemplateK0jqxq @ 0x1C003D24C (McTemplateK0jqxq.c)
 *     ndisCompleteLegacyRequest @ 0x1C00445F4 (ndisCompleteLegacyRequest.c)
 *     ndisMOidRequestCompleteInternal @ 0x1C0045B94 (ndisMOidRequestCompleteInternal.c)
 */

void __fastcall ndisMAbortRequests(__int64 a1)
{
  __int64 v2; // rdi
  __int64 ***v3; // rax
  __int64 **v4; // rcx
  _QWORD *v5; // rcx
  __int64 *v6; // rdi
  __int64 *v7; // rax
  __int64 v8; // rcx
  __int64 *v9; // rdi
  __int128 v10; // xmm0
  unsigned int v11; // r8d
  char *v12; // rdx
  __int128 v13; // xmm1
  __int128 *v14; // rdi
  __int64 v15; // rdx
  __int64 v16; // rdi
  __int64 v17; // r14
  __int128 v18; // xmm0
  unsigned int v19; // r8d
  char *v20; // rdx
  __int64 *v21; // [rsp+40h] [rbp-40h] BYREF
  __int64 **v22; // [rsp+48h] [rbp-38h]
  _QWORD v23[6]; // [rsp+50h] [rbp-30h] BYREF
  __int64 v24; // [rsp+A0h] [rbp+20h] BYREF

  if ( (unsigned __int8)byte_1C00A025A >= 4u )
    WPP_SF_q(0x4Au, &WPP_f453a6740ca1326a168191528118e90e_Traceguids, a1);
  if ( *(_BYTE *)(a1 + 32) < 6u )
  {
    *(_DWORD *)(a1 + 4460) &= ~2u;
    if ( *(_QWORD *)(a1 + 2224) || *(_QWORD *)(a1 + 2208) != a1 + 2208 )
    {
      v22 = &v21;
      v2 = a1 + 2208;
      v21 = (__int64 *)&v21;
      while ( *(_QWORD *)v2 != v2 )
      {
        if ( (unsigned __int8)byte_1C00A025A >= 4u )
          WPP_SF_q(0x4Bu, &WPP_f453a6740ca1326a168191528118e90e_Traceguids, a1);
        v3 = *(__int64 ****)v2;
        if ( *(_QWORD *)(*(_QWORD *)v2 + 8LL) != v2
          || (v4 = *v3, (*v3)[1] != (__int64 *)v3)
          || (*(_QWORD *)v2 = v4, v4[1] = (__int64 *)v2, v5 = v22, *v22 != (__int64 *)&v21) )
        {
LABEL_26:
          __fastfail(3u);
        }
        v3[1] = v22;
        *v3 = &v21;
        *v5 = v3;
        v22 = (__int64 **)v3;
      }
      if ( v21 != (__int64 *)&v21 )
      {
        *(_QWORD *)(a1 + 520) = 0LL;
        *(_DWORD *)(a1 + 1864) = 0;
        KeReleaseSpinLockFromDpcLevel((PKSPIN_LOCK)(a1 + 96));
        while ( 1 )
        {
          v6 = v21;
          if ( v21 == (__int64 *)&v21 )
            break;
          if ( (__int64 **)v21[1] != &v21 )
            goto LABEL_26;
          v7 = (__int64 *)*v21;
          if ( *(__int64 **)(*v21 + 8) != v21 )
            goto LABEL_26;
          v21 = (__int64 *)*v21;
          v7[1] = (__int64)&v21;
          memset(v23, 0, sizeof(v23));
          v9 = v6 - 9;
          LODWORD(v23[5]) = -1073676276;
          HIDWORD(v23[5]) |= 1u;
          v23[4] = v9;
          v23[0] = a1;
          if ( (unsigned __int8)byte_1C00A025A >= 4u )
            WPP_SF_qq(0x4Cu, &WPP_f453a6740ca1326a168191528118e90e_Traceguids, a1, v9);
          if ( (Microsoft_Windows_NDISEnableBits & 0x10) != 0 )
            McTemplateK0jqxq(
              v8,
              &AbortingRequestEx,
              (const GUID *)(a1 + 4040),
              a1 + 4040,
              *(_DWORD *)(a1 + 4088),
              *(_QWORD *)(a1 + 4056),
              *((_DWORD *)v9 + 8));
          KeAcquireSpinLockAtDpcLevel(&ndisAbortedRequestsListLock);
          v10 = *(_OWORD *)v9;
          v12 = (char *)&ndisAbortedRequests + 248 * ndisAbortedRequestsIndex++;
          v11 = ndisAbortedRequestsIndex;
          *(_OWORD *)v12 = v10;
          *((_OWORD *)v12 + 1) = *((_OWORD *)v9 + 1);
          *((_OWORD *)v12 + 2) = *((_OWORD *)v9 + 2);
          *((_OWORD *)v12 + 3) = *((_OWORD *)v9 + 3);
          *((_OWORD *)v12 + 4) = *((_OWORD *)v9 + 4);
          *((_OWORD *)v12 + 5) = *((_OWORD *)v9 + 5);
          *((_OWORD *)v12 + 6) = *((_OWORD *)v9 + 6);
          v12 += 128;
          v13 = *((_OWORD *)v9 + 7);
          v14 = (__int128 *)(v9 + 16);
          *((_OWORD *)v12 - 1) = v13;
          *(_OWORD *)v12 = *v14;
          *((_OWORD *)v12 + 1) = v14[1];
          *((_OWORD *)v12 + 2) = v14[2];
          *((_OWORD *)v12 + 3) = v14[3];
          *((_OWORD *)v12 + 4) = v14[4];
          *((_OWORD *)v12 + 5) = v14[5];
          *((_OWORD *)v12 + 6) = v14[6];
          *((_QWORD *)v12 + 14) = *((_QWORD *)v14 + 14);
          if ( v11 == 16 )
            ndisAbortedRequestsIndex = 0;
          KeReleaseSpinLockFromDpcLevel(&ndisAbortedRequestsListLock);
          ndisOidRequestComplete((__int64)v23, v15);
        }
        KeAcquireSpinLockAtDpcLevel((PKSPIN_LOCK)(a1 + 96));
        *(_QWORD *)(a1 + 520) = KeGetCurrentThread();
        *(_DWORD *)(a1 + 1864) = 726071;
      }
      v16 = *(_QWORD *)(a1 + 2224);
      if ( v16 )
      {
        *(_QWORD *)(a1 + 2224) = 0LL;
        v17 = *(_QWORD *)(a1 + 576);
        *(_QWORD *)(a1 + 576) = 0LL;
        v18 = *(_OWORD *)v16;
        v20 = (char *)&ndisAbortedRequests + 248 * ndisAbortedRequestsIndex++;
        v19 = ndisAbortedRequestsIndex;
        *(_OWORD *)v20 = v18;
        *((_OWORD *)v20 + 1) = *(_OWORD *)(v16 + 16);
        *((_OWORD *)v20 + 2) = *(_OWORD *)(v16 + 32);
        *((_OWORD *)v20 + 3) = *(_OWORD *)(v16 + 48);
        *((_OWORD *)v20 + 4) = *(_OWORD *)(v16 + 64);
        *((_OWORD *)v20 + 5) = *(_OWORD *)(v16 + 80);
        *((_OWORD *)v20 + 6) = *(_OWORD *)(v16 + 96);
        v20 += 128;
        *((_OWORD *)v20 - 1) = *(_OWORD *)(v16 + 112);
        *(_OWORD *)v20 = *(_OWORD *)(v16 + 128);
        *((_OWORD *)v20 + 1) = *(_OWORD *)(v16 + 144);
        *((_OWORD *)v20 + 2) = *(_OWORD *)(v16 + 160);
        *((_OWORD *)v20 + 3) = *(_OWORD *)(v16 + 176);
        *((_OWORD *)v20 + 4) = *(_OWORD *)(v16 + 192);
        *((_OWORD *)v20 + 5) = *(_OWORD *)(v16 + 208);
        *((_OWORD *)v20 + 6) = *(_OWORD *)(v16 + 224);
        *((_QWORD *)v20 + 14) = *(_QWORD *)(v16 + 240);
        if ( v19 == 16 )
          ndisAbortedRequestsIndex = 0;
        *(_QWORD *)(a1 + 520) = 0LL;
        *(_DWORD *)(a1 + 1864) = 0;
        KeReleaseSpinLockFromDpcLevel((PKSPIN_LOCK)(a1 + 96));
        if ( *(_BYTE *)(a1 + 32) < 6u )
        {
          ndisCompleteLegacyRequest(a1, 0xC001000C, v17);
        }
        else
        {
          if ( (*(_DWORD *)(v16 + 88) & 0x8000000) != 0 )
          {
            ndisOidFreeInternalCloneRequest((KSPIN_LOCK *)a1, v16, 0, (KSPIN_LOCK *)&v24);
            v16 = v24;
          }
          if ( v16 )
            ndisMOidRequestCompleteInternal(a1, v16, -1073676276, v16);
        }
        KeAcquireSpinLockAtDpcLevel((PKSPIN_LOCK)(a1 + 96));
        *(_QWORD *)(a1 + 520) = KeGetCurrentThread();
        *(_DWORD *)(a1 + 1864) = 726129;
      }
    }
  }
  if ( (unsigned __int8)byte_1C00A025A >= 4u )
    WPP_SF_q(0x4Du, &WPP_f453a6740ca1326a168191528118e90e_Traceguids, a1);
}
