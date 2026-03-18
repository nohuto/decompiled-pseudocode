/*
 * XREFs of DpiFdoDetectPostDevice @ 0x1C014551C
 * Callers:
 *     DpiFdoSetAdapterPowerState @ 0x1C0141C00 (DpiFdoSetAdapterPowerState.c)
 *     DpiAddDevice @ 0x1C0149BF0 (DpiAddDevice.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0020760 (__security_check_cookie.c)
 *     memset @ 0x1C00231C0 (memset.c)
 *     DpiDecodeResourceDescriptorLength @ 0x1C0145770 (DpiDecodeResourceDescriptorLength.c)
 *     DpiAcquirePostDisplayInfoFromBgfx @ 0x1C0145794 (DpiAcquirePostDisplayInfoFromBgfx.c)
 */

__int64 __fastcall DpiFdoDetectPostDevice(__int64 a1, _BYTE *a2)
{
  __int64 v2; // rsi
  __int64 v4; // r14
  char v5; // r13
  void *v6; // r15
  int v7; // eax
  __int64 v8; // rcx
  __int64 v9; // rbx
  PIRP v10; // rax
  __int64 v11; // rcx
  __int64 v12; // rcx
  __int64 v13; // rbx
  unsigned int *Information; // rbx
  unsigned int v15; // esi
  __int64 v16; // r14
  unsigned int *v17; // r12
  unsigned int *v18; // r15
  __int64 v20; // rax
  __int64 v21; // rax
  __int64 v22; // rax
  NTSTATUS v23; // eax
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // r8
  __int64 v27; // rax
  unsigned __int64 v28; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v29; // [rsp+48h] [rbp-B8h]
  void *Source1; // [rsp+50h] [rbp-B0h]
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+58h] [rbp-A8h] BYREF
  struct _KEVENT Event; // [rsp+68h] [rbp-98h] BYREF
  __int64 v33; // [rsp+80h] [rbp-80h] BYREF
  int v34; // [rsp+88h] [rbp-78h]
  const wchar_t *v35; // [rsp+90h] [rbp-70h]
  unsigned __int64 *v36; // [rsp+98h] [rbp-68h]
  int v37; // [rsp+A0h] [rbp-60h]
  unsigned __int64 *v38; // [rsp+A8h] [rbp-58h]
  int v39; // [rsp+B0h] [rbp-50h]
  __int64 v40; // [rsp+B8h] [rbp-48h]
  int v41; // [rsp+C0h] [rbp-40h]
  _BYTE v42[40]; // [rsp+C8h] [rbp-38h] BYREF
  char v43[4]; // [rsp+F0h] [rbp-10h] BYREF
  int v44; // [rsp+F4h] [rbp-Ch]
  int v45; // [rsp+F8h] [rbp-8h]
  __int64 v46; // [rsp+100h] [rbp+0h]

  v2 = *(_QWORD *)(a1 + 64);
  v29 = a1;
  v4 = a1;
  v5 = 0;
  v6 = (void *)(v2 + 544);
  Source1 = (void *)(v2 + 544);
  if ( RtlCompareMemory((const void *)(v2 + 544), &GUID_BUS_VMBUS, 0x10uLL) == 16 || *(_BYTE *)(v2 + 2623) )
  {
LABEL_21:
    *a2 = 1;
    return 0LL;
  }
  *a2 = 0;
  v7 = DpiAcquirePostDisplayInfoFromBgfx(v43);
  v9 = v7;
  if ( v7 < 0 )
  {
    v20 = WdLogNewEntry5_WdError(v8);
    *(_QWORD *)(v20 + 24) = v9;
    WdLogEvent5_WdError(v20);
LABEL_17:
    if ( RtlCompareMemory(v6, &GUID_BUS_TYPE_ACPI, 0x10uLL) != 16 )
      return 0LL;
    if ( *a2 )
      return 0LL;
    LODWORD(v28) = 0;
    v35 = L"DisableAutoAcpiPostDeivce";
    v33 = 0LL;
    v34 = 288;
    v36 = &v28;
    v38 = &v28;
    v37 = 67108868;
    v39 = 4;
    v40 = 0LL;
    v41 = 0;
    memset(v42, 0, sizeof(v42));
    RtlQueryRegistryValuesEx(2LL, L"GraphicsDrivers", &v33, 0LL, 0LL);
    if ( (_DWORD)v28 )
      return 0LL;
    v27 = WdLogNewEntry5_WdWarning(v25, v24, v26);
    *(_QWORD *)(v27 + 24) = v4;
    WdLogEvent5_WdWarning(v27);
    goto LABEL_21;
  }
  v28 = v46 + (unsigned int)(v45 * v44);
  KeInitializeEvent(&Event, SynchronizationEvent, 0);
  v10 = IoBuildSynchronousFsdRequest(0x1Bu, *(PDEVICE_OBJECT *)(v2 + 152), 0LL, 0, 0LL, &Event, &IoStatusBlock);
  if ( v10 )
  {
    v10->IoStatus.Status = -1073741637;
    v10->Tail.Overlay.CurrentStackLocation[-1].MinorFunction = 10;
    LODWORD(v13) = IofCallDriver(*(PDEVICE_OBJECT *)(v2 + 152), v10);
    if ( (_DWORD)v13 == 259 )
    {
      v23 = KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
      v13 = v23;
      if ( v23 )
      {
        v22 = WdLogNewEntry5_WdError(v12);
        *(_QWORD *)(v22 + 24) = v13;
LABEL_25:
        WdLogEvent5_WdError(v22);
        return (unsigned int)v13;
      }
      LODWORD(v13) = IoStatusBlock.Status;
    }
    if ( (int)v13 >= 0 )
    {
      Information = (unsigned int *)IoStatusBlock.Information;
      if ( !IoStatusBlock.Information )
        return 0LL;
      v15 = 0;
      do
      {
        if ( v15 >= *Information )
          break;
        v16 = 0LL;
        v17 = &Information[8 * v15 + 3 + v15];
        if ( v17[1] )
        {
          while ( 1 )
          {
            v18 = &v17[5 * v16];
            if ( ((*((_BYTE *)v18 + 8) - 3) & 0xFB) == 0
              && *(_QWORD *)(v18 + 3) <= v46
              && *(_QWORD *)(v18 + 3) + DpiDecodeResourceDescriptorLength(v18 + 2) >= v28 )
            {
              break;
            }
            v16 = (unsigned int)(v16 + 1);
            if ( (unsigned int)v16 >= v17[1] )
              goto LABEL_15;
          }
          *a2 = 1;
          v5 = 1;
        }
LABEL_15:
        ++v15;
      }
      while ( !v5 );
      ExFreePoolWithTag(Information, 0);
      v4 = v29;
      v6 = Source1;
      goto LABEL_17;
    }
    if ( (_DWORD)v13 == -1073741637 )
      return 0LL;
    v22 = WdLogNewEntry5_WdError(v12);
    *(_QWORD *)(v22 + 24) = *(_QWORD *)(v2 + 152);
    *(_QWORD *)(v22 + 32) = (int)v13;
    goto LABEL_25;
  }
  v21 = WdLogNewEntry5_WdLowResource(v11);
  LODWORD(v13) = -1073741670;
  *(_QWORD *)(v21 + 24) = -1073741670LL;
  WdLogEvent5_WdLowResource(v21);
  return (unsigned int)v13;
}
