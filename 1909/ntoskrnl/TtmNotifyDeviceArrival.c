/*
 * XREFs of TtmNotifyDeviceArrival @ 0x1408BA390
 * Callers:
 *     <none>
 * Callees:
 *     ExReleaseResourceLite @ 0x14003B910 (ExReleaseResourceLite.c)
 *     KeLeaveCriticalRegion @ 0x14003DF60 (KeLeaveCriticalRegion.c)
 *     RtlStringCchLengthW @ 0x1400EDF4C (RtlStringCchLengthW.c)
 *     RtlStringCchCopyW @ 0x140154604 (RtlStringCchCopyW.c)
 *     memset @ 0x1401D77C0 (memset.c)
 *     ExAllocatePoolWithTag @ 0x14036E010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     TtmpFindDeviceByToken @ 0x1408BB420 (TtmpFindDeviceByToken.c)
 *     TtmiAcquireCurrentSession @ 0x1408BD634 (TtmiAcquireCurrentSession.c)
 *     TtmiScheduleSessionWorker @ 0x1408BD7AC (TtmiScheduleSessionWorker.c)
 *     TtmiLogDeviceArrivalNotified @ 0x1408C066C (TtmiLogDeviceArrivalNotified.c)
 *     TtmiLogError @ 0x1408C157C (TtmiLogError.c)
 */

__int64 __fastcall TtmNotifyDeviceArrival(unsigned int a1, __int64 a2, _QWORD *a3, int a4, __int64 a5)
{
  signed __int32 v5; // r15d
  unsigned int v8; // ebx
  __int64 v9; // rbp
  void *v10; // rsi
  NTSTATUS v11; // edi
  int v12; // r14d
  __int64 v13; // r13
  PVOID PoolWithTag; // rax
  __int64 v15; // rax
  unsigned int v16; // eax
  int v17; // ecx
  int v18; // ecx
  int v19; // eax
  _QWORD *v20; // rcx
  size_t pcchLength[9]; // [rsp+30h] [rbp-48h] BYREF
  __int64 v24; // [rsp+90h] [rbp+18h] BYREF
  int v25; // [rsp+98h] [rbp+20h]

  v25 = a4;
  v5 = -1;
  v24 = 0LL;
  v8 = a1;
  v9 = 0LL;
  v10 = 0LL;
  if ( !a3 )
  {
    v11 = -1073741811;
    goto LABEL_27;
  }
  if ( !*a3 || a3[3] && a3[2] )
  {
    v11 = -1073741811;
LABEL_4:
    TtmiLogError("TtmNotifyDeviceArrival");
    v12 = v25;
    goto LABEL_33;
  }
  v13 = a5;
  if ( a5 )
  {
    v11 = RtlStringCchLengthW(*(STRSAFE_PCNZWCH *)(a5 + 8), 0x104uLL, pcchLength);
    if ( v11 < 0 )
      goto LABEL_4;
  }
  v11 = TtmiAcquireCurrentSession(&v24);
  if ( v11 < 0 )
  {
    TtmiLogError("TtmNotifyDeviceArrival");
    v9 = v24;
    goto LABEL_28;
  }
  v9 = v24;
  if ( (unsigned __int8)TtmpFindDeviceByToken(v24, v8, a2, 0LL) )
  {
    v11 = -1073741768;
LABEL_27:
    TtmiLogError("TtmNotifyDeviceArrival");
    goto LABEL_28;
  }
  v5 = _InterlockedIncrement((volatile signed __int32 *)(v9 + 112));
  PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0x268uLL, 0x446D7454u);
  v10 = PoolWithTag;
  if ( PoolWithTag )
  {
    memset(PoolWithTag, 0, 0x268uLL);
    *((_DWORD *)v10 + 4) = a1;
    *((_QWORD *)v10 + 3) = a2;
    *((_DWORD *)v10 + 8) = v5;
    *((_QWORD *)v10 + 5) = *a3;
    *((_QWORD *)v10 + 6) = a3[1];
    *((_QWORD *)v10 + 7) = a3[2];
    v15 = a3[3];
    v12 = v25;
    *((_QWORD *)v10 + 8) = v15;
    *((_DWORD *)v10 + 18) = v12;
    v11 = RtlStringCchCopyW((NTSTRSAFE_PWSTR)v10 + 38, 0x104uLL, *(NTSTRSAFE_PCWSTR *)(v13 + 8));
    if ( v11 >= 0 )
    {
      if ( *((_DWORD *)v10 + 4) == 2 && (v16 = *((_DWORD *)v10 + 18), v16 <= 0x10) && (v17 = 65810, _bittest(&v17, v16)) )
        v18 = 128;
      else
        v18 = 0;
      v19 = *((_DWORD *)v10 + 150);
      *((_DWORD *)v10 + 149) = -1;
      v9 = v24;
      *((_DWORD *)v10 + 150) = v18 | v19 & 0xFFFFFF7F | 1;
      v20 = *(_QWORD **)(v9 + 104);
      if ( *v20 != v9 + 96 )
        __fastfail(3u);
      *((_QWORD *)v10 + 1) = v20;
      *(_QWORD *)v10 = v9 + 96;
      *v20 = v10;
      *(_QWORD *)(v9 + 104) = v10;
      ++*(_DWORD *)(v9 + 116);
      TtmiScheduleSessionWorker(v9, 1LL);
      v10 = 0LL;
      v11 = 0;
    }
    else
    {
      TtmiLogError("TtmNotifyDeviceArrival");
      v9 = v24;
    }
    v8 = a1;
    goto LABEL_29;
  }
  v11 = -1073741670;
  TtmiLogError("TtmNotifyDeviceArrival");
  v9 = v24;
  v8 = a1;
LABEL_28:
  v12 = v25;
LABEL_29:
  if ( v9 )
  {
    ExReleaseResourceLite(&TtmpSessionLock);
    KeLeaveCriticalRegion();
  }
  if ( v10 )
    ExFreePoolWithTag(v10, 0x446D7454u);
LABEL_33:
  TtmiLogDeviceArrivalNotified(v8, a2, v5, v12, v11);
  return (unsigned int)v11;
}
