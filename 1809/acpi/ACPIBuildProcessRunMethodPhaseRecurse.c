/*
 * XREFs of ACPIBuildProcessRunMethodPhaseRecurse @ 0x1C001F460
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_Lqss @ 0x1C0020560 (WPP_RECORDER_SF_Lqss.c)
 *     _guard_dispatch_icall_nop @ 0x1C0030D60 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C00310C0 (memset.c)
 *     ExFreeToNPagedLookasideList @ 0x1C004ADD8 (ExFreeToNPagedLookasideList.c)
 */

__int64 __fastcall ACPIBuildProcessRunMethodPhaseRecurse(__int64 a1)
{
  int v1; // eax
  int v2; // edi
  _QWORD *v3; // rbp
  _QWORD *v5; // r14
  _QWORD *v6; // rax
  _QWORD *v7; // rcx
  volatile signed __int32 *v8; // r15
  _QWORD **v9; // rsi
  int v10; // r12d
  int v11; // r13d
  PSLIST_ENTRY v12; // rdi
  PSLIST_ENTRY *v13; // rax
  _QWORD *v14; // rcx
  _QWORD *v15; // rax
  char v16; // cl
  void *v17; // rax
  void *v18; // r8
  __int64 v19; // rdx
  signed __int32 v20; // ecx
  KIRQL v21; // bl
  int v22; // edx
  KIRQL v24; // [rsp+90h] [rbp+8h]
  _QWORD *v25; // [rsp+98h] [rbp+10h]

  v1 = *(_DWORD *)(a1 + 84);
  v2 = 0;
  v3 = *(_QWORD **)(a1 + 40);
  *(_DWORD *)(a1 + 32) = 0;
  if ( (v1 & 4) != 0 )
  {
    v5 = v3 + 94;
    v24 = KeAcquireSpinLockRaiseToDpc(&AcpiDeviceTreeLock);
    v6 = (_QWORD *)v3[94];
    v7 = v6 - 96;
    v25 = (_QWORD *)*v6;
    while ( 1 )
    {
      v8 = 0LL;
      if ( v6 != v5 )
        v8 = (volatile signed __int32 *)v7;
      v9 = (_QWORD **)(v7 + 96);
      if ( v7 + 96 == v5 || v2 < 0 )
        break;
      v10 = *(_DWORD *)(a1 + 84);
      v11 = *(_DWORD *)(a1 + 80);
      ++BuildRequestLookAsideList.L.TotalAllocates;
      v12 = ExpInterlockedPopEntrySList(&BuildRequestLookAsideList.L.ListHead);
      if ( v12
        || (++BuildRequestLookAsideList.L.AllocateMisses,
            (v12 = (PSLIST_ENTRY)((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD))BuildRequestLookAsideList.L.AllocateEx)(
                                   (unsigned int)BuildRequestLookAsideList.L.Type,
                                   BuildRequestLookAsideList.L.Size,
                                   BuildRequestLookAsideList.L.Tag)) != 0LL) )
      {
        if ( *((_DWORD *)v8 + 171) )
        {
          _InterlockedIncrement(v8 + 171);
          memset(v12, 0, 0x88uLL);
          LODWORD(v12[1].Next) = 1599293264;
          v12[8].Next = (_SLIST_ENTRY *)&AcpiBuildRunMethodList;
          *((_DWORD *)&v12[1].Next + 2) = 3;
          LODWORD(v12[3].Next) = 0;
          *((_QWORD *)&v12[2].Next + 1) = v8;
          LODWORD(v12[5].Next) = v11;
          HIDWORD(v12[5].Next) = v10;
          HIDWORD(v12[1].Next) = 4108;
          KeAcquireSpinLockAtDpcLevel(&AcpiBuildQueueLock);
          v13 = (PSLIST_ENTRY *)qword_1C00803F8;
          if ( *(__int64 **)qword_1C00803F8 != &AcpiBuildQueueList )
            __fastfail(3u);
          v12->Next = (_SLIST_ENTRY *)&AcpiBuildQueueList;
          *((_QWORD *)&v12->Next + 1) = v13;
          *v13 = v12;
          qword_1C00803F8 = (__int64)v12;
          KeReleaseSpinLockFromDpcLevel(&AcpiBuildQueueLock);
          v2 = 259;
        }
        else
        {
          ExFreeToNPagedLookasideList(&BuildRequestLookAsideList, v12);
          v2 = -1073741130;
        }
      }
      else
      {
        v2 = -1073741670;
      }
      v14 = *v9;
      v15 = (_QWORD *)**v9;
      if ( v15 == *v9 )
      {
        v14 = v25;
        v15 = (_QWORD *)*v25;
      }
      v7 = v14 - 96;
      v25 = v15;
      v6 = v7 + 96;
    }
    KeReleaseSpinLock(&AcpiDeviceTreeLock, v24);
  }
  v16 = 0;
  v17 = &unk_1C006E28A;
  v18 = &unk_1C006E28A;
  if ( v3 )
  {
    v19 = v3[1];
    v16 = (char)v3;
    if ( (v19 & 0x200000000000LL) != 0 )
    {
      v17 = (void *)v3[70];
      if ( (v19 & 0x400000000000LL) != 0 )
        v18 = (void *)v3[71];
    }
  }
  WPP_RECORDER_SF_Lqss(
    WPP_GLOBAL_Control->DeviceExtension,
    4,
    6,
    65,
    (__int64)&WPP_4ce29eefff463349a5cccb0b7ee92c40_Traceguids,
    v2,
    v16,
    (__int64)v17,
    (__int64)v18);
  v20 = *(_DWORD *)(a1 + 32);
  if ( v2 < 0 )
  {
    *(_DWORD *)(a1 + 48) = v2;
    KeBugCheckEx(0xA5u, 3uLL, 0LL, v2, 0LL);
  }
  *(_DWORD *)(a1 + 32) = 2;
  _InterlockedCompareExchange((volatile signed __int32 *)(a1 + 24), v20, 1);
  v21 = KeAcquireSpinLockRaiseToDpc(&AcpiBuildQueueLock);
  v22 = AcpiBuildDpcFlags | 2;
  AcpiBuildDpcFlags = v22;
  if ( (v22 & 1) == 0 )
  {
    AcpiBuildDpcFlags = v22 | 1;
    KeInsertQueueDpc(&AcpiBuildDpc, 0LL, 0LL);
  }
  KeReleaseSpinLock(&AcpiBuildQueueLock, v21);
  return (unsigned int)v2;
}
