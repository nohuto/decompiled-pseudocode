/*
 * XREFs of PopPlNotifyDeviceDState @ 0x14017B4F0
 * Callers:
 *     PopPepDeviceDState @ 0x14017B274 (PopPepDeviceDState.c)
 * Callees:
 *     KeAcquireSpinLockRaiseToDpc @ 0x140008500 (KeAcquireSpinLockRaiseToDpc.c)
 *     KxReleaseSpinLock @ 0x1400A20A0 (KxReleaseSpinLock.c)
 *     _TlgCreateSz @ 0x1400ED314 (_TlgCreateSz.c)
 *     _TlgWriteEx @ 0x14013C9DC (_TlgWriteEx.c)
 *     __security_check_cookie @ 0x14019E700 (__security_check_cookie.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BE818 (KiRemoveSystemWorkPriorityKick.c)
 *     PopPlCalculateDevicePowerDraw @ 0x140304F64 (PopPlCalculateDevicePowerDraw.c)
 *     PopPlPublishSystemPowerChange @ 0x140305358 (PopPlPublishSystemPowerChange.c)
 */

void __fastcall PopPlNotifyDeviceDState(__int64 a1, int a2, int a3, char a4)
{
  __int64 v4; // r14
  bool v7; // cc
  __int64 v8; // r15
  int v9; // ebx
  int v10; // eax
  unsigned int v11; // r12d
  const CHAR *v12; // rdx
  __int64 v13; // rax
  int v14; // ecx
  __int64 v15; // rax
  LPCSTR v16; // r9
  ULONG64 v17; // r8
  ULONG v18; // r9d
  unsigned __int8 v19; // bl
  struct _KPRCB *CurrentPrcb; // rcx
  const GUID *v21; // [rsp+20h] [rbp-E0h]
  const GUID *v22; // [rsp+28h] [rbp-D8h]
  __int16 v23; // [rsp+40h] [rbp-C0h] BYREF
  int v24; // [rsp+48h] [rbp-B8h] BYREF
  unsigned int v25; // [rsp+50h] [rbp-B0h] BYREF
  int v26; // [rsp+54h] [rbp-ACh] BYREF
  unsigned int v27; // [rsp+58h] [rbp-A8h] BYREF
  int v28; // [rsp+5Ch] [rbp-A4h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+60h] [rbp-A0h] BYREF
  __int16 *v30; // [rsp+80h] [rbp-80h]
  __int64 v31; // [rsp+88h] [rbp-78h]
  _DWORD *v32; // [rsp+90h] [rbp-70h]
  __int64 v33; // [rsp+98h] [rbp-68h]
  __int64 v34; // [rsp+A0h] [rbp-60h]
  _DWORD v35[2]; // [rsp+A8h] [rbp-58h] BYREF
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+B0h] [rbp-50h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v37; // [rsp+C0h] [rbp-40h] BYREF
  int *v38; // [rsp+D0h] [rbp-30h]
  __int64 v39; // [rsp+D8h] [rbp-28h]
  int *v40; // [rsp+E0h] [rbp-20h]
  __int64 v41; // [rsp+E8h] [rbp-18h]
  int *v42; // [rsp+F0h] [rbp-10h]
  __int64 v43; // [rsp+F8h] [rbp-8h]
  int *v44; // [rsp+100h] [rbp+0h]
  __int64 v45; // [rsp+108h] [rbp+8h]

  v4 = *(_QWORD *)(a1 + 1176);
  v24 = a3;
  if ( v4 )
  {
    v7 = a3 < a2;
    if ( a3 > a2 )
    {
      if ( !a4 )
        return;
      v7 = a3 < a2;
    }
    if ( !v7 || !a4 )
    {
      v8 = *(_QWORD *)(v4 + 16);
      *(_BYTE *)(v8 + 24) = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v8 + 16));
      v9 = *(_DWORD *)(v4 + 32);
      v10 = PopPlCalculateDevicePowerDraw(a1, &v24, 0LL, 0LL);
      *(_DWORD *)(v4 + 32) = v10;
      v11 = v10 - v9;
      if ( pCallbackContext.LevelPlus1 > 5 )
      {
        v23 = 1;
        v12 = "Beginning";
        if ( a4 )
          v12 = "Completed";
        v26 = v10;
        v13 = *(_QWORD *)(v4 + 16);
        v25 = v11;
        v27 = v11;
        v14 = *(_DWORD *)(v13 + 28);
        v30 = &v23;
        v15 = *(_QWORD *)(a1 + 224);
        v28 = v11 + v14;
        v35[0] = *(unsigned __int16 *)(a1 + 216);
        v31 = 2LL;
        v32 = v35;
        v33 = 2LL;
        v34 = v15;
        v35[1] = 0;
        TlgCreateSz(&pDesc, v12);
        TlgCreateSz(&v37, v16);
        v39 = 4LL;
        v40 = &v26;
        v38 = (int *)&v25;
        v42 = (int *)&v27;
        v44 = &v28;
        v41 = 4LL;
        v43 = 4LL;
        v45 = 4LL;
        TlgWriteEx(&pCallbackContext, &unk_140391744, v17, v18, v21, v22, 0xBu, &pData);
      }
      PopPlPublishSystemPowerChange(v8, v11);
      v19 = *(_BYTE *)(v8 + 24);
      KxReleaseSpinLock((PKSPIN_LOCK)(v8 + 16));
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v19 < 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
        KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
      __writecr8(v19);
    }
  }
}
