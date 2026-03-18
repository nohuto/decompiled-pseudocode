/*
 * XREFs of DpiAcpiPrepareAcpiChildNameList @ 0x1C017BBB8
 * Callers:
 *     DpiAcpiExposeInfo @ 0x1C017B3A0 (DpiAcpiExposeInfo.c)
 *     DpiAcpiGetAcpiChildName @ 0x1C017BB54 (DpiAcpiGetAcpiChildName.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0023340 (__security_check_cookie.c)
 *     memset @ 0x1C0025440 (memset.c)
 *     DpiAcpiEvalAcpiMethodEx @ 0x1C01487E0 (DpiAcpiEvalAcpiMethodEx.c)
 */

__int64 __fastcall DpiAcpiPrepareAcpiChildNameList(__int64 a1)
{
  __int64 result; // rax
  struct _DEVICE_OBJECT *v3; // r14
  IRP *v4; // rax
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 v9; // rdx
  __int64 v10; // rcx
  NTSTATUS Status; // ebx
  __int64 v12; // r8
  ULONG OutputBufferLength; // ebx
  __int64 v14; // rsi
  PVOID PoolWithTag; // rax
  IRP *v16; // rax
  __int64 v17; // rbx
  _DWORD *v18; // rax
  PVOID v19; // rax
  __int64 v20; // rax
  int v21; // r15d
  __int64 v22; // rsi
  __int64 v23; // rcx
  __int64 v24; // r9
  int v25; // eax
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // r8
  __int64 v29; // rsi
  __int64 v30; // rax
  void *v31; // rcx
  void *v32; // rcx
  NTSTATUS v33; // eax
  __int64 v34; // rax
  __int64 v35; // rax
  NTSTATUS v36; // eax
  __int64 v37; // rax
  __int64 v38; // rax
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+58h] [rbp-69h] BYREF
  struct _STRING DestinationString; // [rsp+68h] [rbp-59h] BYREF
  struct _KEVENT Event; // [rsp+78h] [rbp-49h] BYREF
  int v42[2]; // [rsp+90h] [rbp-31h] BYREF
  __int64 v43; // [rsp+98h] [rbp-29h]
  __int64 v44; // [rsp+A0h] [rbp-21h]
  _QWORD InputBuffer[2]; // [rsp+A8h] [rbp-19h] BYREF
  SIZE_T NumberOfBytes[2]; // [rsp+B8h] [rbp-9h] BYREF
  int v47; // [rsp+C8h] [rbp+7h]
  __int64 OutputBuffer; // [rsp+D0h] [rbp+Fh] BYREF
  __int64 v49; // [rsp+D8h] [rbp+17h]
  __int64 v50; // [rsp+E0h] [rbp+1Fh]

  result = 0LL;
  InputBuffer[0] = 0LL;
  InputBuffer[1] = 0LL;
  NumberOfBytes[0] = 0LL;
  NumberOfBytes[1] = 0LL;
  v47 = 0;
  IoStatusBlock.Pointer = 0LL;
  IoStatusBlock.Information = 0LL;
  *(_QWORD *)&DestinationString.Length = 0LL;
  DestinationString.Buffer = 0LL;
  *(_QWORD *)v42 = 0LL;
  v43 = 0LL;
  v44 = 0LL;
  OutputBuffer = 0LL;
  v49 = 0LL;
  v50 = 0LL;
  if ( *(_QWORD *)(a1 + 3296) && *(_QWORD *)(a1 + 3288) )
    return result;
  if ( *(_DWORD *)(a1 + 3280) )
    return 3221225473LL;
  v3 = *(struct _DEVICE_OBJECT **)(a1 + 160);
  ObfReferenceObject(v3);
  InputBuffer[0] = 0x148696541LL;
  KeInitializeEvent(&Event, SynchronizationEvent, 0);
  v4 = IoBuildDeviceIoControlRequest(0x32C020u, v3, InputBuffer, 0x10u, NumberOfBytes, 0x14u, 0, &Event, &IoStatusBlock);
  if ( !v4 )
    goto LABEL_28;
  Status = IofCallDriver(v3, v4);
  if ( Status == 259 )
  {
    v33 = KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
    v17 = v33;
    if ( v33 )
    {
LABEL_37:
      v34 = WdLogNewEntry5_WdError(v10, v9, v12);
      *(_QWORD *)(v34 + 24) = v17;
LABEL_45:
      WdLogEvent5_WdError(v34);
LABEL_19:
      if ( (int)v17 < 0 )
        goto LABEL_31;
      goto LABEL_20;
    }
    Status = IoStatusBlock.Status;
  }
  if ( Status != -2147483643 )
  {
    v35 = WdLogNewEntry5_WdError(v10, v9, v12);
    *(_QWORD *)(v35 + 24) = Status;
    WdLogEvent5_WdError(v35);
LABEL_39:
    LODWORD(v17) = -1072431089;
    goto LABEL_31;
  }
  if ( LODWORD(NumberOfBytes[0]) != 1198089537
    || (OutputBufferLength = HIDWORD(NumberOfBytes[0]), HIDWORD(NumberOfBytes[0]) < 0x14) )
  {
    LODWORD(v17) = -1072431089;
    v34 = WdLogNewEntry5_WdError(v10, v9, v12);
    *(_QWORD *)(v34 + 24) = -1072431089LL;
    goto LABEL_45;
  }
  v14 = HIDWORD(NumberOfBytes[0]);
  PoolWithTag = ExAllocatePoolWithTag(PagedPool, HIDWORD(NumberOfBytes[0]), 0x74727044u);
  *(_QWORD *)(a1 + 3288) = PoolWithTag;
  if ( !PoolWithTag )
  {
LABEL_29:
    v29 = -1073741801LL;
    goto LABEL_30;
  }
  memset(PoolWithTag, 0, OutputBufferLength);
  KeClearEvent(&Event);
  v16 = IoBuildDeviceIoControlRequest(
          0x32C020u,
          v3,
          InputBuffer,
          0x10u,
          *(PVOID *)(a1 + 3288),
          OutputBufferLength,
          0,
          &Event,
          &IoStatusBlock);
  if ( !v16 )
  {
LABEL_28:
    v29 = -1073741670LL;
LABEL_30:
    LODWORD(v17) = v29;
    v30 = WdLogNewEntry5_WdLowResource(v6, v5, v7, v8);
    *(_QWORD *)(v30 + 24) = v29;
    WdLogEvent5_WdLowResource(v30);
    goto LABEL_31;
  }
  LODWORD(v17) = IofCallDriver(v3, v16);
  if ( (_DWORD)v17 == 259 )
  {
    v36 = KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
    v17 = v36;
    if ( !v36 )
    {
      LODWORD(v17) = IoStatusBlock.Status;
      goto LABEL_12;
    }
    goto LABEL_37;
  }
