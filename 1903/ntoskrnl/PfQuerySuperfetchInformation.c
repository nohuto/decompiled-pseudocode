/*
 * XREFs of PfQuerySuperfetchInformation @ 0x1405CE500
 * Callers:
 *     ExpQuerySystemInformation @ 0x1405CAF30 (ExpQuerySystemInformation.c)
 * Callees:
 *     SepPrivilegeCheck @ 0x140005340 (SepPrivilegeCheck.c)
 *     RtlEqualSid @ 0x1400053E0 (RtlEqualSid.c)
 *     ObFastReferenceObject @ 0x14003AF90 (ObFastReferenceObject.c)
 *     ObFastDereferenceObject @ 0x14003B130 (ObFastDereferenceObject.c)
 *     KeLeaveCriticalRegion @ 0x14003E220 (KeLeaveCriticalRegion.c)
 *     ObfDereferenceObject @ 0x14003E260 (ObfDereferenceObject.c)
 *     ObfReferenceObject @ 0x14003E330 (ObfReferenceObject.c)
 *     ExAcquirePushLockSharedEx @ 0x14003EF30 (ExAcquirePushLockSharedEx.c)
 *     KeAbPostRelease @ 0x14003F880 (KeAbPostRelease.c)
 *     KeLeaveCriticalRegionThread @ 0x14003FC70 (KeLeaveCriticalRegionThread.c)
 *     ObFastReferenceObjectLocked @ 0x14007F850 (ObFastReferenceObjectLocked.c)
 *     ExfReleasePushLockShared @ 0x14009E3E0 (ExfReleasePushLockShared.c)
 *     PfpMemoryListQuery @ 0x14015B318 (PfpMemoryListQuery.c)
 *     PfpMemoryRangesQuery @ 0x14017ED6C (PfpMemoryRangesQuery.c)
 *     __security_check_cookie @ 0x14019E700 (__security_check_cookie.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 *     PfpPfnPrioRequest @ 0x1405CED50 (PfpPfnPrioRequest.c)
 *     ProbeForWrite @ 0x1405F07E0 (ProbeForWrite.c)
 *     SepAdtPrivilegedServiceAuditAlarm @ 0x140621840 (SepAdtPrivilegedServiceAuditAlarm.c)
 *     PfpPrivSourceEnum @ 0x1406358EC (PfpPrivSourceEnum.c)
 *     PfGetCompletedTrace @ 0x140657F14 (PfGetCompletedTrace.c)
 *     SepFilterPrivilegeAudits @ 0x1406D1C3C (SepFilterPrivilegeAudits.c)
 *     PfpQueryGpuUtilization @ 0x1406EAC94 (PfpQueryGpuUtilization.c)
 *     PfpVirtualQuery @ 0x1406F7B94 (PfpVirtualQuery.c)
 *     PfpQueryScenarioInformation @ 0x140728270 (PfpQueryScenarioInformation.c)
 *     MmLogQueryCombineStats @ 0x14089BAE0 (MmLogQueryCombineStats.c)
 *     PfpQueryFileExtentsRequest @ 0x1408A0FA8 (PfpQueryFileExtentsRequest.c)
 *     ExRaiseDatatypeMisalignment @ 0x140913EC0 (ExRaiseDatatypeMisalignment.c)
 */

