/*
 * XREFs of KiConnectInterrupt @ 0x14017CB3C
 * Callers:
 *     KeConnectInterrupt @ 0x14017C9BC (KeConnectInterrupt.c)
 * Callees:
 *     KeRevertToUserGroupAffinityThread @ 0x1400FC050 (KeRevertToUserGroupAffinityThread.c)
 *     KiAcquireInterruptConnectLock @ 0x14017CCC0 (KiAcquireInterruptConnectLock.c)
 *     __security_check_cookie @ 0x14019EE20 (__security_check_cookie.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BF308 (KiRemoveSystemWorkPriorityKick.c)
 *     KiInsertInterruptObjectOrdered @ 0x1402B0808 (KiInsertInterruptObjectOrdered.c)
 */

__int64 __fastcall KiConnectInterrupt(__int64 a1)
{
  __int64 v1; // rdi
  unsigned __int8 v2; // dl
  char v3; // bp
  unsigned int v4; // r9d
  char v5; // r14
  unsigned __int8 v7; // al
  _KIDTENTRY64 *v8; // rcx
  bool v9; // zf
  __int64 (__fastcall *v10)(); // rax
  char *v11; // r10
  __int64 (__fastcall *v13)(); // rax
  __int64 v14; // r11
  __int64 v15; // r10
  struct _KPRCB *CurrentPrcb; // rcx
  _BYTE v17[8]; // [rsp+20h] [rbp-48h] BYREF
  __int64 (__fastcall *v18)(); // [rsp+28h] [rbp-40h]
  struct _GROUP_AFFINITY PreviousAffinity; // [rsp+30h] [rbp-38h] BYREF

  v1 = *(unsigned int *)(a1 + 88);
  v2 = *(_BYTE *)(a1 + 92);
  v3 = 0;
  v4 = *(_DWORD *)(a1 + 96);
  v5 = 0;
  PreviousAffinity.Mask = 0LL;
  *(_QWORD *)&PreviousAffinity.Group = 0LL;
  if ( (unsigned int)v1 > 0xFF || v2 > 0xFu || v2 != (unsigned int)v1 >> 4 && v2 )
    return 3221225711LL;
  if ( v4 >= (unsigned int)KeNumberProcessors_0 )
    return 3221225711LL;
  v7 = *(_BYTE *)(a1 + 93);
  if ( v7 < v2 )
  {
    if ( v7 )
      return 3221225711LL;
  }
  KiAcquireInterruptConnectLock(v4, v17, &PreviousAffinity);
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
        v5 = 1;
        *(_BYTE *)(a1 + 95) = 1;
        goto LABEL_14;
      }
      if ( (unsigned int)v1 >= 0x30 )
      {
        v3 = 1;
        if ( *(_DWORD *)(a1 + 108) == *((_DWORD *)v11 + 27) )
        {
          if ( *(_BYTE *)(a1 + 100) )
          {
            if ( v11[100] )
            {
              if ( *(__int64 (__fastcall **)())(a1 + 80) == KiInterruptDispatch )
              {
                v13 = (__int64 (__fastcall *)())*((_QWORD *)v11 + 10);
                if ( v13 == KiInterruptDispatch || v13 == KiChainedDispatch )
                {
                  v5 = 1;
                  *(_BYTE *)(a1 + 95) = 1;
                  if ( *((__int64 (__fastcall **)())v11 + 10) != KiChainedDispatch )
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
  if ( v5 )
    return v3 != 0 ? 0x127 : 0;
  return 3221225711LL;
}
