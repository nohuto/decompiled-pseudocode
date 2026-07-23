/*
 * XREFs of KiConnectInterrupt @ 0x14016DDC0
 * Callers:
 *     KeConnectInterrupt @ 0x14016DC40 (KeConnectInterrupt.c)
 * Callees:
 *     KeRevertToUserGroupAffinityThread @ 0x1400D8290 (KeRevertToUserGroupAffinityThread.c)
 *     KiAcquireInterruptConnectLock @ 0x14016DF38 (KiAcquireInterruptConnectLock.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 *     KiInsertInterruptObjectOrdered @ 0x1402999D8 (KiInsertInterruptObjectOrdered.c)
 */

__int64 __fastcall KiConnectInterrupt(__int64 a1)
{
  __int64 v1; // rdi
  char v2; // bp
  unsigned __int8 v3; // dl
  char v4; // r14
  unsigned int v5; // r9d
  unsigned __int8 v7; // al
  _KIDTENTRY64 *v8; // rcx
  bool v9; // zf
  __int64 (__fastcall *v10)(); // rax
  char *v11; // r10
  __int64 (__fastcall *v13)(int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, __int16); // rax
  __int64 v14; // r11
  __int64 v15; // r10
  struct _KPRCB *CurrentPrcb; // rcx
  _BYTE v17[8]; // [rsp+20h] [rbp-48h] BYREF
  __int64 (__fastcall *v18)(); // [rsp+28h] [rbp-40h]
  struct _GROUP_AFFINITY PreviousAffinity; // [rsp+30h] [rbp-38h] BYREF

  v1 = *(unsigned int *)(a1 + 88);
  v2 = 0;
  v3 = *(_BYTE *)(a1 + 92);
  v4 = 0;
  v5 = *(_DWORD *)(a1 + 96);
  if ( (unsigned int)v1 > 0xFF || v3 > 0xFu || v3 != (unsigned int)v1 >> 4 && v3 )
    return 3221225711LL;
  if ( v5 >= (unsigned int)KeNumberProcessors_0 )
    return 3221225711LL;
  v7 = *(_BYTE *)(a1 + 93);
  if ( v7 < v3 )
  {
    if ( v7 )
      return 3221225711LL;
  }
  KiAcquireInterruptConnectLock(v5, v17, &PreviousAffinity);
  v8 = &KeGetPcr()->IdtBase[v1];
  v9 = *(_BYTE *)(a1 + 95) == 0;
  LOWORD(v18) = v8->OffsetLow;
  WORD1(v18) = v8->OffsetMiddle;
  HIDWORD(v18) = v8->OffsetHigh;
  if ( v9 )
  {
    v10 = KiIsrThunkShadow;
    if ( !KiKvaShadow )
      v10 = KxUnexpectedInterrupt0;
    if ( v18 == (__int64 (__fastcall *)())((char *)v10 + 8 * v1) )
    {
      v11 = (char *)KeGetCurrentPrcb()->InterruptObject[v1];
      if ( !v11 )
      {
        if ( !*(_BYTE *)(a1 + 93) )
        {
          *(_QWORD *)(a1 + 16) = a1 + 8;
          *(_QWORD *)(a1 + 8) = a1 + 8;
          *(_QWORD *)(a1 + 80) = KiChainedDispatch;
        }
        v4 = 1;
        *(_BYTE *)(a1 + 95) = 1;
        goto LABEL_14;
      }
      if ( (unsigned int)v1 >= 0x30 )
      {
        v2 = 1;
        if ( *(_DWORD *)(a1 + 108) == *((_DWORD *)v11 + 27) )
        {
          if ( *(_BYTE *)(a1 + 100) )
          {
            if ( v11[100] )
            {
              if ( *(__int64 (__fastcall **)(int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, __int16))(a1 + 80) == KiInterruptDispatch )
              {
                v13 = (__int64 (__fastcall *)(int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, __int16))*((_QWORD *)v11 + 10);
                if ( v13 == KiInterruptDispatch || v13 == KiChainedDispatch )
                {
                  v4 = 1;
                  *(_BYTE *)(a1 + 95) = 1;
                  if ( *((__int64 (__fastcall **)(int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, __int16))v11
                       + 10) != KiChainedDispatch )
                  {
                    *((_QWORD *)v11 + 2) = v11 + 8;
                    *((_QWORD *)v11 + 1) = v11 + 8;
                    *((_QWORD *)v11 + 10) = KiChainedDispatch;
                  }
                  KiInsertInterruptObjectOrdered(v11, a1);
                  if ( !*(_BYTE *)(v15 + 93) )
                  {
                    if ( *(_BYTE *)(a1 + 93) )
                    {
                      *(_QWORD *)(a1 + 80) = v14;
LABEL_14:
                      KeGetCurrentPrcb()->InterruptObject[v1] = (void *)a1;
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v17[0] < 2u )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick(CurrentPrcb);
  }
  __writecr8(v17[0]);
  KeRevertToUserGroupAffinityThread(&PreviousAffinity);
  if ( v4 )
    return v2 != 0 ? 0x127 : 0;
  return 3221225711LL;
}