__int64 __fastcall PfQuerySuperfetchInformation(__int64 a1, __int128 *a2, int a3, unsigned __int8 a4, _DWORD *a5)
{
  _DWORD *v8; // rsi
  unsigned int v9; // ebx
  int v10; // eax
  int v11; // ecx
  LUID v12; // rbx
  _KPROCESS *Process; // r15
  struct _KTHREAD *CurrentThread; // rdi
  struct _KTHREAD *v15; // r12
  _QWORD *v16; // rsi
  unsigned __int64 *v17; // r14
  ULONG_PTR v18; // rdi
  __int64 v19; // rcx
  char v20; // bl
  _QWORD *v21; // rax
  void *v22; // r14
  __int64 v25; // rcx
  PSE_EXPORTS v26; // r15
  struct _KTHREAD *v27; // rsi
  volatile signed __int64 *p_Lock; // r15
  struct _KTHREAD *v29; // rcx
  __int64 v30; // rcx
  _QWORD *v31; // rcx
  __int64 v32; // rcx
  _DWORD *v33; // rdi
  __int128 v34; // [rsp+48h] [rbp-120h] BYREF
  volatile void *Address[2]; // [rsp+58h] [rbp-110h]
  PVOID Object; // [rsp+68h] [rbp-100h] BYREF
  __int64 v37; // [rsp+70h] [rbp-F8h]
  ULONG_PTR v38; // [rsp+78h] [rbp-F0h]
  struct _LIST_ENTRY *Flink; // [rsp+80h] [rbp-E8h]
  __int128 v40; // [rsp+88h] [rbp-E0h]
  __int128 v41; // [rsp+98h] [rbp-D0h]
  __int64 v42; // [rsp+A8h] [rbp-C0h]
  int v43; // [rsp+B0h] [rbp-B8h]
  __int64 v44; // [rsp+B8h] [rbp-B0h]
  __int64 v45; // [rsp+C0h] [rbp-A8h]
  signed __int64 v46; // [rsp+C8h] [rbp-A0h]
  __int64 v47; // [rsp+D0h] [rbp-98h]
  signed __int64 v48; // [rsp+D8h] [rbp-90h]
  __int64 v49; // [rsp+E0h] [rbp-88h]
  signed __int64 v50; // [rsp+E8h] [rbp-80h]
  volatile void *v51; // [rsp+F0h] [rbp-78h]
  _DWORD v52[2]; // [rsp+F8h] [rbp-70h] BYREF
  LUID v53; // [rsp+100h] [rbp-68h] BYREF
  int v54; // [rsp+108h] [rbp-60h]
  _DWORD v55[8]; // [rsp+110h] [rbp-58h] BYREF

  v8 = a5;
  v44 = (__int64)a5;
  v41 = 0uLL;
  v42 = 0LL;
  v43 = 0;
  v40 = 0uLL;
  memset(v55, 0, sizeof(v55));
  if ( a3 != 32 )
    return (unsigned int)-1073741820;
  v9 = 0;
  v34 = *a2;
  *(_OWORD *)Address = a2[1];
  if ( (_QWORD)v34 != 0x6B7568430000002DLL )
    return (unsigned int)-1073741811;
  v10 = DWORD2(v34);
  if ( DWORD2(v34) <= 0x1C )
  {
    v11 = 268501248;
    if ( _bittest(&v11, DWORD2(v34)) )
      goto LABEL_29;
  }
  v12 = SeProfileSingleProcessPrivilege;
  v37 = 0LL;
  Process = KeGetCurrentThread()->ApcState.Process;
  CurrentThread = KeGetCurrentThread();
  Flink = Process[1].Header.WaitListHead.Flink;
  if ( CurrentThread )
  {
    if ( (*(_DWORD *)(&CurrentThread[1].SwapListEntry + 1) & 8) != 0 )
    {
      v15 = KeGetCurrentThread();
      --v15->KernelApcDisable;
      ExAcquirePushLockSharedEx((ULONG_PTR)&CurrentThread[1].WaitBlockList, 0LL);
      if ( (*(_DWORD *)(&CurrentThread[1].SwapListEntry + 1) & 8) != 0 )
      {
        v16 = (_QWORD *)(*(_QWORD *)((char *)&CurrentThread[1].116 + 4) & 0xFFFFFFFFFFFFFFF8uLL);
        ObfReferenceObject(v16);
        LODWORD(v37) = *((_DWORD *)&CurrentThread[1].0 + 1) & 3;
      }
      else
      {
        v16 = 0LL;
      }
      v45 = 17LL;
      v46 = _InterlockedCompareExchange64((volatile signed __int64 *)&CurrentThread[1].WaitBlockList, 0LL, 17LL);
      if ( v46 != 17 )
        ExfReleasePushLockShared((signed __int64 *)&CurrentThread[1].WaitBlockList);
      KeAbPostRelease((ULONG_PTR)&CurrentThread[1].WaitBlockList);
      KeLeaveCriticalRegionThread((__int64)v15);
    }
    else
    {
      v16 = 0LL;
    }
    Object = v16;
  }
  else
  {
    v16 = 0LL;
    Object = 0LL;
  }
  v17 = &Process[1].Affinity.Bitmap[5];
  v18 = ObFastReferenceObject((signed __int64 *)&Process[1].Affinity.Bitmap[5]);
  if ( !v18 )
  {
    v27 = KeGetCurrentThread();
    --v27->KernelApcDisable;
    p_Lock = (volatile signed __int64 *)&Process[1].Header.Lock;
    ExAcquirePushLockSharedEx((ULONG_PTR)p_Lock, 0LL);
    v18 = ObFastReferenceObjectLocked(v17);
    v47 = 17LL;
    v48 = _InterlockedCompareExchange64(p_Lock, 0LL, 17LL);
    if ( v48 != 17 )
      ExfReleasePushLockShared((signed __int64 *)p_Lock);
    KeAbPostRelease((ULONG_PTR)p_Lock);
    KeLeaveCriticalRegionThread((__int64)v27);
    v16 = Object;
  }
  v38 = v18;
  if ( *(_DWORD *)((char *)&NlsMbCodePageTag + 3) )
  {
    if ( v18 )
    {
      _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(v18 + 1144) + 284LL));
      if ( v18 == SepTokenLeakToken )
        __debugbreak();
      v16 = Object;
      v18 = v38;
    }
    if ( v16 )
    {
      _InterlockedIncrement((volatile signed __int32 *)(v16[143] + 284LL));
      v16 = Object;
      if ( Object == (PVOID)SepTokenLeakToken )
        __debugbreak();
      v18 = v38;
    }
  }
  v52[0] = 1;
  v52[1] = 1;
  v53 = v12;
  v54 = 0;
  if ( a4 )
  {
    if ( !v16 )
    {
      v19 = v18;
      goto LABEL_19;
    }
    if ( (int)v37 >= 2 )
    {
      v19 = (__int64)v16;
LABEL_19:
      v20 = SepPrivilegeCheck(v19, (__int64)&v53, 1u, 1, a4);
      goto LABEL_20;
    }
    v20 = 0;
  }
  else
  {
    v20 = 1;
  }
