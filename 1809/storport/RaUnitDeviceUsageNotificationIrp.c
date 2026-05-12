/*
 * XREFs of RaUnitDeviceUsageNotificationIrp @ 0x1C001652C
 * Callers:
 *     RaUnitPnpIrp @ 0x1C00082C0 (RaUnitPnpIrp.c)
 * Callees:
 *     RaidIsUnitControlSupported @ 0x1C0007578 (RaidIsUnitControlSupported.c)
 *     RaUnitReleaseRemoveLock @ 0x1C0009540 (RaUnitReleaseRemoveLock.c)
 *     RaUnitAcquireRemoveLock @ 0x1C0009580 (RaUnitAcquireRemoveLock.c)
 *     RaidCompleteRequestEx @ 0x1C000CF10 (RaidCompleteRequestEx.c)
 *     RaSendIrpSynchronous @ 0x1C00107F0 (RaSendIrpSynchronous.c)
 *     _TlgCreateWsz @ 0x1C0011B50 (_TlgCreateWsz.c)
 *     _TlgWrite @ 0x1C0011BC8 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x1C0011C70 (_TlgKeywordOn.c)
 *     StorUpdateCrashDumpPowerReady @ 0x1C0016964 (StorUpdateCrashDumpPowerReady.c)
 *     RaCallMiniportUnitControl @ 0x1C0019BDC (RaCallMiniportUnitControl.c)
 *     RaidSecondaryDumpRegister @ 0x1C0025EA4 (RaidSecondaryDumpRegister.c)
 *     __security_check_cookie @ 0x1C0026060 (__security_check_cookie.c)
 *     RaidSecondaryDumpDeregister @ 0x1C0051F30 (RaidSecondaryDumpDeregister.c)
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
  __int64 v11; // rax
  bool v12; // zf
  volatile signed __int32 *v13; // rax
  PIRP v14; // rax
  __int64 v15; // r8
  signed int Status; // edi
  _IO_STACK_LOCATION *v17; // rcx
  _IO_STACK_LOCATION *v18; // rax
  int v20; // eax
  char v21; // al
  const WCHAR *v22; // rdx
  LPCWSTR v23; // r10
  TraceLoggingHProvider v24; // rcx
  LPCGUID v25; // r8
  LPCGUID v26; // r9
  __int64 v27; // rcx
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
          v11 = 916LL;
        }
        else if ( CurrentStackLocation->Parameters.Create.Options == 2 )
        {
          v11 = 924LL;
        }
        else
        {
          v10 = (const struct _TlgProvider_t *)(CurrentStackLocation->Parameters.Create.Options - 3);
          if ( CurrentStackLocation->Parameters.Create.Options != 3 )
          {
            if ( CurrentStackLocation->Parameters.Create.Options == 4 )
            {
              v21 = *(_BYTE *)(a1 + 450);
              if ( Lock )
              {
                *(_BYTE *)(a1 + 450) = v21 | 1;
                *(_BYTE *)(v2 + 104) |= 0x80u;
                if ( *(_DWORD *)(*(_QWORD *)(a1 + 24) + 5124LL) )
                  RaidSecondaryDumpRegister(a1);
                if ( (unsigned int)dword_1C0061058 > 5 && TlgKeywordOn(v10, 0x400000000000uLL) )
                {
                  v22 = *(const WCHAR **)(v2 + 4864);
                  v33 = *(_DWORD *)(v2 + 56);
                  v29 = *(_BYTE *)(a1 + 96);
                  v30 = *(_BYTE *)(a1 + 97);
                  v31 = *(_BYTE *)(a1 + 98);
                  v32 = *(_BYTE *)(a1 + 3272);
                  v41 = v2 + 5256;
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
                  TlgCreateWsz(&pDesc, v22);
                  v55 = 1LL;
                  v54 = &v32;
                  TlgCreateWsz(&v56, v23);
                  TlgWrite(v24, &unk_1C00574D6, v25, v26, 0xBu, &pData);
                }
              }
              else
              {
                *(_BYTE *)(a1 + 450) = v21 & 0xFE;
                *(_BYTE *)(v2 + 104) &= ~0x80u;
                RaidSecondaryDumpDeregister();
              }
              v6 = 1;
            }
            goto LABEL_12;
          }
          v11 = 920LL;
        }
        v12 = a1 + v11 == 0;
        v13 = (volatile signed __int32 *)(a1 + v11);
        v6 = 1;
        v5 = v13;
        if ( !v12 && !*v13 && !Lock )
        {
          Status = -1073741823;
          goto LABEL_27;
        }
LABEL_12:
        v14 = IoAllocateIrp(*(_BYTE *)(*(_QWORD *)(v2 + 8) + 76LL) + 3, 0);
        v4 = v14;
        if ( !v14 )
        {
          Status = -1073741801;
          goto LABEL_27;
        }
        LOBYTE(v15) = 1;
        Status = RaUnitAcquireRemoveLock(a1, (__int64)v14, v15);
        if ( Status < 0 )
          goto LABEL_25;
        v17 = CurrentStackLocation;
        v4->Tail.Overlay.Thread = Irp->Tail.Overlay.Thread;
        v18 = v4->Tail.Overlay.CurrentStackLocation;
        v4->IoStatus.Status = -1073741637;
        *(_OWORD *)&v18[-1].MajorFunction = *(_OWORD *)&v17->MajorFunction;
        *(_OWORD *)&v18[-1].Parameters.NotifyDirectoryEx.CompletionFilter = *(_OWORD *)&v17->Parameters.NotifyDirectoryEx.CompletionFilter;
        *(_OWORD *)(&v18[-1].Parameters.SetQuota + 6) = *(_OWORD *)(&v17->Parameters.SetQuota + 6);
        *(_OWORD *)&v18[-1].FileObject = *(_OWORD *)&v17->FileObject;
        v18[-1].Context = v17->Context;
        Status = RaSendIrpSynchronous(*(PDEVICE_OBJECT *)(v2 + 8), v4);
        if ( Status < 0 || (Status = v4->IoStatus.Status, Status < 0) )
        {
          if ( Status != -1073741637 || Options != 4 )
          {
LABEL_24:
            RaUnitReleaseRemoveLock(a1);
            goto LABEL_25;
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
          v27 = *(_QWORD *)(a1 + 24);
          LOWORD(v38) = 1;
          WORD1(v38) = *(_WORD *)(v27 + 56);
          LOWORD(v39) = *(_WORD *)(a1 + 96);
          BYTE2(v39) = *(_BYTE *)(a1 + 98);
          v35 = &v38;
          BYTE4(v36) = v28;
          HIDWORD(v38) = 4;
          LODWORD(v36) = Options;
          RaCallMiniportUnitControl(v27 + 312, 1LL);
        }
        if ( Options == 3 )
        {
          v20 = *(_DWORD *)(a1 + 920);
          if ( v20 == 1 )
          {
            if ( !*(_QWORD *)(v2 + 5208) )
            {
              *(_QWORD *)(v2 + 5208) = a1;
              StorUpdateCrashDumpPowerReady(v2);
            }
          }
          else if ( !v20 && a1 == *(_QWORD *)(v2 + 5208) )
          {
            *(_QWORD *)(v2 + 5208) = 0LL;
          }
        }
        goto LABEL_24;
      }
    }
  }
  Status = -1073741810;
LABEL_25:
  if ( v4 )
    IoFreeIrp(v4);
LABEL_27:
  RaidCompleteRequestEx(Irp, 0, Status);
  return (unsigned int)Status;
}
