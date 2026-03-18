/*
 * XREFs of ?EnableCascadedSignaling@CFlipExBuffer@@QEAAJPEAUCSM_BUFFER_INFO@@@Z @ 0x1C005CEA4
 * Callers:
 *     ?PairBind@CCompositionSurface@@IEAAJPEAVCFlipExBuffer@@@Z @ 0x1C005C69C (-PairBind@CCompositionSurface@@IEAAJPEAVCFlipExBuffer@@@Z.c)
 * Callees:
 *     DxgkGetSessionTokenManager @ 0x1C000F230 (DxgkGetSessionTokenManager.c)
 *     ?DisableCascadedSignaling@CFlipExBuffer@@QEAAXXZ @ 0x1C00138CC (-DisableCascadedSignaling@CFlipExBuffer@@QEAAXXZ.c)
 *     ?GetInfoInternal@CFlipExBuffer@@QEBAJPEAUCSM_BUFFER_INFO@@_N@Z @ 0x1C0018668 (-GetInfoInternal@CFlipExBuffer@@QEBAJPEAUCSM_BUFFER_INFO@@_N@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0024FA0 (_guard_dispatch_icall_nop.c)
 *     ??$ReleaseInterface@UIAdapter@@@@YAXAEAPEAUIAdapter@@@Z @ 0x1C005CE58 (--$ReleaseInterface@UIAdapter@@@@YAXAEAPEAUIAdapter@@@Z.c)
 */

__int64 __fastcall CFlipExBuffer::EnableCascadedSignaling(CFlipExBuffer *this, struct CSM_BUFFER_INFO *a2)
{
  int SessionTokenManager; // eax
  __int64 v5; // rbx
  int v6; // edi
  __int64 v7; // r10
  void (__fastcall ***v8)(_QWORD); // rdi
  int InfoInternal; // eax
  void (__fastcall ***v11)(_QWORD); // [rsp+70h] [rbp+18h] BYREF
  __int64 v12; // [rsp+78h] [rbp+20h] BYREF

  v12 = 0LL;
  v11 = 0LL;
  SessionTokenManager = DxgkGetSessionTokenManager(&v12, (__int64)a2);
  v5 = v12;
  v6 = SessionTokenManager;
  if ( SessionTokenManager < 0 )
    goto LABEL_7;
  (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 32LL))(v12);
  v6 = (*(__int64 (__fastcall **)(__int64, _QWORD, void (__fastcall ****)(_QWORD)))(*(_QWORD *)v5 + 144LL))(
         v5,
         *((_QWORD *)this + 41),
         &v11);
  if ( v6 < 0 )
    goto LABEL_7;
  v7 = (__int64)v11;
  v8 = v11;
  if ( v11 )
  {
    (**v11)(v11);
    v7 = (__int64)v11;
  }
  *((_QWORD *)this + 77) = v8;
  v6 = (*(__int64 (__fastcall **)(__int64, char *, char *, char *, char *, char *))(*(_QWORD *)v7 + 32LL))(
         v7,
         (char *)this + 584,
         (char *)this + 592,
         (char *)this + 600,
         (char *)this + 608,
         (char *)this + 596);
  if ( v6 < 0
    || (InfoInternal = CFlipExBuffer::GetInfoInternal(this, a2, 1),
        *((_QWORD *)a2 + 111) = 0LL,
        v6 = InfoInternal,
        *((_QWORD *)a2 + 113) = *((_QWORD *)this + 73),
        InfoInternal < 0) )
  {
LABEL_7:
    CFlipExBuffer::DisableCascadedSignaling(this);
  }
  ReleaseInterface<IAdapter>((__int64 *)&v11);
  if ( v5 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 40LL))(v5);
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 8LL))(v5);
  }
  return (unsigned int)v6;
}
