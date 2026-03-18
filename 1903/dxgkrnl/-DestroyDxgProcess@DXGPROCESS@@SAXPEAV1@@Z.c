/*
 * XREFs of ?DestroyDxgProcess@DXGPROCESS@@SAXPEAV1@@Z @ 0x1C00F5920
 * Callers:
 *     ?DxgkProcessNotify@@YAXPEAU_EPROCESS@@PEAXPEAU_PS_CREATE_NOTIFY_INFO@@@Z @ 0x1C0008950 (-DxgkProcessNotify@@YAXPEAU_EPROCESS@@PEAXPEAU_PS_CREATE_NOTIFY_INFO@@@Z.c)
 *     ?Destroy@DXGPROCESS@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z @ 0x1C00F3250 (-Destroy@DXGPROCESS@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z.c)
 *     ?SetVirtualGpuVmBus@DXGK_VIRTUAL_GPU_PARAV@@UEAAJPEAU_DXGKARG_SETVIRTUALGPUVMBUS@@@Z @ 0x1C0215830 (-SetVirtualGpuVmBus@DXGK_VIRTUAL_GPU_PARAV@@UEAAJPEAU_DXGKARG_SETVIRTUALGPUVMBUS@@@Z.c)
 *     ?SetVirtualGpuVmBus@DXGK_VIRTUAL_GPU_GPUP@@UEAAJPEAU_DXGKARG_SETVIRTUALGPUVMBUS@@@Z @ 0x1C0216F40 (-SetVirtualGpuVmBus@DXGK_VIRTUAL_GPU_GPUP@@UEAAJPEAU_DXGKARG_SETVIRTUALGPUVMBUS@@@Z.c)
 *     ?VmBusCreateProcess@DXG_HOST_GLOBAL_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C021D070 (-VmBusCreateProcess@DXG_HOST_GLOBAL_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 *     ?VmBusDestroyProcess@DXG_HOST_GLOBAL_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C021E7A0 (-VmBusDestroyProcess@DXG_HOST_GLOBAL_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 *     ??1DXGGLOBAL@@AEAA@XZ @ 0x1C0240718 (--1DXGGLOBAL@@AEAA@XZ.c)
 *     ?ResetVirtualMachine@DXGVIRTUALMACHINE@@QEAAXE@Z @ 0x1C025EC50 (-ResetVirtualMachine@DXGVIRTUALMACHINE@@QEAAXE@Z.c)
 * Callees:
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0006FF4 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?ReleaseReference@DXGPROCESS@@QEAAXXZ @ 0x1C00073A4 (-ReleaseReference@DXGPROCESS@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0007560 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0007DEC (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C000C320 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C000C448 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z @ 0x1C000C500 (--0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z.c)
 *     ??0DXGPROCESSCALLOUTMUTEX@@QEAA@XZ @ 0x1C0018920 (--0DXGPROCESSCALLOUTMUTEX@@QEAA@XZ.c)
 *     ?Release@DxgkCompositionObject@@QEBA_JXZ @ 0x1C001ADD0 (-Release@DxgkCompositionObject@@QEBA_JXZ.c)
 *     __security_check_cookie @ 0x1C00232F0 (__security_check_cookie.c)
 *     memset @ 0x1C0025300 (memset.c)
 *     ?DisableVmBusChannel@DXGVAILOBJECT@@QEAAXXZ @ 0x1C004457C (-DisableVmBusChannel@DXGVAILOBJECT@@QEAAXXZ.c)
 *     ?OnVmwpDestruction@DXGVIRTUALMACHINE@@QEAAXXZ @ 0x1C004461C (-OnVmwpDestruction@DXGVIRTUALMACHINE@@QEAAXXZ.c)
 *     ?Destroy@DXGPROCESS@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z @ 0x1C00F3250 (-Destroy@DXGPROCESS@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z.c)
 *     ?ReferenceVailObject@DXGPROCESS@@QEAAPEAVDXGVAILOBJECT@@XZ @ 0x1C025EAE8 (-ReferenceVailObject@DXGPROCESS@@QEAAPEAVDXGVAILOBJECT@@XZ.c)
 *     ?ReferenceVailObject@DXGVIRTUALMACHINE@@QEAAPEAVDXGVAILOBJECT@@XZ @ 0x1C025EB50 (-ReferenceVailObject@DXGVIRTUALMACHINE@@QEAAPEAVDXGVAILOBJECT@@XZ.c)
 *     ?SetVailObject@DXGPROCESS@@QEAAXPEAVDXGVAILOBJECT@@@Z @ 0x1C025F1F4 (-SetVailObject@DXGPROCESS@@QEAAXPEAVDXGVAILOBJECT@@@Z.c)
 *     ?DestroyVmBusHostSubscribers@DXGVAILOBJECT@@QEAAJXZ @ 0x1C02907AC (-DestroyVmBusHostSubscribers@DXGVAILOBJECT@@QEAAJXZ.c)
 */