LABEL_12:
  v18 = *(_DWORD **)(a1 + 3288);
  if ( *v18 != 1198089537 || !v18[1] || IoStatusBlock.Information != v14 )
    goto LABEL_39;
  *(_DWORD *)(a1 + 3280) = 0;
  v19 = ExAllocatePoolWithTag(PagedPool, 16LL * (unsigned int)v18[1], 0x74727044u);
  *(_QWORD *)(a1 + 3296) = v19;
  if ( !v19 )
    goto LABEL_29;
  v20 = *(_QWORD *)(a1 + 3288);
  v21 = 1;
  v22 = v20 + 8;
  if ( *(_DWORD *)(v20 + 4) <= 1u )
    goto LABEL_19;
  while ( 1 )
  {
    v22 += *(unsigned int *)(v22 + 4) + 8LL;
    if ( (*(_BYTE *)v22 & 1) != 0 )
      break;
LABEL_18:
    if ( (unsigned int)++v21 >= *(_DWORD *)(*(_QWORD *)(a1 + 3288) + 4LL) )
      goto LABEL_19;
  }
  RtlInitAnsiString(&DestinationString, (PCSZ)(v22 + 8));
  v23 = *(_QWORD *)(a1 + 24);
  qmemcpy(v42, "AeiC_ADR", sizeof(v42));
  v25 = DpiAcpiEvalAcpiMethodEx(v23, (const void **)&DestinationString, v42, v24, &OutputBuffer, 0x18u, 1);
  v17 = v25;
  if ( v25 < 0 )
  {
    v37 = WdLogNewEntry5_WdWarning(v27, v26, v28);
    *(_QWORD *)(v37 + 24) = v17;
    WdLogEvent5_WdWarning(v37);
    LODWORD(v17) = 0;
    goto LABEL_18;
  }
  if ( (_DWORD)OutputBuffer == 1114596673 && (_DWORD)v49 )
  {
    *(_DWORD *)(*(_QWORD *)(a1 + 3296) + 16LL * *(unsigned int *)(a1 + 3280)) = v50;
    *(_QWORD *)(*(_QWORD *)(a1 + 3296) + 16LL * (unsigned int)(*(_DWORD *)(a1 + 3280))++ + 8) = v22 + 8;
    goto LABEL_18;
  }
  LODWORD(v17) = -1072431089;
  v38 = WdLogNewEntry5_WdError(v27, v26, v28);
  *(_QWORD *)(v38 + 24) = -1072431089LL;
  WdLogEvent5_WdError(v38);
LABEL_31:
  *(_DWORD *)(a1 + 3280) = -1;
  v31 = *(void **)(a1 + 3296);
  if ( v31 )
  {
    ExFreePoolWithTag(v31, 0);
    *(_QWORD *)(a1 + 3296) = 0LL;
  }
  v32 = *(void **)(a1 + 3288);
  if ( v32 )
  {
    ExFreePoolWithTag(v32, 0);
    *(_QWORD *)(a1 + 3288) = 0LL;
  }
LABEL_20:
  if ( v3 )
    ObfDereferenceObject(v3);
  return (unsigned int)v17;
}
