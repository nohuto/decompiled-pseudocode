/*
 * XREFs of ?PinPrimaryAllocations@DXGDEVICE@@QEAAJI@Z @ 0x1C00C9CD4
 * Callers:
 *     DxgkSetDisplayMode @ 0x1C00CCC90 (DxgkSetDisplayMode.c)
 *     ?RestoreManagedPrimaryState@MANAGEDPRIMARIESTRACKER@@QEAAJH@Z @ 0x1C00D07B4 (-RestoreManagedPrimaryState@MANAGEDPRIMARIESTRACKER@@QEAAJH@Z.c)
 * Callees:
 *     ?IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ @ 0x1C0002778 (-IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C000C650 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z @ 0x1C000C708 (--0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C00250D0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DXGDEVICE::PinPrimaryAllocations(DXGDEVICE *this, __int64 a2)
{
  __int64 v3; // rdi
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v9; // rsi
  __int64 v10; // rdx
  __int64 v11; // rax
  __int64 v12; // rcx
  int v13; // ebp
  __int64 v14; // rax
  __int64 v15; // rax
  __int64 v16; // rax
  __int64 v17; // rax
  __int64 v18; // rax
  __int64 v19; // r14
  __int64 v20; // rdx
  _BYTE v21[40]; // [rsp+30h] [rbp-28h] BYREF

  v3 = (unsigned int)a2;
  if ( (unsigned int)a2 >= *((_DWORD *)this + 434) )
  {
    v14 = WdLogNewEntry5_WdAssertion(this, a2);
    *(_QWORD *)(v14 + 24) = 3711LL;
    WdLogEvent5_WdAssertion(v14);
  }
  if ( !DXGADAPTER::IsCoreResourceExclusiveOwner(*(PERESOURCE **)(*((_QWORD *)this + 2) + 16LL)) )
  {
    v15 = WdLogNewEntry5_WdAssertion(v5, v4);
    *(_QWORD *)(v15 + 24) = 3712LL;
    WdLogEvent5_WdAssertion(v15);
  }
  if ( !DXGADAPTER::IsCoreResourceExclusiveOwner(*((PERESOURCE **)this + 216)) )
  {
    v16 = WdLogNewEntry5_WdAssertion(v7, v6);
    *(_QWORD *)(v16 + 24) = 3713LL;
    WdLogEvent5_WdAssertion(v16);
  }
  if ( *((_DWORD *)this + 82) != 1 )
  {
    v17 = WdLogNewEntry5_WdAssertion(v7, v6);
    *(_QWORD *)(v17 + 24) = 3714LL;
    WdLogEvent5_WdAssertion(v17);
  }
  if ( (*((_DWORD *)this + v3 + 272) & 0x100) != 0 )
    return 0LL;
  if ( *((_QWORD *)this + 216) != *(_QWORD *)(*((_QWORD *)this + 2) + 16LL) )
  {
LABEL_16:
    DXGAUTOPUSHLOCKEXCLUSIVE::DXGAUTOPUSHLOCKEXCLUSIVE((DXGAUTOPUSHLOCKEXCLUSIVE *)v21, (struct _KTHREAD **)this + 32);
    *((_DWORD *)this + v3 + 272) |= 0x100u;
    DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v21);
    return 0LL;
  }
  DXGAUTOPUSHLOCKEXCLUSIVE::DXGAUTOPUSHLOCKEXCLUSIVE((DXGAUTOPUSHLOCKEXCLUSIVE *)v21, (struct _KTHREAD **)this + 32);
  v9 = 0LL;
  if ( !*((_DWORD *)this + v3 + 208) )
  {
LABEL_15:
    DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v21);
    goto LABEL_16;
  }
  while ( 1 )
  {
    v10 = *((_QWORD *)this + v3 + 88);
    v11 = *(_QWORD *)(v10 + 8 * v9);
    if ( v11 )
    {
      v12 = *(unsigned int *)(*(_QWORD *)(v11 + 48) + 4LL);
      if ( (v12 & 1) == 0 )
      {
        v18 = WdLogNewEntry5_WdAssertion(v12, v10);
        *(_QWORD *)(v18 + 24) = 3727LL;
        WdLogEvent5_WdAssertion(v18);
        v10 = *((_QWORD *)this + v3 + 88);
      }
      v13 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2)
                                                                                              + 544LL)
                                                                                  + 8LL)
                                                                      + 224LL))(
              *(_QWORD *)(*((_QWORD *)this + 2) + 552LL),
              *(_QWORD *)(*(_QWORD *)(v10 + 8 * v9) + 24LL),
              0LL,
              0LL);
      if ( v13 < 0 )
        break;
    }
    v9 = (unsigned int)(v9 + 1);
    if ( (unsigned int)v9 >= *((_DWORD *)this + v3 + 208) )
      goto LABEL_15;
  }
  if ( (_DWORD)v9 )
  {
    v19 = 0LL;
    do
    {
      v20 = *(_QWORD *)(v19 + *((_QWORD *)this + v3 + 88));
      if ( v20 )
        (*(void (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 544LL) + 8LL) + 232LL))(
          *(_QWORD *)(*((_QWORD *)this + 2) + 552LL),
          *(_QWORD *)(v20 + 24));
      v19 += 8LL;
      --v9;
    }
    while ( v9 );
  }
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v21);
  return (unsigned int)v13;
}
