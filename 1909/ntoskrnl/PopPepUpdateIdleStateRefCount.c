/*
 * XREFs of PopPepUpdateIdleStateRefCount @ 0x14017BFA8
 * Callers:
 *     PopPepDeviceDState @ 0x14017B964 (PopPepDeviceDState.c)
 *     PopPepCompleteComponentIdleStateChangeActivity @ 0x14017BE60 (PopPepCompleteComponentIdleStateChangeActivity.c)
 *     PopPepStartComponentIdleStateChangeActivity @ 0x14017F220 (PopPepStartComponentIdleStateChangeActivity.c)
 *     PopPepInitializeVetoMasks @ 0x1402F9654 (PopPepInitializeVetoMasks.c)
 *     PopPepPlatformStateRegistered @ 0x1402F9D4C (PopPepPlatformStateRegistered.c)
 *     PopPepUpdateDripsDeviceVetoMask @ 0x1402FA948 (PopPepUpdateDripsDeviceVetoMask.c)
 *     PopPepUnregisterDevice @ 0x140771A68 (PopPepUnregisterDevice.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x14002D7C0 (KeYieldProcessorEx.c)
 *     __security_check_cookie @ 0x14019EE20 (__security_check_cookie.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BF308 (KiRemoveSystemWorkPriorityKick.c)
 *     PopFxBugCheck @ 0x1402F1DB0 (PopFxBugCheck.c)
 *     PopFxPlatformStateAvailable @ 0x1402F3F2C (PopFxPlatformStateAvailable.c)
 */

void __fastcall PopPepUpdateIdleStateRefCount(__int64 a1, int a2, int a3)
{
  char v3; // bp
  __int64 v4; // rdi
  unsigned __int8 CurrentIrql; // r14
  int v6; // esi
  unsigned int v8; // esi
  bool v9; // zf
  unsigned int v10; // ecx
  __int64 v11; // rdx
  ULONG_PTR v12; // rbx
  int v13; // eax
  signed __int32 v14; // eax
  unsigned __int8 v15; // dl
  __int64 v16; // rsi
  ULONG_PTR v17; // rbx
  signed __int32 v18; // eax
  struct _KPRCB *CurrentPrcb; // rcx
  unsigned int v20; // [rsp+20h] [rbp-148h]
  _DWORD v21[3]; // [rsp+24h] [rbp-144h] BYREF
  ULONG_PTR BugCheckParameter2[32]; // [rsp+30h] [rbp-138h]

  v3 = 0;
  v4 = 0LL;
  CurrentIrql = 0;
  v6 = a1;
  if ( a3 )
    v6 = a2;
  v8 = (a1 ^ a2) & v6;
  v9 = !_BitScanForward((unsigned int *)&a1, v8);
  v20 = v10;
  if ( v9 )
    return;
  v11 = 0xFFFFFFFFLL;
  do
  {
    v12 = PopPepPlatformState + 384 * a1;
    v8 &= v8 - 1;
    if ( a3 )
    {
      v14 = *(_DWORD *)(v12 + 320);
      if ( v14 <= 0 || v14 != _InterlockedCompareExchange((volatile signed __int32 *)(v12 + 320), v14 + 1, v14) )
      {
        BugCheckParameter2[v4] = v12;
        v4 = (unsigned int)(v4 + 1);
      }
    }
    else
    {
      v13 = _InterlockedDecrement((volatile signed __int32 *)(v12 + 320));
      if ( v13 < 0x40000000 )
        PopFxBugCheck(0x668uLL, v12, v13, v8);
      if ( v13 == 0x40000000 )
      {
        if ( !v3 )
        {
          CurrentIrql = KeGetCurrentIrql();
          __writecr8(2uLL);
          if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql < 2u )
            _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
          v3 = 1;
        }
        if ( _InterlockedCompareExchange((volatile signed __int32 *)(v12 + 320), -1, 0x40000000) == 0x40000000 )
        {
          LOBYTE(v11) = 1;
          PopFxPlatformStateAvailable(v20, v11);
          if ( *(_DWORD *)(v12 + 320) != -1 )
            PopFxBugCheck(0x669uLL, v12, *(int *)(v12 + 320), 0LL);
          *(_DWORD *)(v12 + 320) = 0;
          v11 = 0xFFFFFFFFLL;
        }
      }
    }
    v9 = !_BitScanForward((unsigned int *)&a1, v8);
    v20 = a1;
  }
  while ( !v9 );
  if ( (_DWORD)v4 )
  {
    v15 = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && v15 < 2u )
      _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
    CurrentIrql = v15;
    while ( 1 )
    {
      KeYieldProcessorEx(v21);
      v16 = 0LL;
      do
      {
        v17 = BugCheckParameter2[v16];
        v18 = *(_DWORD *)(v17 + 320);
        if ( v18 <= 0 )
        {
          if ( !v18 && !_InterlockedCompareExchange((volatile signed __int32 *)(v17 + 320), -1, 0) )
          {
            PopFxPlatformStateAvailable((__int64)(v17 - PopPepPlatformState) / 384, 0LL);
            if ( *(_DWORD *)(v17 + 320) != -1 )
              PopFxBugCheck(0x669uLL, v17, *(int *)(v17 + 320), 0LL);
            *(_DWORD *)(v17 + 320) = 1073741825;
            v4 = (unsigned int)(v4 - 1);
            goto LABEL_35;
          }
        }
        else if ( v18 == _InterlockedCompareExchange((volatile signed __int32 *)(v17 + 320), v18 + 1, v18) )
        {
          v4 = (unsigned int)(v4 - 1);
LABEL_35:
          BugCheckParameter2[v16] = BugCheckParameter2[v4];
          continue;
        }
        v16 = (unsigned int)(v16 + 1);
      }
      while ( (unsigned int)v16 < (unsigned int)v4 );
      if ( !(_DWORD)v4 )
        goto LABEL_45;
    }
  }
  if ( v3 )
  {
LABEL_45:
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && CurrentIrql < 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
      KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
    __writecr8(CurrentIrql);
  }
}