LABEL_20:
  if ( a4 )
  {
    v21 = v16 ? v16 : (_QWORD *)v18;
    v22 = *(void **)v21[19];
    if ( !RtlEqualSid(SeLocalSystemSid, v22) )
    {
      if ( (v26 = SeExports, !RtlEqualSid(SeExports->SeNetworkServiceSid, v22))
        && !RtlEqualSid(v26->SeLocalServiceSid, v22)
        || (unsigned __int8)SepFilterPrivilegeAudits(1LL, v52) )
      {
        SepAdtPrivilegedServiceAuditAlarm(
          (unsigned int)&Object,
          (unsigned int)&SeSubsystemName,
          0,
          (_DWORD)v16,
          v18,
          (__int64)v52,
          v20);
        v18 = v38;
        v16 = Object;
      }
    }
  }
  if ( *(_DWORD *)((char *)&NlsMbCodePageTag + 3) )
  {
    if ( v18 )
    {
      _InterlockedDecrement((volatile signed __int32 *)(*(_QWORD *)(v18 + 1144) + 284LL));
      if ( v38 == SepTokenLeakToken )
        __debugbreak();
      v16 = Object;
    }
    if ( v16 )
    {
      _InterlockedDecrement((volatile signed __int32 *)(v16[143] + 284LL));
      if ( Object == (PVOID)SepTokenLeakToken )
        __debugbreak();
    }
  }
  ObFastDereferenceObject((signed __int64 *)&KeGetCurrentThread()->ApcState.Process[1].Affinity.Bitmap[5], v38);
  v38 = 0LL;
  if ( Object )
    ObfDereferenceObject(Object);
  Object = 0LL;
  if ( !v20 )
    return (unsigned int)-1073741790;
  v10 = DWORD2(v34);
  v9 = 0;
  v8 = (_DWORD *)v44;
