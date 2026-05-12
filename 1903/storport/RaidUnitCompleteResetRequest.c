/*
 * XREFs of RaidUnitCompleteResetRequest @ 0x1C00470E0
 * Callers:
 *     <none>
 * Callees:
 *     StorFreeContiguousIoResources @ 0x1C00064A0 (StorFreeContiguousIoResources.c)
 *     RaidUnitReleaseIrp @ 0x1C0007468 (RaidUnitReleaseIrp.c)
 *     RaidXrbDeallocateResources @ 0x1C0007A94 (RaidXrbDeallocateResources.c)
 *     RaidCompleteRequestEx @ 0x1C000A830 (RaidCompleteRequestEx.c)
 *     RaidSrbStatusToNtStatus @ 0x1C000B988 (RaidSrbStatusToNtStatus.c)
 *     _TlgWrite @ 0x1C000E500 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x1C000E5A8 (_TlgKeywordOn.c)
 *     __security_check_cookie @ 0x1C00232C0 (__security_check_cookie.c)
 *     RaidResumeAndRestartAdapterQueues @ 0x1C00372B4 (RaidResumeAndRestartAdapterQueues.c)
 *     RaidUnitPoFxIdleComponentFromMiniport @ 0x1C00374C4 (RaidUnitPoFxIdleComponentFromMiniport.c)
 *     WPP_SF_qqD @ 0x1C0037B10 (WPP_SF_qqD.c)
 *     RaidLogRequestComplete @ 0x1C0046970 (RaidLogRequestComplete.c)
 *     RaidResumeAndRestartUnitQueue @ 0x1C0046BE8 (RaidResumeAndRestartUnitQueue.c)
 *     RaidUnitEndDeviceBusy @ 0x1C00473AC (RaidUnitEndDeviceBusy.c)
 */

