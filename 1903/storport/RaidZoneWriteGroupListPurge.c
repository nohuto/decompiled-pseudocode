/*
 * XREFs of RaidZoneWriteGroupListPurge @ 0x1C001C8F8
 * Callers:
 *     RaidUnitCompleteRequest @ 0x1C0009540 (RaidUnitCompleteRequest.c)
 *     RaidUnitCancelPendingRequests @ 0x1C001C8B4 (RaidUnitCancelPendingRequests.c)
 * Callees:
 *     <none>
 */

void __fastcall RaidZoneWriteGroupListPurge(__int64 a1)
{
  _QWORD **v1; // rbx
  _QWORD *v3; // rcx
  int v4; // edx
  _QWORD *i; // rax
  _QWORD *v6; // rax
  _QWORD *v7; // rsi
  _QWORD *v8; // rax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  v1 = (_QWORD **)(a1 + 128);
  memset(&LockHandle, 0, sizeof(LockHandle));
  if ( *v1 != v1 )
  {
    KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(a1 + 144), &LockHandle);
    v3 = *v1;
    v4 = 0;
    for ( i = *v1; i != v1; i = (_QWORD *)*i )
      v4 += *((_DWORD *)i + 14);
    if ( v4 )
    {
      if ( v3 != v1 )
      {
        do
        {
          v7 = (_QWORD *)*v3;
          if ( *((_DWORD *)v3 + 14) )
          {
            v3[5] = v3[2];
          }
          else
          {
            if ( (_QWORD *)v7[1] != v3 )
              goto LABEL_18;
            v8 = (_QWORD *)v3[1];
            if ( (_QWORD *)*v8 != v3 )
              goto LABEL_18;
            *v8 = v7;
            v7[1] = v8;
            --*(_DWORD *)(a1 + 152);
            ExFreePoolWithTag(v3, 0x525A6152u);
          }
          v3 = v7;
        }
        while ( v7 != v1 );
      }
    }
    else
    {
      while ( 1 )
      {
        if ( (_QWORD **)v3[1] != v1 || (v6 = (_QWORD *)*v3, *(_QWORD **)(*v3 + 8LL) != v3) )
LABEL_18:
          __fastfail(3u);
        *v1 = v6;
        v6[1] = v1;
        if ( v3 == v1 )
          break;
        --*(_DWORD *)(a1 + 152);
        ExFreePoolWithTag(v3, 0x525A6152u);
        v3 = *v1;
      }
    }
    KeReleaseInStackQueuedSpinLock(&LockHandle);
  }
}
