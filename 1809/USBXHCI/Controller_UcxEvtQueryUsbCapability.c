/*
 * XREFs of Controller_UcxEvtQueryUsbCapability @ 0x1C000F080
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0001E30 (WPP_RECORDER_SF_.c)
 *     _guard_dispatch_icall_nop @ 0x1C0006C60 (_guard_dispatch_icall_nop.c)
 *     WPP_RECORDER_SF_d @ 0x1C00091C4 (WPP_RECORDER_SF_d.c)
 *     McTemplateK0pjqq @ 0x1C0011668 (McTemplateK0pjqq.c)
 *     WPP_RECORDER_SF__guid_ @ 0x1C0012040 (WPP_RECORDER_SF__guid_.c)
 */

__int64 __fastcall Controller_UcxEvtQueryUsbCapability(
        __int64 a1,
        const void *a2,
        unsigned int a3,
        _WORD *a4,
        _DWORD *a5)
{
  int v7; // esi
  unsigned int v9; // ebx
  __int64 v10; // rbp
  int v11; // edi
  __int64 v12; // rbx
  int v13; // edx
  int v14; // ecx
  int v15; // r8d
  int v16; // ebx
  char v17; // bl
  unsigned __int16 v18; // r9
  unsigned __int8 v19; // dl
  unsigned __int16 v20; // r9
  __int64 v21; // rbx
  __int64 v22; // rcx
  unsigned __int16 v23; // r9
  SIZE_T v24; // rax
  int v25; // edx
  int v26; // r8d
  int v27; // r9d
  __int64 v28; // rcx
  int v30; // [rsp+80h] [rbp+8h]

  v30 = a1;
  v7 = a1;
  v9 = 0;
  v10 = (*(__int64 (__fastcall **)(unsigned __int64, __int64, void *))(WdfFunctions_01023 + 1616))(
          WPP_MAIN_CB.Dpc.ProcessorHistory,
          a1,
          off_1C004F400);
  LOBYTE(v11) = 0;
  *a5 = 0;
  if ( RtlCompareMemory(a2, &GUID_USB_CAPABILITY_CHAINED_MDLS, 0x10uLL) == 16 )
  {
    v12 = (*(_QWORD *)(v10 + 272) >> 7) & 1LL;
    WPP_RECORDER_SF_(*(_QWORD *)(v10 + 72), 4u, 4u, 182 - (v12 != 0), (__int64)&Context.Logger + 4);
    v16 = -(v12 != 0);
LABEL_5:
    v9 = v16 & 0xC00000BB;
LABEL_44:
    LOBYTE(v11) = 0;
    v7 = v30;
    goto LABEL_46;
  }
  if ( RtlCompareMemory(a2, &GUID_USB_CAPABILITY_SECURE_TRANSFERS, 0x10uLL) == 16 )
  {
    v17 = *(_BYTE *)(v10 + 473);
    WPP_RECORDER_SF_(*(_QWORD *)(v10 + 72), 4u, 4u, (v17 != 0) + 183, (__int64)&Context.Logger + 4);
    v16 = -(v17 == 0);
    goto LABEL_5;
  }
  if ( RtlCompareMemory(a2, &GUID_USB_CAPABILITY_STATIC_STREAMS, 0x10uLL) == 16 )
  {
    WPP_RECORDER_SF_(*(_QWORD *)(v10 + 72), 4u, 4u, 0xB9u, (__int64)&Context.Logger + 4);
    *a5 = 2;
    if ( a3 >= 2 )
    {
      v7 = v30;
      if ( a4 )
      {
        v11 = *(_DWORD *)(*(_QWORD *)(v10 + 88) + 112LL);
        *a4 = v11;
      }
      else
      {
        LOBYTE(v11) = 0;
        v9 = -1073741811;
      }
      goto LABEL_46;
    }
    v18 = 186;
    v19 = 4;
    goto LABEL_42;
  }
  if ( RtlCompareMemory(a2, &GUID_USB_CAPABILITY_FUNCTION_SUSPEND, 0x10uLL) == 16 )
  {
    v20 = 187;
LABEL_18:
    WPP_RECORDER_SF_(*(_QWORD *)(v10 + 72), 4u, 4u, v20, (__int64)&Context.Logger + 4);
    goto LABEL_44;
  }
  if ( RtlCompareMemory(a2, &GUID_USB_CAPABILITY_SELECTIVE_SUSPEND, 0x10uLL) == 16 )
  {
    v20 = 188;
    goto LABEL_18;
  }
  if ( RtlCompareMemory(a2, &GUID_USB_CAPABILITY_TIME_SYNC, 0x10uLL) == 16 )
  {
    v20 = 189;
    goto LABEL_18;
  }
  if ( RtlCompareMemory(a2, &GUID_USB_CAPABILITY_CLEAR_TT_BUFFER_ON_ASYNC_TRANSFER_CANCEL, 0x10uLL) == 16 )
  {
    v21 = HIDWORD(*(_QWORD *)(v10 + 272)) & 1;
    WPP_RECORDER_SF_(*(_QWORD *)(v10 + 72), 4u, 4u, 191 - ((unsigned int)v21 != 0LL), (__int64)&Context.Logger + 4);
    v9 = v21 == 0 ? 0xC00000BB : 0;
    goto LABEL_44;
  }
  if ( RtlCompareMemory(a2, &GUID_USB_CAPABILITY_HIGH_BANDWIDTH_ISOCH, 0x10uLL) == 16 )
  {
    *a5 = 4;
    v22 = *(_QWORD *)(v10 + 72);
    if ( a3 < 4 )
    {
      v18 = 195;
      v19 = 2;
LABEL_43:
      WPP_RECORDER_SF_d(v22, v19, 4u, v18, (__int64)&Context.Logger + 4, a3);
      v9 = -1073741789;
      goto LABEL_44;
    }
    if ( a4 )
    {
      if ( (*(_DWORD *)(*(_QWORD *)(v10 + 88) + 104LL) & 0x10) != 0 )
      {
        WPP_RECORDER_SF_(v22, 4u, 4u, 0xC0u, (__int64)&Context.Logger + 4);
        v14 = *(_DWORD *)(*(_QWORD *)(v10 + 88) + 104LL);
        *(_DWORD *)a4 = (v14 & 0x40) != 0 ? 32 : 4;
        goto LABEL_44;
      }
      WPP_RECORDER_SF_(v22, 4u, 4u, 0xC1u, (__int64)&Context.Logger + 4);
LABEL_27:
      v9 = -1073741637;
      goto LABEL_44;
    }
    v23 = 194;
LABEL_29:
    WPP_RECORDER_SF_(v22, 2u, 4u, v23, (__int64)&Context.Logger + 4);
    v9 = -1073741811;
    goto LABEL_44;
  }
  v24 = RtlCompareMemory(a2, &GUID_USB_CAPABILITY_ENDPOINT_OFFLOAD, 0x10uLL);
  v28 = *(_QWORD *)(v10 + 72);
  if ( v24 != 16 )
  {
    WPP_RECORDER_SF__guid_(v28, v25, v26, v27);
    v9 = -1073741822;
    goto LABEL_46;
  }
  WPP_RECORDER_SF_(v28, 4u, 4u, 0xC4u, (__int64)&Context.Logger + 4);
  *a5 = 4;
  if ( a3 < 4 )
  {
    v18 = 198;
    v19 = 2;
LABEL_42:
    v22 = *(_QWORD *)(v10 + 72);
    goto LABEL_43;
  }
  if ( !a4 )
  {
    v22 = *(_QWORD *)(v10 + 72);
    v23 = 197;
    goto LABEL_29;
  }
  v14 = *(_DWORD *)(v10 + 564);
  if ( !v14 )
    goto LABEL_27;
  if ( !--v14 )
  {
    *(_DWORD *)a4 = 1;
    goto LABEL_44;
  }
  LOBYTE(v11) = 0;
  v7 = v30;
  if ( v14 == 1 )
    *(_DWORD *)a4 = 2;
  else
    v9 = -1073741637;
LABEL_46:
  LOBYTE(v14) = WPP_MAIN_CB.Queue.Wcb.BufferChainingDpc;
  if ( SLOBYTE(WPP_MAIN_CB.Queue.Wcb.BufferChainingDpc) < 0 )
    McTemplateK0pjqq(v14, v13, v15, v7, (__int64)a2, v9, v11);
  return v9;
}
