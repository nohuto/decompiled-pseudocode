/*
 * XREFs of ?CreateNewCofuncModeSet@DMMVIDPNTARGET@@QEAAJPEAPEAVDMMVIDPNTARGETMODESET@@@Z @ 0x1C0018B5C
 * Callers:
 *     ?CreateNewTargetModeSet@DXGK_VIDPN_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPN__@@IPEAPEAUD3DKMDT_HVIDPNTARGETMODESET__@@PEAPEBU_DXGK_VIDPNTARGETMODESET_INTERFACE@@@Z @ 0x1C013CFB0 (-CreateNewTargetModeSet@DXGK_VIDPN_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPN__@@IPEAPEAUD3DKMDT_H.c)
 * Callees:
 *     ?reset@?$auto_rc@VDMMVIDPNTARGETMODESET@@@@QEAAXPEAVDMMVIDPNTARGETMODESET@@@Z @ 0x1C00043DC (-reset@-$auto_rc@VDMMVIDPNTARGETMODESET@@@@QEAAXPEAVDMMVIDPNTARGETMODESET@@@Z.c)
 *     ??0DMMVIDPNTARGETMODESET@@IEAA@PEAVDMMVIDPNTARGET@@@Z @ 0x1C00096C8 (--0DMMVIDPNTARGETMODESET@@IEAA@PEAVDMMVIDPNTARGET@@@Z.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C000C364 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0024FA0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DMMVIDPNTARGET::CreateNewCofuncModeSet(
        DMMVIDPNTARGET *this,
        struct DMMVIDPNTARGETMODESET **a2,
        __int64 a3)
{
  unsigned int v3; // ebx
  char *v6; // r14
  DMMVIDPNTARGETMODESET *v7; // rax
  DMMVIDPNTARGETMODESET *v8; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // rdi
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // rax
  __int64 v18; // rax
  __int64 v19; // rax
  __int64 v20; // rax
  _QWORD *v21; // rax
  __int64 v22; // rax
  __int64 v23; // [rsp+40h] [rbp+8h] BYREF

  v3 = 0;
  if ( !a2 )
  {
    v18 = WdLogNewEntry5_WdAssertion(this, 0LL);
    WdLogEvent5_WdAssertion(v18);
  }
  v6 = (char *)this + 112;
  *a2 = 0LL;
  if ( *((_QWORD *)this + 14) )
  {
    v19 = WdLogNewEntry5_WdError(this, a2, a3);
    *(_QWORD *)(v19 + 24) = *((unsigned int *)this + 6);
    *(_QWORD *)(v19 + 32) = *(_QWORD *)v6;
    WdLogEvent5_WdError(v19);
    return 3223192400LL;
  }
  else
  {
    v23 = 0LL;
    v7 = (DMMVIDPNTARGETMODESET *)operator new[](0x98uLL, 0x4E506456u, PagedPool);
    if ( v7 )
      v8 = DMMVIDPNTARGETMODESET::DMMVIDPNTARGETMODESET(v7, this);
    else
      v8 = 0LL;
    auto_rc<DMMVIDPNTARGETMODESET>::reset(&v23, (__int64)v8);
    v13 = v23;
    if ( v23 )
    {
      if ( (**(unsigned __int8 (__fastcall ***)(__int64))(v23 + 24))(v23 + 24) )
      {
        v23 = 0LL;
        auto_rc<DMMVIDPNTARGETMODESET>::reset((__int64 *)this + 14, v13);
        _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)v6 + 96LL));
        v16 = *(_QWORD *)v6;
        *a2 = *(struct DMMVIDPNTARGETMODESET **)v6;
        if ( *(_DWORD *)(v16 + 96) != 2 )
        {
          v22 = WdLogNewEntry5_WdAssertion(v15, v14);
          WdLogEvent5_WdAssertion(v22);
        }
      }
      else
      {
        v21 = (_QWORD *)WdLogNewEntry5_WdDmmEvent();
        v21[3] = v13;
        v21[4] = *((unsigned int *)this + 6);
        v21[5] = *(int *)(v13 + 40);
        WdLogEvent5_WdDmmEvent(v21);
        v3 = *(_DWORD *)(v13 + 40);
      }
    }
    else
    {
      v20 = WdLogNewEntry5_WdLowResource(v10, v9, v11, v12);
      *(_QWORD *)(v20 + 24) = 152LL;
      WdLogEvent5_WdLowResource(v20);
      v3 = -1073741801;
    }
    auto_rc<DMMVIDPNTARGETMODESET>::reset(&v23, 0LL);
    return v3;
  }
}
