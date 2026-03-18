/*
 * XREFs of Interrupter_PrepareInterrupter @ 0x1C0066D14
 * Callers:
 *     Interrupter_PrepareHardware @ 0x1C00667BC (Interrupter_PrepareHardware.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0001FE0 (WPP_RECORDER_SF_.c)
 *     __security_check_cookie @ 0x1C00021E0 (__security_check_cookie.c)
 *     XilCommonBuffer_ReleaseBuffer @ 0x1C000260C (XilCommonBuffer_ReleaseBuffer.c)
 *     _guard_dispatch_icall_nop @ 0x1C0008A20 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0008D80 (memset.c)
 *     RtlStringCchPrintfA @ 0x1C000B1CC (RtlStringCchPrintfA.c)
 *     XilCommonBuffer_AcquireBufferEx @ 0x1C000D2B4 (XilCommonBuffer_AcquireBufferEx.c)
 *     WPP_RECORDER_SF_qdd @ 0x1C0014F90 (WPP_RECORDER_SF_qdd.c)
 *     Debug_FreAssertMsg @ 0x1C00157EC (Debug_FreAssertMsg.c)
 *     Interrupter_DetermineSegmentSizeAndCount @ 0x1C0065F18 (Interrupter_DetermineSegmentSizeAndCount.c)
 */

