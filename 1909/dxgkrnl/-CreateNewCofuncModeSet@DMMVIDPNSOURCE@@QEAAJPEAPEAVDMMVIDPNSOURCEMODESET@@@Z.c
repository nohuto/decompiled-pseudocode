/*
 * XREFs of ?CreateNewCofuncModeSet@DMMVIDPNSOURCE@@QEAAJPEAPEAVDMMVIDPNSOURCEMODESET@@@Z @ 0x1C0003FEC
 * Callers:
 *     ?CreateNewSourceModeSet@DXGK_VIDPN_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPN__@@IPEAPEAUD3DKMDT_HVIDPNSOURCEMODESET__@@PEAPEBU_DXGK_VIDPNSOURCEMODESET_INTERFACE@@@Z @ 0x1C00DF320 (-CreateNewSourceModeSet@DXGK_VIDPN_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPN__@@IPEAPEAUD3DKMDT_H.c)
 * Callees:
 *     ?reset@?$auto_rc@VDMMVIDPNTARGETMODESET@@@@QEAAXPEAVDMMVIDPNTARGETMODESET@@@Z @ 0x1C00044DC (-reset@-$auto_rc@VDMMVIDPNTARGETMODESET@@@@QEAAXPEAVDMMVIDPNTARGETMODESET@@@Z.c)
 *     ??0DMMVIDPNSOURCEMODESET@@IEAA@PEAVDMMVIDPNSOURCE@@@Z @ 0x1C0004814 (--0DMMVIDPNSOURCEMODESET@@IEAA@PEAVDMMVIDPNSOURCE@@@Z.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C000C5A0 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C00250D0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DMMVIDPNSOURCE::CreateNewCofuncModeSet(
        DMMVIDPNSOURCE *this,
        struct DMMVIDPNSOURCEMODESET **a2,
        __int64 a3)
{
  unsigned int v3; // ebx
  char *v6; // r14
  DMMVIDPNSOURCEMODESET *v7; // rax
  DMMVIDPNSOURCEMODESET *v8; // rax
  __int64 v9; // rdi
  __int64 v10; // rax
  __int64 v12; // rax
  __int64 v13; // rax
  __int64 v14; // rax
  _QWORD *v15; // rax
  __int64 v16; // rax
  __int64 v17; // [rsp+40h] [rbp+8h] BYREF

  v3 = 0;
  if ( !a2 )
  {
    v12 = WdLogNewEntry5_WdAssertion();
    WdLogEvent5_WdAssertion(v12);
  }
  v6 = (char *)this + 120;
  *a2 = 0LL;
  if ( *((_QWORD *)this + 15) )
  {
    v13 = WdLogNewEntry5_WdError(this, a2, a3);
    *(_QWORD *)(v13 + 24) = *((unsigned int *)this + 6);
    *(_QWORD *)(v13 + 32) = *(_QWORD *)v6;
    WdLogEvent5_WdError(v13);
    return 3223192400LL;
  }
  else
  {
    v17 = 0LL;
    v7 = (DMMVIDPNSOURCEMODESET *)operator new[](0x98uLL, 0x4E506456u, PagedPool);
    if ( v7 )
      v8 = DMMVIDPNSOURCEMODESET::DMMVIDPNSOURCEMODESET(v7, this);
    else
      v8 = 0LL;
    auto_rc<DMMVIDPNTARGETMODESET>::reset(&v17, v8);
    v9 = v17;
    if ( v17 )
    {
      if ( (**(unsigned __int8 (__fastcall ***)(__int64))(v17 + 24))(v17 + 24) )
      {
        v17 = 0LL;
        auto_rc<DMMVIDPNTARGETMODESET>::reset((char *)this + 120, v9);
        _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)v6 + 96LL));
        v10 = *(_QWORD *)v6;
        *a2 = *(struct DMMVIDPNSOURCEMODESET **)v6;
        if ( *(_DWORD *)(v10 + 96) != 2 )
        {
          v16 = WdLogNewEntry5_WdAssertion();
          WdLogEvent5_WdAssertion(v16);
        }
      }
      else
      {
        v15 = (_QWORD *)WdLogNewEntry5_WdDmmEvent();
        v15[3] = v9;
        v15[4] = *((unsigned int *)this + 6);
        v15[5] = *(int *)(v9 + 40);
        WdLogEvent5_WdDmmEvent(v15);
        v3 = *(_DWORD *)(v9 + 40);
      }
    }
    else
    {
      v14 = WdLogNewEntry5_WdLowResource();
      *(_QWORD *)(v14 + 24) = 152LL;
      WdLogEvent5_WdLowResource(v14);
      v3 = -1073741801;
    }
    auto_rc<DMMVIDPNTARGETMODESET>::reset(&v17, 0LL);
    return v3;
  }
}
