/*
 * XREFs of ?OnKernelInputEvent@NonBamoInputDeliveryServer@@AEAAXPEBUtagQMSGINPUTREPORT@@@Z @ 0x180109C1C
 * Callers:
 *     std::_Func_impl_no_alloc__lambda_21198bd2221c6ebb41a3014c5bd670c5__void_tagQMSGINPUTREPORT_const___::_Do_call @ 0x180109E00 (std--_Func_impl_no_alloc__lambda_21198bd2221c6ebb41a3014c5bd670c5__void_tagQMSGINPU_ea_180109E00.c)
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18002C3E0 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800378B0 (_guard_dispatch_icall_nop.c)
 *     ??0InputEventPayloadBuffer@@QEAA@UInputEventPayloadHeader@@PEAUInputInfo@@@Z @ 0x180142B88 (--0InputEventPayloadBuffer@@QEAA@UInputEventPayloadHeader@@PEAUInputInfo@@@Z.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall NonBamoInputDeliveryServer::OnKernelInputEvent(
        NonBamoInputDeliveryServer *this,
        const struct tagQMSGINPUTREPORT *a2)
{
  const struct std::nothrow_t *v3; // rdx
  int v4; // [rsp+38h] [rbp-69h] BYREF
  void *v5; // [rsp+40h] [rbp-61h]
  __int64 v6; // [rsp+48h] [rbp-59h]
  _DWORD v7[4]; // [rsp+58h] [rbp-49h] BYREF
  __int64 v8; // [rsp+68h] [rbp-39h]
  int v9; // [rsp+70h] [rbp-31h]
  __int128 v10; // [rsp+78h] [rbp-29h]
  __int128 v11; // [rsp+88h] [rbp-19h]
  __int128 v12; // [rsp+98h] [rbp-9h]
  __int128 v13; // [rsp+A8h] [rbp+7h]
  __int128 v14; // [rsp+B8h] [rbp+17h]
  __int128 v15; // [rsp+C8h] [rbp+27h]
  __int128 v16; // [rsp+D8h] [rbp+37h]
  __int64 v17; // [rsp+E8h] [rbp+47h]

  v6 = -2LL;
  v10 = *(_OWORD *)a2;
  v11 = *((_OWORD *)a2 + 1);
  v12 = *((_OWORD *)a2 + 2);
  v13 = *((_OWORD *)a2 + 3);
  v14 = *((_OWORD *)a2 + 4);
  v15 = *((_OWORD *)a2 + 5);
  v16 = *((_OWORD *)a2 + 6);
  v17 = *((_QWORD *)a2 + 14);
  v7[0] = 0x800000;
  v7[1] = 0;
  v7[2] = 0;
  v8 = 0LL;
  v9 = 152;
  InputEventPayloadBuffer::InputEventPayloadBuffer(&v4, 4LL, v7);
  (*(void (__fastcall **)(struct IInputDeliveryServer *, char *, void *, _QWORD))(*(_QWORD *)NonBamoInputDeliveryServer::s_pNonBamoInputDeliveryServer
                                                                                + 24LL))(
    NonBamoInputDeliveryServer::s_pNonBamoInputDeliveryServer,
    (char *)a2 + 80,
    v5,
    v4);
  if ( v5 )
    operator delete(v5, v3);
}
