/*
 * XREFs of ?CreateVidPnMgr@VIDPN_MGR_CLASSFACTORY@@SAJQEAVADAPTER_DISPLAY@@PEAPEAVVIDPN_MGR@@@Z @ 0x1C01535D0
 * Callers:
 *     ?Initialize@ADAPTER_DISPLAY@@QEAAJXZ @ 0x1C0153678 (-Initialize@ADAPTER_DISPLAY@@QEAAJXZ.c)
 * Callees:
 *     ??2@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0011EE0 (--2@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0022E60 (_guard_dispatch_icall_nop.c)
 *     ??0VIDPN_MGR@@QEAA@QEAVADAPTER_DISPLAY@@@Z @ 0x1C0152300 (--0VIDPN_MGR@@QEAA@QEAVADAPTER_DISPLAY@@@Z.c)
 */

__int64 __fastcall VIDPN_MGR_CLASSFACTORY::CreateVidPnMgr(struct ADAPTER_DISPLAY *const a1, struct VIDPN_MGR **a2)
{
  VIDPN_MGR *v4; // rax
  __int64 v5; // rcx
  VIDPN_MGR *v6; // rdi
  VIDPN_MGR *v7; // rbx
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  unsigned int v12; // edi
  __int64 v14; // rax
  __int64 v15; // rax
  __int64 v16; // rax
  _QWORD *v17; // rax

  if ( !a1 )
  {
    v14 = WdLogNewEntry5_WdAssertion(0LL);
    WdLogEvent5_WdAssertion(v14);
  }
  if ( !a2 )
  {
    v15 = WdLogNewEntry5_WdAssertion(a1);
    WdLogEvent5_WdAssertion(v15);
  }
  v4 = (VIDPN_MGR *)operator new(0x200uLL, 0x4E506456u, (POOL_TYPE)512);
  if ( v4 )
    v6 = VIDPN_MGR::VIDPN_MGR(v4, a1);
  else
    v6 = 0LL;
  v7 = v6;
  if ( v6 )
  {
    if ( (**((unsigned __int8 (__fastcall ***)(__int64))v6 + 2))((__int64)v6 + 16) )
    {
      v7 = 0LL;
      *a2 = v6;
      v12 = 0;
    }
    else
    {
      v17 = (_QWORD *)WdLogNewEntry5_WdDmmEvent(v9, v8, v10, v11);
      v17[3] = v6;
      v17[4] = a1;
      v17[5] = *((int *)v6 + 14);
      WdLogEvent5_WdDmmEvent(v17);
      v12 = *((_DWORD *)v6 + 14);
    }
  }
  else
  {
    v16 = WdLogNewEntry5_WdLowResource(v5);
    *(_QWORD *)(v16 + 24) = a1;
    WdLogEvent5_WdLowResource(v16);
    v12 = -1073741801;
  }
  if ( v7 )
    (**(void (__fastcall ***)(VIDPN_MGR *, __int64))v7)(v7, 1LL);
  return v12;
}
