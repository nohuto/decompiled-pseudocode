/*
 * XREFs of ?VmBusCreateProcess@DXG_HOST_GLOBAL_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C021D6E0
 * Callers:
 *     <none>
 * Callees:
 *     ??0DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C00071B0 (--0DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ?Acquire@DXGFASTMUTEX@@QEAAXXZ @ 0x1C00088C0 (-Acquire@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C000897C (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0008A64 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C000C510 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C000C650 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ?AcquireReference@DXGPROCESS@@QEAAXXZ @ 0x1C0018DCC (-AcquireReference@DXGPROCESS@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C0023340 (__security_check_cookie.c)
 *     memset @ 0x1C0025440 (memset.c)
 *     ??$CastToVmBusCommand@UDXGKVMB_COMMAND_CREATEPROCESS@@@@YAPEAUDXGKVMB_COMMAND_CREATEPROCESS@@PEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C003CB04 (--$CastToVmBusCommand@UDXGKVMB_COMMAND_CREATEPROCESS@@@@YAPEAUDXGKVMB_COMMAND_CREATEPROCESS@@PEA.c)
 *     ?VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z @ 0x1C003D4CC (-VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z.c)
 *     ?DestroyDxgProcess@DXGPROCESS@@SAXPEAV1@@Z @ 0x1C00FA5F0 (-DestroyDxgProcess@DXGPROCESS@@SAXPEAV1@@Z.c)
 *     ?AllocHandle@HMGRTABLE@@QEAAIPEAXW4_HMGRENTRY_TYPE@@IH@Z @ 0x1C00FFDD0 (-AllocHandle@HMGRTABLE@@QEAAIPEAXW4_HMGRENTRY_TYPE@@IH@Z.c)
 *     ?CreateDxgProcess@DXGPROCESS@@SAJPEAPEAV1@PEAV1@1EPEAU_EPROCESS@@PEAX@Z @ 0x1C0101CA0 (-CreateDxgProcess@DXGPROCESS@@SAJPEAPEAV1@PEAV1@1EPEAU_EPROCESS@@PEAX@Z.c)
 *     ?IncrementNumVmProcesses@DXGVIRTUALMACHINE@@QEAAJXZ @ 0x1C025EB68 (-IncrementNumVmProcesses@DXGVIRTUALMACHINE@@QEAAJXZ.c)
 *     ?SetVmProcessName@DXGPROCESSVM@@QEAAXPEAG@Z @ 0x1C025F984 (-SetVmProcessName@DXGPROCESSVM@@QEAAXPEAG@Z.c)
 */

