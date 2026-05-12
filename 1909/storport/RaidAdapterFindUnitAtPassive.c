/*
 * XREFs of RaidAdapterFindUnitAtPassive @ 0x1C000605C
 * Callers:
 *     RaidAdapterFindUnit @ 0x1C0005FE8 (RaidAdapterFindUnit.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall RaidAdapterFindUnitAtPassive(__int64 a1, int a2)
{
  unsigned __int8 v2; // bl
  _QWORD *v4; // rsi
  _QWORD *v5; // rbp
  _QWORD **v6; // rdi
  _QWORD *v7; // r8
  bool v8; // zf
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  v2 = a2;
  memset(&LockHandle, 0, sizeof(LockHandle));
  v4 = 0LL;
  v5 = 0LL;
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(a1 + 112), &LockHandle);
  v6 = (_QWORD **)(a1 + 120);
  v7 = *v6;
  v8 = *v6 == v6;
  if ( *v6 != v6 )
  {
    do
    {
      v5 = v7 - 7;
      if ( ((unsigned __int8)BYTE2(*((_DWORD *)v7 + 10)) | ((((unsigned __int8)*((_DWORD *)v7 + 10) << 8) | (unsigned __int8)BYTE1(*((_DWORD *)v7 + 10))) << 8)) == (BYTE2(a2) | ((BYTE1(a2) | (v2 << 8)) << 8)) )
        break;
      v7 = (_QWORD *)*v7;
    }
    while ( v7 != v6 );
    v8 = v7 == v6;
  }
  if ( !v8 )
    v4 = v5;
  KeReleaseInStackQueuedSpinLock(&LockHandle);
  return v4;
}
