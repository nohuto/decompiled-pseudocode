/*
 * XREFs of DpiFdoDetectPostDevice @ 0x1C015CC84
 * Callers:
 *     DpiFdoSetAdapterPowerState @ 0x1C0157B84 (DpiFdoSetAdapterPowerState.c)
 *     DpiAddDevice @ 0x1C0165580 (DpiAddDevice.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0023340 (__security_check_cookie.c)
 *     memset @ 0x1C0025440 (memset.c)
 *     DpiDecodeResourceDescriptorLength @ 0x1C015CEF4 (DpiDecodeResourceDescriptorLength.c)
 *     DpiAcquirePostDisplayInfoFromBgfx @ 0x1C015CF18 (DpiAcquirePostDisplayInfoFromBgfx.c)
 */

__int64 __fastcall DpiFdoDetectPostDevice(__int64 a1, _BYTE *a2)
{
  __int64 v3; // r14
  __int64 v4; // rsi
  char v5; // r13
  void *v6; // r15
  int v7; // eax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // rbx
  PIRP v12; // rax
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // rbx
  __int64 v19; // r8
  unsigned int *Information; // rbx
  unsigned int v21; // esi
  __int64 v22; // r14
  unsigned int *v23; // r12
  unsigned int *v24; // r15
  __int64 v26; // rax
  __int64 v27; // rax
  __int64 v28; // rax
  NTSTATUS v29; // eax
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // r8
  __int64 v33; // rax
  unsigned __int64 v34; // [rsp+40h] [rbp-C0h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v36; // [rsp+58h] [rbp-A8h]
  void *Source1; // [rsp+60h] [rbp-A0h]
  struct _KEVENT Event; // [rsp+68h] [rbp-98h] BYREF
  __int64 v39; // [rsp+80h] [rbp-80h] BYREF
  int v40; // [rsp+88h] [rbp-78h]
  const wchar_t *v41; // [rsp+90h] [rbp-70h]
  unsigned __int64 *v42; // [rsp+98h] [rbp-68h]
  int v43; // [rsp+A0h] [rbp-60h]
  unsigned __int64 *v44; // [rsp+A8h] [rbp-58h]
  int v45; // [rsp+B0h] [rbp-50h]
  __int64 v46; // [rsp+B8h] [rbp-48h]
  int v47; // [rsp+C0h] [rbp-40h]
  _BYTE v48[40]; // [rsp+C8h] [rbp-38h] BYREF
  _QWORD v49[20]; // [rsp+F0h] [rbp-10h] BYREF

  v36 = a1;
  v3 = a1;
  memset(v49, 0, sizeof(v49));
  v4 = *(_QWORD *)(v3 + 64);
  IoStatusBlock.Pointer = 0LL;
  v5 = 0;
  IoStatusBlock.Information = 0LL;
  v6 = (void *)(v4 + 544);
  Source1 = (void *)(v4 + 544);
  if ( RtlCompareMemory((const void *)(v4 + 544), &GUID_BUS_VMBUS, 0x10uLL) == 16 || *(_BYTE *)(v4 + 2695) )
  {
LABEL_21:
    *a2 = 1;
    return 0LL;
  }
  *a2 = 0;
  v7 = DpiAcquirePostDisplayInfoFromBgfx(v49);
  v11 = v7;
  if ( v7 < 0 )
  {
    v26 = WdLogNewEntry5_WdError(v9, v8, v10);
    *(_QWORD *)(v26 + 24) = v11;
    WdLogEvent5_WdError(v26);
LABEL_17:
    if ( RtlCompareMemory(v6, &GUID_BUS_TYPE_ACPI, 0x10uLL) != 16 )
      return 0LL;
    if ( *a2 )
      return 0LL;
    LODWORD(v34) = 0;
    v41 = L"DisableAutoAcpiPostDeivce";
    v39 = 0LL;
    v40 = 288;
    v42 = &v34;
    v44 = &v34;
    v43 = 67108868;
    v45 = 4;
    v46 = 0LL;
    v47 = 0;
    memset(v48, 0, sizeof(v48));
    RtlQueryRegistryValuesEx(2LL, L"GraphicsDrivers", &v39, 0LL, 0LL);
    if ( (_DWORD)v34 )
      return 0LL;
    v33 = WdLogNewEntry5_WdWarning(v31, v30, v32);
    *(_QWORD *)(v33 + 24) = v3;
    WdLogEvent5_WdWarning(v33);
    goto LABEL_21;
  }
  v34 = v49[2] + (unsigned int)(LODWORD(v49[1]) * HIDWORD(v49[0]));
  KeInitializeEvent(&Event, SynchronizationEvent, 0);
  v12 = IoBuildSynchronousFsdRequest(0x1Bu, *(PDEVICE_OBJECT *)(v4 + 152), 0LL, 0, 0LL, &Event, &IoStatusBlock);
  if ( v12 )
  {
    v12->IoStatus.Status = -1073741637;
    v12->Tail.Overlay.CurrentStackLocation[-1].MinorFunction = 10;
    LODWORD(v18) = IofCallDriver(*(PDEVICE_OBJECT *)(v4 + 152), v12);
    if ( (_DWORD)v18 == 259 )
    {
      v29 = KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
      v18 = v29;
      if ( v29 )
      {
        v28 = WdLogNewEntry5_WdError(v17, v16, v19);
        *(_QWORD *)(v28 + 24) = v18;
LABEL_25:
        WdLogEvent5_WdError(v28);
        return (unsigned int)v18;
      }
      LODWORD(v18) = IoStatusBlock.Status;
    }
    if ( (int)v18 >= 0 )
    {
      Information = (unsigned int *)IoStatusBlock.Information;
      if ( !IoStatusBlock.Information )
        return 0LL;
      v21 = 0;
      do
      {
        if ( v21 >= *Information )
          break;
        v22 = 0LL;
        v23 = &Information[8 * v21 + 3 + v21];
        if ( v23[1] )
        {
          while ( 1 )
          {
            v24 = &v23[5 * v22];
            if ( ((*((_BYTE *)v24 + 8) - 3) & 0xFB) == 0
              && *(_QWORD *)(v24 + 3) <= v49[2]
              && *(_QWORD *)(v24 + 3) + DpiDecodeResourceDescriptorLength(v24 + 2) >= v34 )
            {
              break;
            }
            v22 = (unsigned int)(v22 + 1);
            if ( (unsigned int)v22 >= v23[1] )
              goto LABEL_15;
          }
          *a2 = 1;
          v5 = 1;
        }
LABEL_15:
        ++v21;
      }
      while ( !v5 );
      ExFreePoolWithTag(Information, 0);
      v3 = v36;
      v6 = Source1;
      goto LABEL_17;
    }
    if ( (_DWORD)v18 == -1073741637 )
      return 0LL;
    v28 = WdLogNewEntry5_WdError(v17, v16, v19);
    *(_QWORD *)(v28 + 24) = *(_QWORD *)(v4 + 152);
    *(_QWORD *)(v28 + 32) = (int)v18;
    goto LABEL_25;
  }
  v27 = WdLogNewEntry5_WdLowResource(v13, 0LL, v14, v15);
  LODWORD(v18) = -1073741670;
  *(_QWORD *)(v27 + 24) = -1073741670LL;
  WdLogEvent5_WdLowResource(v27);
  return (unsigned int)v18;
}
