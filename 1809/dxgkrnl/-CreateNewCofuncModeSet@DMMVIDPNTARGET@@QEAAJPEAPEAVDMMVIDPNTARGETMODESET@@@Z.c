/*
 * XREFs of ?CreateNewCofuncModeSet@DMMVIDPNTARGET@@QEAAJPEAPEAVDMMVIDPNTARGETMODESET@@@Z @ 0x1C00175AC
 * Callers:
 *     ?CreateNewTargetModeSet@DXGK_VIDPN_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPN__@@IPEAPEAUD3DKMDT_HVIDPNTARGETMODESET__@@PEAPEBU_DXGK_VIDPNTARGETMODESET_INTERFACE@@@Z @ 0x1C012DFB0 (-CreateNewTargetModeSet@DXGK_VIDPN_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPN__@@IPEAPEAUD3DKMDT_H.c)
 * Callees:
 *     ??0DMMVIDPNTARGETMODESET@@IEAA@PEAVDMMVIDPNTARGET@@@Z @ 0x1C000B7B0 (--0DMMVIDPNTARGETMODESET@@IEAA@PEAVDMMVIDPNTARGET@@@Z.c)
 *     ?reset@?$auto_rc@VDMMVIDPNTARGETMODESET@@@@QEAAXPEAVDMMVIDPNTARGETMODESET@@@Z @ 0x1C000F554 (-reset@-$auto_rc@VDMMVIDPNTARGETMODESET@@@@QEAAXPEAVDMMVIDPNTARGETMODESET@@@Z.c)
 *     ??2@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0011EE0 (--2@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0022E60 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DMMVIDPNTARGET::CreateNewCofuncModeSet(DMMVIDPNTARGET *this, struct DMMVIDPNTARGETMODESET **a2)
{
  unsigned int v2; // ebx
  char *v5; // r14
  DMMVIDPNTARGETMODESET *v6; // rax
  DMMVIDPNTARGETMODESET *v7; // rax
  __int64 v8; // rdi
  __int64 v9; // rcx
  __int64 v10; // rax
  __int64 v12; // rax
  __int64 v13; // rax
  __int64 v14; // rax
  _QWORD *v15; // rax
  __int64 v16; // rax
  __int64 v17; // [rsp+40h] [rbp+8h] BYREF

  v2 = 0;
  if ( !a2 )
  {
    v12 = WdLogNewEntry5_WdAssertion(this);
    WdLogEvent5_WdAssertion(v12);
  }
  v5 = (char *)this + 112;
  *a2 = 0LL;
  if ( *((_QWORD *)this + 14) )
  {
    v13 = WdLogNewEntry5_WdError(this);
    *(_QWORD *)(v13 + 24) = *((unsigned int *)this + 6);
    *(_QWORD *)(v13 + 32) = *(_QWORD *)v5;
    WdLogEvent5_WdError(v13);
    return 3223192400LL;
  }
  else
  {
    v17 = 0LL;
    v6 = (DMMVIDPNTARGETMODESET *)operator new(0x98uLL, 0x4E506456u, PagedPool);
    if ( v6 )
      v7 = DMMVIDPNTARGETMODESET::DMMVIDPNTARGETMODESET(v6, this);
    else
      v7 = 0LL;
    auto_rc<DMMVIDPNTARGETMODESET>::reset(&v17, (__int64)v7);
    v8 = v17;
    if ( v17 )
    {
      if ( (**(unsigned __int8 (__fastcall ***)(__int64))(v17 + 24))(v17 + 24) )
      {
        v17 = 0LL;
        auto_rc<DMMVIDPNTARGETMODESET>::reset((__int64 *)this + 14, v8);
        _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)v5 + 96LL));
        v10 = *(_QWORD *)v5;
        *a2 = *(struct DMMVIDPNTARGETMODESET **)v5;
        if ( *(_DWORD *)(v10 + 96) != 2 )
        {
          v16 = WdLogNewEntry5_WdAssertion(v9);
          WdLogEvent5_WdAssertion(v16);
        }
      }
      else
      {
        v15 = (_QWORD *)WdLogNewEntry5_WdDmmEvent();
        v15[3] = v8;
        v15[4] = *((unsigned int *)this + 6);
        v15[5] = *(int *)(v8 + 40);
        WdLogEvent5_WdDmmEvent(v15);
        v2 = *(_DWORD *)(v8 + 40);
      }
    }
    else
    {
      v14 = WdLogNewEntry5_WdLowResource();
      *(_QWORD *)(v14 + 24) = 152LL;
      WdLogEvent5_WdLowResource(v14);
      v2 = -1073741801;
    }
    auto_rc<DMMVIDPNTARGETMODESET>::reset(&v17, 0LL);
    return v2;
  }
}
