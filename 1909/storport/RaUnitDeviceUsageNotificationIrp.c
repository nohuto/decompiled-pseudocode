/*
 * XREFs of RaUnitDeviceUsageNotificationIrp @ 0x1C0016284
 * Callers:
 *     RaUnitPnpIrp @ 0x1C0006B30 (RaUnitPnpIrp.c)
 * Callees:
 *     RaidIsUnitControlSupported @ 0x1C00068B0 (RaidIsUnitControlSupported.c)
 *     RaUnitReleaseRemoveLock @ 0x1C00079F0 (RaUnitReleaseRemoveLock.c)
 *     RaUnitAcquireRemoveLock @ 0x1C0007A30 (RaUnitAcquireRemoveLock.c)
 *     RaidCompleteRequestEx @ 0x1C000A880 (RaidCompleteRequestEx.c)
 *     _TlgCreateWsz @ 0x1C000E4E0 (_TlgCreateWsz.c)
 *     _TlgWrite @ 0x1C000E558 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x1C000E600 (_TlgKeywordOn.c)
 *     RaSendIrpSynchronous @ 0x1C000FB94 (RaSendIrpSynchronous.c)
 *     RaCallMiniportUnitControl @ 0x1C00152A4 (RaCallMiniportUnitControl.c)
 *     StorUpdateCrashDumpPowerReady @ 0x1C00166B0 (StorUpdateCrashDumpPowerReady.c)
 *     RaidSecondaryDumpRegister @ 0x1C0023204 (RaidSecondaryDumpRegister.c)
 *     __security_check_cookie @ 0x1C0023420 (__security_check_cookie.c)
 *     RaidSecondaryDumpDeregister @ 0x1C005147C (RaidSecondaryDumpDeregister.c)
 */