__int64 __fastcall RaidUnitCompleteResetRequest(__int64 a1)
{
  __int64 v1; // rdi
  __int64 v2; // r14
  IRP *v3; // rsi
  __int64 v4; // rbx
  unsigned int v5; // r12d
  unsigned int v6; // eax
  int v7; // r15d
  int v8; // eax
  const GUID *v9; // r8
  const GUID *v10; // r9
  __int64 v11; // rax
  const struct _TlgProvider_t *v12; // rcx
  EVENT_DATA_DESCRIPTOR *pData; // [rsp+28h] [rbp-81h]
  char v15; // [rsp+30h] [rbp-79h] BYREF
  char v16; // [rsp+31h] [rbp-78h] BYREF
  char v17; // [rsp+32h] [rbp-77h] BYREF
  char v18; // [rsp+33h] [rbp-76h] BYREF
  int v19; // [rsp+34h] [rbp-75h] BYREF
  EVENT_DATA_DESCRIPTOR v20; // [rsp+40h] [rbp-69h] BYREF
  const struct _TlgProvider_t *v21; // [rsp+60h] [rbp-49h]
  int v22; // [rsp+68h] [rbp-41h]
  int v23; // [rsp+6Ch] [rbp-3Dh]
  __int64 v24; // [rsp+70h] [rbp-39h]
  int v25; // [rsp+78h] [rbp-31h]
  int v26; // [rsp+7Ch] [rbp-2Dh]
  int *v27; // [rsp+80h] [rbp-29h]
  int v28; // [rsp+88h] [rbp-21h]
  int v29; // [rsp+8Ch] [rbp-1Dh]
  char *v30; // [rsp+90h] [rbp-19h]
  int v31; // [rsp+98h] [rbp-11h]
  int v32; // [rsp+9Ch] [rbp-Dh]
  char *v33; // [rsp+A0h] [rbp-9h]
  int v34; // [rsp+A8h] [rbp-1h]
  int v35; // [rsp+ACh] [rbp+3h]
  char *v36; // [rsp+B0h] [rbp+7h]
  int v37; // [rsp+B8h] [rbp+Fh]
  int v38; // [rsp+BCh] [rbp+13h]
  char *v39; // [rsp+C0h] [rbp+17h]
  int v40; // [rsp+C8h] [rbp+1Fh]
  int v41; // [rsp+CCh] [rbp+23h]

  v1 = *(_QWORD *)(a1 + 168);
  v2 = a1;
  v3 = *(IRP **)(a1 + 160);
  v4 = *(_QWORD *)(a1 + 224);
  LOBYTE(a1) = *(_BYTE *)(v1 + 2);
  if ( (_BYTE)a1 == 40 )
  {
    v5 = *(_DWORD *)(v1 + 60);
    v6 = 40;
    v7 = *(_DWORD *)(v1 + 20);
  }
  else
  {
    v5 = *(_DWORD *)(v1 + 16);
    v7 = (unsigned __int8)a1;
    v6 = (unsigned __int8)a1;
  }
  if ( v7 != 16 )
  {
    if ( (_BYTE)a1 == 40 )
      v6 = *(_DWORD *)(v1 + 20);
    _InterlockedDecrement((volatile signed __int32 *)(v4 + 1036));
    if ( v6 >= 0x12 )
    {
      if ( v6 <= 0x13 )
      {
        RaidResumeAndRestartAdapterQueues(*(_QWORD *)(v4 + 24));
      }
      else if ( v6 == 32 )
      {
        RaidResumeAndRestartUnitQueue(v4);
      }
    }
  }
  LOBYTE(v8) = *(_BYTE *)(v1 + 2);
  if ( (_BYTE)v8 == 40 )
    v8 = *(_DWORD *)(v1 + 20);
  else
    v8 = (unsigned __int8)v8;
  if ( v8 == 16 && (unsigned int)dword_1C0061058 > 5 && TlgKeywordOn((TraceLoggingHProvider)a1, 0x400000000000uLL) )
  {
    v11 = *(_QWORD *)(v4 + 24);
    v12 = (const struct _TlgProvider_t *)(v11 + 5128);
    v19 = *(_DWORD *)(v11 + 56);
    v15 = *(_BYTE *)(v4 + 96);
    v16 = *(_BYTE *)(v4 + 97);
    v17 = *(_BYTE *)(v4 + 98);
    LOBYTE(v11) = *(_BYTE *)(v1 + 3);
    v23 = 0;
    v26 = 0;
    v29 = 0;
    v32 = 0;
    v35 = 0;
    v38 = 0;
    v41 = 0;
    v18 = v11 & 0x3F;
    v27 = &v19;
    v30 = &v15;
    v33 = &v16;
    v36 = &v17;
    v39 = &v18;
    v21 = v12;
    v22 = 16;
    v24 = v4 + 1720;
    v25 = 16;
    v28 = 4;
    v31 = (int)v10;
    v34 = (int)v10;
    v37 = (int)v10;
    v40 = (int)v10;
    TlgWrite(v12, &unk_1C0056360, v9, v10, 9u, &v20);
  }
  RaidUnitEndDeviceBusy(v4, v3);
  if ( (*(_BYTE *)(v2 + 17) & 2) != 0 )
  {
    RaidUnitPoFxIdleComponentFromMiniport(v4, *(_DWORD *)(v2 + 748));
    *(_BYTE *)(v2 + 17) &= ~2u;
  }
  v3->IoStatus.Status = RaidSrbStatusToNtStatus(*(_BYTE *)(v1 + 3));
  v3->IoStatus.Information = v5;
  RaidUnitReleaseIrp((__int64)v3);
  if ( v7 == 16 )
  {
    RaidXrbDeallocateResources(v2, 1);
    StorFreeContiguousIoResources(*(_QWORD *)(v4 + 24), v2 - 32);
  }
  else
  {
    *(_DWORD *)(v4 + 1472) = 0;
  }
  if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    && (HIDWORD(WPP_GLOBAL_Control->Timer) & 8) != 0
    && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
  {
    LODWORD(pData) = v3->IoStatus.Status;
    WPP_SF_qqD(
      (__int64)WPP_GLOBAL_Control->AttachedDevice,
      0x1Bu,
      (__int64)&WPP_a32982da72aa344f3768c69018313f42_Traceguids,
      v4,
      v3,
      pData);
  }
  if ( (qword_1C00612B0 & 0x10) != 0 )
    RaidLogRequestComplete(*(_QWORD *)(v4 + 24), (__int64)v3, v1);
  return RaidCompleteRequestEx(v3, 0, v3->IoStatus.Status);
}
