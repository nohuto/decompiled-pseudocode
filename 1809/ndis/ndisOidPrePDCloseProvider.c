/*
 * XREFs of ndisOidPrePDCloseProvider @ 0x1C0102150
 * Callers:
 *     <none>
 * Callees:
 *     ndisDereferenceMiniport @ 0x1C0009DEC (ndisDereferenceMiniport.c)
 *     ndisGetOidSourceHandle @ 0x1C0014FD0 (ndisGetOidSourceHandle.c)
 *     __security_check_cookie @ 0x1C0026050 (__security_check_cookie.c)
 *     memset @ 0x1C0027180 (memset.c)
 *     WPP_SF_qqdqq @ 0x1C007CA68 (WPP_SF_qqdqq.c)
 *     WPP_SF_qqqqDd @ 0x1C007CBAC (WPP_SF_qqqqDd.c)
 *     WPP_SF_qqqqq @ 0x1C007CC9C (WPP_SF_qqqqq.c)
 *     ?AcquireExclusive@KLockHolder@@QEAAXXZ @ 0x1C00C2AE0 (-AcquireExclusive@KLockHolder@@QEAAXXZ.c)
 *     ??1KLockHolder@@QEAA@XZ @ 0x1C00C2E30 (--1KLockHolder@@QEAA@XZ.c)
 *     ndisMInvokeBlockingOidRequest @ 0x1C00F0810 (ndisMInvokeBlockingOidRequest.c)
 *     ?ndisFindPDClientViaClientDriverHandle@@YAPEAUNDIS_PD_CLIENT@@PEAX@Z @ 0x1C0100EC8 (-ndisFindPDClientViaClientDriverHandle@@YAPEAUNDIS_PD_CLIENT@@PEAX@Z.c)
 *     ?ndisGetClientDriverHandleFromRequestSourceHandle@@YAPEAXPEAX@Z @ 0x1C0100FDC (-ndisGetClientDriverHandleFromRequestSourceHandle@@YAPEAXPEAX@Z.c)
 */

