/*
 * XREFs of ?OpenDwmHandle@DxgkCompositionObject@@QEBAJPEAPEAX@Z @ 0x1C000D7CC
 * Callers:
 *     ?NotifyPendingFlipPresent@@YAJHPEAU_D3DKMT_PRESENTHISTORYTOKEN@@@Z @ 0x1C0008074 (-NotifyPendingFlipPresent@@YAJHPEAU_D3DKMT_PRESENTHISTORYTOKEN@@@Z.c)
 *     ?NotifyPendingCompositionBuffersPresent@@YAJHPEAU_D3DKMT_PRESENTHISTORYTOKEN@@@Z @ 0x1C000D5D0 (-NotifyPendingCompositionBuffersPresent@@YAJHPEAU_D3DKMT_PRESENTHISTORYTOKEN@@@Z.c)
 *     ?DxgkOpenDwmHandleForCompositionObjectReference@@YAJPEAXPEAPEAX@Z @ 0x1C0019450 (-DxgkOpenDwmHandleForCompositionObjectReference@@YAJPEAXPEAPEAX@Z.c)
 *     ?NotifyPendingFlipManagerPresent@@YAJHPEAU_D3DKMT_PRESENTHISTORYTOKEN@@@Z @ 0x1C0054958 (-NotifyPendingFlipManagerPresent@@YAJHPEAU_D3DKMT_PRESENTHISTORYTOKEN@@@Z.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0011DE0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     __security_check_cookie @ 0x1C0020760 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0022E60 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DxgkCompositionObject::OpenDwmHandle(PVOID Object, PHANDLE Handle)
{
  char v4; // di
  struct DXGGLOBAL *Global; // rax
  struct DXGGLOBAL *v6; // rax
  struct DXGGLOBAL *v7; // rax
  struct DXGGLOBAL *v8; // rax
  struct _KPROCESS *v9; // rax
  struct _KPROCESS *v10; // rsi
  unsigned int v11; // ebx
  struct DXGGLOBAL *v12; // rax
  struct DXGGLOBAL *v13; // rax
  _KAPC_STATE ApcState; // [rsp+40h] [rbp-58h] BYREF

  *Handle = (void *)-1LL;
  v4 = 0;
  Global = DXGGLOBAL::GetGlobal();
  if ( !(*(unsigned int (**)(void))(*((_QWORD *)Global + 2541) + 192LL))() )
  {
    v6 = DXGGLOBAL::GetGlobal();
    if ( !(*(unsigned int (**)(void))(*((_QWORD *)v6 + 2541) + 96LL))() )
    {
      v7 = DXGGLOBAL::GetGlobal();
      (*(void (**)(void))(*((_QWORD *)v7 + 2541) + 104LL))();
      v4 = 1;
    }
  }
  v8 = DXGGLOBAL::GetGlobal();
  v9 = (struct _KPROCESS *)(*(__int64 (**)(void))(*((_QWORD *)v8 + 2541) + 232LL))();
  v10 = v9;
  if ( v9 )
  {
    KeStackAttachProcess(v9, &ApcState);
    v11 = ObOpenObjectByPointer(Object, 0x40u, 0LL, 3u, g_pDxgkCompositionObjectType, 0, Handle);
    KeUnstackDetachProcess(&ApcState);
    v12 = DXGGLOBAL::GetGlobal();
    (*(void (__fastcall **)(struct _KPROCESS *))(*((_QWORD *)v12 + 2541) + 160LL))(v10);
  }
  else
  {
    v11 = -1073741823;
  }
  if ( v4 )
  {
    v13 = DXGGLOBAL::GetGlobal();
    (*(void (**)(void))(*((_QWORD *)v13 + 2541) + 144LL))();
  }
  return v11;
}
