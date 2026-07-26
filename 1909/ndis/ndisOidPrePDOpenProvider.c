/*
 * XREFs of ndisOidPrePDOpenProvider @ 0x1C0122830
 * Callers:
 *     <none>
 * Callees:
 *     ndisDereferenceMiniport @ 0x1C000286C (ndisDereferenceMiniport.c)
 *     ndisReferenceMiniport @ 0x1C0002B20 (ndisReferenceMiniport.c)
 *     ndisGetOidSourceHandle @ 0x1C0035154 (ndisGetOidSourceHandle.c)
 *     __security_check_cookie @ 0x1C0040760 (__security_check_cookie.c)
 *     memset @ 0x1C00416C0 (memset.c)
 *     ndisIovFindVPortByVPortId @ 0x1C00B1BA0 (ndisIovFindVPortByVPortId.c)
 *     WPP_RECORDER_SF_qqdqqS @ 0x1C00C1A44 (WPP_RECORDER_SF_qqdqqS.c)
 *     WPP_RECORDER_SF_qqqqDd @ 0x1C00C1C2C (WPP_RECORDER_SF_qqqqDd.c)
 *     WPP_RECORDER_SF_qqqqq @ 0x1C00C1E98 (WPP_RECORDER_SF_qqqqq.c)
 *     ??1KLockHolder@@QEAA@XZ @ 0x1C00FCD0C (--1KLockHolder@@QEAA@XZ.c)
 *     ?AcquireExclusive@KLockHolder@@QEAAXXZ @ 0x1C00FCF64 (-AcquireExclusive@KLockHolder@@QEAAXXZ.c)
 *     ndisMInvokeBlockingOidRequest @ 0x1C01177A4 (ndisMInvokeBlockingOidRequest.c)
 *     ?ndisFindPDClientViaClientDriverHandle@@YAPEAUNDIS_PD_CLIENT@@PEAX@Z @ 0x1C0121334 (-ndisFindPDClientViaClientDriverHandle@@YAPEAUNDIS_PD_CLIENT@@PEAX@Z.c)
 *     ?ndisGetClientDriverHandleFromRequestSourceHandle@@YAPEAXPEAX@Z @ 0x1C0121448 (-ndisGetClientDriverHandleFromRequestSourceHandle@@YAPEAXPEAX@Z.c)
 */

