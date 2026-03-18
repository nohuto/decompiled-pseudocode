/*
 * XREFs of ?CacheVidPnToBeComitted@VIDPN_MGR@@QEAAJPEBVDMMVIDPN@@IAEBU_DMM_COMMITVIDPNREQUEST_DIAGINFO@@@Z @ 0x1C000E2F8
 * Callers:
 *     ?CommitVidPn@VIDPN_MGR@@QEAAJPEBVDMMVIDPN@@QEAXIW4_D3DKMDT_MONITOR_CONNECTIVITY_CHECKS@@EEAEBU_DMM_COMMITVIDPNREQUEST_DIAGINFO@@PEAE@Z @ 0x1C012D254 (-CommitVidPn@VIDPN_MGR@@QEAAJPEBVDMMVIDPN@@QEAXIW4_D3DKMDT_MONITOR_CONNECTIVITY_CHECKS@@EEAEBU_D.c)
 * Callees:
 *     ?Enqueue@?$Queue@UDISPMODECHANGEREQUEST@VIDPN_MGR@@@@QEAAEQEAUDISPMODECHANGEREQUEST@VIDPN_MGR@@@Z @ 0x1C00019F8 (-Enqueue@-$Queue@UDISPMODECHANGEREQUEST@VIDPN_MGR@@@@QEAAEQEAUDISPMODECHANGEREQUEST@VIDPN_MGR@@@.c)
 *     ?reset@?$auto_rc@VDMMVIDPN@@@@QEAAXPEAVDMMVIDPN@@@Z @ 0x1C0004418 (-reset@-$auto_rc@VDMMVIDPN@@@@QEAAXPEAVDMMVIDPN@@@Z.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C000C364 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0024FA0 (_guard_dispatch_icall_nop.c)
 *     ??0DMMVIDPN@@QEAA@AEBV0@@Z @ 0x1C00E3680 (--0DMMVIDPN@@QEAA@AEBV0@@Z.c)
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
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  DMMVIDPN *v14; // rdi
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  _QWORD *v18; // rax
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // r9
  __int64 v22; // rdx
  __int64 v23; // xmm0_8
  __int64 v25; // rcx
  _QWORD *v26; // rax
  _QWORD *v27; // rax
  int v28; // ecx
  _QWORD *v29; // rdx
  __int64 v30; // rax
  __int64 v31[5]; // [rsp+20h] [rbp-28h] BYREF

  v4 = 0;
  v5 = a3;
  v31[0] = 0LL;
  v9 = (DMMVIDPN *)operator new[](0x140uLL, 0x4E506456u, PagedPool);
  if ( v9 )
    v14 = DMMVIDPN::DMMVIDPN(v9, a2);
  else
    v14 = 0LL;
  if ( !v14 )
  {
    v25 = WdLogNewEntry5_WdLowResource(v11, v10, v12, v13);
    *(_QWORD *)(v25 + 24) = 320LL;
    *(_QWORD *)(v25 + 32) = a2;
LABEL_15:
    WdLogEvent5_WdLowResource(v25);
    v4 = -1073741801;
    goto LABEL_9;
  }
  if ( !(**((unsigned __int8 (__fastcall ***)(__int64))v14 + 9))((__int64)v14 + 72) )
  {
    v26 = (_QWORD *)WdLogNewEntry5_WdError(v16, v15, v17);
    v26[3] = v14;
    v26[4] = a2;
    v26[5] = *((int *)v14 + 20);
    WdLogEvent5_WdError(v26);
    v4 = *((_DWORD *)v14 + 20);
    goto LABEL_9;
  }
  auto_rc<DMMVIDPN>::reset(v31, (__int64)v14);
  v18 = operator new[](0x48uLL, 0x4E506456u, PagedPool);
  v22 = (__int64)v18;
  if ( v18 )
  {
    v23 = *(_QWORD *)a4;
    v19 = *((unsigned int *)a4 + 2);
    v18[1] = 0LL;
    v18[2] = 0LL;
    *((_DWORD *)v18 + 10) = 1833173016;
    *v18 = &VIDPN_MGR::COMMITVIDPNREQUEST::`vftable'{for `QueueElement'};
    v18[3] = &VIDPN_MGR::COMMITVIDPNREQUEST::`vftable'{for `NonReferenceCounted'};
    v18[4] = &VIDPN_MGR::COMMITVIDPNREQUEST::`vftable'{for `SignedWithClassSignature<VIDPN_MGR::COMMITVIDPNREQUEST>'};
    v18[6] = v31[0];
    *(_QWORD *)((char *)v18 + 60) = v23;
    *((_DWORD *)v18 + 17) = v19;
    *((_DWORD *)v18 + 14) = v5;
  }
  else
  {
    v22 = 0LL;
  }
  if ( !v22 )
  {
    v27 = (_QWORD *)WdLogNewEntry5_WdLowResource(v19, 0LL, v20, v21);
    v28 = *(_DWORD *)a4;
    v29 = v27;
    v27[3] = 72LL;
    v27[4] = a2;
    v27[5] = v28 << 28 >> 28;
    v30 = (char)v28 >> 4;
    v25 = (__int64)v29;
    v29[7] = v30;
    v29[6] = v5;
    goto LABEL_15;
  }
  v31[0] = 0LL;
  Queue<VIDPN_MGR::DISPMODECHANGEREQUEST>::Enqueue((_QWORD *)this + 19, v22);
LABEL_9:
  auto_rc<DMMVIDPN>::reset(v31, 0LL);
  return v4;
}
