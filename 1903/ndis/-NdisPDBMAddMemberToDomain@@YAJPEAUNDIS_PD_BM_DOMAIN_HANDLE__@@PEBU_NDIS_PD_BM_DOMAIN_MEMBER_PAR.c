/*
 * XREFs of ?NdisPDBMAddMemberToDomain@@YAJPEAUNDIS_PD_BM_DOMAIN_HANDLE__@@PEBU_NDIS_PD_BM_DOMAIN_MEMBER_PARAMETERS@@PEAPEAUNDIS_PD_BM_DOMAIN_MEMBER_HANDLE__@@@Z @ 0x1C0122E00
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x1C0006260 (WPP_RECORDER_SF_q.c)
 *     WPP_RECORDER_SF_qD @ 0x1C0009DA0 (WPP_RECORDER_SF_qD.c)
 *     __security_check_cookie @ 0x1C0040770 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00410C0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0041440 (memset.c)
 *     ??1KLockHolder@@QEAA@XZ @ 0x1C00FCD0C (--1KLockHolder@@QEAA@XZ.c)
 *     ?AcquireExclusive@KLockHolder@@QEAAXXZ @ 0x1C00FCF64 (-AcquireExclusive@KLockHolder@@QEAAXXZ.c)
 */

__int64 __fastcall NdisPDBMAddMemberToDomain(
        KPushLockBase *a1,
        const struct _NDIS_PD_BM_DOMAIN_MEMBER_PARAMETERS *a2,
        struct NDIS_PD_BM_DOMAIN_MEMBER_HANDLE__ **a3)
{
  void *MiniportAdapterContext; // r13
  struct NDIS_PD_BM_DOMAIN_HANDLE__ **v5; // rbx
  struct _DMA_ADAPTER *v6; // r14
  struct NDIS_PD_BM_DOMAIN_MEMBER_HANDLE__ **v7; // r12
  __int64 v9; // rdi
  struct NDIS_PD_BM_DOMAIN_HANDLE__ **PoolWithTag; // rax
  int v11; // edi
  struct NDIS_PD_BM_DOMAIN_HANDLE__ *v12; // rsi
  char v13; // al
  int v14; // eax
  _DEVICE_OBJECT *v15; // rcx
  struct _DMA_ADAPTER *DmaAdapter; // rax
  int v17; // edx
  _DMA_OPERATIONS *DmaOperations; // r12
  int v19; // edx
  int v20; // r9d
  __int64 v21; // rax
  struct NDIS_PD_BM_DOMAIN_HANDLE__ **Value; // rax
  ULONG NumberOfMapRegisters; // [rsp+40h] [rbp-59h] BYREF
  struct NDIS_PD_BM_DOMAIN_MEMBER_HANDLE__ **v25; // [rsp+48h] [rbp-51h]
  KLockHolder v26; // [rsp+50h] [rbp-49h] BYREF
  _BYTE DeviceDescription[64]; // [rsp+70h] [rbp-29h] BYREF

