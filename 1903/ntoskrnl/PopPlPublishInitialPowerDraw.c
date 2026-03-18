/*
 * XREFs of PopPlPublishInitialPowerDraw @ 0x1403051A0
 * Callers:
 *     <none>
 * Callees:
 *     KxReleaseSpinLock @ 0x1400A20A0 (KxReleaseSpinLock.c)
 *     _TlgWriteEx @ 0x14013C9DC (_TlgWriteEx.c)
 *     __security_check_cookie @ 0x14019E700 (__security_check_cookie.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BE818 (KiRemoveSystemWorkPriorityKick.c)
 *     PopPlPublishSystemPowerChange @ 0x140305358 (PopPlPublishSystemPowerChange.c)
 */

__int64 __fastcall PopPlPublishInitialPowerDraw(__int64 a1, int *a2, ULONG64 a3, ULONG a4)
{
  __int64 v4; // rbx
  unsigned __int64 v5; // rdi
  unsigned int i; // esi
  unsigned __int16 *v7; // rdx
  int v8; // eax
  __int64 v9; // rax
  int v10; // ecx
  int v11; // ecx
  unsigned __int8 v12; // di
  struct _KPRCB *CurrentPrcb; // rcx
  __int64 result; // rax
  const GUID *v15; // [rsp+20h] [rbp-99h]
  const GUID *v16; // [rsp+28h] [rbp-91h]
  __int16 v17; // [rsp+40h] [rbp-79h] BYREF
  int v18; // [rsp+44h] [rbp-75h] BYREF
  int v19; // [rsp+48h] [rbp-71h] BYREF
  int v20; // [rsp+4Ch] [rbp-6Dh] BYREF
  int v21; // [rsp+50h] [rbp-69h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+60h] [rbp-59h] BYREF
  __int16 *v23; // [rsp+80h] [rbp-39h]
  int v24; // [rsp+88h] [rbp-31h]
  int v25; // [rsp+8Ch] [rbp-2Dh]
  _DWORD *v26; // [rsp+90h] [rbp-29h]
  int v27; // [rsp+98h] [rbp-21h]
  int v28; // [rsp+9Ch] [rbp-1Dh]
  __int64 v29; // [rsp+A0h] [rbp-19h]
  _DWORD v30[2]; // [rsp+A8h] [rbp-11h] BYREF
  int *v31; // [rsp+B0h] [rbp-9h]
  int v32; // [rsp+B8h] [rbp-1h]
  int v33; // [rsp+BCh] [rbp+3h]
  int *v34; // [rsp+C0h] [rbp+7h]
  int v35; // [rsp+C8h] [rbp+Fh]
  int v36; // [rsp+CCh] [rbp+13h]
  int *v37; // [rsp+D0h] [rbp+17h]
  int v38; // [rsp+D8h] [rbp+1Fh]
  int v39; // [rsp+DCh] [rbp+23h]
  int *v40; // [rsp+E0h] [rbp+27h]
  int v41; // [rsp+E8h] [rbp+2Fh]
  int v42; // [rsp+ECh] [rbp+33h]

  v4 = *((_QWORD *)a2 + 1);
  v5 = 0LL;
  for ( i = *a2; v5 < *(_QWORD *)(v4 + 48); ++v5 )
  {
    v7 = *(unsigned __int16 **)(*(_QWORD *)(v4 + 56) + 8 * v5);
    if ( !*((_QWORD *)v7 + 3) )
    {
      v8 = *((_DWORD *)v7 + 10);
      i += v8;
      *((_DWORD *)v7 + 8) = v8;
      if ( pCallbackContext.LevelPlus1 > 5 )
      {
        v18 = 0;
        v20 = 0;
        v19 = v8;
        v9 = *((_QWORD *)v7 + 2);
        v17 = 1;
        v10 = *(_DWORD *)(v9 + 28);
        v25 = 0;
        v28 = 0;
        v30[1] = 0;
        v33 = 0;
        v36 = 0;
        v39 = 0;
        v42 = 0;
        v23 = &v17;
        v29 = *((_QWORD *)v7 + 1);
        v31 = &v18;
        v34 = &v19;
        v21 = v10;
        v11 = *v7;
        v37 = &v20;
        v40 = &v21;
        v24 = 2;
        v26 = v30;
        v27 = 2;
        v30[0] = v11;
        v32 = 4;
        v35 = 4;
        v38 = 4;
        v41 = 4;
        TlgWriteEx(&pCallbackContext, &unk_1403917E4, a3, a4, v15, v16, 9u, &pData);
      }
    }
  }
  PopPlPublishSystemPowerChange(v4, i);
  v12 = *(_BYTE *)(v4 + 24);
  KxReleaseSpinLock((PKSPIN_LOCK)(v4 + 16));
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v12 < 2u )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
  }
  result = v12;
  __writecr8(v12);
  return result;
}
