/*
 * XREFs of Controller_UcxEvtQueryUsbCapability @ 0x1C0011940
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0001FE0 (WPP_RECORDER_SF_.c)
 *     _guard_dispatch_icall_nop @ 0x1C0008A20 (_guard_dispatch_icall_nop.c)
 *     WPP_RECORDER_SF_d @ 0x1C000B24C (WPP_RECORDER_SF_d.c)
 *     McTemplateK0pjqq @ 0x1C0014068 (McTemplateK0pjqq.c)
 *     WPP_RECORDER_SF__guid_ @ 0x1C0014A40 (WPP_RECORDER_SF__guid_.c)
 */

__int64 __fastcall Controller_UcxEvtQueryUsbCapability(
        __int64 a1,
        const void *a2,
        unsigned int a3,
        _WORD *a4,
        _DWORD *a5)
{
  unsigned int v8; // ebx
  __int64 v9; // r14
  int v10; // edx
  int v11; // ecx
  int v12; // r8d
  unsigned __int16 v13; // r9
  unsigned __int16 v14; // r9
  int v15; // eax
  unsigned __int16 v16; // r9
  unsigned __int8 v17; // dl
  unsigned __int16 v18; // r9
  int v19; // r9d
  int v21; // [rsp+80h] [rbp+8h]

  v21 = a1;
  v8 = 0;
  v9 = (*(__int64 (__fastcall **)(unsigned __int64, __int64, void *))(WdfFunctions_01023 + 1616))(
         WPP_MAIN_CB.Dpc.ProcessorHistory,
         a1,
         off_1C0056428);
  *a5 = 0;
  if ( RtlCompareMemory(a2, &GUID_USB_CAPABILITY_CHAINED_MDLS, 0x10uLL) == 16 )
  {
    if ( (*(_QWORD *)(v9 + 336) & 0x80u) != 0LL )
    {
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
LABEL_6:
        v8 = -1073741637;
LABEL_75:
        LOBYTE(v15) = 0;
        goto LABEL_76;
      }
      v13 = 183;
LABEL_5:
      WPP_RECORDER_SF_(*(_QWORD *)(v9 + 72), 4u, 4u, v13, (__int64)&Context.Logger + 4);
      goto LABEL_6;
    }
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_75;
    v14 = 184;
LABEL_9:
    WPP_RECORDER_SF_(*(_QWORD *)(v9 + 72), 4u, 4u, v14, (__int64)&Context.Logger + 4);
    goto LABEL_75;
  }
  if ( RtlCompareMemory(a2, &GUID_USB_CAPABILITY_SECURE_TRANSFERS, 0x10uLL) == 16 )
  {
    if ( !*(_BYTE *)(v9 + 537) )
    {
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_6;
      v13 = 185;
      goto LABEL_5;
    }
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_75;
    v14 = 186;
    goto LABEL_9;
  }
  if ( RtlCompareMemory(a2, &GUID_USB_CAPABILITY_STATIC_STREAMS, 0x10uLL) == 16 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_(*(_QWORD *)(v9 + 72), 4u, 4u, 0xBBu, (__int64)&Context.Logger + 4);
    *a5 = 2;
    if ( a3 >= 2 )
    {
      if ( a4 )
      {
        v15 = *(_DWORD *)(*(_QWORD *)(v9 + 88) + 112LL);
        *a4 = v15;
        goto LABEL_76;
      }
      goto LABEL_53;
    }
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
LABEL_25:
      v8 = -1073741789;
      goto LABEL_75;
    }
    v16 = 188;
    v17 = 4;
LABEL_24:
    WPP_RECORDER_SF_d(*(_QWORD *)(v9 + 72), v17, 4u, v16, (__int64)&Context.Logger + 4, a3);
    goto LABEL_25;
  }
  if ( RtlCompareMemory(a2, &GUID_USB_CAPABILITY_FUNCTION_SUSPEND, 0x10uLL) == 16 )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_75;
    v14 = 189;
    goto LABEL_9;
  }
  if ( RtlCompareMemory(a2, &GUID_USB_CAPABILITY_SELECTIVE_SUSPEND, 0x10uLL) == 16 )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_75;
    v14 = 190;
    goto LABEL_9;
  }
  if ( RtlCompareMemory(a2, &GUID_USB_CAPABILITY_TIME_SYNC, 0x10uLL) == 16 )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_75;
    v14 = 191;
    goto LABEL_9;
  }
  if ( RtlCompareMemory(a2, &GUID_USB_CAPABILITY_CLEAR_TT_BUFFER_ON_ASYNC_TRANSFER_CANCEL, 0x10uLL) == 16 )
  {
    v11 = 0;
    if ( (*(_QWORD *)(v9 + 336) & 0x100000000LL) == 0 )
    {
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_6;
      v13 = 193;
      goto LABEL_5;
    }
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_75;
    v14 = 192;
    goto LABEL_9;
  }
  if ( RtlCompareMemory(a2, &GUID_USB_CAPABILITY_HIGH_BANDWIDTH_ISOCH, 0x10uLL) == 16 )
  {
    *a5 = 4;
    if ( a3 >= 4 )
    {
      if ( a4 )
      {
        v11 = *(_DWORD *)(*(_QWORD *)(v9 + 88) + 104LL);
        if ( (v11 & 0x10) != 0 )
        {
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            WPP_RECORDER_SF_(*(_QWORD *)(v9 + 72), 4u, 4u, 0xC2u, (__int64)&Context.Logger + 4);
          v11 = *(_BYTE *)(v9 + 538) != 0 ? 32 : 4;
          *(_DWORD *)a4 = v11;
          goto LABEL_75;
        }
        if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          goto LABEL_6;
        v13 = 195;
        goto LABEL_5;
      }
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
LABEL_53:
        v8 = -1073741811;
        goto LABEL_75;
      }
      v18 = 196;
LABEL_52:
      WPP_RECORDER_SF_(*(_QWORD *)(v9 + 72), 2u, 4u, v18, (__int64)&Context.Logger + 4);
      goto LABEL_53;
    }
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_25;
    v16 = 197;
LABEL_56:
    v17 = 2;
    goto LABEL_24;
  }
  if ( RtlCompareMemory(a2, &GUID_USB_CAPABILITY_ENDPOINT_OFFLOAD, 0x10uLL) != 16 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF__guid_(*(_QWORD *)(v9 + 72), v10, v12, v19);
    v8 = -1073741822;
    goto LABEL_75;
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_(*(_QWORD *)(v9 + 72), 4u, 4u, 0xC6u, (__int64)&Context.Logger + 4);
  *a5 = 4;
  if ( a3 < 4 )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_25;
    v16 = 200;
    goto LABEL_56;
  }
  if ( !a4 )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_53;
    v18 = 199;
    goto LABEL_52;
  }
  v11 = *(_DWORD *)(v9 + 628);
  if ( !v11 )
    goto LABEL_6;
  if ( !--v11 )
  {
    *(_DWORD *)a4 = 1;
    goto LABEL_75;
  }
  LOBYTE(v15) = 0;
  if ( v11 == 1 )
    *(_DWORD *)a4 = 2;
  else
    v8 = -1073741637;
LABEL_76:
  LOBYTE(v11) = WPP_MAIN_CB.Queue.Wcb.BufferChainingDpc;
  if ( SLOBYTE(WPP_MAIN_CB.Queue.Wcb.BufferChainingDpc) < 0 )
    McTemplateK0pjqq(v11, v10, v12, v21, (__int64)a2, v8, v15);
  return v8;
}
