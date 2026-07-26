/*
 * XREFs of ndisOidPrePDCloseProvider @ 0x1C0122490
 * Callers:
 *     <none>
 * Callees:
 *     ndisDereferenceMiniport @ 0x1C000286C (ndisDereferenceMiniport.c)
 *     ndisGetOidSourceHandle @ 0x1C0035164 (ndisGetOidSourceHandle.c)
 *     __security_check_cookie @ 0x1C0040770 (__security_check_cookie.c)
 *     memset @ 0x1C0041440 (memset.c)
 *     WPP_RECORDER_SF_qqdqq @ 0x1C00C174C (WPP_RECORDER_SF_qqdqq.c)
 *     WPP_RECORDER_SF_qqqqDd @ 0x1C00C1A5C (WPP_RECORDER_SF_qqqqDd.c)
 *     WPP_RECORDER_SF_qqqqq @ 0x1C00C1CC8 (WPP_RECORDER_SF_qqqqq.c)
 *     ??1KLockHolder@@QEAA@XZ @ 0x1C00FCD0C (--1KLockHolder@@QEAA@XZ.c)
 *     ?AcquireExclusive@KLockHolder@@QEAAXXZ @ 0x1C00FCF64 (-AcquireExclusive@KLockHolder@@QEAAXXZ.c)
 *     ndisMInvokeBlockingOidRequest @ 0x1C01177A4 (ndisMInvokeBlockingOidRequest.c)
 *     ?ndisFindPDClientViaClientDriverHandle@@YAPEAUNDIS_PD_CLIENT@@PEAX@Z @ 0x1C0121334 (-ndisFindPDClientViaClientDriverHandle@@YAPEAUNDIS_PD_CLIENT@@PEAX@Z.c)
 *     ?ndisGetClientDriverHandleFromRequestSourceHandle@@YAPEAXPEAX@Z @ 0x1C0121448 (-ndisGetClientDriverHandleFromRequestSourceHandle@@YAPEAXPEAX@Z.c)
 */

