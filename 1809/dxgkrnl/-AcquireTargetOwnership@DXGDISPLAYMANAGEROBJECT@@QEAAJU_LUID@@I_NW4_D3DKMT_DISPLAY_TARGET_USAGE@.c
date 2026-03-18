/*
 * XREFs of ?AcquireTargetOwnership@DXGDISPLAYMANAGEROBJECT@@QEAAJU_LUID@@I_NW4_D3DKMT_DISPLAY_TARGET_USAGE@@@Z @ 0x1C0256428
 * Callers:
 *     DxgkDispMgrTargetOperation @ 0x1C02574F0 (DxgkDispMgrTargetOperation.c)
 * Callees:
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000DF84 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000E054 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C000E790 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ??2@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0011EE0 (--2@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0022E60 (_guard_dispatch_icall_nop.c)
 *     ?Add@?$Set@VDXGTARGETENTRY@@@@QEAAEQEAVDXGTARGETENTRY@@@Z @ 0x1C0042568 (-Add@-$Set@VDXGTARGETENTRY@@@@QEAAEQEAVDXGTARGETENTRY@@@Z.c)
 *     ?ExchangeTargetOwnershipDmm@DXGDISPLAYMANAGEROBJECT@@CAJPEBVDXGTARGETENTRY@@PEAV1@1_NW4_D3DKMT_DISPLAY_TARGET_USAGE@@@Z @ 0x1C02567EC (-ExchangeTargetOwnershipDmm@DXGDISPLAYMANAGEROBJECT@@CAJPEBVDXGTARGETENTRY@@PEAV1@1_NW4_D3DKMT_D.c)
 */

__int64 __fastcall DXGDISPLAYMANAGEROBJECT::AcquireTargetOwnership(
        __int64 a1,
        void (__fastcall **a2)(_QWORD, __int64),
        unsigned int a3,
        __int64 a4,
        int a5)
{
  __int64 v6; // rbp
  __int64 v8; // rax
  void (__fastcall ***v10)(_QWORD, __int64); // rax
  __int64 v11; // rcx
  __int64 v12; // r9
  void (__fastcall ***v13)(_QWORD, __int64); // rdi
  __int64 v14; // rax
  int v15; // r14d
  __int64 v16; // rcx
  _QWORD *v17; // rax
  _BYTE v18[40]; // [rsp+30h] [rbp-28h] BYREF
  int v19; // [rsp+6Ch] [rbp+14h]

  v19 = HIDWORD(a2);
  v6 = a3;
  if ( *(_QWORD *)(a1 + 32) )
  {
    v10 = (void (__fastcall ***)(_QWORD, __int64))operator new(0x28uLL, 0x4B677844u, PagedPool);
    v13 = v10;
    if ( v10 )
    {
      v10[1] = 0LL;
      v10[2] = 0LL;
      *v10 = (void (__fastcall **)(_QWORD, __int64))&SetElement::`vftable';
      v10[3] = a2;
      *((_DWORD *)v10 + 8) = v6;
    }
    else
    {
      v13 = 0LL;
    }
    if ( v13 )
    {
      LOBYTE(v12) = 1;
      v15 = DXGDISPLAYMANAGEROBJECT::ExchangeTargetOwnershipDmm(v13, a1, 0LL, v12, a5);
      if ( v15 >= 0 )
      {
        DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v18, *(struct DXGFASTMUTEX *const *)(a1 + 16), 0);
        DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v18);
        if ( !Set<DXGTARGETENTRY>::Add(a1 + 40, (__int64)v13) )
          (**v13)(v13, 1LL);
        if ( v18[8] )
          DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v18);
        return 0LL;
      }
      else
      {
        (**v13)(v13, 1LL);
        v17 = (_QWORD *)WdLogNewEntry5_WdError(v16);
        v17[4] = v19;
        v17[5] = (unsigned int)a2;
        v17[3] = v6;
        WdLogEvent5_WdError(v17);
        return (unsigned int)v15;
      }
    }
    else
    {
      v14 = WdLogNewEntry5_WdLowResource(v11);
      *(_QWORD *)(v14 + 24) = 123LL;
      WdLogEvent5_WdLowResource(v14);
      return 3221225495LL;
    }
  }
  else
  {
    v8 = WdLogNewEntry5_WdError(a1);
    *(_QWORD *)(v8 + 24) = 116LL;
    WdLogEvent5_WdError(v8);
    return 2147483685LL;
  }
}
