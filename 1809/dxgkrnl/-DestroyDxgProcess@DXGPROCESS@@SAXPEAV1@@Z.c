/*
 * XREFs of ?DestroyDxgProcess@DXGPROCESS@@SAXPEAV1@@Z @ 0x1C00E9048
 * Callers:
 *     ?DxgkProcessNotify@@YAXPEAU_EPROCESS@@PEAXPEAU_PS_CREATE_NOTIFY_INFO@@@Z @ 0x1C0010400 (-DxgkProcessNotify@@YAXPEAU_EPROCESS@@PEAXPEAU_PS_CREATE_NOTIFY_INFO@@@Z.c)
 *     ?Destroy@DXGPROCESS@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z @ 0x1C00E89C4 (-Destroy@DXGPROCESS@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z.c)
 *     ?SetVirtualGpuVmBus@DXGK_VIRTUAL_GPU_PARAV@@UEAAJPEAU_DXGKARG_SETVIRTUALGPUVMBUS@@@Z @ 0x1C01E63F0 (-SetVirtualGpuVmBus@DXGK_VIRTUAL_GPU_PARAV@@UEAAJPEAU_DXGKARG_SETVIRTUALGPUVMBUS@@@Z.c)
 *     ?SetVirtualGpuVmBus@DXGK_VIRTUAL_GPU_GPUP@@UEAAJPEAU_DXGKARG_SETVIRTUALGPUVMBUS@@@Z @ 0x1C01E77D0 (-SetVirtualGpuVmBus@DXGK_VIRTUAL_GPU_GPUP@@UEAAJPEAU_DXGKARG_SETVIRTUALGPUVMBUS@@@Z.c)
 *     ?VmBusCreateProcess@DXG_HOST_GLOBAL_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C01ED780 (-VmBusCreateProcess@DXG_HOST_GLOBAL_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 *     ?VmBusDestroyProcess@DXG_HOST_GLOBAL_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C01EEDC0 (-VmBusDestroyProcess@DXG_HOST_GLOBAL_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 *     ??1DXGGLOBAL@@AEAA@XZ @ 0x1C020D74C (--1DXGGLOBAL@@AEAA@XZ.c)
 *     ?ResetVirtualMachine@DXGVIRTUALMACHINE@@QEAAXE@Z @ 0x1C022A3F8 (-ResetVirtualMachine@DXGVIRTUALMACHINE@@QEAAXE@Z.c)
 * Callees:
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000DF84 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000E054 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C000E790 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?ReleaseReference@DXGPROCESS@@QEAAXXZ @ 0x1C0010340 (-ReleaseReference@DXGPROCESS@@QEAAXXZ.c)
 *     ??0DXGPROCESSCALLOUTMUTEX@@QEAA@XZ @ 0x1C001048C (--0DXGPROCESSCALLOUTMUTEX@@QEAA@XZ.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0011A40 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z @ 0x1C0011AAC (--0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0011DE0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?Release@DxgkCompositionObject@@QEBA_JXZ @ 0x1C0019470 (-Release@DxgkCompositionObject@@QEBA_JXZ.c)
 *     __security_check_cookie @ 0x1C0020760 (__security_check_cookie.c)
 *     memset @ 0x1C00231C0 (memset.c)
 *     ?DisableVmBusChannel@DXGVAILOBJECT@@QEAAXXZ @ 0x1C003DBC4 (-DisableVmBusChannel@DXGVAILOBJECT@@QEAAXXZ.c)
 *     ?OnVmwpDestruction@DXGVIRTUALMACHINE@@QEAAXXZ @ 0x1C003DC64 (-OnVmwpDestruction@DXGVIRTUALMACHINE@@QEAAXXZ.c)
 *     ?Destroy@DXGPROCESS@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z @ 0x1C00E89C4 (-Destroy@DXGPROCESS@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z.c)
 *     ?ApplyCsFunction@DXGPROCESS@@QEAAXW4_PROCESS_CSFN_TYPE@@@Z @ 0x1C022867C (-ApplyCsFunction@DXGPROCESS@@QEAAXW4_PROCESS_CSFN_TYPE@@@Z.c)
 *     ?ReferenceVailObject@DXGPROCESS@@QEAAPEAVDXGVAILOBJECT@@XZ @ 0x1C022A27C (-ReferenceVailObject@DXGPROCESS@@QEAAPEAVDXGVAILOBJECT@@XZ.c)
 *     ?ReferenceVailObject@DXGVIRTUALMACHINE@@QEAAPEAVDXGVAILOBJECT@@XZ @ 0x1C022A2E4 (-ReferenceVailObject@DXGVIRTUALMACHINE@@QEAAPEAVDXGVAILOBJECT@@XZ.c)
 *     ?SetVailObject@DXGPROCESS@@QEAAXPEAVDXGVAILOBJECT@@@Z @ 0x1C022A970 (-SetVailObject@DXGPROCESS@@QEAAXPEAVDXGVAILOBJECT@@@Z.c)
 *     ?DestroyVmBusHostSubscribers@DXGVAILOBJECT@@QEAAJXZ @ 0x1C025A4CC (-DestroyVmBusHostSubscribers@DXGVAILOBJECT@@QEAAJXZ.c)
 */

