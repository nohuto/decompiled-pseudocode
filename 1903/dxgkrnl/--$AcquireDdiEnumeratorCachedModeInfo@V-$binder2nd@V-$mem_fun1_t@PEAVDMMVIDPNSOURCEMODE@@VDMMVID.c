/*
 * XREFs of ??$AcquireDdiEnumeratorCachedModeInfo@V?$binder2nd@V?$mem_fun1_t@PEAVDMMVIDPNSOURCEMODE@@VDMMVIDPNSOURCEMODESET@@PEBV1@@KM_STL@@@KM_STL@@@DMMVIDPNSOURCEMODESET@@QEAAJV?$binder2nd@V?$mem_fun1_t@PEAVDMMVIDPNSOURCEMODE@@VDMMVIDPNSOURCEMODESET@@PEBV1@@KM_STL@@@KM_STL@@PEAPEBU_D3DKMDT_VIDPN_SOURCE_MODE@@@Z @ 0x1C0176E58
 * Callers:
 *     ?AcquireNextModeInfo@DXGDMM_VIDPNSOURCEMODESET_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPNSOURCEMODESET__@@QEBU_D3DKMDT_VIDPN_SOURCE_MODE@@PEAPEBU3@@Z @ 0x1C0176D00 (-AcquireNextModeInfo@DXGDMM_VIDPNSOURCEMODESET_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPNSOURCEMOD.c)
 *     ?AcquireNextModeInfo@DXGK_VIDPNSOURCEMODESET_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPNSOURCEMODESET__@@QEBU_D3DKMDT_VIDPN_SOURCE_MODE@@PEAPEBU3@@Z @ 0x1C02BD300 (-AcquireNextModeInfo@DXGK_VIDPNSOURCEMODESET_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPNSOURCEMODES.c)
 * Callees:
 *     ?GetGraphicsInfo@DMMVIDPNSOURCEMODE@@QEBAPEBU_D3DKMDT_GRAPHICS_RENDERING_FORMAT@@XZ @ 0x1C0003A2C (-GetGraphicsInfo@DMMVIDPNSOURCEMODE@@QEBAPEBU_D3DKMDT_GRAPHICS_RENDERING_FORMAT@@XZ.c)
 *     ?CreateInstance@?$SetEnumerator@U_D3DKMDT_VIDPN_SOURCE_MODE@@@?$Set@VDMMVIDPNSOURCEMODE@@@@SAPEAV12@QEBVDMMVIDPNSOURCEMODE@@@Z @ 0x1C0003A60 (-CreateInstance@-$SetEnumerator@U_D3DKMDT_VIDPN_SOURCE_MODE@@@-$Set@VDMMVIDPNSOURCEMODE@@@@SAPEA.c)
 *     ?reset@?$auto_ptr@V?$SetEnumerator@U_D3DKMDT_VIDEO_PRESENT_TARGET@@@?$Set@VDMMVIDEOPRESENTTARGET@@@@@@QEAAXPEAV?$SetEnumerator@U_D3DKMDT_VIDEO_PRESENT_TARGET@@@?$Set@VDMMVIDEOPRESENTTARGET@@@@@Z @ 0x1C0005ADC (-reset@-$auto_ptr@V-$SetEnumerator@U_D3DKMDT_VIDEO_PRESENT_TARGET@@@-$Set@VDMMVIDEOPRESENTTARGET.c)
 *     ??3@YAXPEAX@Z @ 0x1C0009668 (--3@YAXPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0024FA0 (_guard_dispatch_icall_nop.c)
 *     ?GetTextInfo@DMMVIDPNSOURCEMODE@@QEBAPEBW4_D3DKMDT_TEXT_RENDERING_FORMAT@@XZ @ 0x1C005486C (-GetTextInfo@DMMVIDPNSOURCEMODE@@QEBAPEBW4_D3DKMDT_TEXT_RENDERING_FORMAT@@XZ.c)
 */

__int64 __fastcall DMMVIDPNSOURCEMODESET::AcquireDdiEnumeratorCachedModeInfo<KM_STL::binder2nd<KM_STL::mem_fun1_t<DMMVIDPNSOURCEMODE *,DMMVIDPNSOURCEMODESET,DMMVIDPNSOURCEMODE const *>>>(
        __int64 a1,
        __int64 a2,
        _QWORD *a3)
{
  unsigned int v3; // ebx
  __int64 v7; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  DMMVIDPNSOURCEMODE *v10; // rsi
  _QWORD *Instance; // rax
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  char *v16; // rdi
  int v17; // eax
  __int64 v19; // rax
  __int64 v20; // rax
  __int64 v21; // rax
  __int64 v22; // rax
  _DWORD *v23; // [rsp+40h] [rbp+8h] BYREF

  v3 = 0;
  if ( !a3 )
  {
    v19 = WdLogNewEntry5_WdAssertion(a1, a2);
    WdLogEvent5_WdAssertion(v19);
  }
  *a3 = 0LL;
  if ( *(_BYTE *)(a1 + 136) )
  {
    v7 = (*(__int64 (__fastcall **)(__int64, _QWORD))a2)(a1 + *(int *)(a2 + 8), *(_QWORD *)(a2 + 16));
    v10 = (DMMVIDPNSOURCEMODE *)v7;
    if ( v7 )
    {
      v23 = 0LL;
      Instance = Set<DMMVIDPNSOURCEMODE>::SetEnumerator<_D3DKMDT_VIDPN_SOURCE_MODE>::CreateInstance(v7);
      auto_ptr<Set<DMMVIDEOPRESENTTARGET>::SetEnumerator<_D3DKMDT_VIDEO_PRESENT_TARGET>>::reset((void **)&v23, Instance);
      if ( !v23 )
      {
        v21 = WdLogNewEntry5_WdLowResource(v13, v12, v14, v15);
        *(_QWORD *)(v21 + 24) = a1;
        WdLogEvent5_WdLowResource(v21);
        v3 = -1073741801;
        goto LABEL_9;
      }
      v16 = (char *)(v23 + 4);
      v23[4] = *((_DWORD *)v10 + 6);
      v17 = *((_DWORD *)v10 + 18);
      *((_DWORD *)v16 + 1) = v17;
      if ( v17 != 1 )
      {
        if ( v17 == 2 )
        {
          *((enum _D3DKMDT_TEXT_RENDERING_FORMAT *)v16 + 2) = *DMMVIDPNSOURCEMODE::GetTextInfo(v10, v12);
          goto LABEL_8;
        }
        if ( v17 <= 2 || v17 > 4 )
        {
          if ( (unsigned int)(v17 - 1) <= 3 )
          {
            v22 = WdLogNewEntry5_WdAssertion(v13, v12);
            WdLogEvent5_WdAssertion(v22);
          }
          goto LABEL_8;
        }
      }
      *(struct _D3DKMDT_GRAPHICS_RENDERING_FORMAT *)(v16 + 8) = *DMMVIDPNSOURCEMODE::GetGraphicsInfo(v10);
LABEL_8:
      *a3 = v16;
LABEL_9:
      operator delete(0LL);
      return v3;
    }
    *(_QWORD *)(WdLogNewEntry5_WdTrace(v9, v8) + 24) = a2;
    return 3223192394LL;
  }
  else
  {
    v20 = WdLogNewEntry5_WdError(a1, a2, a3);
    *(_QWORD *)(v20 + 24) = a1;
    WdLogEvent5_WdError(v20);
    return 3223192352LL;
  }
}