  MiniportAdapterContext = a2->MiniportAdapterContext;
  v26.m_Lock = a1;
  *a3 = 0LL;
  v5 = 0LL;
  v26.m_State = Unlocked;
  v6 = 0LL;
  v26.m_Region.m_Entered = 0;
  v7 = a3;
  v25 = a3;
  KLockHolder::AcquireExclusive(&v26);
  if ( a2->Header.Type != 0x80 || a2->Header.Revision != 1 || a2->Header.Size < 0x10u || a2->Flags )
  {
    v11 = -1073741811;
    goto LABEL_39;
  }
  v9 = *((_QWORD *)MiniportAdapterContext + 684);
  PoolWithTag = (struct NDIS_PD_BM_DOMAIN_HANDLE__ **)ExAllocatePoolWithTag(PagedPool, 0x20uLL, 0x6D41444Eu);
  v5 = PoolWithTag;
  if ( PoolWithTag )
  {
    PoolWithTag[2] = 0LL;
    PoolWithTag[3] = 0LL;
    PoolWithTag[1] = 0LL;
    *PoolWithTag = 0LL;
  }
  else
  {
    v5 = 0LL;
  }
  if ( !v5 )
  {
    v11 = -1073741670;
    goto LABEL_43;
  }
  v12 = (struct NDIS_PD_BM_DOMAIN_HANDLE__ *)&a1[1];
  if ( *(struct NDIS_PD_BM_DOMAIN_HANDLE__ **)v12 == v12 )
  {
    v13 = *(_BYTE *)(v9 + 14);
    *((_BYTE *)&a1[3].m_Lock.0 + 1) = v13;
    goto LABEL_12;
  }
  if ( a1[3].m_Lock.0 )
  {
    v11 = -1073741808;
    goto LABEL_41;
  }
  v13 = *((_BYTE *)&a1[3].m_Lock.0 + 1);
  if ( v13 != *(_BYTE *)(v9 + 14) )
  {
    v11 = -1073740007;
LABEL_41:
    if ( v5 )
      ExFreePoolWithTag(v5, 0x6D41444Eu);
    goto LABEL_43;
  }
LABEL_12:
  if ( !v13 )
  {
    memset(DeviceDescription, 0, sizeof(DeviceDescription));
    v14 = *(_DWORD *)(v9 + 20);
    v15 = (_DEVICE_OBJECT *)*((_QWORD *)MiniportAdapterContext + 479);
    NumberOfMapRegisters = 0;
    *(_DWORD *)&DeviceDescription[20] = -1;
    *(_DWORD *)&DeviceDescription[40] = v14;
    *(_DWORD *)DeviceDescription = 3;
    *(_WORD *)&DeviceDescription[4] = 257;
    *(_DWORD *)&DeviceDescription[32] = 0x20000;
    DmaAdapter = IoGetDmaAdapter(v15, (struct _DEVICE_DESCRIPTION *)DeviceDescription, &NumberOfMapRegisters);
    v6 = DmaAdapter;
    if ( !DmaAdapter )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v17) = 2;
        WPP_RECORDER_SF_q(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          v17,
          29,
          10,
          (struct _GUID *)&WPP_f5f2a9276cbf386d1a6524cebc79c0b9_Traceguids,
          (char)MiniportAdapterContext);
      }
      v11 = -1073741823;
      goto LABEL_41;
    }
    if ( !*(_BYTE *)&a1[3].m_Lock.0 )
    {
      DmaOperations = DmaAdapter->DmaOperations;
      v11 = DmaOperations->LeaveDmaDomain(DmaAdapter);
      if ( v11 < 0 )
      {
        if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          goto LABEL_39;
        v20 = 11;
        goto LABEL_25;
      }
      if ( *(struct NDIS_PD_BM_DOMAIN_HANDLE__ **)v12 == v12 )
      {
        v11 = DmaOperations->JoinDmaDomain(v6, (void *)-1LL);
        if ( v11 < 0 )
        {
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            v20 = 12;
LABEL_25:
            LOBYTE(v19) = 2;
            WPP_RECORDER_SF_qD(
              *((_QWORD *)WPP_GLOBAL_Control + 8),
              v19,
              29,
              v20,
              (struct _GUID *)&WPP_f5f2a9276cbf386d1a6524cebc79c0b9_Traceguids,
              (char)MiniportAdapterContext,
              v11);
            goto LABEL_39;
          }
          goto LABEL_39;
        }
      }
      else
      {
        v21 = (*(__int64 (**)(void))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)v12 + 24LL) + 8LL) + 264LL))();
        v11 = DmaOperations->JoinDmaDomain(v6, (void *)v21);
        if ( v11 < 0 )
        {
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            v20 = 13;
            goto LABEL_25;
          }
LABEL_39:
          if ( v6 )
            v6->DmaOperations->PutDmaAdapter(v6);
          goto LABEL_41;
        }
      }
      v7 = v25;
    }
    v5[3] = (struct NDIS_PD_BM_DOMAIN_HANDLE__ *)v6;
  }
  Value = (struct NDIS_PD_BM_DOMAIN_HANDLE__ **)a1[2].m_Lock.Value;
  if ( *Value != v12 )
    __fastfail(3u);
  *v5 = v12;
  v11 = 0;
  v5[1] = (struct NDIS_PD_BM_DOMAIN_HANDLE__ *)Value;
  *Value = (struct NDIS_PD_BM_DOMAIN_HANDLE__ *)v5;
  a1[2].m_Lock.Value = (unsigned __int64)v5;
  v5[2] = (struct NDIS_PD_BM_DOMAIN_HANDLE__ *)a1;
  *v7 = (struct NDIS_PD_BM_DOMAIN_MEMBER_HANDLE__ *)v5;
LABEL_43:
  KLockHolder::~KLockHolder(&v26);
  return (unsigned int)v11;
}
