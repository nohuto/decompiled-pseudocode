/*
 * XREFs of UsbhInsertQueuePortChangeObject @ 0x1C00133E0
 * Callers:
 *     Usbh_PCE_QueueDriverReset_Action @ 0x1C000B77C (Usbh_PCE_QueueDriverReset_Action.c)
 *     Usbh_PCE_Suspend_Action @ 0x1C000BA00 (Usbh_PCE_Suspend_Action.c)
 *     Usbh_PCE_QueueChange_Action @ 0x1C00137C0 (Usbh_PCE_QueueChange_Action.c)
 *     Usbh_PCE_Resume_Action @ 0x1C0019250 (Usbh_PCE_Resume_Action.c)
 * Callees:
 *     UsbhLatchPdo @ 0x1C0001C9C (UsbhLatchPdo.c)
 *     UsbhUnlatchPdo @ 0x1C001BFF0 (UsbhUnlatchPdo.c)
 *     _guard_dispatch_icall_nop @ 0x1C002C6B0 (_guard_dispatch_icall_nop.c)
 *     UsbhTrapFatal_Dbg @ 0x1C00413A8 (UsbhTrapFatal_Dbg.c)
 *     WPP_RECORDER_SF_d @ 0x1C00416A0 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_dD @ 0x1C00417A4 (WPP_RECORDER_SF_dD.c)
 *     WPP_RECORDER_SF_dd @ 0x1C0041870 (WPP_RECORDER_SF_dd.c)
 */

