/*
 * XREFs of HUBPDO_EvtDeviceWdmIrpQueryDeviceTextPreprocess @ 0x1C0014BAC
 * Callers:
 *     HUBPDO_EvtDeviceWdmIrpPnPPowerPreprocess @ 0x1C00144D0 (HUBPDO_EvtDeviceWdmIrpPnPPowerPreprocess.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C0001A3C (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_ @ 0x1C0001E44 (WPP_RECORDER_SF_.c)
 *     HUBSM_AddEvent @ 0x1C0009D94 (HUBSM_AddEvent.c)
 *     RtlStringCbPrintfW @ 0x1C0010C04 (RtlStringCbPrintfW.c)
 *     HUBMISC_WaitForSignal @ 0x1C002C420 (HUBMISC_WaitForSignal.c)
 *     _guard_dispatch_icall_nop @ 0x1C003C610 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C003C640 (memmove.c)
 */

__int64 __fastcall HUBPDO_EvtDeviceWdmIrpQueryDeviceTextPreprocess(__int64 a1, IRP *a2)
{
  unsigned int v3; // ebp
  __int64 v4; // rax
  _IO_STACK_LOCATION *CurrentStackLocation; // rcx
  __int64 v6; // rsi
  unsigned int Length; // eax
  wchar_t *PoolWithTag; // rbx
  unsigned __int16 v9; // r9
  NTSTATUS v10; // eax
  __int16 Size; // r14
  _BYTE *v12; // rax
  _WORD *v13; // rcx
  unsigned int v14; // edx
  unsigned __int64 v15; // rax
  void *v16; // rcx
  struct _KEVENT *v17; // r13
  unsigned __int8 *v18; // rax
  unsigned __int16 v19; // bx
  _WORD *v20; // rax
  _WORD *v21; // rbp

  v3 = -1073741637;
  v4 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01015 + 1616))(
         WdfDriverGlobals,
         a1,
         off_1C005F040);
  CurrentStackLocation = a2->Tail.Overlay.CurrentStackLocation;
  v6 = *(_QWORD *)(v4 + 24);
  Length = CurrentStackLocation->Parameters.Read.Length;
  if ( Length == 1 )
  {
    PoolWithTag = (wchar_t *)ExAllocatePoolWithTag(ExDefaultNonPagedPoolType, 0x2AuLL, 0x64334855u);
    if ( !PoolWithTag )
    {
      v9 = 53;
LABEL_4:
      WPP_RECORDER_SF_(
        *(_QWORD *)(*(_QWORD *)(v6 + 8) + 1432LL),
        2u,
        5u,
        v9,
        (__int64)&WPP_7c9a8c1f1a7c3ca72e1c468f1757432b_Traceguids);
      v3 = -1073741670;
      goto LABEL_31;
    }
    v10 = RtlStringCbPrintfW(
            PoolWithTag,
            0x2AuLL,
            L"Port_#%04d.Hub_#%04d",
            *(unsigned __int16 *)(*(_QWORD *)(v6 + 8) + 200LL),
            *(_DWORD *)(*(_QWORD *)v6 + 96LL));
    v3 = v10;
    if ( v10 < 0 )
    {
      WPP_RECORDER_SF_d(
        *(_QWORD *)(*(_QWORD *)(v6 + 8) + 1432LL),
        2u,
        5u,
        0x36u,
        (__int64)&WPP_7c9a8c1f1a7c3ca72e1c468f1757432b_Traceguids,
        v10);
      ExFreePoolWithTag(PoolWithTag, 0x64334855u);
      goto LABEL_31;
    }
    a2->IoStatus.Information = (unsigned __int64)PoolWithTag;
    goto LABEL_30;
  }
  if ( !Length && *(_BYTE *)(v6 + 2003) && (*(_DWORD *)(v6 + 1644) & 1) == 0 )
  {
    a2->IoStatus.Information = 0LL;
    Size = CurrentStackLocation->Parameters.QueryInterface.Size;
    if ( Size )
    {
      v12 = *(_BYTE **)(v6 + 2024);
      if ( v12 )
      {
        if ( *v12 > 2u )
        {
          v13 = v12 + 2;
          v14 = 0;
          v15 = ((unsigned __int64)(unsigned __int8)*v12 - 2) >> 1;
          if ( (_DWORD)v15 )
          {
            do
            {
              if ( !*v13 )
                break;
              if ( *v13 == Size )
                goto LABEL_19;
              ++v14;
              ++v13;
            }
            while ( v14 < (unsigned int)v15 );
          }
        }
      }
    }
    Size = 1033;
LABEL_19:
    if ( Size == *(_WORD *)(v6 + 2040) )
    {
      v17 = (struct _KEVENT *)(v6 + 472);
    }
    else
    {
      v16 = *(void **)(v6 + 2032);
      *(_WORD *)(v6 + 2040) = Size;
      if ( v16 )
        ExFreePoolWithTag(v16, 0x64334855u);
      v17 = (struct _KEVENT *)(v6 + 472);
      *(_QWORD *)(v6 + 2032) = 0LL;
      KeClearEvent((PRKEVENT)(v6 + 472));
      HUBSM_AddEvent(v6 + 504, 4087);
      HUBMISC_WaitForSignal((PVOID)(v6 + 472));
    }
    v18 = *(unsigned __int8 **)(v6 + 2032);
    if ( v18
      || Size != 1033
      && (*(_WORD *)(v6 + 2040) = 1033,
          KeClearEvent(v17),
          HUBSM_AddEvent(v6 + 504, 4087),
          HUBMISC_WaitForSignal(v17),
          (v18 = *(unsigned __int8 **)(v6 + 2032)) != 0LL) )
    {
      v19 = (((unsigned __int64)*v18 - 2) >> 1) + 1;
      v20 = ExAllocatePoolWithTag(ExDefaultNonPagedPoolType, 2LL * v19, 0x64334855u);
      v21 = v20;
      if ( !v20 )
      {
        v9 = 55;
        goto LABEL_4;
      }
      memmove(v20, (const void *)(*(_QWORD *)(v6 + 2032) + 2LL), 2LL * v19 - 2);
      v21[v19 - 1] = 0;
      a2->IoStatus.Information = (unsigned __int64)v21;
LABEL_30:
      v3 = 0;
    }
  }
LABEL_31:
  a2->IoStatus.Status = v3;
  IofCompleteRequest(a2, 0);
  return v3;
}
