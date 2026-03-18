/*
 * XREFs of DxgkShutdownBootGraphics @ 0x1C011EE80
 * Callers:
 *     ?SetVidPnSourceOwnerInternal@@YAJPEBU_D3DKMT_SETVIDPNSOURCEOWNER@@U_D3DKMT_VIDPNSOURCEOWNER_FLAGS@@PEBQEAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C011D60C (-SetVidPnSourceOwnerInternal@@YAJPEBU_D3DKMT_SETVIDPNSOURCEOWNER@@U_D3DKMT_VIDPNSOURCEOWNER_FLAG.c)
 *     ?DxgkCddDestroy@@YAJIIIQEAXE@Z @ 0x1C011FE60 (-DxgkCddDestroy@@YAJIIIQEAXE@Z.c)
 * Callees:
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000DF84 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000E054 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C000E790 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C000F590 (-Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ??0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z @ 0x1C00101B4 (--0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z.c)
 *     ?Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C001071C (-Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0011DE0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C0022E60 (_guard_dispatch_icall_nop.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C00EF4FC (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0102F10 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 */

__int64 __fastcall DxgkShutdownBootGraphics(struct DXGDEVICE *a1, unsigned int a2)
{
  struct DXGGLOBAL *Global; // rax
  __int64 v5; // rcx
  __int64 v6; // rcx
  void *v7; // rcx
  void *v8; // rcx
  struct DXGDEVICE *v9; // rbx
  __int64 v10; // rdi
  struct _KTHREAD **Current; // rax
  __int64 v13; // rcx
  __int64 v14; // rcx
  _BYTE v15[16]; // [rsp+20h] [rbp-30h] BYREF
  _BYTE v16[8]; // [rsp+30h] [rbp-20h] BYREF
  __int64 v17; // [rsp+38h] [rbp-18h]
  char v18; // [rsp+40h] [rbp-10h]
  struct DXGDEVICE *v19; // [rsp+70h] [rbp+20h] BYREF
  struct DXGDEVICE *v20; // [rsp+80h] [rbp+30h] BYREF

  Global = DXGGLOBAL::GetGlobal((__int64)a1);
  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v15, (struct DXGGLOBAL *)((char *)Global + 1272), 0);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v15);
  if ( *((_DWORD *)DXGGLOBAL::GetGlobal(v5) + 315) != 4 && *((_DWORD *)DXGGLOBAL::GetGlobal(v6) + 315) )
    InbvNotifyDisplayOwnershipChange(0LL, 0LL);
  v7 = (void *)*((_QWORD *)DXGGLOBAL::GetGlobal(v6) + 145);
  if ( v7 )
  {
    ExFreePoolWithTag(v7, 0x4B677844u);
    *((_QWORD *)DXGGLOBAL::GetGlobal(v13) + 145) = 0LL;
  }
  v8 = (void *)*((_QWORD *)DXGGLOBAL::GetGlobal((__int64)v7) + 158);
  if ( v8 )
  {
    ExFreePoolWithTag(v8, 0x4B677844u);
    *((_QWORD *)DXGGLOBAL::GetGlobal(v14) + 158) = 0LL;
  }
  v19 = 0LL;
  if ( a1 )
  {
    v9 = a1;
    v19 = a1;
  }
  else
  {
    Current = (struct _KTHREAD **)DXGPROCESS::GetCurrent();
    DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)&v20, a2, Current, &v19);
    v9 = v19;
    if ( v19 )
    {
      _InterlockedIncrement64((volatile signed __int64 *)v19 + 8);
      v9 = v19;
    }
    if ( v20 )
    {
      v8 = (void *)_InterlockedExchangeAdd64((volatile signed __int64 *)v20 + 8, 0xFFFFFFFFFFFFFFFFuLL);
      if ( v8 == (void *)1 )
        ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v20 + 2), v20);
      v9 = v19;
    }
  }
  if ( v9 )
  {
    v10 = *((_QWORD *)v9 + 216);
    if ( v10 )
    {
      v17 = *((_QWORD *)v9 + 216);
      v18 = 0;
      DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v16);
      v9 = v19;
      if ( *(_DWORD *)(v10 + 176) == 1 && *((_BYTE *)v19 + 1784) )
      {
        (*(void (__fastcall **)(_QWORD, __int64))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v10 + 2528) + 520LL) + 8LL) + 560LL))(
          *((_QWORD *)v19 + 82),
          3LL);
        *((_BYTE *)v9 + 1784) = 0;
      }
      if ( v18 )
        DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v16);
    }
    if ( !a1 && _InterlockedExchangeAdd64((volatile signed __int64 *)v9 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v19 + 2), v19);
  }
  *((_DWORD *)DXGGLOBAL::GetGlobal((__int64)v8) + 315) = 4;
  if ( v15[8] )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v15);
  return 0LL;
}
