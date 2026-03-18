/*
 * XREFs of UnmapChildMmioSpace @ 0x1C022B120
 * Callers:
 *     <none>
 * Callees:
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C000C448 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGAUTOPUSHLOCKSHARED@@QEAA@QEAVDXGPUSHLOCK@@@Z @ 0x1C0019778 (--0DXGAUTOPUSHLOCKSHARED@@QEAA@QEAVDXGPUSHLOCK@@@Z.c)
 *     __security_check_cookie @ 0x1C00232F0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0024FA0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0025300 (memset.c)
 */

void __fastcall UnmapChildMmioSpace(__int64 a1, __int64 a2, __int64 a3, char a4)
{
  volatile signed __int32 *v5; // rax
  unsigned __int64 v6; // rdx
  volatile signed __int64 *v7; // rax
  char v8; // al
  __int64 v9; // rbx
  __int64 v10; // rbx
  _BYTE v11[24]; // [rsp+20h] [rbp-58h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+38h] [rbp-40h] BYREF

  v5 = &g_VgpuNumVaToGpaMappings;
  if ( !a4 )
    v5 = &g_VgpuNumHpaToGpaMappings;
  v6 = -a2;
  _InterlockedDecrement(v5);
  v7 = &g_VgpuSizeVaToGpaMappings;
  if ( !a4 )
    v7 = &g_VgpuSizeHpaToGpaMappings;
  _InterlockedExchangeAdd64(v7, v6);
  v8 = *(_BYTE *)(a1 + 299);
  if ( (v8 & 8) != 0 )
  {
    v9 = *(_QWORD *)(*(_QWORD *)(a1 + 432) + 432LL);
LABEL_7:
    v10 = v9 + 88;
    goto LABEL_11;
  }
  if ( (v8 & 4) != 0 )
  {
    v9 = *(_QWORD *)(a1 + 432);
    goto LABEL_7;
  }
  v10 = 0LL;
LABEL_11:
  DXGAUTOPUSHLOCKSHARED::DXGAUTOPUSHLOCKSHARED((DXGAUTOPUSHLOCKSHARED *)v11, (struct _KTHREAD **)(v10 + 8));
  ((void (__fastcall *)(_QWORD, __int64))qword_1C00A3EB0)(*(_QWORD *)v10, a3);
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v11);
  if ( *(_QWORD *)(a3 + 16) )
  {
    memset(&ApcState, 0, sizeof(ApcState));
    KeStackAttachProcess(*(PRKPROCESS *)(a3 + 40), &ApcState);
    ObCloseHandle(*(HANDLE *)(a3 + 16), 0);
    KeUnstackDetachProcess(&ApcState);
  }
  ExFreePoolWithTag((PVOID)a3, 0x4B677844u);
}
