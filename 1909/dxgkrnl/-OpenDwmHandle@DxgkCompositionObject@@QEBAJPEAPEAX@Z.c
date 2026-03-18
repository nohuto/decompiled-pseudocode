/*
 * XREFs of ?OpenDwmHandle@DxgkCompositionObject@@QEBAJPEAPEAX@Z @ 0x1C0019274
 * Callers:
 *     ?DxgkOpenDwmHandleForCompositionObjectReference@@YAJPEAXPEAPEAX@Z @ 0x1C0019260 (-DxgkOpenDwmHandleForCompositionObjectReference@@YAJPEAXPEAPEAX@Z.c)
 *     ?NotifyPendingFlipManagerPresent@@YAJHPEAU_D3DKMT_PRESENTHISTORYTOKEN@@@Z @ 0x1C005B770 (-NotifyPendingFlipManagerPresent@@YAJHPEAU_D3DKMT_PRESENTHISTORYTOKEN@@@Z.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C000C510 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     __security_check_cookie @ 0x1C0023340 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00250D0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0025440 (memset.c)
 */

__int64 __fastcall DxgkCompositionObject::OpenDwmHandle(PVOID Object, PHANDLE Handle)
{
  char v4; // di
  struct DXGGLOBAL *Global; // rax
  __int64 v6; // rdx
  __int64 v7; // rcx
  struct DXGGLOBAL *v8; // rax
  struct DXGGLOBAL *v9; // rax
  struct DXGGLOBAL *v10; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx
  struct _KPROCESS *v13; // rsi
  unsigned int v14; // ebx
  __int64 v15; // rdx
  __int64 v16; // rcx
  struct DXGGLOBAL *v17; // rax
  struct DXGGLOBAL *v18; // rax
  struct _KAPC_STATE ApcState; // [rsp+40h] [rbp-58h] BYREF

  *Handle = (void *)-1LL;
  v4 = 0;
  Global = DXGGLOBAL::GetGlobal((__int64)Object, (__int64)Handle);
  if ( !(*(unsigned int (**)(void))(*((_QWORD *)Global + 38000) + 232LL))() )
  {
    v8 = DXGGLOBAL::GetGlobal(v7, v6);
    if ( !(*(unsigned int (**)(void))(*((_QWORD *)v8 + 38000) + 136LL))() )
    {
      v9 = DXGGLOBAL::GetGlobal(v7, v6);
      (*(void (**)(void))(*((_QWORD *)v9 + 38000) + 144LL))();
      v4 = 1;
    }
  }
  v10 = DXGGLOBAL::GetGlobal(v7, v6);
  v13 = (struct _KPROCESS *)(*(__int64 (**)(void))(*((_QWORD *)v10 + 38000) + 272LL))();
  if ( v13 )
  {
    memset(&ApcState, 0, sizeof(ApcState));
    KeStackAttachProcess(v13, &ApcState);
    v14 = ObOpenObjectByPointer(Object, 0x40u, 0LL, 3u, g_pDxgkCompositionObjectType, 0, Handle);
    KeUnstackDetachProcess(&ApcState);
    v17 = DXGGLOBAL::GetGlobal(v16, v15);
    (*(void (__fastcall **)(struct _KPROCESS *))(*((_QWORD *)v17 + 38000) + 200LL))(v13);
  }
  else
  {
    v14 = -1073741823;
  }
  if ( v4 )
  {
    v18 = DXGGLOBAL::GetGlobal(v12, v11);
    (*(void (**)(void))(*((_QWORD *)v18 + 38000) + 184LL))();
  }
  return v14;
}
