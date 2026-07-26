/*
 * XREFs of ?ndisPcwCollectData@@YAJPEAU_PCW_BUFFER@@@Z @ 0x1C00B8FF8
 * Callers:
 *     ?ndisCounterSetProviderCallback@@YAJW4_PCW_CALLBACK_TYPE@@PEAT_PCW_CALLBACK_INFORMATION@@PEAX@Z @ 0x1C00B8FA0 (-ndisCounterSetProviderCallback@@YAJW4_PCW_CALLBACK_TYPE@@PEAT_PCW_CALLBACK_INFORMATION@@PEAX@Z.c)
 * Callees:
 *     ?ndisPcwGetPerCpuDataForProcessor@@YAPEAU_NDIS_PCW_PER_CPU_DATA_BLOCK@@PEAU_NDIS_PCW_DATA_BLOCK@@K@Z @ 0x1C00099C8 (-ndisPcwGetPerCpuDataForProcessor@@YAPEAU_NDIS_PCW_PER_CPU_DATA_BLOCK@@PEAU_NDIS_PCW_DATA_BLOCK@.c)
 *     ndisReferenceMiniport @ 0x1C0009B70 (ndisReferenceMiniport.c)
 *     ndisDereferenceMiniport @ 0x1C0009DEC (ndisDereferenceMiniport.c)
 *     ndisQuerySetMiniport @ 0x1C000AC20 (ndisQuerySetMiniport.c)
 *     NdisGroupActiveProcessorCount @ 0x1C0025BB0 (NdisGroupActiveProcessorCount.c)
 *     __security_check_cookie @ 0x1C0026050 (__security_check_cookie.c)
 *     memset @ 0x1C0027180 (memset.c)
 *     ?ndisSumDataBlock@@YAXPEA_K0@Z @ 0x1C00B9288 (-ndisSumDataBlock@@YAXPEA_K0@Z.c)
 *     ?AcquireExclusive@KLockHolder@@QEAAXXZ @ 0x1C00C2AE0 (-AcquireExclusive@KLockHolder@@QEAAXXZ.c)
 *     ??1KLockHolder@@QEAA@XZ @ 0x1C00C2E30 (--1KLockHolder@@QEAA@XZ.c)
 *     ?ReleaseExclusive@KLockHolder@@QEAAXXZ @ 0x1C00C2F4C (-ReleaseExclusive@KLockHolder@@QEAAXXZ.c)
 */

__int64 __fastcall ndisPcwCollectData(PPCW_BUFFER Buffer)
{
  ULONG active; // r15d
  PVOID i; // rbx
  int v4; // esi
  struct _NDIS_PCW_PER_CPU_DATA_BLOCK *PerCpuDataForProcessor; // rdx
  unsigned __int64 *v6; // rcx
  __int64 v7; // r9
  ULONG v8; // r8d
  NTSTATUS v9; // edi
  __int64 v10; // r8
  _QWORD *v11; // rsi
  __int64 v12; // rax
  unsigned __int64 v13; // rcx
  ULONG v15; // r8d
  int SetMiniport; // eax
  unsigned __int64 v18; // [rsp+30h] [rbp-D0h] BYREF
  struct _PCW_DATA v19; // [rsp+38h] [rbp-C8h] BYREF
  KLockHolder v20; // [rsp+48h] [rbp-B8h] BYREF
  struct _PCW_DATA Data; // [rsp+60h] [rbp-A0h] BYREF
  _BYTE v22[248]; // [rsp+70h] [rbp-90h] BYREF
  unsigned __int64 v23[38]; // [rsp+170h] [rbp+70h] BYREF
  unsigned __int64 v24[38]; // [rsp+2A0h] [rbp+1A0h] BYREF

  active = NdisGroupActiveProcessorCount(0xFFFFu);
  memset(v24, 0, sizeof(v24));
  v20.m_State = Unlocked;
  v20.m_Lock = (KPushLockBase *)&ndisPcwMutex;
  v20.m_Region.m_Entered = 0;
  KLockHolder::AcquireExclusive(&v20);
LABEL_2:
  for ( i = ndisPcwDataBlockList; ; i = (PVOID)*((_QWORD *)i + 20) )
  {
    if ( !i )
    {
      v19.Size = 304;
      v19.Data = v24;
      v9 = PcwAddInstance(Buffer, &ndisPcwSystemTotalInstanceName, 0xFFFFFFFE, 1u, &v19);
      goto LABEL_19;
    }
    memset(v23, 0, sizeof(v23));
    v4 = 0;
    if ( active )
      break;
LABEL_9:
    v10 = *((_QWORD *)i + 22);
    if ( v10 && (*(_DWORD *)(v10 + 48) & 0x2000000) != 0 && ndisReferenceMiniport(*((_QWORD *)i + 22)) )
    {
      ++*((_DWORD *)i + 42);
      v11 = (_QWORD *)*((_QWORD *)i + 22);
      KLockHolder::ReleaseExclusive(&v20);
      v12 = v11[446];
      v18 = 0LL;
      if ( v12 && (*(_DWORD *)(v12 + 8) & 2) != 0 )
      {
        memset(v22, 0, sizeof(v22));
        *(_DWORD *)&v22[88] |= 8u;
        *(_QWORD *)&v22[104] = &ndisIntReqGeneric;
        *(_DWORD *)v22 = 15466902;
        *(_QWORD *)&v22[40] = &v18;
        *(_DWORD *)&v22[32] = 66101;
        *(_QWORD *)&v22[4] = 2LL;
        *(_DWORD *)&v22[48] = 8;
        SetMiniport = ndisQuerySetMiniport(v11, 0LL, (struct _NDIS_OID_REQUEST *)v22, 0LL, 0LL);
        v13 = v18;
        if ( SetMiniport )
          v13 = 0LL;
      }
      else
      {
        v13 = 0LL;
      }
      v23[37] = v13;
      ndisDereferenceMiniport((__int64)v11, 0x5Eu);
      KLockHolder::AcquireExclusive(&v20);
      if ( (*((_DWORD *)i + 42))-- == 1 )
      {
        ExFreePoolWithTag(i, 0);
        goto LABEL_2;
      }
    }
    v15 = *((_DWORD *)i + 46);
    v19.Data = v23;
    v19.Size = 304;
    v9 = PcwAddInstance(Buffer, (PCUNICODE_STRING)i + 12, v15, 1u, &v19);
    if ( v9 < 0 )
      goto LABEL_19;
    ndisSumDataBlock(v24, v23);
  }
  while ( 1 )
  {
    PerCpuDataForProcessor = ndisPcwGetPerCpuDataForProcessor((struct _NDIS_PCW_DATA_BLOCK *)i, v4);
    v6 = v23;
    v7 = 38LL;
    do
    {
      *v6 += *(unsigned __int64 *)((char *)v6 + PerCpuDataForProcessor - (struct _NDIS_PCW_PER_CPU_DATA_BLOCK *)v23);
      ++v6;
      --v7;
    }
    while ( v7 );
    v8 = *((_DWORD *)PerCpuDataForProcessor + 102);
    Data.Data = PerCpuDataForProcessor;
    Data.Size = 304;
    v9 = PcwAddInstance(Buffer, (PCUNICODE_STRING)PerCpuDataForProcessor + 26, v8, 1u, &Data);
    if ( v9 < 0 )
      break;
    if ( ++v4 >= active )
      goto LABEL_9;
  }
LABEL_19:
  KLockHolder::~KLockHolder(&v20);
  return (unsigned int)v9;
}