__int64 __fastcall Interrupter_PrepareInterrupter(__int64 a1, unsigned __int8 a2)
{
  char *v4; // rdi
  __int64 v5; // rax
  __int64 v6; // r15
  void *v7; // rbp
  int v8; // eax
  int v9; // esi
  unsigned int v10; // esi
  char *v11; // rax
  unsigned __int16 v12; // r9
  unsigned int v13; // r14d
  char *v14; // rax
  char **v15; // rcx
  __int64 v16; // rcx
  __int64 v17; // rdx
  __int64 v18; // r8
  char *v19; // rdx
  __int64 v20; // r9
  char *v21; // rdx
  __int64 v22; // rax
  __int64 v23; // rcx
  struct _DEVICE_OBJECT *v24; // rax
  __int64 v25; // rcx
  int v26; // eax
  __int64 v27; // rcx
  signed __int32 v29[8]; // [rsp+0h] [rbp-98h] BYREF
  __int64 v30; // [rsp+30h] [rbp-68h]
  __int64 v31; // [rsp+38h] [rbp-60h]
  _QWORD v32[6]; // [rsp+40h] [rbp-58h] BYREF

  memset(v32, 0, sizeof(v32));
  v4 = (char *)(a1 + 160);
  *(_QWORD *)(a1 + 168) = a1 + 160;
  *(_QWORD *)(a1 + 160) = a1 + 160;
  v5 = *(_QWORD *)(a1 + 8);
  v6 = *(_QWORD *)(v5 + 88);
  v7 = *(void **)(v5 + 120);
  v8 = *(_DWORD *)(v5 + 540);
  if ( v8 )
  {
    if ( (unsigned int)(v8 - 1) > 1 )
    {
      Debug_FreAssertMsg(
        (__int64)"Unexpected DMA Mode",
        0,
        (int)"onecore\\drivers\\wdm\\usb\\usb3\\usbxhci\\sys\\interrupter.c",
        738);
      return (unsigned int)-1073741630;
    }
    v9 = 3;
  }
  else
  {
    v9 = 1;
  }
  *(_DWORD *)(a1 + 96) ^= (*(_DWORD *)(a1 + 96) ^ a2) & 1;
  Interrupter_DetermineSegmentSizeAndCount(a1);
  v11 = XilCommonBuffer_AcquireBufferEx(v7, 16 * *(_DWORD *)(a1 + 108), a1, 829713993, v9);
  *(_QWORD *)(a1 + 152) = v11;
  if ( !v11 )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_17;
    v12 = 27;
    goto LABEL_16;
  }
  v13 = 0;
  if ( !*(_DWORD *)(a1 + 108) )
  {
LABEL_13:
    v16 = *(_QWORD *)(v6 + 40);
    v17 = 32LL * *(unsigned int *)(a1 + 32);
    *(_QWORD *)(a1 + 24) = v16 + v17 + 32;
    *(_DWORD *)(v17 + v16 + 40) = 0;
    _InterlockedOr(v29, 0);
    v18 = 0LL;
    v19 = *(char **)v4;
    v20 = *(_QWORD *)(*(_QWORD *)(a1 + 152) + 16LL);
    while ( v4 != v19 )
    {
      v23 = 2LL * (unsigned int)v18;
      v18 = (unsigned int)(v18 + 1);
      *(_QWORD *)(v20 + 8 * v23) = *((_QWORD *)v19 + 3);
      *(_WORD *)(v20 + 8 * v23 + 8) = *(_WORD *)(a1 + 116);
      v19 = *(char **)v19;
    }
    if ( WPP_MAIN_CB.Queue.Wcb.DeviceObject )
    {
      v24 = (struct _DEVICE_OBJECT *)(*(__int64 (__fastcall **)(unsigned __int64, _QWORD, __int64, __int64))(WdfFunctions_01023 + 248))(
                                       WPP_MAIN_CB.Dpc.ProcessorHistory,
                                       **(_QWORD **)(a1 + 8),
                                       v18,
                                       v20);
      *(_QWORD *)(a1 + 200) = IoAllocateWorkItem(v24);
      KeInitializeEvent((PRKEVENT)(a1 + 176), NotificationEvent, 1u);
    }
    else
    {
      *(_QWORD *)(a1 + 200) = 0LL;
    }
    v25 = *(_QWORD *)(a1 + 8);
    v32[2] = 0LL;
    v26 = *(_DWORD *)(a1 + 32);
    v32[0] = 48LL;
    LOBYTE(v32[4]) = 0;
    HIDWORD(v32[3]) = 16;
    LOBYTE(v32[3]) = 0;
    v32[1] = 0xC800000400LL;
    RtlStringCchPrintfA((NTSTRSAFE_PSTR)&v32[4], 0x10uLL, "%02d INT%02d", *(_DWORD *)(v25 + 176), v26);
    if ( (int)imp_WppRecorderLogCreate(WPP_GLOBAL_Control, v32, a1 + 16) < 0 )
      *(_QWORD *)(a1 + 16) = *(_QWORD *)(*(_QWORD *)(a1 + 8) + 72LL);
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v27 = *(_QWORD *)(a1 + 8);
      LODWORD(v31) = *(_DWORD *)(a1 + 108);
      LODWORD(v30) = *(_DWORD *)(a1 + 104);
      WPP_RECORDER_SF_qdd(
        *(_QWORD *)(v27 + 72),
        4u,
        9u,
        0x1Du,
        (__int64)&WPP_46aa8b6abf25399c8a99e6bda1f22045_Traceguids,
        *(_QWORD *)(a1 + 24),
        v30,
        v31);
    }
    *(_DWORD *)(a1 + 100) = 1;
    return 0;
  }
  while ( 1 )
  {
    v14 = XilCommonBuffer_AcquireBufferEx(v7, *(_DWORD *)(a1 + 104), a1, 829713993, v9);
    if ( !v14 )
      break;
    v15 = *(char ***)(a1 + 168);
    if ( *v15 != v4 )
LABEL_24:
      __fastfail(3u);
    *(_QWORD *)v14 = v4;
    ++v13;
    *((_QWORD *)v14 + 1) = v15;
    *v15 = v14;
    *(_QWORD *)(a1 + 168) = v14;
    if ( v13 >= *(_DWORD *)(a1 + 108) )
      goto LABEL_13;
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v12 = 28;
LABEL_16:
    WPP_RECORDER_SF_(
      *(_QWORD *)(*(_QWORD *)(a1 + 8) + 72LL),
      2u,
      9u,
      v12,
      (__int64)&WPP_46aa8b6abf25399c8a99e6bda1f22045_Traceguids);
  }
LABEL_17:
  v10 = -1073741670;
  if ( v7 )
  {
    if ( *(_QWORD *)(a1 + 152) )
    {
      XilCommonBuffer_ReleaseBuffer();
      *(_QWORD *)(a1 + 152) = 0LL;
    }
    while ( 1 )
    {
      v21 = *(char **)v4;
      if ( *(char **)v4 == v4 )
        break;
      if ( *((char **)v21 + 1) != v4 )
        goto LABEL_24;
      v22 = *(_QWORD *)v21;
      if ( *(char **)(*(_QWORD *)v21 + 8LL) != v21 )
        goto LABEL_24;
      *(_QWORD *)v4 = v22;
      *(_QWORD *)(v22 + 8) = v4;
      XilCommonBuffer_ReleaseBuffer();
    }
  }
  return v10;
}
