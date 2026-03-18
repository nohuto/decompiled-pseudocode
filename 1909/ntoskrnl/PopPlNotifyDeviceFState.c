/*
 * XREFs of PopPlNotifyDeviceFState @ 0x14017F3E4
 * Callers:
 *     PopPepStartComponentIdleStateChangeActivity @ 0x14017F220 (PopPepStartComponentIdleStateChangeActivity.c)
 *     PopPepNotifyIdleState @ 0x14017F34C (PopPepNotifyIdleState.c)
 *     PopPepCompleteComponentIdleState @ 0x1402F8B5C (PopPepCompleteComponentIdleState.c)
 * Callees:
 *     KeAcquireSpinLockRaiseToDpc @ 0x140008590 (KeAcquireSpinLockRaiseToDpc.c)
 *     KxReleaseSpinLock @ 0x1400916D0 (KxReleaseSpinLock.c)
 *     _TlgCreateSz @ 0x1400D6128 (_TlgCreateSz.c)
 *     _TlgWriteEx @ 0x14013CFBC (_TlgWriteEx.c)
 *     __security_check_cookie @ 0x14019EE20 (__security_check_cookie.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BF308 (KiRemoveSystemWorkPriorityKick.c)
 *     PopPlCalculateDevicePowerDraw @ 0x140304A14 (PopPlCalculateDevicePowerDraw.c)
 *     PopPlPublishSystemPowerChange @ 0x140304E08 (PopPlPublishSystemPowerChange.c)
 */

__int64 __fastcall PopPlNotifyDeviceFState(__int64 a1, unsigned int a2, unsigned int a3, unsigned int a4, char a5)
{
  __int64 result; // rax
  bool v8; // cf
  __int64 v9; // r12
  __int64 v10; // rsi
  int v11; // ebx
  int v12; // eax
  unsigned int v13; // r15d
  const CHAR *v14; // rdx
  __int64 v15; // rax
  unsigned int v16; // ecx
  int v17; // ecx
  ULONG v18; // r9d
  ULONG64 v19; // r8
  unsigned __int8 v20; // bl
  struct _KPRCB *CurrentPrcb; // rcx
  const GUID *v22; // [rsp+20h] [rbp-E0h]
  const GUID *v23; // [rsp+28h] [rbp-D8h]
  __int16 v24; // [rsp+40h] [rbp-C0h] BYREF
  unsigned int v25; // [rsp+48h] [rbp-B8h] BYREF
  unsigned int v26; // [rsp+50h] [rbp-B0h] BYREF
  unsigned int v27; // [rsp+58h] [rbp-A8h] BYREF
  unsigned int v28; // [rsp+5Ch] [rbp-A4h] BYREF
  int v29; // [rsp+60h] [rbp-A0h] BYREF
  unsigned int v30; // [rsp+64h] [rbp-9Ch] BYREF
  unsigned int v31; // [rsp+68h] [rbp-98h] BYREF
  __int64 v32; // [rsp+70h] [rbp-90h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+80h] [rbp-80h] BYREF
  __int16 *v34; // [rsp+A0h] [rbp-60h]
  __int64 v35; // [rsp+A8h] [rbp-58h]
  __int64 v36; // [rsp+B0h] [rbp-50h]
  __int64 v37; // [rsp+B8h] [rbp-48h]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+C0h] [rbp-40h] BYREF
  int *v39; // [rsp+D0h] [rbp-30h]
  __int64 v40; // [rsp+D8h] [rbp-28h]
  int *v41; // [rsp+E0h] [rbp-20h]
  __int64 v42; // [rsp+E8h] [rbp-18h]
  int *v43; // [rsp+F0h] [rbp-10h]
  __int64 v44; // [rsp+F8h] [rbp-8h]
  int *v45; // [rsp+100h] [rbp+0h]
  __int64 v46; // [rsp+108h] [rbp+8h]
  int *v47; // [rsp+110h] [rbp+10h]
  __int64 v48; // [rsp+118h] [rbp+18h]
  _DWORD *v49; // [rsp+120h] [rbp+20h]
  __int64 v50; // [rsp+128h] [rbp+28h]
  __int64 v51; // [rsp+130h] [rbp+30h]
  _DWORD v52[2]; // [rsp+138h] [rbp+38h] BYREF

  v25 = a2;
  v26 = a4;
  result = *(_QWORD *)(*(_QWORD *)(a1 + 824) + 8LL * a2);
  v32 = result;
  if ( *(_QWORD *)(result + 432) )
  {
    v8 = a4 < a3;
    if ( a4 > a3 )
    {
      if ( !a5 )
        return result;
      v8 = a4 < a3;
    }
    if ( !v8 || !a5 )
    {
      v9 = *(_QWORD *)(a1 + 1176);
      v10 = *(_QWORD *)(v9 + 16);
      *(_BYTE *)(v10 + 24) = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v10 + 16));
      v11 = *(_DWORD *)(v9 + 32);
      v12 = PopPlCalculateDevicePowerDraw(a1, 0LL, &v26, &v25);
      *(_DWORD *)(v9 + 32) = v12;
      v13 = v12 - v11;
      if ( pCallbackContext.LevelPlus1 > 5 )
      {
        v29 = v12;
        v14 = "Beginning";
        v15 = *(_QWORD *)(v9 + 16);
        v24 = 1;
        v27 = a4;
        v28 = v13;
        v30 = v13;
        v16 = v13 + *(_DWORD *)(v15 + 28);
        v34 = &v24;
        v36 = v32;
        v31 = v16;
        if ( a5 )
          v14 = "Completed";
        v35 = 2LL;
        v37 = 16LL;
        TlgCreateSz(&pDesc, v14);
        v40 = 4LL;
        v41 = (int *)&v28;
        v39 = (int *)&v27;
        v17 = *(unsigned __int16 *)(a1 + 216);
        v43 = &v29;
        v45 = (int *)&v30;
        v47 = (int *)&v31;
        v51 = *(_QWORD *)(a1 + 224);
        v42 = 4LL;
        v44 = 4LL;
        v46 = 4LL;
        v48 = 4LL;
        v49 = v52;
        v50 = 2LL;
        v52[0] = v17;
        v52[1] = v18;
        TlgWriteEx(&pCallbackContext, &unk_14039195E, v19, v18, v22, v23, 0xCu, &pData);
      }
      PopPlPublishSystemPowerChange(v10, v13);
      v20 = *(_BYTE *)(v10 + 24);
      KxReleaseSpinLock((PKSPIN_LOCK)(v10 + 16));
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v20 < 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
        KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
      result = v20;
      __writecr8(v20);
    }
  }
  return result;
}