__int64 __fastcall UsbhInsertQueuePortChangeObject(
        __int64 a1,
        unsigned __int16 a2,
        unsigned int *a3,
        int a4,
        __int64 a5)
{
  unsigned int v9; // r14d
  _DWORD *v10; // rdx
  _QWORD *PoolWithTag; // rax
  __int64 v12; // rbx
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // rdi
  __int64 v18; // rcx
  unsigned int v19; // r8d
  __int64 v20; // rcx
  void (__fastcall *v21)(_QWORD, int *); // rax
  int v22; // eax
  __int64 v23; // rdx
  __int64 v24; // rcx
  int v25; // eax
  __int64 v26; // rax
  __int64 *v27; // rbx
  __int64 **v28; // rcx
  __int64 v30; // rax
  int v31[14]; // [rsp+40h] [rbp-38h] BYREF

  v9 = -1073741670;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_d(
      WPP_GLOBAL_Control->DeviceExtension,
      0,
      1,
      49,
      (__int64)&WPP_5739628a84103faf3c5119bfd97a7d41_Traceguids,
      a2);
  if ( !a1 )
    UsbhTrapFatal_Dbg(0LL, 0LL);
  v10 = *(_DWORD **)(a1 + 64);
  if ( !v10 )
    goto LABEL_56;
  if ( *v10 != 541218120 )
    UsbhTrapFatal_Dbg(a1, v10);
  PoolWithTag = ExAllocatePoolWithTag(ExDefaultNonPagedPoolType, 0x38uLL, 0x42554855u);
  v12 = (__int64)PoolWithTag;
  if ( PoolWithTag )
  {
    v9 = 0;
    *PoolWithTag = 0LL;
    PoolWithTag[1] = 0LL;
    PoolWithTag[2] = 0LL;
    PoolWithTag[3] = 0LL;
    PoolWithTag[4] = 0LL;
    PoolWithTag[5] = 0LL;
    PoolWithTag[6] = 0LL;
    if ( (UsbhLogMask & 8) != 0 )
    {
      v13 = *(_QWORD *)(a1 + 64);
      if ( v13 )
      {
        v14 = *(_QWORD *)(v13 + 888)
            + 32LL
            * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v13 + 880)) & *(_DWORD *)(v13 + 884));
        *(_DWORD *)v14 = 1413771367;
        *(_QWORD *)(v14 + 16) = a2;
        *(_QWORD *)(v14 + 8) = 0LL;
        *(_QWORD *)(v14 + 24) = 0LL;
      }
    }
    if ( !a2 )
      goto LABEL_54;
    v15 = *(_QWORD *)(a1 + 64);
    if ( v15 )
    {
      if ( *(_DWORD *)v15 != 541218120 )
        UsbhTrapFatal_Dbg(a1, v15);
      if ( a2 <= *(unsigned __int8 *)(v15 + 2938) )
      {
        v16 = *(_QWORD *)(v15 + 3056);
        if ( v16 )
        {
          v17 = 2928LL * a2 + v16 - 2928;
          if ( (UsbhLogMask & 8) != 0 )
          {
            v18 = *(_QWORD *)(v15 + 888)
                + 32LL
                * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v15 + 880)) & *(_DWORD *)(v15 + 884));
            *(_DWORD *)v18 = 1044672615;
            *(_QWORD *)(v18 + 8) = 0LL;
            *(_QWORD *)(v18 + 16) = a2;
            *(_QWORD *)(v18 + 24) = v17;
          }
          if ( v17 )
          {
            *((_WORD *)PoolWithTag + 2) = a2;
            v19 = *a3;
            *((_DWORD *)PoolWithTag + 2) = *a3;
            *(_DWORD *)PoolWithTag = 1145332592;
            v20 = *(_QWORD *)(a1 + 64);
            if ( !v20 )
              UsbhTrapFatal_Dbg(a1, 0LL);
            if ( *(_DWORD *)v20 != 541218120 )
              UsbhTrapFatal_Dbg(a1, *(_QWORD *)(a1 + 64));
            v21 = *(void (__fastcall **)(_QWORD, int *))(v20 + 4592);
            if ( v21 )
            {
              v21(*(_QWORD *)(v20 + 4560), v31);
              v22 = v31[0];
              v19 = *(_DWORD *)(v12 + 8);
            }
            else
            {
              v22 = 0;
            }
            *(_QWORD *)(v12 + 40) = a5;
            *(_DWORD *)(v12 + 32) = v22;
            *(_DWORD *)(v12 + 48) = a4;
            if ( (UsbhLogMask & 0x200) != 0 )
            {
              v23 = *(_QWORD *)(a1 + 64);
              if ( v23 )
              {
                v24 = *(_QWORD *)(v23 + 888)
                    + 32LL
                    * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v23 + 880)) & *(_DWORD *)(v23 + 884));
                *(_DWORD *)v24 = 1145262193;
                *(_QWORD *)(v24 + 24) = v19;
                *(_QWORD *)(v24 + 8) = 0LL;
                *(_QWORD *)(v24 + 16) = v17;
              }
            }
            if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
              && LOWORD(WPP_GLOBAL_Control->DeviceType) )
            {
              WPP_RECORDER_SF_dD(
                WPP_GLOBAL_Control->DeviceExtension,
                a2,
                v19,
                50,
                (__int64)&WPP_5739628a84103faf3c5119bfd97a7d41_Traceguids,
                a2,
                *(_DWORD *)(v12 + 8));
            }
            if ( a4 != 1 )
            {
LABEL_30:
              v25 = *(_DWORD *)(v12 + 8);
              if ( (v25 & 0x16) != 0 )
              {
                _InterlockedIncrement((volatile signed __int32 *)(v17 + 2876));
                v25 = *(_DWORD *)(v12 + 8);
              }
              if ( (v25 & 1) != 0 )
              {
                if ( *(_BYTE *)(v17 + 2839) )
                {
                  ExFreePoolWithTag((PVOID)v12, 0);
                  goto LABEL_35;
                }
                v26 = v17 + 456;
                *(_BYTE *)(v17 + 2839) = 1;
                v28 = *(__int64 ***)(v17 + 464);
                v27 = (__int64 *)(v12 + 16);
                if ( *v28 == (__int64 *)(v17 + 456) )
                  goto LABEL_34;
              }
              else
              {
                v26 = v17 + 456;
                v27 = (__int64 *)(v12 + 16);
                v28 = *(__int64 ***)(v17 + 464);
                if ( *v28 == (__int64 *)(v17 + 456) )
                {
LABEL_34:
                  *v27 = v26;
                  v27[1] = (__int64)v28;
                  *v28 = v27;
                  *(_QWORD *)(v26 + 8) = v27;
                  KeSetEvent((PRKEVENT)(v17 + 496), 0, 0);
                  goto LABEL_35;
                }
              }
              __fastfail(3u);
            }
            v30 = UsbhLatchPdo(a1, a2, v12, 0x49515043u);
            if ( v30 )
            {
              if ( v30 == a5 )
                goto LABEL_30;
              UsbhUnlatchPdo(a1, v30, v12, 1230065731LL);
            }
            ExFreePoolWithTag((PVOID)v12, 0);
            v9 = -1073741811;
            goto LABEL_35;
          }
        }
      }
LABEL_54:
      ExFreePoolWithTag(PoolWithTag, 0);
      v9 = -1073741811;
      goto LABEL_35;
    }
LABEL_56:
    UsbhTrapFatal_Dbg(a1, 0LL);
  }
LABEL_35:
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_dd(
      WPP_GLOBAL_Control->DeviceExtension,
      a2,
      1,
      51,
      (__int64)&WPP_5739628a84103faf3c5119bfd97a7d41_Traceguids,
      a2,
      v9);
  return v9;
}
