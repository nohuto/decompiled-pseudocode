/*
 * XREFs of ?DestroyPeriodicFrameNotification@BLTQUEUE@@QEAAJPEA_K@Z @ 0x1C027BBE0
 * Callers:
 *     ?DestroyPeriodicFrameNotification@DXGSYNCOBJECT@@QEAAXXZ @ 0x1C026995C (-DestroyPeriodicFrameNotification@DXGSYNCOBJECT@@QEAAXXZ.c)
 * Callees:
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0008A64 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?Assign@DXGADAPTER_REFERENCE@@QEAAXPEAVDXGADAPTER@@@Z @ 0x1C000BE40 (-Assign@DXGADAPTER_REFERENCE@@QEAAXPEAVDXGADAPTER@@@Z.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C000C650 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z @ 0x1C000C788 (--0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C00250D0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall BLTQUEUE::DestroyPeriodicFrameNotification(struct _KTHREAD **this, unsigned __int64 *a2)
{
  __int64 v4; // r8
  struct _KTHREAD *v5; // rdx
  unsigned int v6; // esi
  __int64 v7; // rcx
  unsigned __int64 v8; // rbx
  _QWORD *v9; // rax
  __int64 v10; // rax
  unsigned __int64 v11; // rbx
  struct _KTHREAD *v12; // rcx
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // rbp
  __int64 v16; // rax
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // rax
  char v22[8]; // [rsp+30h] [rbp-38h] BYREF
  DXGPUSHLOCK *v23; // [rsp+38h] [rbp-30h]
  int v24; // [rsp+40h] [rbp-28h]
  __int64 v25; // [rsp+70h] [rbp+8h] BYREF

  DXGAUTOPUSHLOCK::DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v22, this + 339, 0);
  DXGPUSHLOCK::AcquireExclusive(v23);
  v5 = this[344];
  v6 = 0;
  v7 = *a2;
  v8 = 0LL;
  v24 = 2;
  v9 = (_QWORD *)((char *)v5 + 48);
  while ( *v9 != v7 )
  {
    ++v8;
    v9 += 8;
    if ( v8 >= 8 )
    {
      v10 = WdLogNewEntry5_WdError(v7, v5, v4);
      *(_QWORD *)(v10 + 24) = *a2;
      WdLogEvent5_WdError(v10);
      v6 = -1073741811;
      goto LABEL_12;
    }
  }
  v11 = v8 << 6;
  *((_BYTE *)v5 + v11 + 56) = 1;
  *((_BYTE *)this[344] + v11 + 57) = 0;
  v12 = this[344];
  --*((_DWORD *)this + 686);
  ExCancelTimer(*(_QWORD *)((char *)v12 + v11), 0LL);
  v15 = *(_QWORD *)((char *)this[344] + v11 + 16);
  if ( *(_DWORD *)(v15 + 176) != 1 && *(_DWORD *)(v15 + 176) != 5 )
  {
    v16 = WdLogNewEntry5_WdAssertion(v14, v13);
    *(_QWORD *)(v16 + 24) = 3451LL;
    WdLogEvent5_WdAssertion(v16);
  }
  v25 = -1LL;
  if ( (*(int (__fastcall **)(__int64, unsigned __int64, _QWORD, __int64 *))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v15 + 2560) + 520LL)
                                                                                       + 8LL)
                                                                           + 656LL))(
         1LL,
         (unsigned __int64)this[344] + v11 + 8,
         0LL,
         &v25) < 0 )
  {
    v20 = WdLogNewEntry5_WdError(v18, v17, v19);
    *(_QWORD *)(v20 + 24) = *a2;
    WdLogEvent5_WdError(v20);
  }
  else
  {
    *(_QWORD *)((char *)this[344] + v11 + 40) = v25;
  }
  DXGADAPTER_REFERENCE::Assign((DXGADAPTER **)((char *)this[344] + v11 + 16), 0LL);
  *a2 = 0LL;
LABEL_12:
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v22);
  return v6;
}