void __fastcall DXGPROCESS::DestroyDxgProcess(struct DXGPROCESS *this)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  struct _KTHREAD *CurrentThread; // rcx
  __int64 v5; // rdx
  __int64 v6; // rcx
  struct DXGGLOBAL *Global; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  struct _KTHREAD *v10; // rcx
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 *v13; // rdx
  __int64 *v14; // rcx
  __int64 **v15; // rax
  struct _KTHREAD **v16; // rdi
  struct DXGVAILOBJECT *v17; // rsi
  __int64 v18; // rdi
  __int64 ProcessDxgProcess; // rax
  DXGPROCESS *v20; // rdi
  struct _KTHREAD **v21; // rdi
  __int64 v22; // rdx
  __int64 v23; // rax
  __int64 v24; // rax
  __int64 v25; // rax
  __int64 v26; // rax
  DXGVIRTUALMACHINE *v27; // rcx
  __int64 v28; // [rsp+20h] [rbp-E0h] BYREF
  char v29; // [rsp+28h] [rbp-D8h]
  struct _KTHREAD **v30; // [rsp+30h] [rbp-D0h] BYREF
  char v31; // [rsp+38h] [rbp-C8h]
  _BYTE v32[16]; // [rsp+40h] [rbp-C0h] BYREF
  _BYTE v33[16]; // [rsp+50h] [rbp-B0h] BYREF
  _BYTE v34[16]; // [rsp+60h] [rbp-A0h] BYREF
  _BYTE v35[16]; // [rsp+70h] [rbp-90h] BYREF
  _BYTE v36[32]; // [rsp+80h] [rbp-80h] BYREF
  _QWORD v37[10]; // [rsp+A0h] [rbp-60h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+F0h] [rbp-10h] BYREF

  if ( this )
  {
    memset(v37, 0, 0x48uLL);
    EtwActivityIdControl(3u, (LPGUID)&v37[1]);
    v37[8] = MEMORY[0xFFFFF78000000014];
    LODWORD(v37[3]) = 36;
    LOBYTE(v37[6]) = -1;
    memset(&ApcState, 0, sizeof(ApcState));
    KeStackAttachProcess(*((PRKPROCESS *)this + 7), &ApcState);
    if ( (*((_BYTE *)this + 299) & 4) != 0 )
    {
      v16 = (struct _KTHREAD **)*((_QWORD *)this + 54);
      if ( v16 )
      {
        DXGAUTOPUSHLOCKEXCLUSIVE::DXGAUTOPUSHLOCKEXCLUSIVE((DXGAUTOPUSHLOCKEXCLUSIVE *)v36, v16 + 8);
        v17 = DXGVIRTUALMACHINE::ReferenceVailObject((DXGVIRTUALMACHINE *)v16);
        DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v36);
        if ( v17 )
        {
          DXGPROCESSCALLOUTMUTEX::DXGPROCESSCALLOUTMUTEX((DXGPROCESSCALLOUTMUTEX *)v34, v2);
          DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v34);
          v18 = *((_QWORD *)v17 + 11);
          if ( v18 )
          {
            if ( !(unsigned __int8)PsGetProcessExitProcessCalled(*((_QWORD *)v17 + 11)) )
            {
              ProcessDxgProcess = PsGetProcessDxgProcess(v18);
              v20 = (DXGPROCESS *)ProcessDxgProcess;
              if ( ProcessDxgProcess )
              {
                if ( (*(_BYTE *)(ProcessDxgProcess + 299) & 0x20) == 0 )
                {
                  DXGAUTOMUTEX::DXGAUTOMUTEX(
                    (DXGAUTOMUTEX *)v33,
                    *(struct DXGFASTMUTEX *const *)(ProcessDxgProcess + 104),
                    0);
                  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v33);
                  DXGPROCESS::SetVailObject(v20, 0LL);
                  if ( v33[8] )
                    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v33);
                }
              }
            }
          }
          DxgkCompositionObject::Release(v17);
          if ( v34[8] )
            DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v34);
        }
      }
    }
    else if ( *((_QWORD *)this + 52) )
    {
      DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v32, *((struct DXGFASTMUTEX *const *)this + 13), 0);
      DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v32);
      v21 = (struct _KTHREAD **)DXGPROCESS::ReferenceVailObject(this);
      DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v32);
      if ( v32[8] )
        DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v32);
      if ( v21 )
      {
        DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v35, (struct DXGFASTMUTEX *const)(v21 + 5), 0);
        DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v35);
        DXGVAILOBJECT::DisableVmBusChannel(v21, v22);
        DXGVAILOBJECT::DestroyVmBusHostSubscribers((DXGVAILOBJECT *)v21);
        if ( v35[8] )
          DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v35);
        DxgkCompositionObject::Release((DxgkCompositionObject *)v21);
      }
    }
    v28 = *((_QWORD *)this + 13);
    v29 = 0;
    if ( !v28 )
    {
      v23 = WdLogNewEntry5_WdAssertion(v3, v2);
      *(_QWORD *)(v23 + 24) = 659LL;
      WdLogEvent5_WdAssertion(v23);
    }
    CurrentThread = KeGetCurrentThread();
    if ( *(struct _KTHREAD **)(v28 + 16) == CurrentThread )
    {
      v24 = WdLogNewEntry5_WdAssertion(CurrentThread, v2);
      *(_QWORD *)(v24 + 24) = 666LL;
      WdLogEvent5_WdAssertion(v24);
    }
    DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)&v28);
    DXGPROCESS::Destroy(this, (struct _ERESOURCE *)v37, 0);
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)&v28);
    KeUnstackDetachProcess(&ApcState);
    Global = DXGGLOBAL::GetGlobal(v6, v5);
    v31 = 0;
    v30 = (struct _KTHREAD **)((char *)Global + 208);
    if ( Global == (struct DXGGLOBAL *)-208LL )
    {
      v25 = WdLogNewEntry5_WdAssertion(v9, v8);
      *(_QWORD *)(v25 + 24) = 659LL;
      WdLogEvent5_WdAssertion(v25);
    }
    v10 = KeGetCurrentThread();
    if ( v30[2] == v10 )
    {
      v26 = WdLogNewEntry5_WdAssertion(v10, v8);
      *(_QWORD *)(v26 + 24) = 666LL;
      WdLogEvent5_WdAssertion(v26);
    }
    DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)&v30);
    if ( (*((_BYTE *)this + 299) & 8) == 0 )
      PsSetProcessDxgProcess(*((_QWORD *)this + 7), 0LL);
    DXGGLOBAL::GetGlobal(v12, v11);
    v13 = (__int64 *)(((unsigned __int64)this + 8) & ((unsigned __int128)-(__int128)(unsigned __int64)this >> 64));
    v14 = (__int64 *)*v13;
    if ( *(__int64 **)(*v13 + 8) != v13
      || (v15 = *(__int64 ***)((((unsigned __int64)this + 8) & ((unsigned __int128)-(__int128)(unsigned __int64)this >> 64))
                             + 8),
          *v15 != v13) )
    {
      __fastfail(3u);
    }
    *v15 = v14;
    v14[1] = (__int64)v15;
    if ( (*((_BYTE *)this + 299) & 4) != 0 )
    {
      v27 = (DXGVIRTUALMACHINE *)*((_QWORD *)this + 54);
      if ( v27 )
      {
        DXGVIRTUALMACHINE::OnVmwpDestruction(v27);
        *((_QWORD *)this + 54) = 0LL;
      }
    }
    DXGPROCESS::ReleaseReference(this);
    if ( v31 )
      DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)&v30);
    if ( v29 )
      DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)&v28);
  }
}
