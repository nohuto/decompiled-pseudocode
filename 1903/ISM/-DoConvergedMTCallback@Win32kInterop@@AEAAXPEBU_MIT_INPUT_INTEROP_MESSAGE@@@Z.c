/*
 * XREFs of ?DoConvergedMTCallback@Win32kInterop@@AEAAXPEBU_MIT_INPUT_INTEROP_MESSAGE@@@Z @ 0x1800BC7B4
 * Callers:
 *     ?ProcessInteropCallback@Win32kInterop@@AEAAXPEBU_MIT_INPUT_INTEROP_MESSAGE@@@Z @ 0x1800BDD18 (-ProcessInteropCallback@Win32kInterop@@AEAAXPEBU_MIT_INPUT_INTEROP_MESSAGE@@@Z.c)
 * Callees:
 *     ?IsEdition@@YA_N_K@Z @ 0x18001B4C8 (-IsEdition@@YA_N_K@Z.c)
 *     ??0?$VariableSizedPayloadStorage@UInputInfo@@@@QEAA@_K@Z @ 0x18002A778 (--0-$VariableSizedPayloadStorage@UInputInfo@@@@QEAA@_K@Z.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18002C760 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180037DA0 (_guard_dispatch_icall_nop.c)
 *     ?GetSizeForPointerCount@PointerInputInfo@@SAKK@Z @ 0x180076044 (-GetSizeForPointerCount@PointerInputInfo@@SAKK@Z.c)
 *     ?DeliverToContextualProcessing@Win32kInterop@@AEAAXPEAUInputInfo@@V?$function@$$A6AXPEAUInputContext@@@Z@std@@V?$function@$$A6AXPEAUInputInfo@@@Z@4@@Z @ 0x1800BC520 (-DeliverToContextualProcessing@Win32kInterop@@AEAAXPEAUInputInfo@@V-$function@$$A6AXPEAUInputCon.c)
 *     ?InitializeInputInfoWithPointerInfo@@YAXPEBUtagPOINTER_INFO_UNION@@PEAUPointerInputInfo@@@Z @ 0x1800BCC04 (-InitializeInputInfoWithPointerInfo@@YAXPEBUtagPOINTER_INFO_UNION@@PEAUPointerInputInfo@@@Z.c)
 *     ?ReceivePointerFrame@ISM@InputTraceLogging@@SAX_KAEBUtagTELEMETRY_POINTER_FRAME_TIMES@@KK@Z @ 0x1800BE9F4 (-ReceivePointerFrame@ISM@InputTraceLogging@@SAX_KAEBUtagTELEMETRY_POINTER_FRAME_TIMES@@KK@Z.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall Win32kInterop::DoConvergedMTCallback(Win32kInterop *this, const struct _MIT_INPUT_INTEROP_MESSAGE *a2)
{
  const struct _MIT_INPUT_INTEROP_MESSAGE *v2; // rax
  bool v4; // zf
  unsigned __int64 SizeForPointerCount; // rdx
  __int64 v6; // r8
  const char *v7; // r9
  struct PointerInputInfo *v8; // rbx
  int v9; // edx
  char *v10; // rax
  __int64 i; // r9
  _OWORD *v12; // r8
  char *v13; // rcx
  const struct std::nothrow_t *v14; // rdx
  __int128 v15; // [rsp+28h] [rbp-51h]
  __int64 (__fastcall **v16)(); // [rsp+40h] [rbp-39h] BYREF
  __int128 v17; // [rsp+48h] [rbp-31h]
  __int64 (__fastcall ***v18)(); // [rsp+78h] [rbp-1h]
  _QWORD v19[10]; // [rsp+80h] [rbp+7h] BYREF
  const struct _MIT_INPUT_INTEROP_MESSAGE *v20; // [rsp+E8h] [rbp+6Fh] BYREF
  char *v21; // [rsp+F0h] [rbp+77h] BYREF
  struct PointerInputInfo *v22; // [rsp+F8h] [rbp+7Fh] BYREF

  v20 = a2;
  v2 = a2;
  if ( !*(_DWORD *)a2 )
  {
    InputTraceLogging::ISM::ReceivePointerFrame(
      *((_QWORD *)a2 + 16),
      (const struct _MIT_INPUT_INTEROP_MESSAGE *)((char *)a2 + 8),
      *((_DWORD *)a2 + 14),
      *((_DWORD *)a2 + 11));
    v2 = v20;
  }
  if ( *(_DWORD *)v2 || (v4 = IsEdition(253345LL) == 0, v2 = v20, v4) )
  {
    ((void (__fastcall *)(const struct _MIT_INPUT_INTEROP_MESSAGE *, _QWORD))Win32kInterop::s_pfnMTCallback)(v2, 0LL);
  }
  else
  {
    v21 = (char *)v20 + 8;
    SizeForPointerCount = (unsigned int)PointerInputInfo::GetSizeForPointerCount(*((_DWORD *)v20 + 11));
    VariableSizedPayloadStorage<InputInfo>::VariableSizedPayloadStorage<InputInfo>(
      (void **)&v22,
      SizeForPointerCount,
      v6,
      v7);
    v8 = v22;
    InitializeInputInfoWithPointerInfo((const struct tagPOINTER_INFO_UNION *)(v21 + 40), v22);
    *((_QWORD *)v8 + 16) = *((_QWORD *)v21 + 30);
    v9 = *((_DWORD *)v21 + 9);
    *((_DWORD *)v8 + 53) = v9;
    *((_DWORD *)v8 + 11) = *((_DWORD *)v21 + 8);
    v10 = v21;
    *((_OWORD *)v8 + 6) = *(_OWORD *)v21;
    *((_OWORD *)v8 + 7) = *((_OWORD *)v10 + 1);
    for ( i = 0LL; (unsigned int)i < *((_DWORD *)v8 + 53); i = (unsigned int)(i + 1) )
    {
      v12 = (_OWORD *)((char *)v8 + 144 * i + 216);
      v13 = &v21[240 * (unsigned int)i];
      *v12 = *(_OWORD *)(v13 + 40);
      v12[1] = *(_OWORD *)(v13 + 56);
      v12[2] = *(_OWORD *)(v13 + 72);
      v12[3] = *(_OWORD *)(v13 + 88);
      v12[4] = *(_OWORD *)(v13 + 104);
      v12[5] = *(_OWORD *)(v13 + 120);
      v12[6] = *(_OWORD *)(v13 + 136);
      v12[7] = *(_OWORD *)(v13 + 152);
      v12[8] = *(_OWORD *)(v13 + 168);
    }
    *(_QWORD *)&v15 = &v21;
    *((_QWORD *)&v15 + 1) = &v20;
    v16 = off_180175758;
    v17 = v15;
    v18 = &v16;
    v19[0] = off_1801756F8;
    v19[1] = &v21;
    v19[7] = v19;
    Win32kInterop::DeliverToContextualProcessing((__int64)this, (int *)v8, (__int64)v19, (__int64)&v16);
    if ( v22 )
      operator delete(v22, v14);
  }
}
