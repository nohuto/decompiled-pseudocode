/*
 * XREFs of Interrupter_PrepareInterrupter @ 0x1C005EFF0
 * Callers:
 *     Interrupter_PrepareHardware @ 0x1C005EB9C (Interrupter_PrepareHardware.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0001E30 (WPP_RECORDER_SF_.c)
 *     __security_check_cookie @ 0x1C0002030 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0006C60 (_guard_dispatch_icall_nop.c)
 *     RtlStringCchPrintfA @ 0x1C0009144 (RtlStringCchPrintfA.c)
 *     XilCommonBuffer_AcquireBufferEx @ 0x1C000B0A0 (XilCommonBuffer_AcquireBufferEx.c)
 *     XilCommonBuffer_ReleaseBuffer @ 0x1C000B0E8 (XilCommonBuffer_ReleaseBuffer.c)
 *     WPP_RECORDER_SF_qdd @ 0x1C0012590 (WPP_RECORDER_SF_qdd.c)
 *     Debug_FreAssertMsg @ 0x1C0012DEC (Debug_FreAssertMsg.c)
 *     Interrupter_DetermineSegmentSizeAndCount @ 0x1C005E3EC (Interrupter_DetermineSegmentSizeAndCount.c)
 */

__int64 __fastcall Interrupter_PrepareInterrupter(__int64 a1, unsigned __int8 a2)
{
  char *v2; // rdi
  __int64 v4; // rax
  __int64 v5; // r15
  void *v6; // rsi
  int v7; // eax
  int v8; // ebp
  __int64 result; // rax
  __int64 v10; // rcx
  char *v11; // rax
  __int64 v12; // rcx
  unsigned __int16 v13; // ax
  unsigned int v14; // r14d
  char *v15; // rax
  char **v16; // rcx
  __int64 v17; // rcx
  __int64 v18; // rdx
  __int64 v19; // r8
  char *v20; // rdx
  __int64 v21; // r9
  _DWORD *v22; // rdx
  char *v23; // rdx
  __int64 v24; // rax
  __int64 v25; // rcx
  struct _DEVICE_OBJECT *v26; // rax
  __int64 v27; // rcx
  int v28; // eax
  int v29; // eax
  __int64 v30; // rcx
  __int64 v31; // rcx
  signed __int32 v32[8]; // [rsp+0h] [rbp-98h] BYREF
  __int64 v33; // [rsp+30h] [rbp-68h]
  __int64 v34; // [rsp+38h] [rbp-60h]
  _DWORD v35[4]; // [rsp+40h] [rbp-58h] BYREF
  __int64 v36; // [rsp+50h] [rbp-48h]
  char v37; // [rsp+58h] [rbp-40h]
  int v38; // [rsp+5Ch] [rbp-3Ch]
  char pszDest[16]; // [rsp+60h] [rbp-38h] BYREF

  v2 = (char *)(a1 + 160);
  *(_QWORD *)(a1 + 168) = a1 + 160;
  *(_QWORD *)(a1 + 160) = a1 + 160;
  v4 = *(_QWORD *)(a1 + 8);
  v5 = *(_QWORD *)(v4 + 88);
  v6 = *(void **)(v4 + 120);
  v7 = *(_DWORD *)(v4 + 476);
  if ( v7 )
  {
    if ( (unsigned int)(v7 - 1) > 1 )
    {
      Debug_FreAssertMsg(
        (__int64)"Unexpected DMA Mode",
        0,
        (int)"onecore\\drivers\\wdm\\usb\\usb3\\usbxhci\\sys\\interrupter.c",
        738);
      return 3221225666LL;
    }
    v8 = 3;
  }
  else
  {
    v8 = 1;
  }
  *(_DWORD *)(a1 + 96) ^= (*(_DWORD *)(a1 + 96) ^ a2) & 1;
  Interrupter_DetermineSegmentSizeAndCount(a1);
  v11 = XilCommonBuffer_AcquireBufferEx(v6, 16 * *(_DWORD *)(v10 + 108), a1, 829713993, v8);
  *(_QWORD *)(a1 + 152) = v11;
  if ( v11 )
  {
    v14 = 0;
    if ( !*(_DWORD *)(a1 + 108) )
    {
LABEL_12:
      v17 = *(_QWORD *)(v5 + 40);
      v18 = 32LL * *(unsigned int *)(a1 + 32);
      *(_QWORD *)(a1 + 24) = v17 + v18 + 32;
      *(_DWORD *)(v18 + v17 + 40) = 0;
      _InterlockedOr(v32, 0);
      v19 = 0LL;
      v20 = *(char **)v2;
      v21 = *(_QWORD *)(*(_QWORD *)(a1 + 152) + 16LL);
      while ( v2 != v20 )
      {
        v25 = 2LL * (unsigned int)v19;
        v19 = (unsigned int)(v19 + 1);
        *(_QWORD *)(v21 + 8 * v25) = *((_QWORD *)v20 + 3);
        *(_WORD *)(v21 + 8 * v25 + 8) = *(_WORD *)(a1 + 116);
        v20 = *(char **)v20;
      }
      if ( WPP_MAIN_CB.Queue.Wcb.DeviceObject )
      {
        v26 = (struct _DEVICE_OBJECT *)(*(__int64 (__fastcall **)(unsigned __int64, _QWORD, __int64, __int64))(WdfFunctions_01023 + 248))(
                                         WPP_MAIN_CB.Dpc.ProcessorHistory,
                                         **(_QWORD **)(a1 + 8),
                                         v19,
                                         v21);
        *(_QWORD *)(a1 + 200) = IoAllocateWorkItem(v26);
        KeInitializeEvent((PRKEVENT)(a1 + 176), NotificationEvent, 1u);
      }
      else
      {
        *(_QWORD *)(a1 + 200) = 0LL;
      }
      v27 = *(_QWORD *)(a1 + 8);
      v36 = 0LL;
      v35[1] = 0;
      v28 = *(_DWORD *)(a1 + 32);
      v35[0] = 48;
      pszDest[0] = 0;
      v38 = 16;
      v37 = 0;
      v35[2] = 1024;
      v35[3] = 200;
      RtlStringCchPrintfA(pszDest, 0x10uLL, "%02d INT%02d", *(_DWORD *)(v27 + 176), v28);
      v29 = imp_WppRecorderLogCreate(WPP_GLOBAL_Control, v35, a1 + 16);
      v30 = *(_QWORD *)(a1 + 8);
      if ( v29 < 0 )
        *(_QWORD *)(a1 + 16) = *(_QWORD *)(v30 + 72);
      v31 = *(_QWORD *)(v30 + 72);
      LODWORD(v34) = *(_DWORD *)(a1 + 108);
      LODWORD(v33) = *(_DWORD *)(a1 + 104);
      WPP_RECORDER_SF_qdd(
        v31,
        4u,
        9u,
        0x1Du,
        (__int64)&WPP_0662e7d5b0263a64b1494f18ba617a4b_Traceguids,
        *(_QWORD *)(a1 + 24),
        v33,
        v34);
      result = 0LL;
      *(_DWORD *)(a1 + 100) = 1;
      return result;
    }
    while ( 1 )
    {
      v15 = XilCommonBuffer_AcquireBufferEx(v6, *(_DWORD *)(a1 + 104), a1, 829713993, v8);
      if ( !v15 )
        break;
      v16 = (char **)*((_QWORD *)v2 + 1);
      if ( *v16 != v2 )
LABEL_21:
        __fastfail(3u);
      *(_QWORD *)v15 = v2;
      ++v14;
      *((_QWORD *)v15 + 1) = v16;
      *v16 = v15;
      *((_QWORD *)v2 + 1) = v15;
      if ( v14 >= *(_DWORD *)(a1 + 108) )
        goto LABEL_12;
    }
    v12 = *(_QWORD *)(*(_QWORD *)(a1 + 8) + 72LL);
    v13 = 28;
  }
  else
  {
    v12 = *(_QWORD *)(*(_QWORD *)(a1 + 8) + 72LL);
    v13 = 27;
  }
  WPP_RECORDER_SF_(v12, 2u, 9u, v13, (__int64)&WPP_0662e7d5b0263a64b1494f18ba617a4b_Traceguids);
  result = 3221225626LL;
  if ( v6 )
  {
    v22 = *(_DWORD **)(a1 + 152);
    if ( v22 )
    {
      XilCommonBuffer_ReleaseBuffer((__int64)v6, v22);
      *(_QWORD *)(a1 + 152) = 0LL;
    }
    while ( 1 )
    {
      v23 = *(char **)v2;
      result = 3221225626LL;
      if ( *(char **)v2 == v2 )
        break;
      if ( *((char **)v23 + 1) != v2 )
        goto LABEL_21;
      v24 = *(_QWORD *)v23;
      if ( *(char **)(*(_QWORD *)v23 + 8LL) != v23 )
        goto LABEL_21;
      *(_QWORD *)v2 = v24;
      *(_QWORD *)(v24 + 8) = v2;
      XilCommonBuffer_ReleaseBuffer((__int64)v6, v23);
    }
  }
  return result;
}
