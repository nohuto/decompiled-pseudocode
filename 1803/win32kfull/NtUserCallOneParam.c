/*
 * XREFs of NtUserCallOneParam @ 0x1C003BDC0
 * Callers:
 *     <none>
 * Callees:
 *     _GetQueueStatus @ 0x1C003BE50 (_GetQueueStatus.c)
 *     _guard_dispatch_icall_nop @ 0x1C013D370 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall NtUserCallOneParam(__int64 a1, unsigned int a2)
{
  __int64 v3; // rdi
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 QueueStatus; // rbx
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 *v10; // rax

  v3 = a2;
  if ( a2 != 56 )
  {
    EnterCrit(0LL, 1LL);
    if ( (unsigned int)(v3 - 45) <= 0x2A )
    {
      _mm_lfence();
      v10 = (__int64 *)((__int64 (__fastcall *)(__int64))*(&apfnSimpleCall + v3))(a1);
      QueueStatus = (__int64)v10;
      if ( (unsigned int)v3 >= 0x2F )
        goto LABEL_3;
      if ( v10 )
      {
        QueueStatus = *v10;
        goto LABEL_3;
      }
    }
    QueueStatus = 0LL;
    goto LABEL_3;
  }
  EnterSharedCrit(0LL, 1LL);
  _mm_lfence();
  QueueStatus = GetQueueStatus(a1);
LABEL_3:
  UserSessionSwitchLeaveCrit(v5, v4, v7, v8);
  return QueueStatus;
}