LABEL_29:
  if ( v10 == 6 )
  {
    return (unsigned int)PfpPfnPrioRequest(&v34, a4, v8);
  }
  else
  {
    switch ( v10 )
    {
      case 1:
        return (unsigned int)PfGetCompletedTrace(Address[0], LODWORD(Address[1]), a4, v8);
      case 2:
        if ( LODWORD(Address[1]) != 28 )
          goto LABEL_100;
        v29 = KeGetCurrentThread();
        --v29->KernelApcDisable;
        ExAcquirePushLockSharedEx((ULONG_PTR)qword_140467B38, 0LL);
        v41 = xmmword_140467984;
        v42 = qword_140467994;
        v43 = dword_14046799C;
        v49 = 17LL;
        v50 = _InterlockedCompareExchange64((volatile signed __int64 *)qword_140467B38, 0LL, 17LL);
        if ( v50 != 17 )
          ExfReleasePushLockShared((signed __int64 *)qword_140467B38);
        KeAbPostRelease((ULONG_PTR)qword_140467B38);
        KeLeaveCriticalRegion();
        if ( a4 )
        {
          v30 = (__int64)Address[0];
          if ( ((__int64)Address[0] & 3) != 0 )
            ExRaiseDatatypeMisalignment();
          if ( Address[0] >= (volatile void *)0x7FFFFFFF0000LL )
            v30 = 0x7FFFFFFF0000LL;
          *(_BYTE *)v30 = *(_BYTE *)v30;
          *(_BYTE *)(v30 + 27) = *(_BYTE *)(v30 + 27);
        }
        v31 = Address[0];
        *(_OWORD *)Address[0] = v41;
        v31[2] = v42;
        *((_DWORD *)v31 + 6) = v43;
        *v8 = 28;
        v9 = 0;
        break;
      case 8:
        return (unsigned int)PfpPrivSourceEnum(&v34, a4, v8);
      case 9:
        v9 = 0;
        if ( LODWORD(Address[1]) != 4 )
          goto LABEL_100;
        if ( a4 )
        {
          v32 = (__int64)Address[0];
          if ( ((__int64)Address[0] & 3) != 0 )
            ExRaiseDatatypeMisalignment();
          if ( Address[0] >= (volatile void *)0x7FFFFFFF0000LL )
            v32 = 0x7FFFFFFF0000LL;
          *(_BYTE *)v32 = *(_BYTE *)v32;
          *(_BYTE *)(v32 + 3) = *(_BYTE *)(v32 + 3);
          v9 = 0;
        }
        *(_DWORD *)Address[0] = dword_140503A10;
        *v8 = 4;
        break;
      case 12:
        return (unsigned int)PfpQueryScenarioInformation(&v34, a4, v8);
      case 16:
        return (unsigned int)PfpMemoryListQuery((__int64)&v34, a4, v8);
      case 17:
        return (unsigned int)PfpMemoryRangesQuery((__int64)&v34, a4, v8);
      case 20:
        if ( LODWORD(Address[1]) != 16 )
          goto LABEL_100;
        v9 = 0;
        v40 = 0uLL;
        if ( a4 )
        {
          v25 = (__int64)Address[0];
          if ( ((__int64)Address[0] & 7) != 0 )
            ExRaiseDatatypeMisalignment();
          if ( Address[0] >= (volatile void *)0x7FFFFFFF0000LL )
            v25 = 0x7FFFFFFF0000LL;
          *(_BYTE *)v25 = *(_BYTE *)v25;
          *(_BYTE *)(v25 + 15) = *(_BYTE *)(v25 + 15);
          v9 = 0;
        }
        v40 = *(_OWORD *)Address[0];
        if ( (_DWORD)v40 == 1 )
        {
          *((_QWORD *)&v40 + 1) = qword_140467CB0;
          *(_OWORD *)Address[0] = v40;
          *v8 = 16;
        }
        else
        {
          v9 = -1073741735;
        }
        break;
      case 23:
        return (unsigned int)PfpVirtualQuery(&v34, a4, v8);
      case 24:
        if ( LODWORD(Address[1]) == 16 )
        {
          MmLogQueryCombineStats(0LL, 0LL, v55);
          v33 = Address[0];
          if ( a4 )
            ProbeForWrite(Address[0], 0x10uLL, 4u);
          v51 = Address[0];
          if ( *(_DWORD *)Address[0] == 1 )
          {
            *((_DWORD *)Address[0] + 1) = v55[1];
            v33[2] = v55[6];
            v33[3] = v55[7];
          }
          else
          {
            v9 = -1073741811;
          }
        }
        else
        {
LABEL_100:
          v9 = -1073741306;
        }
        break;
      case 27:
        return (unsigned int)PfpQueryFileExtentsRequest(&v34, a4, v8);
      case 28:
        return (unsigned int)PfpQueryGpuUtilization(&v34, a4, v8);
      default:
        v9 = -1073741821;
        break;
    }
  }
  return v9;
}
