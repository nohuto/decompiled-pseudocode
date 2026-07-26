/*
 * XREFs of ?ndisBindGetProtocolDriver@@YA?AV?$KRef@UNDIS_BIND_PROTOCOL_DRIVER@@@@PEAU_UNICODE_STRING@@_N1@Z @ 0x1C0102E84
 * Callers:
 *     NdisRegisterProtocolDriver @ 0x1C0037860 (NdisRegisterProtocolDriver.c)
 *     NdisRegisterProtocol @ 0x1C0092F20 (NdisRegisterProtocol.c)
 *     ?BuildProtocolLink@BindStack@Ndis@@AEAA?AV?$unique_ptr@UNDIS_BIND_PROTOCOL_LINK@@U?$default_delete@UNDIS_BIND_PROTOCOL_LINK@@@wistd@@@wistd@@PEAU_UNICODE_STRING@@@Z @ 0x1C0102BAC (-BuildProtocolLink@BindStack@Ndis@@AEAA-AV-$unique_ptr@UNDIS_BIND_PROTOCOL_LINK@@U-$default_dele.c)
 * Callees:
 *     ??1KLockHolder@@QEAA@XZ @ 0x1C00FCD0C (--1KLockHolder@@QEAA@XZ.c)
 *     ?AcquireExclusive@KLockHolder@@QEAAXXZ @ 0x1C00FCF64 (-AcquireExclusive@KLockHolder@@QEAAXXZ.c)
 *     ?Initialize@KString@Rtl@@SAPEAU12@PEBU_UNICODE_STRING@@@Z @ 0x1C01019FC (-Initialize@KString@Rtl@@SAPEAU12@PEBU_UNICODE_STRING@@@Z.c)
 *     ?ndisBindReadProtocolDriverConfiguration@@YA_NPEAUNDIS_BIND_PROTOCOL_DRIVER@@_N@Z @ 0x1C0101E40 (-ndisBindReadProtocolDriverConfiguration@@YA_NPEAUNDIS_BIND_PROTOCOL_DRIVER@@_N@Z.c)
 *     ?grow@?$KArray@V?$KRef@UNDIS_BIND_PROTOCOL_DRIVER@@@@$00@Rtl@@AEAA_N_K@Z @ 0x1C010A4B8 (-grow@-$KArray@V-$KRef@UNDIS_BIND_PROTOCOL_DRIVER@@@@$00@Rtl@@AEAA_N_K@Z.c)
 *     ??$allocate@$$V@?$KRef@UNDIS_BIND_PROTOCOL_DRIVER@@@@QEAA_NXZ @ 0x1C010A748 (--$allocate@$$V@-$KRef@UNDIS_BIND_PROTOCOL_DRIVER@@@@QEAA_NXZ.c)
 *     ??_GKRefHolder@?$KRef@UNDIS_BIND_PROTOCOL_DRIVER@@@@QEAAPEAXI@Z @ 0x1C0116DC8 (--_GKRefHolder@-$KRef@UNDIS_BIND_PROTOCOL_DRIVER@@@@QEAAPEAXI@Z.c)
 */

_QWORD *__fastcall ndisBindGetProtocolDriver(_QWORD *a1, const struct _UNICODE_STRING *a2, char a3, char a4)
{
  __int64 v7; // r14
  unsigned __int64 v8; // rbx
  __int64 v9; // r13
  __int64 v10; // rsi
  const wchar_t **v11; // rcx
  __int64 v12; // rax
  PVOID v14; // rbx
  struct Rtl::KString *v15; // rax
  void *v16; // rcx
  __int64 v17; // rsi
  PVOID v18; // rax
  volatile signed __int32 *v19; // rax
  bool v20; // zf
  PVOID P; // [rsp+20h] [rbp-20h] BYREF
  KLockHolder v22; // [rsp+28h] [rbp-18h] BYREF

  v22.m_State = Unlocked;
  v22.m_Lock = (KPushLockBase *)qword_1C00E67B8;
  v22.m_Region.m_Entered = 0;
  KLockHolder::AcquireExclusive(&v22);
  v7 = qword_1C00E67B8;
  v8 = 0LL;
  v9 = *(unsigned int *)(qword_1C00E67B8 + 44);
  while ( v8 != v9 )
  {
    if ( v8 >= *(unsigned int *)(v7 + 44) )
      __fastfail(5u);
    v10 = *(_QWORD *)(v7 + 48);
    v11 = *(const wchar_t ***)(*(_QWORD *)(v10 + 8 * v8) + 24LL);
    if ( *(_WORD *)v11 == a2->Length && !_wcsnicmp(v11[1], a2->Buffer, (unsigned __int64)*(unsigned __int16 *)v11 >> 1) )
    {
      if ( !a3 || ndisBindReadProtocolDriverConfiguration(*(struct NDIS_BIND_PROTOCOL_DRIVER **)(v10 + 8 * v8), 1) )
      {
        v12 = *(_QWORD *)(v10 + 8 * v8);
        *a1 = v12;
        if ( v12 )
          _InterlockedIncrement((volatile signed __int32 *)(v12 + 48));
      }
      else
      {
        *a1 = 0LL;
      }
      goto LABEL_10;
    }
    ++v8;
  }
  P = 0LL;
  if ( (unsigned __int8)KRef<NDIS_BIND_PROTOCOL_DRIVER>::allocate<>(&P) )
  {
    v14 = P;
    v15 = Rtl::KString::Initialize(a2);
    v16 = (void *)*((_QWORD *)v14 + 3);
    *((_QWORD *)v14 + 3) = v15;
    if ( v16 )
    {
      ExFreePoolWithTag(v16, 0x7274534Bu);
      v15 = (struct Rtl::KString *)*((_QWORD *)v14 + 3);
    }
    if ( v15 && ndisBindReadProtocolDriverConfiguration((struct NDIS_BIND_PROTOCOL_DRIVER *)v14, a4) )
    {
      v17 = qword_1C00E67B8;
      if ( (unsigned __int8)Rtl::KArray<KRef<NDIS_BIND_PROTOCOL_DRIVER>,1>::grow(
                              qword_1C00E67B8 + 40,
                              (unsigned int)(*(_DWORD *)(qword_1C00E67B8 + 44) + 1)) )
      {
        *(_QWORD *)(*(_QWORD *)(v17 + 48) + 8LL * *(unsigned int *)(v17 + 44)) = v14;
        _InterlockedIncrement((volatile signed __int32 *)v14 + 12);
        v18 = P;
        ++*(_DWORD *)(v17 + 44);
        *a1 = v18;
        goto LABEL_10;
      }
      *a1 = 0LL;
    }
    else
    {
      *a1 = 0LL;
    }
    v20 = _InterlockedExchangeAdd((volatile signed __int32 *)v14 + 12, 0xFFFFFFFF) == 1;
  }
  else
  {
    v19 = (volatile signed __int32 *)P;
    *a1 = 0LL;
    if ( !v19 )
      goto LABEL_10;
    v20 = _InterlockedExchangeAdd(v19 + 12, 0xFFFFFFFF) == 1;
  }
  if ( v20 )
    KRef<NDIS_BIND_PROTOCOL_DRIVER>::KRefHolder::`scalar deleting destructor'(P);
LABEL_10:
  KLockHolder::~KLockHolder(&v22);
  return a1;
}