unsigned __int8 __fastcall DXG_HOST_GLOBAL_VMBUS::VmBusCreateProcess(struct DXGADAPTER_VMBUS_PACKET *a1)
{
  __int64 v2; // rax
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // r8
  __int64 v6; // r14
  unsigned int v7; // esi
  unsigned __int8 v8; // al
  __int64 v9; // rdi
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // rax
  int v14; // eax
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // rbx
  DXGPROCESSVM *v19; // rbx
  __int64 *v20; // r12
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 v24; // rax
  unsigned int v25; // r15d
  int v26; // edx
  __int64 v27; // rdx
  __int64 v28; // rcx
  char v29; // al
  DXGFASTMUTEX *v30; // rbx
  __int64 v31; // rdx
  __int64 v32; // rdx
  __int64 v33; // rax
  __int64 v34; // rax
  struct VMBPACKETCOMPLETION__ *v35; // rcx
  int v37; // [rsp+38h] [rbp-29h] BYREF
  DXGPROCESSVM *v38; // [rsp+40h] [rbp-21h] BYREF
  _BYTE v39[24]; // [rsp+48h] [rbp-19h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+60h] [rbp-1h] BYREF

  v2 = CastToVmBusCommand<DXGKVMB_COMMAND_CREATEPROCESS>((__int64)a1);
  v6 = v2;
  if ( !v2 )
    return 0;
  LOBYTE(v4) = *(_BYTE *)(v2 + 562);
  v7 = 0;
  v38 = 0LL;
  if ( (v4 & 3) == 3
    || (v8 = v4 | ((unsigned __int8)v4 >> 1), LOBYTE(v4) = (unsigned __int8)v4 >> 2, ((unsigned __int8)v4 & v8 & 1) != 0) )
  {
    v13 = WdLogNewEntry5_WdError(v4, v3, v5);
    *(_QWORD *)(v13 + 24) = 4783LL;
    goto LABEL_32;
  }
  v9 = *((_QWORD *)a1 + 7);
  if ( (int)DXGVIRTUALMACHINE::IncrementNumVmProcesses(*(DXGVIRTUALMACHINE **)(v9 + 432)) < 0 )
  {
    v13 = WdLogNewEntry5_WdError(v11, v10, v12);
    *(_QWORD *)(v13 + 24) = 4791LL;
LABEL_32:
    WdLogEvent5_WdError(v13);
    return 0;
  }
  memset(&ApcState, 0, sizeof(ApcState));
  KeStackAttachProcess(*(PRKPROCESS *)(v9 + 56), &ApcState);
  v14 = DXGPROCESS::CreateDxgProcess(
          &v38,
          (struct DXGPROCESS *)v9,
          *(struct DXGPROCESS **)(v6 + 24),
          0,
          0LL,
          *(void **)(v6 + 32));
  v18 = v14;
  v37 = v14;
  if ( v14 < 0 )
  {
    v34 = WdLogNewEntry5_WdError(v16, v15, v17);
    *(_QWORD *)(v34 + 24) = v18;
    WdLogEvent5_WdError(v34);
  }
  else
  {
    DXGHANDLETABLELOCKEXCLUSIVE::DXGHANDLETABLELOCKEXCLUSIVE((DXGHANDLETABLELOCKEXCLUSIVE *)v39, (struct _KTHREAD **)v9);
    v19 = v38;
    v20 = (__int64 *)(v9 + 208);
    v7 = HMGRTABLE::AllocHandle((unsigned int *)(v9 + 208), (__int64)v38, 12, 0, 0);
    if ( !v7 )
    {
      DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v39);
      v24 = WdLogNewEntry5_WdError(v22, v21, v23);
      *(_QWORD *)(v24 + 24) = 4811LL;
      WdLogEvent5_WdError(v24);
      DXGPROCESS::DestroyDxgProcess(v19);
      _InterlockedDecrement(*(volatile signed __int32 **)(v9 + 432));
      DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v39);
      return 0;
    }
    v25 = (v7 >> 6) & 0xFFFFFF;
    if ( v25 < *(_DWORD *)(v9 + 224) )
    {
      v26 = *(_DWORD *)(*v20 + 16LL * v25 + 8);
      if ( ((v7 >> 25) & 0x60) == (*(_BYTE *)(*v20 + 16LL * v25 + 8) & 0x60) && (v26 & 0x2000) == 0 && (v26 & 0x1F) != 0 )
        *(_DWORD *)(16 * (((unsigned __int64)v7 >> 6) & 0xFFFFFF) + *v20 + 8) |= 0x2000u;
    }
    DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v39);
    *((_DWORD *)v19 + 119) = v7;
    DXGPROCESSVM::SetVmProcessName(v19, (unsigned __int16 *)(v6 + 40));
    v29 = *(_BYTE *)(v6 + 562);
    if ( (v29 & 2) != 0 )
    {
      *((_BYTE *)v19 + 298) = 1;
    }
    else if ( (v29 & 1) != 0 )
    {
      *((_BYTE *)v19 + 296) = 1;
    }
    else if ( (v29 & 4) != 0 )
    {
      *((_BYTE *)v19 + 299) |= 1u;
    }
    v30 = (struct DXGGLOBAL *)((char *)DXGGLOBAL::GetGlobal(v28, v27) + 208);
    DXGFASTMUTEX::Acquire(v30);
    DXGPROCESS::AcquireReference((DXGPROCESS *)v9, v31);
    DXGFASTMUTEX::Release((struct _KTHREAD **)v30);
    DXGPUSHLOCK::AcquireExclusive((DXGPUSHLOCK *)(v9 + 184));
    if ( v25 < *(_DWORD *)(v9 + 224) )
    {
      v32 = *v20;
      if ( ((v7 >> 25) & 0x60) == (*(_BYTE *)(*v20 + 16LL * v25 + 8) & 0x60)
        && (*(_DWORD *)(*v20 + 16LL * v25 + 8) & 0x1F) != 0 )
      {
        if ( (*(_DWORD *)(v32 + 16LL * ((v7 >> 6) & 0xFFFFFF) + 8) & 0x2000) == 0 )
        {
          v33 = WdLogNewEntry5_WdAssertion((v7 >> 25) & 0x60, v32);
          *(_QWORD *)(v33 + 24) = 217LL;
          WdLogEvent5_WdAssertion(v33);
          v32 = *v20;
        }
        *(_DWORD *)(v32 + 16LL * ((v7 >> 6) & 0xFFFFFF) + 8) &= ~0x2000u;
      }
    }
    *(_QWORD *)(v9 + 192) = 0LL;
    ExReleasePushLockExclusiveEx(v9 + 184, 0LL);
    KeLeaveCriticalRegion();
    LODWORD(v18) = v37;
  }
  KeUnstackDetachProcess(&ApcState);
  if ( (int)v18 >= 0 )
  {
    v35 = (struct VMBPACKETCOMPLETION__ *)*((_QWORD *)a1 + 9);
    v37 = v7;
    VmBusCompletePacket(v35, &v37, 4u);
    return 1;
  }
  _InterlockedDecrement(*(volatile signed __int32 **)(v9 + 432));
  return 0;
}