void __fastcall DXGPROCESS::DestroyDxgProcess(struct DXGPROCESS *this)
{
  struct _KPROCESS *v2; // rcx
  __int64 v3; // rcx
  __int64 v4; // rcx
  __int64 *v5; // rdx
  __int64 *v6; // rcx
  __int64 **v7; // rax
  struct _KTHREAD **v8; // rdi
  struct DXGVAILOBJECT *v9; // rsi
  __int64 v10; // rdi
  __int64 ProcessDxgProcess; // rax
  DXGPROCESS *v12; // rdi
  struct _KTHREAD **v13; // rdi
  DXGVIRTUALMACHINE *v14; // rcx
  _BYTE v15[16]; // [rsp+20h] [rbp-E0h] BYREF
  _BYTE v16[16]; // [rsp+30h] [rbp-D0h] BYREF
  _BYTE v17[16]; // [rsp+40h] [rbp-C0h] BYREF
  _BYTE v18[16]; // [rsp+50h] [rbp-B0h] BYREF
  _BYTE v19[16]; // [rsp+60h] [rbp-A0h] BYREF
  _BYTE v20[16]; // [rsp+70h] [rbp-90h] BYREF
  _BYTE v21[32]; // [rsp+80h] [rbp-80h] BYREF
  _QWORD v22[10]; // [rsp+A0h] [rbp-60h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+F0h] [rbp-10h] BYREF

  if ( this )
  {
    memset(v22, 0, 0x48uLL);
    EtwActivityIdControl(3u, (LPGUID)&v22[1]);
    v2 = (struct _KPROCESS *)*((_QWORD *)this + 7);
    v22[8] = MEMORY[0xFFFFF78000000014];
    LODWORD(v22[3]) = 36;
    LOBYTE(v22[6]) = -1;
    KeStackAttachProcess(v2, &ApcState);
    if ( (*((_BYTE *)this + 323) & 4) != 0 )
    {
      v8 = (struct _KTHREAD **)*((_QWORD *)this + 57);
      if ( v8 )
      {
        DXGAUTOPUSHLOCKEXCLUSIVE::DXGAUTOPUSHLOCKEXCLUSIVE((DXGAUTOPUSHLOCKEXCLUSIVE *)v21, v8 + 8);
        v9 = DXGVIRTUALMACHINE::ReferenceVailObject((DXGVIRTUALMACHINE *)v8);
        DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v21);
        if ( v9 )
        {
          DXGPROCESSCALLOUTMUTEX::DXGPROCESSCALLOUTMUTEX((DXGPROCESSCALLOUTMUTEX *)v18);
          DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v18);
          v10 = *((_QWORD *)v9 + 11);
          if ( v10 )
          {
            if ( !(unsigned __int8)PsGetProcessExitProcessCalled(*((_QWORD *)v9 + 11)) )
            {
              ProcessDxgProcess = PsGetProcessDxgProcess(v10);
              v12 = (DXGPROCESS *)ProcessDxgProcess;
              if ( ProcessDxgProcess )
              {
                if ( (*(_BYTE *)(ProcessDxgProcess + 323) & 0x20) == 0 )
                {
                  DXGAUTOMUTEX::DXGAUTOMUTEX(
                    (DXGAUTOMUTEX *)v17,
                    *(struct DXGFASTMUTEX *const *)(ProcessDxgProcess + 112),
                    0);
                  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v17);
                  DXGPROCESS::SetVailObject(v12, 0LL);
                  if ( v17[8] )
                    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v17);
                }
              }
            }
          }
          DxgkCompositionObject::Release(v9);
          if ( v18[8] )
            DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v18);
        }
      }
    }
    else if ( *((_QWORD *)this + 55) )
    {
      DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v15, *((struct DXGFASTMUTEX *const *)this + 14), 0);
      DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v15);
      v13 = (struct _KTHREAD **)DXGPROCESS::ReferenceVailObject(this);
      DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v15);
      if ( v15[8] )
        DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v15);
      if ( v13 )
      {
        DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v19, (struct DXGFASTMUTEX *const)(v13 + 5), 0);
        DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v19);
        DXGVAILOBJECT::DisableVmBusChannel(v13);
        DXGVAILOBJECT::DestroyVmBusHostSubscribers((DXGVAILOBJECT *)v13);
        if ( v19[8] )
          DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v19);
        DxgkCompositionObject::Release((DxgkCompositionObject *)v13);
      }
    }
    DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v16, *((struct DXGFASTMUTEX *const *)this + 14), 0);
    DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v16);
    if ( *((_DWORD *)DXGGLOBAL::GetGlobal(v3) + 430) )
      DXGPROCESS::ApplyCsFunction(this, 3LL);
    DXGPROCESS::Destroy(this, (struct _ERESOURCE *)v22, 0);
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v16);
    KeUnstackDetachProcess(&ApcState);
    if ( (*((_BYTE *)this + 323) & 8) == 0 )
      PsSetProcessDxgProcess(*((_QWORD *)this + 7), 0LL);
    DXGPROCESSCALLOUTMUTEX::DXGPROCESSCALLOUTMUTEX((DXGPROCESSCALLOUTMUTEX *)v20);
    DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v20);
    DXGGLOBAL::GetGlobal(v4);
    v5 = (__int64 *)(((unsigned __int64)this + 8) & ((unsigned __int128)-(__int128)(unsigned __int64)this >> 64));
    v6 = (__int64 *)*v5;
    if ( *(__int64 **)(*v5 + 8) != v5
      || (v7 = *(__int64 ***)((((unsigned __int64)this + 8) & ((unsigned __int128)-(__int128)(unsigned __int64)this >> 64))
                            + 8),
          *v7 != v5) )
    {
      __fastfail(3u);
    }
    *v7 = v6;
    v6[1] = (__int64)v7;
    if ( (*((_BYTE *)this + 323) & 4) != 0 )
    {
      v14 = (DXGVIRTUALMACHINE *)*((_QWORD *)this + 57);
      if ( v14 )
      {
        DXGVIRTUALMACHINE::OnVmwpDestruction(v14);
        *((_QWORD *)this + 57) = 0LL;
      }
    }
    DXGPROCESS::ReleaseReference(this);
    if ( v20[8] )
      DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v20);
    if ( v16[8] )
      DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v16);
  }
}
