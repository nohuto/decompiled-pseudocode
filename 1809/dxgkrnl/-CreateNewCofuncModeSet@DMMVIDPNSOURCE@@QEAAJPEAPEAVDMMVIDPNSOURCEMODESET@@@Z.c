/*
 * XREFs of ?CreateNewCofuncModeSet@DMMVIDPNSOURCE@@QEAAJPEAPEAVDMMVIDPNSOURCEMODESET@@@Z @ 0x1C000361C
 * Callers:
 *     ?CreateNewSourceModeSet@DXGK_VIDPN_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPN__@@IPEAPEAUD3DKMDT_HVIDPNSOURCEMODESET__@@PEAPEBU_DXGK_VIDPNSOURCEMODESET_INTERFACE@@@Z @ 0x1C00BD420 (-CreateNewSourceModeSet@DXGK_VIDPN_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPN__@@IPEAPEAUD3DKMDT_H.c)
 * Callees:
 *     ?reset@?$auto_rc@VDMMVIDPNSOURCEMODESET@@@@QEAAXPEAVDMMVIDPNSOURCEMODESET@@@Z @ 0x1C0003D7C (-reset@-$auto_rc@VDMMVIDPNSOURCEMODESET@@@@QEAAXPEAVDMMVIDPNSOURCEMODESET@@@Z.c)
 *     ??0DMMVIDPNSOURCEMODESET@@IEAA@PEAVDMMVIDPNSOURCE@@@Z @ 0x1C0003DB8 (--0DMMVIDPNSOURCEMODESET@@IEAA@PEAVDMMVIDPNSOURCE@@@Z.c)
 *     ??2@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0011EE0 (--2@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0022E60 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DMMVIDPNSOURCE::CreateNewCofuncModeSet(DMMVIDPNSOURCE *this, struct DMMVIDPNSOURCEMODESET **a2)
{
  unsigned int v2; // ebx
  char *v5; // r14
  DMMVIDPNSOURCEMODESET *v6; // rax
  DMMVIDPNSOURCEMODESET *v7; // rax
  __int64 v8; // rdi
  __int64 v9; // rax
  __int64 v11; // rax
  __int64 v12; // rax
  __int64 v13; // rax
  _QWORD *v14; // rax
  __int64 v15; // rax
  __int64 v16; // [rsp+40h] [rbp+8h] BYREF

  v2 = 0;
  if ( !a2 )
  {
    v11 = WdLogNewEntry5_WdAssertion();
    WdLogEvent5_WdAssertion(v11);
  }
  v5 = (char *)this + 120;
  *a2 = 0LL;
  if ( *((_QWORD *)this + 15) )
  {
    v12 = WdLogNewEntry5_WdError(this);
    *(_QWORD *)(v12 + 24) = *((unsigned int *)this + 6);
    *(_QWORD *)(v12 + 32) = *(_QWORD *)v5;
    WdLogEvent5_WdError(v12);
    return 3223192400LL;
  }
  else
  {
    v16 = 0LL;
    v6 = (DMMVIDPNSOURCEMODESET *)operator new(0x98uLL, 0x4E506456u, PagedPool);
    if ( v6 )
      v7 = DMMVIDPNSOURCEMODESET::DMMVIDPNSOURCEMODESET(v6, this);
    else
      v7 = 0LL;
    auto_rc<DMMVIDPNSOURCEMODESET>::reset(&v16, v7);
    v8 = v16;
    if ( v16 )
    {
      if ( (**(unsigned __int8 (__fastcall ***)(__int64))(v16 + 24))(v16 + 24) )
      {
        v16 = 0LL;
        auto_rc<DMMVIDPNSOURCEMODESET>::reset((char *)this + 120, v8);
        _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)v5 + 96LL));
        v9 = *(_QWORD *)v5;
        *a2 = *(struct DMMVIDPNSOURCEMODESET **)v5;
        if ( *(_DWORD *)(v9 + 96) != 2 )
        {
          v15 = WdLogNewEntry5_WdAssertion();
          WdLogEvent5_WdAssertion(v15);
        }
      }
      else
      {
        v14 = (_QWORD *)WdLogNewEntry5_WdDmmEvent();
        v14[3] = v8;
        v14[4] = *((unsigned int *)this + 6);
        v14[5] = *(int *)(v8 + 40);
        WdLogEvent5_WdDmmEvent(v14);
        v2 = *(_DWORD *)(v8 + 40);
      }
    }
    else
    {
      v13 = WdLogNewEntry5_WdLowResource();
      *(_QWORD *)(v13 + 24) = 152LL;
      WdLogEvent5_WdLowResource(v13);
      v2 = -1073741801;
    }
    auto_rc<DMMVIDPNSOURCEMODESET>::reset(&v16, 0LL);
    return v2;
  }
}
