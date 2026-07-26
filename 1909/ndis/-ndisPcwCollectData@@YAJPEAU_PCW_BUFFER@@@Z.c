/*
 * XREFs of ?ndisPcwCollectData@@YAJPEAU_PCW_BUFFER@@@Z @ 0x1C00FFA44
 * Callers:
 *     ?ndisCounterSetProviderCallback@@YAJW4_PCW_CALLBACK_TYPE@@PEAT_PCW_CALLBACK_INFORMATION@@PEAX@Z @ 0x1C00FF9F0 (-ndisCounterSetProviderCallback@@YAJW4_PCW_CALLBACK_TYPE@@PEAT_PCW_CALLBACK_INFORMATION@@PEAX@Z.c)
 * Callees:
 *     ndisDereferenceMiniport @ 0x1C000286C (ndisDereferenceMiniport.c)
 *     ndisReferenceMiniport @ 0x1C0002B20 (ndisReferenceMiniport.c)
 *     ndisQuerySetMiniport @ 0x1C001136C (ndisQuerySetMiniport.c)
 *     ?ndisPcwGetPerCpuDataForProcessor@@YAPEAU_NDIS_PCW_PER_CPU_DATA_BLOCK@@PEAU_NDIS_PCW_DATA_BLOCK@@K@Z @ 0x1C0011D40 (-ndisPcwGetPerCpuDataForProcessor@@YAPEAU_NDIS_PCW_PER_CPU_DATA_BLOCK@@PEAU_NDIS_PCW_DATA_BLOCK@.c)
 *     NdisGroupActiveProcessorCount @ 0x1C003E9E0 (NdisGroupActiveProcessorCount.c)
 *     __security_check_cookie @ 0x1C0040760 (__security_check_cookie.c)
 *     memset @ 0x1C00416C0 (memset.c)
 *     ??1KLockHolder@@QEAA@XZ @ 0x1C00FCD0C (--1KLockHolder@@QEAA@XZ.c)
 *     ?AcquireExclusive@KLockHolder@@QEAAXXZ @ 0x1C00FCF64 (-AcquireExclusive@KLockHolder@@QEAAXXZ.c)
 */

__int64 __fastcall ndisPcwCollectData(PPCW_BUFFER Buffer)
{
  ULONG active; // r15d
  PVOID i; // rbx
  int v4; // esi
  struct _NDIS_PCW_PER_CPU_DATA_BLOCK *PerCpuDataForProcessor; // rdx
  _QWORD *v6; // rcx
  __int64 v7; // r9
  ULONG v8; // r8d
  NTSTATUS v9; // edi
  __int64 v10; // r8
  KPushLockBase *m_Lock; // rcx
  __int64 v12; // rsi
  __int64 v13; // rax
  __int64 v14; // rcx
  bool v15; // zf
  ULONG v16; // r8d
  __int64 v17; // rcx
  __int64 v18; // rdx
  int SetMiniport; // eax
  __int64 v21; // [rsp+30h] [rbp-D0h] BYREF
  struct _PCW_DATA v22; // [rsp+38h] [rbp-C8h] BYREF
  KLockHolder v23; // [rsp+48h] [rbp-B8h] BYREF
  struct _PCW_DATA Data; // [rsp+60h] [rbp-A0h] BYREF
  _QWORD v25[32]; // [rsp+70h] [rbp-90h] BYREF
  _QWORD v26[38]; // [rsp+170h] [rbp+70h] BYREF
  _QWORD v27[38]; // [rsp+2A0h] [rbp+1A0h] BYREF

  active = NdisGroupActiveProcessorCount(0xFFFFu);
  memset(v27, 0, sizeof(v27));
  v23.m_State = Unlocked;
  v23.m_Lock = (KPushLockBase *)&ndisPcwMutex;
  v23.m_Region.m_Entered = 0;
  KLockHolder::AcquireExclusive(&v23);
LABEL_2:
  for ( i = ndisPcwDataBlockList; ; i = (PVOID)*((_QWORD *)i + 20) )
  {
    if ( !i )
    {
      v22.Size = 304;
      v22.Data = v27;
      v9 = PcwAddInstance(Buffer, &ndisPcwSystemTotalInstanceName, 0xFFFFFFFE, 1u, &v22);
      goto LABEL_21;
    }
    memset(v26, 0, sizeof(v26));
    v4 = 0;
    if ( active )
      break;
LABEL_9:
    v10 = *((_QWORD *)i + 22);
    if ( v10 && (*(_DWORD *)(v10 + 48) & 0x2000000) != 0 && (unsigned __int8)ndisReferenceMiniport(*((_QWORD *)i + 22)) )
    {
      m_Lock = v23.m_Lock;
      ++*((_DWORD *)i + 42);
      v12 = *((_QWORD *)i + 22);
      ExReleasePushLockExclusiveEx(m_Lock, 0LL);
      KeLeaveCriticalRegion();
      memset(v25, 0, 0xF8uLL);
      v13 = *(_QWORD *)(v12 + 3544);
      v21 = 0LL;
      if ( !v13 )
        goto LABEL_14;
      if ( (*(_DWORD *)(v13 + 8) & 2) != 0 )
      {
        LODWORD(v25[11]) |= 8u;
        v25[13] = &ndisIntReqGeneric;
        LODWORD(v25[0]) = 15466902;
        v25[5] = &v21;
        LODWORD(v25[4]) = 66101;
        *(_QWORD *)((char *)v25 + 4) = 2LL;
        LODWORD(v25[6]) = 8;
        SetMiniport = ndisQuerySetMiniport(v12, 0LL, (__int64)v25, 0, 0LL);
        v14 = v21;
        if ( SetMiniport )
          v14 = 0LL;
      }
      else
      {
LABEL_14:
        v14 = 0LL;
      }
      v26[37] = v14;
      ndisDereferenceMiniport(v12, 0x5Eu);
      KeEnterCriticalRegion();
      v23.m_Region.m_Entered = 1;
      ExAcquirePushLockExclusiveEx(v23.m_Lock, 0LL);
      v15 = (*((_DWORD *)i + 42))-- == 1;
      v23.m_State = Exclusive;
      if ( v15 )
      {
        ExFreePoolWithTag(i, 0);
        goto LABEL_2;
      }
    }
    v16 = *((_DWORD *)i + 46);
    v22.Data = v26;
    v22.Size = 304;
    v9 = PcwAddInstance(Buffer, (PCUNICODE_STRING)i + 12, v16, 1u, &v22);
    if ( v9 < 0 )
      goto LABEL_21;
    v17 = 0LL;
    v18 = 38LL;
    do
    {
      v27[v17] += v26[v17];
      ++v17;
      --v18;
    }
    while ( v18 );
  }
  while ( 1 )
  {
    PerCpuDataForProcessor = ndisPcwGetPerCpuDataForProcessor((struct _NDIS_PCW_DATA_BLOCK *)i, v4);
    v6 = v26;
    v7 = 38LL;
    do
    {
      *v6 += *(_QWORD *)((char *)v6 + PerCpuDataForProcessor - (struct _NDIS_PCW_PER_CPU_DATA_BLOCK *)v26);
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
LABEL_21:
  KLockHolder::~KLockHolder(&v23);
  return (unsigned int)v9;
}
