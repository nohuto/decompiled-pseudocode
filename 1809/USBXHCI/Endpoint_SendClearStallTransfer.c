/*
 * XREFs of Endpoint_SendClearStallTransfer @ 0x1C0017FE8
 * Callers:
 *     Endpoint_OnCancelEndpointConfigureCompletion @ 0x1C0016520 (Endpoint_OnCancelEndpointConfigureCompletion.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0006C60 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0006FC0 (memset.c)
 *     WPP_RECORDER_SF_ddq @ 0x1C001A380 (WPP_RECORDER_SF_ddq.c)
 */

__int64 __fastcall Endpoint_SendClearStallTransfer(_QWORD *Context)
{
  PIRP *v1; // rax
  PIRP v3; // rbp
  PIRP *v4; // rdi
  char v5; // al
  _IO_STACK_LOCATION *v6; // rbx
  __int64 v7; // rax
  struct _DEVICE_OBJECT *v8; // rax
  int v9; // edx
  _IO_STACK_LOCATION *CurrentStackLocation; // rax
  __int64 v11; // rcx
  __int64 v12; // rax
  __int64 result; // rax
  __int64 v14; // rdx
  __int64 v15; // rbx
  int v16; // edx
  int v17; // [rsp+40h] [rbp-28h] BYREF
  __int64 v18; // [rsp+44h] [rbp-24h]
  int v19; // [rsp+4Ch] [rbp-1Ch]
  PIRP v20; // [rsp+50h] [rbp-18h]

  v1 = (PIRP *)Context[33];
  v3 = *v1;
  v4 = v1 + 1;
  IoReuseIrp(*v1, 0);
  v5 = *((_BYTE *)v4 + 128);
  *((_BYTE *)v4 + 129) = 1;
  *((_WORD *)v4 + 65) = 0;
  *((_BYTE *)v4 + 128) = v5 & 0x1C | 2;
  *((_DWORD *)v4 + 33) = *((unsigned __int8 *)Context + 98);
  *(_DWORD *)v4 = 3276936;
  v4[4] = (PIRP)24;
  v4[5] = 0LL;
  v4[6] = 0LL;
  *((_DWORD *)v4 + 14) = 5000;
  v6 = v3->Tail.Overlay.CurrentStackLocation - 1;
  memset(v6, 0, sizeof(_IO_STACK_LOCATION));
  v6->MajorFunction = 15;
  v6->Parameters.Read.ByteOffset.LowPart = 2228227;
  v6->Parameters.WMI.ProviderId = (unsigned __int64)v4;
  --v3->CurrentLocation;
  v7 = (__int64)&v3->Tail.Overlay.CurrentStackLocation[-1];
  v3->Tail.Overlay.CurrentStackLocation = (_IO_STACK_LOCATION *)v7;
  *(_OWORD *)(v7 - 72) = *(_OWORD *)v7;
  *(_OWORD *)(v7 - 56) = *(_OWORD *)(v7 + 16);
  *(_OWORD *)(v7 - 40) = *(_OWORD *)(v7 + 32);
  *(_QWORD *)(v7 - 24) = *(_QWORD *)(v7 + 48);
  *(_BYTE *)(v7 - 69) = 0;
  v8 = (struct _DEVICE_OBJECT *)(*(__int64 (__fastcall **)(unsigned __int64, _QWORD))(WdfFunctions_01023 + 248))(
                                  WPP_MAIN_CB.Dpc.ProcessorHistory,
                                  *(_QWORD *)*Context);
  if ( IoSetCompletionRoutineEx(
         v8,
         v3,
         (PIO_COMPLETION_ROUTINE)Endpoint_ClearStallTransferCompletion,
         Context,
         1u,
         1u,
         1u) < 0 )
  {
    CurrentStackLocation = v3->Tail.Overlay.CurrentStackLocation;
    CurrentStackLocation[-1].CompletionRoutine = (int (__fastcall *)(_DEVICE_OBJECT *, _IRP *, void *))Endpoint_ClearStallTransferCompletion;
    CurrentStackLocation[-1].Context = Context;
    CurrentStackLocation[-1].Control = -32;
  }
  --v3->CurrentLocation;
  --v3->Tail.Overlay.CurrentStackLocation;
  v11 = Context[2];
  v12 = *(_QWORD *)(v11 + 176);
  if ( v12 )
  {
    v14 = Context[33];
    v15 = *(_QWORD *)(*(_QWORD *)(v12 + 88) + 72LL);
    v19 = 0;
    v17 = 24;
    v18 = 3LL;
    v20 = v3;
    (*(void (__fastcall **)(unsigned __int64, _QWORD, int *))(WdfFunctions_01023 + 1992))(
      WPP_MAIN_CB.Dpc.ProcessorHistory,
      *(_QWORD *)(v14 + 144),
      &v17);
    v16 = *(unsigned __int8 *)(Context[2] + 135LL);
    LOBYTE(v16) = 4;
    WPP_RECORDER_SF_ddq(
      Context[10],
      v16,
      13,
      67,
      (__int64)&WPP_cc93d32a3d3f360a569d7e7ab2fec42f_Traceguids,
      *(_BYTE *)(Context[2] + 135LL),
      *((_DWORD *)Context + 36),
      *(_QWORD *)(Context[33] + 144LL));
    result = (*(__int64 (__fastcall **)(unsigned __int64, _QWORD, __int64))(WdfFunctions_01023 + 2248))(
               WPP_MAIN_CB.Dpc.ProcessorHistory,
               *(_QWORD *)(Context[33] + 144LL),
               v15);
    if ( (int)result < 0 )
      return (*(__int64 (__fastcall **)(unsigned __int64, _QWORD, _QWORD))(WdfFunctions_01023 + 2104))(
               WPP_MAIN_CB.Dpc.ProcessorHistory,
               *(_QWORD *)(Context[33] + 144LL),
               (unsigned int)result);
  }
  else
  {
    LOBYTE(v9) = 2;
    return WPP_RECORDER_SF_ddq(
             Context[10],
             v9,
             13,
             66,
             (__int64)&WPP_cc93d32a3d3f360a569d7e7ab2fec42f_Traceguids,
             *(_BYTE *)(v11 + 135),
             *((_DWORD *)Context + 36),
             *(_QWORD *)(Context[33] + 144LL));
  }
  return result;
}
