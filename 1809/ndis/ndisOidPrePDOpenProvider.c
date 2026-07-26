/*
 * XREFs of ndisOidPrePDOpenProvider @ 0x1C01024A0
 * Callers:
 *     <none>
 * Callees:
 *     ndisReferenceMiniport @ 0x1C0009B70 (ndisReferenceMiniport.c)
 *     ndisDereferenceMiniport @ 0x1C0009DEC (ndisDereferenceMiniport.c)
 *     ndisGetOidSourceHandle @ 0x1C0014FD0 (ndisGetOidSourceHandle.c)
 *     __security_check_cookie @ 0x1C0026050 (__security_check_cookie.c)
 *     memset @ 0x1C0027180 (memset.c)
 *     ndisIovFindVPortByVPortId @ 0x1C0070024 (ndisIovFindVPortByVPortId.c)
 *     WPP_SF_qqdqqS @ 0x1C007CAD8 (WPP_SF_qqdqqS.c)
 *     WPP_SF_qqqqDd @ 0x1C007CBAC (WPP_SF_qqqqDd.c)
 *     WPP_SF_qqqqq @ 0x1C007CC9C (WPP_SF_qqqqq.c)
 *     ?AcquireExclusive@KLockHolder@@QEAAXXZ @ 0x1C00C2AE0 (-AcquireExclusive@KLockHolder@@QEAAXXZ.c)
 *     ??1KLockHolder@@QEAA@XZ @ 0x1C00C2E30 (--1KLockHolder@@QEAA@XZ.c)
 *     ndisMInvokeBlockingOidRequest @ 0x1C00F0810 (ndisMInvokeBlockingOidRequest.c)
 *     ?ndisFindPDClientViaClientDriverHandle@@YAPEAUNDIS_PD_CLIENT@@PEAX@Z @ 0x1C0100EC8 (-ndisFindPDClientViaClientDriverHandle@@YAPEAUNDIS_PD_CLIENT@@PEAX@Z.c)
 *     ?ndisGetClientDriverHandleFromRequestSourceHandle@@YAPEAXPEAX@Z @ 0x1C0100FDC (-ndisGetClientDriverHandleFromRequestSourceHandle@@YAPEAXPEAX@Z.c)
 */

