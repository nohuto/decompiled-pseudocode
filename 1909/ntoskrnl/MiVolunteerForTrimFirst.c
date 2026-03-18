/*
 * XREFs of MiVolunteerForTrimFirst @ 0x14012DCC8
 * Callers:
 *     MiSetVaAgeList @ 0x1400A55E0 (MiSetVaAgeList.c)
 * Callees:
 *     KxAcquireQueuedSpinLock @ 0x14000D050 (KxAcquireQueuedSpinLock.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x14003DC40 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 */

void __fastcall MiVolunteerForTrimFirst(__int64 a1, __int64 a2)
{
  _QWORD *v2; // rdi
  __int64 v3; // rbp
  __int64 *v4; // rbx
  int v5; // esi
  __int64 *v6; // rax
  __int64 **v7; // rcx
  __int64 **v8; // rax
  __int64 *v9; // rcx
  __int64 **v10; // rcx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  *(_QWORD *)&LockHandle.OldIrql = 0LL;
  v2 = *(_QWORD **)(qword_140465E88 + 8LL * *(unsigned __int16 *)(a1 + 174));
  v3 = v2[975];
  if ( *(_QWORD *)(a1 + 96) >= *(_QWORD *)(v3 + 64) )
  {
    if ( a2 >= 0 )
    {
      v4 = (__int64 *)(a1 + 24);
      if ( *(_QWORD *)(a1 + 24) )
      {
        if ( (__int64 *)v2[976] != v4 )
        {
          v5 = 1;
LABEL_8:
          LockHandle.LockQueue.Next = 0LL;
          LockHandle.LockQueue.Lock = &SpinLock;
          KxAcquireQueuedSpinLock((__int64)&LockHandle, (volatile __int64 *)&SpinLock);
          if ( !*(_BYTE *)(v3 + 53) )
          {
            v6 = (__int64 *)*v4;
            if ( *v4 )
            {
              if ( (__int64 *)v6[1] == v4 )
              {
                v7 = (__int64 **)v4[1];
                if ( *v7 == v4 )
                {
                  *v7 = v6;
                  v6[1] = (__int64)v7;
                  v8 = (__int64 **)(v2 + 976);
                  if ( v5 == 1 )
                  {
                    v9 = *v8;
                    if ( (__int64 **)(*v8)[1] == v8 )
                    {
                      *v4 = (__int64)v9;
                      v4[1] = (__int64)v8;
                      v9[1] = (__int64)v4;
                      *v8 = v4;
                      goto LABEL_10;
                    }
                  }
                  else
                  {
                    v10 = (__int64 **)v2[977];
                    if ( *v10 == (__int64 *)v8 )
                    {
                      *v4 = (__int64)v8;
                      v4[1] = (__int64)v10;
                      *v10 = v4;
                      v2[977] = v4;
                      goto LABEL_10;
                    }
                  }
                }
              }
              __fastfail(3u);
            }
          }
          *(_BYTE *)(v3 + 54) = 1;
LABEL_10:
          KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
        }
      }
    }
  }
  else if ( a2 <= 0 )
  {
    v4 = (__int64 *)(a1 + 24);
    if ( *(_QWORD *)(a1 + 24) )
    {
      if ( (__int64 *)v2[977] != v4 )
      {
        v5 = 2;
        goto LABEL_8;
      }
    }
  }
}