unsigned __int8 __fastcall ndisOidPrePDCloseProvider(__int64 a1)
{
  char *v1; // r12
  __int64 v3; // rsi
  unsigned __int8 v4; // r14
  __int64 v5; // rdx
  __int64 v6; // r8
  char *v7; // rax
  __int64 v8; // r15
  _QWORD *OidSourceHandle; // rax
  void *ClientDriverHandleFromRequestSourceHandle; // rax
  struct NDIS_PD_CLIENT *PDClientViaClientDriverHandle; // rax
  _QWORD *v12; // rdi
  __int64 v13; // rdx
  __int64 v14; // r9
  __int64 v15; // rcx
  _QWORD *v16; // rax
  _QWORD *v17; // rax
  __int64 v18; // rdx
  _QWORD *v19; // rcx
  int v21; // [rsp+28h] [rbp-E0h]
  KLockHolder v22; // [rsp+68h] [rbp-A0h] BYREF
  _QWORD v23[32]; // [rsp+88h] [rbp-80h] BYREF

  v1 = *(char **)a1;
  v3 = *(_QWORD *)(a1 + 32);
  v4 = 1;
  memset(v23, 0, 0xF8uLL);
  v7 = v1;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    WPP_RECORDER_SF_qqqqq(*((_QWORD *)WPP_GLOBAL_Control + 8), v5, v6, 0x1Cu, v21);
    v7 = *(char **)a1;
  }
  if ( !v7 )
  {
    v4 = 0;
    goto LABEL_36;
  }
  if ( *(_DWORD *)(v3 + 4) != 1 )
  {
    *(_DWORD *)(a1 + 40) = -1073741637;
    goto LABEL_36;
  }
  if ( (*(_DWORD *)(v3 + 88) & 0x4000) == 0 && (*(_BYTE *)(v3 + 1) < 2u || *(_WORD *)(v3 + 2) < 0xF8u)
    || (*(_DWORD *)(v3 + 244) & 1) == 0
    || *(_DWORD *)(v3 + 236)
    || *(_DWORD *)(v3 + 240) == -1 )
  {
    goto LABEL_35;
  }
  *(_DWORD *)(a1 + 40) = 0;
  if ( *(_DWORD *)(v3 + 48) < 0x10u )
  {
    *(_DWORD *)(v3 + 56) = 16;
    *(_DWORD *)(a1 + 40) = -1073676268;
    goto LABEL_36;
  }
  v8 = *(_QWORD *)(v3 + 40);
  if ( *(_BYTE *)v8 == 0x80 && *(_BYTE *)(v8 + 1) == 1 && *(_WORD *)(v8 + 2) >= 0x10u && !*(_DWORD *)(v8 + 4) )
  {
    OidSourceHandle = (_QWORD *)ndisGetOidSourceHandle(v3);
    if ( OidSourceHandle
      && (ClientDriverHandleFromRequestSourceHandle = ndisGetClientDriverHandleFromRequestSourceHandle(OidSourceHandle)) != 0LL
      && (PDClientViaClientDriverHandle = ndisFindPDClientViaClientDriverHandle(ClientDriverHandleFromRequestSourceHandle)) != 0LL
      && (v12 = *(_QWORD **)(v8 + 8), (struct NDIS_PD_CLIENT *)v12[7] == PDClientViaClientDriverHandle)
      && (char *)v12[6] == v1
      && *((_DWORD *)v12 + 16) == *(_DWORD *)(v3 + 240) )
    {
      *(_QWORD *)(v8 + 8) = v12[9];
      memset(v23, 0, 0xF8uLL);
      LODWORD(v23[11]) |= 8u;
      LODWORD(v23[0]) = 15466902;
      v23[13] = &ndisIntReqGeneric;
      LODWORD(v23[4]) = *(_DWORD *)(v3 + 32);
      HIDWORD(v23[0]) = *(_DWORD *)(v3 + 4);
      LODWORD(v23[1]) = *(_DWORD *)(v3 + 8);
      v23[5] = *(_QWORD *)(v3 + 40);
      LODWORD(v23[6]) = *(_DWORD *)(v3 + 48);
      WORD1(v23[0]) = 248;
      BYTE1(v23[0]) = 2;
      HIDWORD(v23[30]) = 1;
      LODWORD(v23[30]) = *(_DWORD *)(v3 + 240);
      *(_DWORD *)(a1 + 40) = ndisMInvokeBlockingOidRequest(v1, (__int64)v23);
      *(_QWORD *)(v8 + 8) = v12;
      if ( !*(_DWORD *)(a1 + 40) )
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          WPP_RECORDER_SF_qqdqq(*((_QWORD *)WPP_GLOBAL_Control + 8), v13, v6, v14, v21);
        v22.m_Lock = (KPushLockBase *)qword_1C00E67A8;
        v12[9] = 0LL;
        v12[7] = 0LL;
        v22.m_State = Unlocked;
        v22.m_Region.m_Entered = 0;
        KLockHolder::AcquireExclusive(&v22);
        v15 = *v12;
        if ( *(_QWORD **)(*v12 + 8LL) != v12
          || (v16 = (_QWORD *)v12[1], (_QWORD *)*v16 != v12)
          || (*v16 = v15,
              *(_QWORD *)(v15 + 8) = v16,
              v17 = v12 + 4,
              *v12 = 0LL,
              v18 = v12[4],
              *(_QWORD **)(v18 + 8) != v12 + 4)
          || (v19 = (_QWORD *)v12[5], (_QWORD *)*v19 != v17) )
        {
          __fastfail(3u);
        }
        *v19 = v18;
        *(_QWORD *)(v18 + 8) = v19;
        *v17 = 0LL;
        KLockHolder::~KLockHolder(&v22);
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
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qqqqDd(*((_QWORD *)WPP_GLOBAL_Control + 8), v4, v6, 0x1Eu, v21);
  return v4;
}
