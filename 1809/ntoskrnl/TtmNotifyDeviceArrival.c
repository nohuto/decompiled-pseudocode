/*
 * XREFs of TtmNotifyDeviceArrival @ 0x14087E220
 * Callers:
 *     <none>
 * Callees:
 *     RtlStringCchLengthW @ 0x14000733C (RtlStringCchLengthW.c)
 *     KeLeaveCriticalRegion @ 0x14004F410 (KeLeaveCriticalRegion.c)
 *     ExReleaseResourceLite @ 0x14004F590 (ExReleaseResourceLite.c)
 *     RtlStringCchCopyW @ 0x140092360 (RtlStringCchCopyW.c)
 *     memset @ 0x1401D1980 (memset.c)
 *     ExAllocatePoolWithTag @ 0x14034C010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     TtmiLogError @ 0x1407628CC (TtmiLogError.c)
 *     TtmpFindDeviceByToken @ 0x14087F2B0 (TtmpFindDeviceByToken.c)
 *     TtmiAcquireCurrentSession @ 0x140881424 (TtmiAcquireCurrentSession.c)
 *     TtmiScheduleSessionWorker @ 0x140881480 (TtmiScheduleSessionWorker.c)
 *     TtmiLogDeviceArrivalNotified @ 0x14088424C (TtmiLogDeviceArrivalNotified.c)
 */

__int64 __fastcall TtmNotifyDeviceArrival(unsigned int a1, __int64 a2, _QWORD *a3, int a4, __int64 a5)
{
  signed __int32 v5; // r15d
  unsigned int v8; // ebx
  __int64 v9; // rbp
  void *v10; // rsi
  int v11; // edx
  unsigned int v12; // edi
  int v13; // r8d
  int v14; // r9d
  int v15; // r14d
  __int64 v16; // r13
  NTSTATUS v17; // eax
  int v18; // eax
  int v19; // edx
  PVOID PoolWithTag; // rax
  __int64 v21; // rax
  NTSTATUS v22; // eax
  unsigned int v23; // eax
  int v24; // ecx
  int v25; // ecx
  int v26; // eax
  _QWORD *v27; // rcx
  size_t pcchLength[9]; // [rsp+30h] [rbp-48h] BYREF
  __int64 v31; // [rsp+90h] [rbp+18h] BYREF
  int v32; // [rsp+98h] [rbp+20h]

  v32 = a4;
  v5 = -1;
  v31 = 0LL;
  v8 = a1;
  v9 = 0LL;
  v10 = 0LL;
  if ( !a3 )
  {
    v12 = -1073741811;
    v19 = 385;
    goto LABEL_30;
  }
  if ( !*a3 )
  {
    v11 = 373;
LABEL_4:
    v12 = -1073741811;
    v13 = -1;
    v14 = -1073741811;
LABEL_5:
    TtmiLogError("TtmNotifyDeviceArrival", v11, v13, v14);
    v15 = v32;
    goto LABEL_36;
  }
  if ( a3[3] && a3[2] )
  {
    v11 = 380;
    goto LABEL_4;
  }
  v16 = a5;
  if ( a5 )
  {
    v17 = RtlStringCchLengthW(*(STRSAFE_PCNZWCH *)(a5 + 8), 0x104uLL, pcchLength);
    v12 = v17;
    if ( v17 < 0 )
    {
      v14 = v17;
      v13 = v17;
      v11 = 400;
      goto LABEL_5;
    }
  }
  v18 = TtmiAcquireCurrentSession(&v31);
  v12 = v18;
  if ( v18 < 0 )
  {
    TtmiLogError("TtmNotifyDeviceArrival", 411, v18, v18);
    v9 = v31;
    goto LABEL_31;
  }
  v9 = v31;
  if ( (unsigned __int8)TtmpFindDeviceByToken(v31, v8, a2, 0LL) )
  {
    v12 = -1073741768;
    v19 = 429;
LABEL_30:
    TtmiLogError("TtmNotifyDeviceArrival", v19, -1, v12);
    goto LABEL_31;
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
    v21 = a3[3];
    v15 = v32;
    *((_QWORD *)v10 + 8) = v21;
    *((_DWORD *)v10 + 18) = v15;
    v22 = RtlStringCchCopyW((NTSTRSAFE_PWSTR)v10 + 38, 0x104uLL, *(NTSTRSAFE_PCWSTR *)(v16 + 8));
    v12 = v22;
    if ( v22 >= 0 )
    {
      if ( *((_DWORD *)v10 + 4) == 2 && (v23 = *((_DWORD *)v10 + 18), v23 <= 0x10) && (v24 = 65810, _bittest(&v24, v23)) )
        v25 = 128;
      else
        v25 = 0;
      v26 = *((_DWORD *)v10 + 150);
      *((_DWORD *)v10 + 149) = -1;
      v9 = v31;
      *((_DWORD *)v10 + 150) = v25 | v26 & 0xFFFFFF7F | 1;
      v27 = *(_QWORD **)(v9 + 104);
      if ( *v27 != v9 + 96 )
        __fastfail(3u);
      *((_QWORD *)v10 + 1) = v27;
      *(_QWORD *)v10 = v9 + 96;
      *v27 = v10;
      *(_QWORD *)(v9 + 104) = v10;
      ++*(_DWORD *)(v9 + 116);
      TtmiScheduleSessionWorker(v9, 1LL);
      v10 = 0LL;
      v12 = 0;
    }
    else
    {
      TtmiLogError("TtmNotifyDeviceArrival", 474, v22, v22);
      v9 = v31;
    }
    v8 = a1;
    goto LABEL_32;
  }
  v12 = -1073741670;
  TtmiLogError("TtmNotifyDeviceArrival", 451, -1, -1073741670);
  v9 = v31;
  v8 = a1;
LABEL_31:
  v15 = v32;
LABEL_32:
  if ( v9 )
  {
    ExReleaseResourceLite(&TtmpSessionLock);
    KeLeaveCriticalRegion();
  }
  if ( v10 )
    ExFreePoolWithTag(v10, 0x446D7454u);
LABEL_36:
  TtmiLogDeviceArrivalNotified(v8, a2, v5, v15, v12);
  return v12;
}