unsigned __int8 __fastcall ndisOidPrePDOpenProvider(__int64 a1, __int64 a2)
{
  __int64 v2; // r15
  _QWORD *v3; // rbx
  __int64 v4; // rsi
  unsigned __int8 v6; // r14
  __int64 v7; // rax
  __int64 v8; // r13
  _QWORD *OidSourceHandle; // rax
  void *ClientDriverHandleFromRequestSourceHandle; // rax
  struct NDIS_PD_CLIENT *PDClientViaClientDriverHandle; // r12
  unsigned int v12; // edx
  __int64 VPortByVPortId; // rax
  __int64 v14; // rax
  __int64 v15; // rcx
  _QWORD *PoolWithTag; // rax
  _QWORD *v17; // rax
  KPushLockBase *v18; // rax
  int v20; // eax
  __int64 v21; // rax
  struct NDIS_PD_CLIENT **v22; // rcx
  __int64 *v23; // rcx
  __int64 v24; // rax
  __int64 **v25; // rdx
  const wchar_t *v26; // rcx
  __int64 v27; // [rsp+20h] [rbp-E0h]
  __int64 v28; // [rsp+30h] [rbp-D0h]
  __int64 v29; // [rsp+38h] [rbp-C8h]
  KLockHolder v30; // [rsp+40h] [rbp-C0h] BYREF
  _QWORD v31[32]; // [rsp+60h] [rbp-A0h] BYREF

  v2 = *(_QWORD *)a1;
  v3 = 0LL;
  v4 = *(_QWORD *)(a1 + 32);
  v6 = 1;
  v7 = *(_QWORD *)a1;
  if ( (unsigned __int8)byte_1C00A026C >= 4u )
  {
    WPP_SF_qqqqq(0x17u, a2, v2, *(_QWORD *)(a1 + 16), *(_QWORD *)(a1 + 8), *(_QWORD *)(a1 + 24), v4);
    v7 = *(_QWORD *)a1;
  }
  if ( !v7 )
  {
    v6 = 0;
    goto LABEL_47;
  }
  if ( *(_DWORD *)(v4 + 4) != 12 )
    goto LABEL_6;
  if ( (*(_DWORD *)(v4 + 88) & 0x4000) == 0 && (*(_BYTE *)(v4 + 1) < 2u || *(_WORD *)(v4 + 2) < 0xF8u) )
    goto LABEL_10;
  if ( (*(_DWORD *)(v4 + 244) & 1) == 0 || *(_DWORD *)(v4 + 236) || *(_DWORD *)(v4 + 240) == -1 )
  {
    *(_DWORD *)(a1 + 40) = -1073741811;
    goto LABEL_41;
  }
  *(_DWORD *)(a1 + 40) = 0;
  if ( *(_DWORD *)(v4 + 48) < 0x18u )
  {
    *(_DWORD *)(v4 + 68) = 24;
    *(_DWORD *)(a1 + 40) = -1073676268;
    goto LABEL_47;
  }
  if ( *(_DWORD *)(v4 + 52) < 0x18u )
  {
    *(_DWORD *)(v4 + 68) = 24;
    *(_DWORD *)(a1 + 40) = -1073676266;
    goto LABEL_47;
  }
  v8 = *(_QWORD *)(v4 + 40);
  if ( *(_BYTE *)v8 != 0x80
    || *(_BYTE *)(v8 + 1) != 1
    || *(_WORD *)(v8 + 2) < 0x18u
    || (*(_DWORD *)(v8 + 4) & 0xFFFFFFFE) != 0 )
  {
    goto LABEL_10;
  }
  OidSourceHandle = (_QWORD *)ndisGetOidSourceHandle(v4);
  if ( !OidSourceHandle
    || (ClientDriverHandleFromRequestSourceHandle = ndisGetClientDriverHandleFromRequestSourceHandle(OidSourceHandle)) == 0LL
    || (PDClientViaClientDriverHandle = ndisFindPDClientViaClientDriverHandle(ClientDriverHandleFromRequestSourceHandle)) == 0LL )
  {
    *(_DWORD *)(a1 + 40) = -1073741808;
    goto LABEL_47;
  }
  v12 = *(_DWORD *)(v4 + 240);
  if ( v12 )
  {
    VPortByVPortId = ndisIovFindVPortByVPortId(v2, v12);
    if ( !VPortByVPortId || (*(_DWORD *)(VPortByVPortId + 64) & 2) != 0 )
    {
LABEL_10:
      *(_DWORD *)(a1 + 40) = -1073741811;
      goto LABEL_47;
    }
  }
  v14 = *(_QWORD *)(v2 + 5536);
  if ( !v14
    || !*(_BYTE *)(v14 + 12)
    || !*(_DWORD *)(v14 + 32)
    || (v15 = *(_QWORD *)(v14 + 24), !*(_DWORD *)(v15 + 16))
    || !*(_BYTE *)(v15 + 8) )
  {
LABEL_6:
    *(_DWORD *)(a1 + 40) = -1073741637;
    goto LABEL_47;
  }
  PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0xC0uLL, 0x6141444Eu);
  v3 = PoolWithTag;
  if ( PoolWithTag )
  {
    *((_DWORD *)PoolWithTag + 16) = -1;
    PoolWithTag[6] = 0LL;
    PoolWithTag[7] = 0LL;
    PoolWithTag[9] = 0LL;
    PoolWithTag[10] = 0LL;
    *((_WORD *)PoolWithTag + 44) = 0;
    PoolWithTag[1] = 0LL;
    *PoolWithTag = 0LL;
    PoolWithTag[3] = 0LL;
    PoolWithTag[2] = 0LL;
    PoolWithTag[5] = 0LL;
    PoolWithTag[4] = 0LL;
    v17 = PoolWithTag + 12;
    v17[1] = v17;
    *v17 = v17;
    v3[15] = v3 + 14;
    v3[14] = v3 + 14;
    v3[17] = v3 + 16;
    v3[16] = v3 + 16;
    v3[19] = v3 + 18;
    v3[18] = v3 + 18;
    v3[21] = v3 + 20;
    v3[20] = v3 + 20;
    v3[23] = v3 + 22;
    v3[22] = v3 + 22;
  }
  else
  {
    v3 = 0LL;
  }
  if ( !v3 )
  {
    *(_DWORD *)(a1 + 40) = -1073741670;
    goto LABEL_47;
  }
  if ( !ndisReferenceMiniport(v2) )
  {
    *(_DWORD *)(a1 + 40) = -1073741436;
    goto LABEL_41;
  }
  v3[6] = v2;
  *((_DWORD *)v3 + 16) = *(_DWORD *)(v4 + 240);
  memset(v31, 0, 0xF8uLL);
  LODWORD(v31[11]) |= 8u;
  v31[0] = 0xC00EC0196LL;
  v31[13] = &ndisIntReqGeneric;
  LODWORD(v31[1]) = *(_DWORD *)(v4 + 8);
  LODWORD(v31[4]) = *(_DWORD *)(v4 + 32);
  LODWORD(v31[7]) = *(_DWORD *)(v4 + 56);
  v31[5] = *(_QWORD *)(v4 + 40);
  v31[6] = *(_QWORD *)(v4 + 48);
  WORD1(v31[0]) = 248;
  BYTE1(v31[0]) = 2;
  HIDWORD(v31[30]) = 1;
  LODWORD(v31[30]) = *(_DWORD *)(v4 + 240);
  v20 = ndisMInvokeBlockingOidRequest(v2, (__int64)v31);
  *(_DWORD *)(a1 + 40) = v20;
  if ( v20 )
  {
LABEL_41:
    if ( v3 )
    {
      v18 = (KPushLockBase *)v3[9];
      if ( v18 )
      {
        *(_QWORD *)((char *)&v30.m_State + 1) = 0LL;
        v30.m_State = 1048960;
        v30.m_Lock = v18;
        memset(v31, 0, 0xF8uLL);
        LODWORD(v31[11]) |= 8u;
        v31[0] = 0x100EC0196LL;
        v31[13] = &ndisIntReqGeneric;
        LODWORD(v31[4]) = 66818;
        LODWORD(v31[1]) = *(_DWORD *)(v4 + 8);
        v31[5] = &v30;
        LODWORD(v31[6]) = 16;
        BYTE1(v31[0]) = 2;
        WORD1(v31[0]) = 248;
        HIDWORD(v31[30]) = 1;
        LODWORD(v31[30]) = *(_DWORD *)(v4 + 240);
        ndisMInvokeBlockingOidRequest(v2, (__int64)v31);
        v3[9] = 0LL;
      }
      if ( v3[6] )
      {
        ndisDereferenceMiniport(v2, 0x65u);
        v3[6] = 0LL;
      }
      ExFreePoolWithTag(v3, 0x6141444Eu);
    }
    goto LABEL_47;
  }
  v21 = *(_QWORD *)(v8 + 8);
  v30.m_State = Unlocked;
  v3[9] = v21;
  v3[10] = *(_QWORD *)(v8 + 16);
  v30.m_Lock = (KPushLockBase *)qword_1C00A07C8;
  v30.m_Region.m_Entered = 0;
  KLockHolder::AcquireExclusive(&v30);
  v3[7] = PDClientViaClientDriverHandle;
  v22 = (struct NDIS_PD_CLIENT **)*((_QWORD *)PDClientViaClientDriverHandle + 3);
  if ( *v22 != (struct NDIS_PD_CLIENT *)((char *)PDClientViaClientDriverHandle + 16)
    || (*v3 = (char *)PDClientViaClientDriverHandle + 16,
        v3[1] = v22,
        *v22 = (struct NDIS_PD_CLIENT *)v3,
        v23 = v3 + 4,
        *((_QWORD *)PDClientViaClientDriverHandle + 3) = v3,
        v24 = *(_QWORD *)(v2 + 5536) + 40LL,
        v25 = *(__int64 ***)(*(_QWORD *)(v2 + 5536) + 48LL),
        *v25 != (__int64 *)v24) )
  {
    __fastfail(3u);
  }
  *v23 = v24;
  v3[5] = v25;
  *v25 = v23;
  *(_QWORD *)(v24 + 8) = v23;
  KLockHolder::~KLockHolder(&v30);
  if ( (_UNKNOWN *)v3[10] == &unk_1C0086D70 )
    *((_BYTE *)v3 + 88) = 1;
  if ( (unsigned __int8)byte_1C00A026C >= 4u )
  {
    v26 = L"PASS_THROUGH";
    if ( !*((_BYTE *)v3 + 88) )
      v26 = L" ";
    LODWORD(v27) = *((_DWORD *)v3 + 16);
    WPP_SF_qqdqqS((__int64)v26, (__int64)L" ", PDClientViaClientDriverHandle, v2, v27, v3, *(_QWORD *)(v8 + 8), v26);
  }
  *(_QWORD *)(v8 + 8) = v3;
  *(_QWORD *)(v8 + 16) = &unk_1C0086D70;
LABEL_47:
  if ( (unsigned __int8)byte_1C00A026C >= 4u )
  {
    LODWORD(v29) = *(_DWORD *)(a1 + 40);
    LODWORD(v28) = v6;
    WPP_SF_qqqqDd(
      0x19u,
      *(_QWORD *)(a1 + 8),
      v2,
      *(_QWORD *)(a1 + 16),
      *(_QWORD *)(a1 + 8),
      *(_QWORD *)(a1 + 24),
      v28,
      v29);
  }
  return v6;
}
