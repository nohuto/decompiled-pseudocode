/*
 * XREFs of DxgkShutdownBootGraphics @ 0x1C00CC170
 * Callers:
 *     ?DxgkCddDestroy@@YAJIIIQEAXE@Z @ 0x1C00C8C80 (-DxgkCddDestroy@@YAJIIIQEAXE@Z.c)
 *     ?SetVidPnSourceOwnerInternal@@YAJPEBU_D3DKMT_SETVIDPNSOURCEOWNER@@U_D3DKMT_VIDPNSOURCEOWNER_FLAGS@@PEBQEAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C00CB238 (-SetVidPnSourceOwnerInternal@@YAJPEBU_D3DKMT_SETVIDPNSOURCEOWNER@@U_D3DKMT_VIDPNSOURCEOWNER_FLAG.c)
 * Callees:
 *     ??0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z @ 0x1C0006AD4 (--0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z.c)
 *     ?Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C0006DA8 (-Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C0006E04 (-Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0006FF4 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0007560 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0007DEC (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C000C320 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C0024FA0 (_guard_dispatch_icall_nop.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C01008A0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C012293C (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 */

__int64 __fastcall DxgkShutdownBootGraphics(struct DXGDEVICE *a1, __int64 a2)
{
  unsigned int v2; // ebx
  struct DXGGLOBAL *Global; // rax
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // rdx
  void *v10; // rcx
  __int64 v11; // rdx
  void *v12; // rcx
  struct DXGDEVICE *v13; // rbx
  __int64 v14; // rdi
  struct _KTHREAD **Current; // rax
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // rdx
  __int64 v20; // rcx
  _BYTE v21[16]; // [rsp+20h] [rbp-30h] BYREF
  _BYTE v22[8]; // [rsp+30h] [rbp-20h] BYREF
  __int64 v23; // [rsp+38h] [rbp-18h]
  char v24; // [rsp+40h] [rbp-10h]
  struct DXGDEVICE *v25; // [rsp+70h] [rbp+20h] BYREF
  struct DXGDEVICE *v26; // [rsp+80h] [rbp+30h] BYREF

  v2 = a2;
  Global = DXGGLOBAL::GetGlobal((__int64)a1, a2);
  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v21, (struct DXGGLOBAL *)((char *)Global + 1240), 0);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v21);
  if ( *((_DWORD *)DXGGLOBAL::GetGlobal(v6, v5) + 307) != 4 && *((_DWORD *)DXGGLOBAL::GetGlobal(v8, v7) + 307) )
    InbvNotifyDisplayOwnershipChange(0LL, 0LL);
  v10 = (void *)*((_QWORD *)DXGGLOBAL::GetGlobal(v8, v7) + 141);
  if ( v10 )
  {
    ExFreePoolWithTag(v10, 0x4B677844u);
    *((_QWORD *)DXGGLOBAL::GetGlobal(v18, v17) + 141) = 0LL;
  }
  v12 = (void *)*((_QWORD *)DXGGLOBAL::GetGlobal((__int64)v10, v9) + 154);
  if ( v12 )
  {
    ExFreePoolWithTag(v12, 0x4B677844u);
    *((_QWORD *)DXGGLOBAL::GetGlobal(v20, v19) + 154) = 0LL;
  }
  v25 = 0LL;
  if ( a1 )
  {
    v13 = a1;
    v25 = a1;
  }
  else
  {
    Current = (struct _KTHREAD **)DXGPROCESS::GetCurrent();
    DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)&v26, v2, Current, &v25);
    v13 = v25;
    if ( v25 )
    {
      _InterlockedIncrement64((volatile signed __int64 *)v25 + 8);
      v13 = v25;
    }
    if ( v26 )
    {
      v12 = (void *)_InterlockedExchangeAdd64((volatile signed __int64 *)v26 + 8, 0xFFFFFFFFFFFFFFFFuLL);
      if ( v12 == (void *)1 )
        ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v26 + 2), v26);
      v13 = v25;
    }
  }
  if ( v13 )
  {
    v14 = *((_QWORD *)v13 + 216);
    if ( v14 )
    {
      v23 = *((_QWORD *)v13 + 216);
      v24 = 0;
      DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v22);
      v13 = v25;
      if ( *(_DWORD *)(v14 + 176) == 1 && *((_BYTE *)v25 + 1784) )
      {
        (*(void (__fastcall **)(_QWORD, __int64))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v14 + 2560) + 520LL) + 8LL) + 560LL))(
          *((_QWORD *)v25 + 82),
          3LL);
        *((_BYTE *)v13 + 1784) = 0;
      }
      if ( v24 )
        DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v22);
    }
    if ( !a1 && _InterlockedExchangeAdd64((volatile signed __int64 *)v13 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v25 + 2), v25);
  }
  *((_DWORD *)DXGGLOBAL::GetGlobal((__int64)v12, v11) + 307) = 4;
  if ( v21[8] )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v21);
  return 0LL;
}