unsigned __int8 __fastcall ndisOidPrePDOpenProvider(__int64 a1)
{
  __int64 v1; // r13
  _QWORD *v2; // rbx
  __int64 v3; // rsi
  unsigned __int8 v5; // r14
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 v8; // rax
  __int64 v9; // r15
  _QWORD *OidSourceHandle; // rax
  void *ClientDriverHandleFromRequestSourceHandle; // rax
  struct NDIS_PD_CLIENT *PDClientViaClientDriverHandle; // r12
  unsigned int v13; // edx
  __int64 VPortByVPortId; // rax
  __int64 v15; // rax
  __int64 v16; // rcx
  _QWORD *PoolWithTag; // rax
  _QWORD *v18; // rax
  KPushLockBase *v19; // rax
  int v21; // eax
  __int64 v22; // rax
  struct NDIS_PD_CLIENT **v23; // rcx
  __int64 *v24; // rcx
  __int64 v25; // rax
  __int64 **v26; // rdx
  __int64 v27; // r9
  const wchar_t *v28; // rcx
  int v29; // [rsp+28h] [rbp-E0h]
  KLockHolder v30; // [rsp+68h] [rbp-A0h] BYREF
  _QWORD v31[32]; // [rsp+88h] [rbp-80h] BYREF

  v1 = *(_QWORD *)a1;
  v2 = 0LL;
  v3 = *(_QWORD *)(a1 + 32);
  v5 = 1;
  memset(v31, 0, 0xF8uLL);
  v8 = v1;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    WPP_RECORDER_SF_qqqqq(*((_QWORD *)WPP_GLOBAL_Control + 8), v6, v7, 0x17u, v29);
    v8 = *(_QWORD *)a1;
  }
  if ( !v8 )
  {
    v5 = 0;
    goto LABEL_47;
  }
  if ( *(_DWORD *)(v3 + 4) != 12 )
    goto LABEL_6;
  if ( (*(_DWORD *)(v3 + 88) & 0x4000) == 0 && (*(_BYTE *)(v3 + 1) < 2u || *(_WORD *)(v3 + 2) < 0xF8u) )
    goto LABEL_10;
  if ( (*(_DWORD *)(v3 + 244) & 1) == 0 || *(_DWORD *)(v3 + 236) || *(_DWORD *)(v3 + 240) == -1 )
  {
    *(_DWORD *)(a1 + 40) = -1073741811;
    goto LABEL_41;
  }
  *(_DWORD *)(a1 + 40) = 0;
  if ( *(_DWORD *)(v3 + 48) < 0x18u )
  {
    *(_DWORD *)(v3 + 68) = 24;
    *(_DWORD *)(a1 + 40) = -1073676268;
    goto LABEL_47;
  }
  if ( *(_DWORD *)(v3 + 52) < 0x18u )
  {
    *(_DWORD *)(v3 + 68) = 24;
    *(_DWORD *)(a1 + 40) = -1073676266;
    goto LABEL_47;
  }
  v9 = *(_QWORD *)(v3 + 40);
  if ( *(_BYTE *)v9 != 0x80
    || *(_BYTE *)(v9 + 1) != 1
    || *(_WORD *)(v9 + 2) < 0x18u
    || (*(_DWORD *)(v9 + 4) & 0xFFFFFFFE) != 0 )
  {
    goto LABEL_10;
  }
  OidSourceHandle = (_QWORD *)ndisGetOidSourceHandle(v3);
  if ( !OidSourceHandle
    || (ClientDriverHandleFromRequestSourceHandle = ndisGetClientDriverHandleFromRequestSourceHandle(OidSourceHandle)) == 0LL
    || (PDClientViaClientDriverHandle = ndisFindPDClientViaClientDriverHandle(ClientDriverHandleFromRequestSourceHandle)) == 0LL )
  {
    *(_DWORD *)(a1 + 40) = -1073741808;
    goto LABEL_47;
  }
  v13 = *(_DWORD *)(v3 + 240);
  if ( v13 )
  {
    VPortByVPortId = ndisIovFindVPortByVPortId(v1, v13);
    if ( !VPortByVPortId || (*(_DWORD *)(VPortByVPortId + 64) & 2) != 0 )
    {
LABEL_10:
      *(_DWORD *)(a1 + 40) = -1073741811;
      goto LABEL_47;
    }
  }
  v15 = *(_QWORD *)(v1 + 5472);
  if ( !v15
    || !*(_BYTE *)(v15 + 12)
    || !*(_DWORD *)(v15 + 32)
    || (v16 = *(_QWORD *)(v15 + 24), !*(_DWORD *)(v16 + 16))
    || !*(_BYTE *)(v16 + 8) )
  {
LABEL_6:
    *(_DWORD *)(a1 + 40) = -1073741637;
    goto LABEL_47;
  }
  PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0xC0uLL, 0x6141444Eu);
  v2 = PoolWithTag;
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
    v18 = PoolWithTag + 12;
    v18[1] = v18;
    *v18 = v18;
    v2[15] = v2 + 14;
    v2[14] = v2 + 14;
    v2[17] = v2 + 16;
    v2[16] = v2 + 16;
    v2[19] = v2 + 18;
    v2[18] = v2 + 18;
    v2[21] = v2 + 20;
    v2[20] = v2 + 20;
    v2[23] = v2 + 22;
    v2[22] = v2 + 22;
  }
  else
  {
    v2 = 0LL;
  }
  if ( !v2 )
  {
    *(_DWORD *)(a1 + 40) = -1073741670;
    goto LABEL_47;
  }
  if ( !(unsigned __int8)ndisReferenceMiniport(v1) )
  {
    *(_DWORD *)(a1 + 40) = -1073741436;
    goto LABEL_41;
  }
  v2[6] = v1;
  *((_DWORD *)v2 + 16) = *(_DWORD *)(v3 + 240);
  memset(v31, 0, 0xF8uLL);
  LODWORD(v31[11]) |= 8u;
  v31[0] = 0xC00EC0196LL;
  v31[13] = &ndisIntReqGeneric;
  LODWORD(v31[1]) = *(_DWORD *)(v3 + 8);
  LODWORD(v31[4]) = *(_DWORD *)(v3 + 32);
  LODWORD(v31[7]) = *(_DWORD *)(v3 + 56);
  v31[5] = *(_QWORD *)(v3 + 40);
  v31[6] = *(_QWORD *)(v3 + 48);
  WORD1(v31[0]) = 248;
  BYTE1(v31[0]) = 2;
  HIDWORD(v31[30]) = 1;
  LODWORD(v31[30]) = *(_DWORD *)(v3 + 240);
  v21 = ndisMInvokeBlockingOidRequest((char *)v1, (__int64)v31);
  *(_DWORD *)(a1 + 40) = v21;
  if ( v21 )
  {
LABEL_41:
    if ( v2 )
    {
      v19 = (KPushLockBase *)v2[9];
      if ( v19 )
      {
        *(_QWORD *)((char *)&v30.m_State + 1) = 0LL;
        v30.m_State = 1048960;
        v30.m_Lock = v19;
        memset(v31, 0, 0xF8uLL);
        LODWORD(v31[11]) |= 8u;
        v31[0] = 0x100EC0196LL;
        v31[13] = &ndisIntReqGeneric;
        LODWORD(v31[4]) = 66818;
        LODWORD(v31[1]) = *(_DWORD *)(v3 + 8);
        v31[5] = &v30;
        LODWORD(v31[6]) = 16;
        BYTE1(v31[0]) = 2;
        WORD1(v31[0]) = 248;
        HIDWORD(v31[30]) = 1;
        LODWORD(v31[30]) = *(_DWORD *)(v3 + 240);
        ndisMInvokeBlockingOidRequest((char *)v1, (__int64)v31);
        v2[9] = 0LL;
      }
      if ( v2[6] )
      {
        ndisDereferenceMiniport(v1, 0x65u);
        v2[6] = 0LL;
      }
      ExFreePoolWithTag(v2, 0x6141444Eu);
    }
    goto LABEL_47;
  }
  v22 = *(_QWORD *)(v9 + 8);
  v30.m_State = Unlocked;
  v2[9] = v22;
  v2[10] = *(_QWORD *)(v9 + 16);
  v30.m_Lock = (KPushLockBase *)qword_1C00E67E8;
  v30.m_Region.m_Entered = 0;
  KLockHolder::AcquireExclusive(&v30);
  v2[7] = PDClientViaClientDriverHandle;
  v23 = (struct NDIS_PD_CLIENT **)*((_QWORD *)PDClientViaClientDriverHandle + 3);
  if ( *v23 != (struct NDIS_PD_CLIENT *)((char *)PDClientViaClientDriverHandle + 16)
    || (*v2 = (char *)PDClientViaClientDriverHandle + 16,
        v2[1] = v23,
        *v23 = (struct NDIS_PD_CLIENT *)v2,
        v24 = v2 + 4,
        *((_QWORD *)PDClientViaClientDriverHandle + 3) = v2,
        v25 = *(_QWORD *)(v1 + 5472) + 40LL,
        v26 = *(__int64 ***)(*(_QWORD *)(v1 + 5472) + 48LL),
        *v26 != (__int64 *)v25) )
  {
    __fastfail(3u);
  }
  *v24 = v25;
  v2[5] = v26;
  *v26 = v24;
  *(_QWORD *)(v25 + 8) = v24;
  KLockHolder::~KLockHolder(&v30);
  if ( (_UNKNOWN *)v2[10] == &unk_1C00CBD40 )
    *((_BYTE *)v2 + 88) = 1;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v28 = L"PASS_THROUGH";
    if ( !*((_BYTE *)v2 + 88) )
      v28 = L" ";
    WPP_RECORDER_SF_qqdqqS(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      (__int64)L" ",
      v7,
      v27,
      v29,
      (char)PDClientViaClientDriverHandle,
      v1,
      *((_DWORD *)v2 + 16),
      (char)v2,
      *(_QWORD *)(v9 + 8),
      v28);
  }
  *(_QWORD *)(v9 + 8) = v2;
  *(_QWORD *)(v9 + 16) = &unk_1C00CBD40;
LABEL_47:
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qqqqDd(*((_QWORD *)WPP_GLOBAL_Control + 8), v5, v7, 0x19u, v29);
  return v5;
}