unsigned __int8 __fastcall ndisOidPrePDCloseProvider(__int64 a1, __int64 a2)
{
  __int64 v2; // r12
  __int64 v4; // rsi
  unsigned __int8 v5; // r14
  __int64 v6; // rax
  __int64 v7; // r15
  _QWORD *OidSourceHandle; // rax
  void *ClientDriverHandleFromRequestSourceHandle; // rax
  struct NDIS_PD_CLIENT *PDClientViaClientDriverHandle; // rax
  struct NDIS_PD_CLIENT *v11; // r13
  __int64 *v12; // rdi
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 *v15; // rcx
  __int64 **v16; // rax
  _QWORD *v17; // rax
  __int64 v18; // rdx
  _QWORD *v19; // rcx
  __int64 v21; // [rsp+20h] [rbp-E0h]
  __int64 v22; // [rsp+30h] [rbp-D0h]
  KLockHolder v23; // [rsp+40h] [rbp-C0h] BYREF
  _QWORD v24[32]; // [rsp+60h] [rbp-A0h] BYREF

  v2 = *(_QWORD *)a1;
  v4 = *(_QWORD *)(a1 + 32);
  v5 = 1;
  v6 = *(_QWORD *)a1;
  if ( (unsigned __int8)byte_1C00A026C >= 4u )
  {
    WPP_SF_qqqqq(0x1Cu, a2, v2, *(_QWORD *)(a1 + 16), *(_QWORD *)(a1 + 8), *(_QWORD *)(a1 + 24), v4);
    v6 = *(_QWORD *)a1;
  }
  if ( !v6 )
  {
    v5 = 0;
    goto LABEL_36;
  }
  if ( *(_DWORD *)(v4 + 4) != 1 )
  {
    *(_DWORD *)(a1 + 40) = -1073741637;
    goto LABEL_36;
  }
  if ( (*(_DWORD *)(v4 + 88) & 0x4000) == 0 && (*(_BYTE *)(v4 + 1) < 2u || *(_WORD *)(v4 + 2) < 0xF8u)
    || (*(_DWORD *)(v4 + 244) & 1) == 0
    || *(_DWORD *)(v4 + 236)
    || *(_DWORD *)(v4 + 240) == -1 )
  {
    goto LABEL_35;
  }
  *(_DWORD *)(a1 + 40) = 0;
  if ( *(_DWORD *)(v4 + 48) < 0x10u )
  {
    *(_DWORD *)(v4 + 56) = 16;
    *(_DWORD *)(a1 + 40) = -1073676268;
    goto LABEL_36;
  }
  v7 = *(_QWORD *)(v4 + 40);
  if ( *(_BYTE *)v7 == 0x80 && *(_BYTE *)(v7 + 1) == 1 && *(_WORD *)(v7 + 2) >= 0x10u && !*(_DWORD *)(v7 + 4) )
  {
    OidSourceHandle = (_QWORD *)ndisGetOidSourceHandle(v4);
    if ( OidSourceHandle
      && (ClientDriverHandleFromRequestSourceHandle = ndisGetClientDriverHandleFromRequestSourceHandle(OidSourceHandle)) != 0LL
      && (PDClientViaClientDriverHandle = ndisFindPDClientViaClientDriverHandle(ClientDriverHandleFromRequestSourceHandle),
          (v11 = PDClientViaClientDriverHandle) != 0LL)
      && (v12 = *(__int64 **)(v7 + 8), (struct NDIS_PD_CLIENT *)v12[7] == PDClientViaClientDriverHandle)
      && v12[6] == v2
      && *((_DWORD *)v12 + 16) == *(_DWORD *)(v4 + 240) )
    {
      *(_QWORD *)(v7 + 8) = v12[9];
      memset(v24, 0, 0xF8uLL);
      LODWORD(v24[11]) |= 8u;
      LODWORD(v24[0]) = 15466902;
      v24[13] = &ndisIntReqGeneric;
      LODWORD(v24[4]) = *(_DWORD *)(v4 + 32);
      HIDWORD(v24[0]) = *(_DWORD *)(v4 + 4);
      LODWORD(v24[1]) = *(_DWORD *)(v4 + 8);
      v24[5] = *(_QWORD *)(v4 + 40);
      LODWORD(v24[6]) = *(_DWORD *)(v4 + 48);
      WORD1(v24[0]) = 248;
      BYTE1(v24[0]) = 2;
      HIDWORD(v24[30]) = 1;
      LODWORD(v24[30]) = *(_DWORD *)(v4 + 240);
      *(_DWORD *)(a1 + 40) = ndisMInvokeBlockingOidRequest(v2, (__int64)v24);
      *(_QWORD *)(v7 + 8) = v12;
      if ( !*(_DWORD *)(a1 + 40) )
      {
        if ( (unsigned __int8)byte_1C00A026C >= 4u )
        {
          LODWORD(v21) = *((_DWORD *)v12 + 16);
          WPP_SF_qqdqq(v14, v13, v11, v2, v21, v12, v12[9]);
        }
        v23.m_Lock = (KPushLockBase *)qword_1C00A07C8;
        v12[9] = 0LL;
        v12[7] = 0LL;
        v23.m_State = Unlocked;
        v23.m_Region.m_Entered = 0;
        KLockHolder::AcquireExclusive(&v23);
        v15 = (__int64 *)*v12;
        if ( *(__int64 **)(*v12 + 8) != v12
          || (v16 = (__int64 **)v12[1], *v16 != v12)
          || (*v16 = v15,
              v15[1] = (__int64)v16,
              v17 = v12 + 4,
              *v12 = 0LL,
              v18 = v12[4],
              *(__int64 **)(v18 + 8) != v12 + 4)
          || (v19 = (_QWORD *)v12[5], (_QWORD *)*v19 != v17) )
        {
          __fastfail(3u);
        }
        *v19 = v18;
        *(_QWORD *)(v18 + 8) = v19;
        *v17 = 0LL;
        KLockHolder::~KLockHolder(&v23);
        ndisDereferenceMiniport(v12[6], 0x65u);
        v12[6] = 0LL;
        ExFreePoolWithTag(v12, 0x6141444Eu);
      }
    }
    else
    {
      *(_DWORD *)(a1 + 40) = -1073741808;
    }
  }
  else
  {
LABEL_35:
    *(_DWORD *)(a1 + 40) = -1073741811;
  }
LABEL_36:
  if ( (unsigned __int8)byte_1C00A026C >= 4u )
  {
    LODWORD(v22) = v5;
    WPP_SF_qqqqDd(
      0x1Eu,
      *(_QWORD *)(a1 + 8),
      v2,
      *(_QWORD *)(a1 + 16),
      *(_QWORD *)(a1 + 8),
      *(_QWORD *)(a1 + 24),
      v22,
      *(_DWORD *)(a1 + 40));
  }
  return v5;
}
