/*
 * XREFs of ?CacheVidPnToBeComitted@VIDPN_MGR@@QEAAJPEBVDMMVIDPN@@IAEBU_DMM_COMMITVIDPNREQUEST_DIAGINFO@@@Z @ 0x1C00022FC
 * Callers:
 *     ?CommitVidPn@VIDPN_MGR@@QEAAJPEBVDMMVIDPN@@QEAXIW4_D3DKMDT_MONITOR_CONNECTIVITY_CHECKS@@EEAEBU_DMM_COMMITVIDPNREQUEST_DIAGINFO@@PEAE@Z @ 0x1C00B91E4 (-CommitVidPn@VIDPN_MGR@@QEAAJPEBVDMMVIDPN@@QEAXIW4_D3DKMDT_MONITOR_CONNECTIVITY_CHECKS@@EEAEBU_D.c)
 * Callees:
 *     ?Enqueue@?$Queue@UDISPMODECHANGEREQUEST@VIDPN_MGR@@@@QEAAEQEAUDISPMODECHANGEREQUEST@VIDPN_MGR@@@Z @ 0x1C0002438 (-Enqueue@-$Queue@UDISPMODECHANGEREQUEST@VIDPN_MGR@@@@QEAAEQEAUDISPMODECHANGEREQUEST@VIDPN_MGR@@@.c)
 *     ?reset@?$auto_rc@VDMMVIDPN@@@@QEAAXPEAVDMMVIDPN@@@Z @ 0x1C00041F4 (-reset@-$auto_rc@VDMMVIDPN@@@@QEAAXPEAVDMMVIDPN@@@Z.c)
 *     ??2@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0011EE0 (--2@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0022E60 (_guard_dispatch_icall_nop.c)
 *     ??0DMMVIDPN@@QEAA@AEBV0@@Z @ 0x1C00E1BA0 (--0DMMVIDPN@@QEAA@AEBV0@@Z.c)
 */

__int64 __fastcall VIDPN_MGR::CacheVidPnToBeComitted(
        VIDPN_MGR *this,
        const struct DMMVIDPN *a2,
        unsigned int a3,
        const struct _DMM_COMMITVIDPNREQUEST_DIAGINFO *a4)
{
  unsigned int v4; // ebx
  __int64 v5; // r15
  DMMVIDPN *v9; // rax
  DMMVIDPN *v10; // rdi
  _QWORD *v11; // rax
  _QWORD *v12; // rdx
  __int64 v13; // xmm0_8
  int v14; // ecx
  __int64 v16; // rcx
  _QWORD *v17; // rax
  _QWORD *v18; // rax
  int v19; // ecx
  _QWORD *v20; // rdx
  __int64 v21; // rax
  _QWORD v22[5]; // [rsp+20h] [rbp-28h] BYREF

  v4 = 0;
  v5 = a3;
  v22[0] = 0LL;
  v9 = (DMMVIDPN *)operator new(0x140uLL, 0x4E506456u, PagedPool);
  if ( v9 )
    v10 = DMMVIDPN::DMMVIDPN(v9, a2);
  else
    v10 = 0LL;
  if ( !v10 )
  {
    v16 = WdLogNewEntry5_WdLowResource();
    *(_QWORD *)(v16 + 24) = 320LL;
    *(_QWORD *)(v16 + 32) = a2;
LABEL_15:
    WdLogEvent5_WdLowResource(v16);
    v4 = -1073741801;
    goto LABEL_9;
  }
  if ( !(**((unsigned __int8 (__fastcall ***)(__int64))v10 + 9))((__int64)v10 + 72) )
  {
    v17 = (_QWORD *)WdLogNewEntry5_WdError();
    v17[3] = v10;
    v17[4] = a2;
    v17[5] = *((int *)v10 + 20);
    WdLogEvent5_WdError(v17);
    v4 = *((_DWORD *)v10 + 20);
    goto LABEL_9;
  }
  auto_rc<DMMVIDPN>::reset(v22, v10);
  v11 = operator new(0x48uLL, 0x4E506456u, PagedPool);
  v12 = v11;
  if ( v11 )
  {
    v13 = *(_QWORD *)a4;
    v14 = *((_DWORD *)a4 + 2);
    v11[1] = 0LL;
    v11[2] = 0LL;
    *((_DWORD *)v11 + 10) = 1833173016;
    *v11 = &VIDPN_MGR::COMMITVIDPNREQUEST::`vftable'{for `QueueElement'};
    v11[3] = &VIDPN_MGR::COMMITVIDPNREQUEST::`vftable'{for `NonReferenceCounted'};
    v11[4] = &VIDPN_MGR::COMMITVIDPNREQUEST::`vftable'{for `SignedWithClassSignature<VIDPN_MGR::COMMITVIDPNREQUEST>'};
    v11[6] = v22[0];
    *(_QWORD *)((char *)v11 + 60) = v13;
    *((_DWORD *)v11 + 17) = v14;
    *((_DWORD *)v11 + 14) = v5;
  }
  else
  {
    v12 = 0LL;
  }
  if ( !v12 )
  {
    v18 = (_QWORD *)WdLogNewEntry5_WdLowResource();
    v19 = *(_DWORD *)a4;
    v20 = v18;
    v18[3] = 72LL;
    v18[4] = a2;
    v18[5] = v19 << 28 >> 28;
    v21 = (char)v19 >> 4;
    v16 = (__int64)v20;
    v20[7] = v21;
    v20[6] = v5;
    goto LABEL_15;
  }
  v22[0] = 0LL;
  Queue<VIDPN_MGR::DISPMODECHANGEREQUEST>::Enqueue((char *)this + 152);
LABEL_9:
  auto_rc<DMMVIDPN>::reset(v22, 0LL);
  return v4;
}
