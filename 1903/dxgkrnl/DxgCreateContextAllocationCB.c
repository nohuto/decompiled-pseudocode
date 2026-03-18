/*
 * XREFs of DxgCreateContextAllocationCB @ 0x1C014F6B0
 * Callers:
 *     <none>
 * Callees:
 *     DpiGetDxgAdapter @ 0x1C0013BA0 (DpiGetDxgAdapter.c)
 *     ??0DXGVALIDATIONPROCESSREATTACH@@QEAA@XZ @ 0x1C0013BEC (--0DXGVALIDATIONPROCESSREATTACH@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1C00232F0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0024FA0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DxgCreateContextAllocationCB(unsigned int *a1)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // r8
  __int64 DxgAdapter; // rax
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // rbx
  __int64 v9; // r13
  __int64 v10; // rdx
  __int64 v11; // rcx
  _QWORD *v12; // r9
  unsigned int v13; // ebx
  __int64 v15; // rax
  _QWORD *v16; // rax
  _QWORD *v17; // rax
  _BYTE v18[8]; // [rsp+80h] [rbp-68h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+88h] [rbp-60h] BYREF

  DXGVALIDATIONPROCESSREATTACH::DXGVALIDATIONPROCESSREATTACH((DXGVALIDATIONPROCESSREATTACH *)v18);
  if ( KeGetCurrentIrql() )
  {
    v15 = WdLogNewEntry5_WdAssertion(v3, v2);
    *(_QWORD *)(v15 + 24) = 141LL;
    WdLogEvent5_WdAssertion(v15);
  }
  DxgAdapter = DpiGetDxgAdapter(*((_QWORD *)a1 + 1), v2, v4);
  v8 = DxgAdapter;
  if ( !DxgAdapter )
    goto LABEL_18;
  if ( !*(_QWORD *)(DxgAdapter + 2560) )
  {
    v16 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v7, v6);
    v16[3] = 275LL;
    v16[4] = 7LL;
    v16[5] = 0LL;
    v16[6] = 0LL;
    v16[7] = 0LL;
    WdLogEvent5_WdCriticalError(v16);
  }
  v9 = *((_QWORD *)a1 + 2);
  if ( v9 )
  {
    if ( !*(_DWORD *)(v9 + 72) && !ExIsResourceAcquiredExclusiveLite(*(PERESOURCE *)(v9 + 104)) )
    {
      v17 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v11, v10);
      v17[3] = 275LL;
      v17[4] = 4LL;
      v17[5] = v9;
      v17[6] = 0LL;
      v17[7] = 0LL;
      WdLogEvent5_WdCriticalError(v17);
    }
    v12 = (_QWORD *)*((_QWORD *)a1 + 3);
    if ( v12 )
    {
      if ( *(int *)(v8 + 2184) >= 9472 )
        v12 = (_QWORD *)*v12;
    }
    else
    {
      v12 = 0LL;
    }
    v13 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, __int64, _QWORD *, _QWORD, _QWORD, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int *))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v8 + 2560) + 544LL) + 8LL) + 648LL))(
            *(_QWORD *)(*(_QWORD *)(v8 + 2560) + 552LL),
            a1[20],
            *a1,
            v9,
            v12,
            *((_QWORD *)a1 + 4),
            *((_QWORD *)a1 + 5),
            a1[12],
            a1[13],
            a1[14],
            a1[15],
            a1[16],
            a1[17],
            a1 + 18);
  }
  else
  {
LABEL_18:
    v13 = -1073741811;
  }
  if ( v18[0] )
    KeUnstackDetachProcess(&ApcState);
  return v13;
}