__int64 __fastcall RaUnitDeviceUsageNotificationIrp(__int64 a1, IRP *a2)
{
  __int64 v2; // rsi
  IRP *v4; // r15
  volatile signed __int32 *v5; // r14
  char v6; // r12
  int v7; // eax
  unsigned int Options; // r13d
  unsigned __int8 Lock; // dl
  const struct _TlgProvider_t *v10; // rcx
  char v11; // al
  const WCHAR *v12; // rdx
  LPCWSTR v13; // r10
  TraceLoggingHProvider v14; // rcx
  LPCGUID v15; // r8
  LPCGUID v16; // r9
  __int64 v17; // rax
  bool v18; // zf
  volatile signed __int32 *v19; // rax
  PIRP v20; // rax
  __int64 v21; // r8
  signed int Status; // edi
  _IO_STACK_LOCATION *v23; // rcx
  _IO_STACK_LOCATION *v24; // rax
  __int64 v26; // rcx
  int v27; // eax
  unsigned __int8 v28; // [rsp+30h] [rbp-D0h]
  char v29; // [rsp+31h] [rbp-CFh] BYREF
  char v30; // [rsp+32h] [rbp-CEh] BYREF
  char v31; // [rsp+33h] [rbp-CDh] BYREF
  char v32; // [rsp+34h] [rbp-CCh] BYREF
  int v33; // [rsp+38h] [rbp-C8h] BYREF
  PIRP Irp; // [rsp+40h] [rbp-C0h]
  __int64 *v35; // [rsp+48h] [rbp-B8h]
  __int64 v36; // [rsp+50h] [rbp-B0h]
  _IO_STACK_LOCATION *CurrentStackLocation; // [rsp+58h] [rbp-A8h]
  __int64 v38; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v39; // [rsp+68h] [rbp-98h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+70h] [rbp-90h] BYREF
  __int64 v41; // [rsp+90h] [rbp-70h]
  __int64 v42; // [rsp+98h] [rbp-68h]
  __int64 v43; // [rsp+A0h] [rbp-60h]
  __int64 v44; // [rsp+A8h] [rbp-58h]
  int *v45; // [rsp+B0h] [rbp-50h]
  __int64 v46; // [rsp+B8h] [rbp-48h]
  char *v47; // [rsp+C0h] [rbp-40h]
  __int64 v48; // [rsp+C8h] [rbp-38h]
  char *v49; // [rsp+D0h] [rbp-30h]
  __int64 v50; // [rsp+D8h] [rbp-28h]
  char *v51; // [rsp+E0h] [rbp-20h]
  __int64 v52; // [rsp+E8h] [rbp-18h]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+F0h] [rbp-10h] BYREF
  char *v54; // [rsp+100h] [rbp+0h]
  __int64 v55; // [rsp+108h] [rbp+8h]
  struct _EVENT_DATA_DESCRIPTOR v56; // [rsp+110h] [rbp+10h] BYREF

  v2 = *(_QWORD *)(a1 + 24);
  Irp = a2;
  v35 = 0LL;
  v36 = 0LL;
  v4 = 0LL;
  v38 = 0LL;
  v5 = 0LL;
  v39 = 0LL;
  v6 = 0;
  if ( v2 )
  {
    v7 = *(_DWORD *)(a1 + 48);
    if ( v7 )
    {
      if ( (unsigned int)(v7 - 5) > 1 )
      {
        CurrentStackLocation = a2->Tail.Overlay.CurrentStackLocation;
        Options = CurrentStackLocation->Parameters.Create.Options;
        Lock = CurrentStackLocation->Parameters.SetLock.Lock;
        v28 = Lock;
        if ( Options == 1 )
        {
          v17 = 940LL;
        }
        else if ( CurrentStackLocation->Parameters.Create.Options == 2 )
        {
          v17 = 948LL;
        }
        else
        {
          v10 = (const struct _TlgProvider_t *)(CurrentStackLocation->Parameters.Create.Options - 3);
          if ( CurrentStackLocation->Parameters.Create.Options != 3 )
          {
            if ( CurrentStackLocation->Parameters.Create.Options == 4 )
            {
              v11 = *(_BYTE *)(a1 + 450);
              if ( Lock )
              {
                *(_BYTE *)(a1 + 450) = v11 | 1;
                *(_BYTE *)(v2 + 104) |= 0x80u;
                if ( *(_DWORD *)(*(_QWORD *)(a1 + 24) + 4996LL) )
                  RaidSecondaryDumpRegister(a1);
                if ( (unsigned int)dword_1C0062058 > 5 && TlgKeywordOn(v10, 0x400000000000uLL) )
                {
                  v12 = *(const WCHAR **)(v2 + 4800);
                  v33 = *(_DWORD *)(v2 + 56);
                  v29 = *(_BYTE *)(a1 + 96);
                  v30 = *(_BYTE *)(a1 + 97);
                  v31 = *(_BYTE *)(a1 + 98);
                  v32 = *(_BYTE *)(v2 + 4356);
                  v41 = v2 + 5128;
                  v43 = a1 + 1976;
                  v45 = &v33;
                  v47 = &v29;
                  v49 = &v30;
                  v51 = &v31;
                  v42 = 16LL;
                  v44 = 16LL;
                  v46 = 4LL;
                  v48 = 1LL;
                  v50 = 1LL;
                  v52 = 1LL;
                  TlgCreateWsz(&pDesc, v12);
                  v55 = 1LL;
                  v54 = &v32;
                  TlgCreateWsz(&v56, v13);
                  TlgWrite(v14, &unk_1C005715A, v15, v16, 0xBu, &pData);
                }
              }
              else
              {
                *(_BYTE *)(a1 + 450) = v11 & 0xFE;
                *(_BYTE *)(v2 + 104) &= ~0x80u;
                RaidSecondaryDumpDeregister();
              }
              v6 = 1;
            }
            goto LABEL_18;
          }
          v17 = 944LL;
        }
        v18 = a1 + v17 == 0;
        v19 = (volatile signed __int32 *)(a1 + v17);
        v6 = 1;
        v5 = v19;
        if ( !v18 && !*v19 )
        {
          v6 = 1;
          if ( !Lock )
          {
            Status = -1073741823;
            goto LABEL_33;
          }
        }
LABEL_18:
        v20 = IoAllocateIrp(*(_BYTE *)(*(_QWORD *)(v2 + 8) + 76LL) + 3, 0);
        v4 = v20;
        if ( !v20 )
        {
          Status = -1073741801;
          goto LABEL_33;
        }
        LOBYTE(v21) = 1;
        Status = RaUnitAcquireRemoveLock(a1, (__int64)v20, v21);
        if ( Status < 0 )
          goto LABEL_31;
        v23 = CurrentStackLocation;
        v4->Tail.Overlay.Thread = Irp->Tail.Overlay.Thread;
        v24 = v4->Tail.Overlay.CurrentStackLocation;
        v4->IoStatus.Status = -1073741637;
        *(_OWORD *)&v24[-1].MajorFunction = *(_OWORD *)&v23->MajorFunction;
        *(_OWORD *)&v24[-1].Parameters.NotifyDirectoryEx.CompletionFilter = *(_OWORD *)&v23->Parameters.NotifyDirectoryEx.CompletionFilter;
        *(_OWORD *)(&v24[-1].Parameters.SetQuota + 6) = *(_OWORD *)(&v23->Parameters.SetQuota + 6);
        *(_OWORD *)&v24[-1].FileObject = *(_OWORD *)&v23->FileObject;
        v24[-1].Context = v23->Context;
        Status = RaSendIrpSynchronous(*(PDEVICE_OBJECT *)(v2 + 8), v4);
        if ( Status < 0 || (Status = v4->IoStatus.Status, Status < 0) )
        {
          if ( Status != -1073741637 || Options != 4 )
          {
LABEL_30:
            RaUnitReleaseRemoveLock(a1);
            goto LABEL_31;
          }
          Status = 0;
        }
        if ( v5 )
        {
          if ( v28 )
            _InterlockedIncrement(v5);
          else
            _InterlockedDecrement(v5);
          IoInvalidateDeviceState(*(PDEVICE_OBJECT *)(a1 + 8));
        }
        if ( v6 && RaidIsUnitControlSupported(a1, 1) )
        {
          v26 = *(_QWORD *)(a1 + 24);
          LOWORD(v38) = 1;
          WORD1(v38) = *(_WORD *)(v26 + 56);
          LOWORD(v39) = *(_WORD *)(a1 + 96);
          BYTE2(v39) = *(_BYTE *)(a1 + 98);
          v35 = &v38;
          BYTE4(v36) = v28;
          HIDWORD(v38) = 4;
          LODWORD(v36) = Options;
          RaCallMiniportUnitControl(v26 + 296);
        }
        if ( Options == 3 )
        {
          v27 = *(_DWORD *)(a1 + 944);
          if ( v27 == 1 )
          {
            if ( !*(_QWORD *)(v2 + 5080) )
            {
              *(_QWORD *)(v2 + 5080) = a1;
              StorUpdateCrashDumpPowerReady(v2);
            }
          }
          else if ( !v27 && a1 == *(_QWORD *)(v2 + 5080) )
          {
            *(_QWORD *)(v2 + 5080) = 0LL;
          }
        }
        goto LABEL_30;
      }
    }
  }
  Status = -1073741810;
LABEL_31:
  if ( v4 )
    IoFreeIrp(v4);
LABEL_33:
  RaidCompleteRequestEx(Irp, 0, Status);
  return (unsigned int)Status;
}
