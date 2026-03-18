/*
 * XREFs of ?ReadPresentHistory@DXGPRESENTHISTORYTOKENQUEUE@@QEAAJEPEAIPEAUPRESENTHISTORYBUFFERENTRY@@PEAUPRESENTHISTORYBITS@@@Z @ 0x1C000D26C
 * Callers:
 *     DxgkGetPresentHistory @ 0x1C00DB730 (DxgkGetPresentHistory.c)
 * Callees:
 *     memmove @ 0x1C0022E80 (memmove.c)
 */

__int64 __fastcall DXGPRESENTHISTORYTOKENQUEUE::ReadPresentHistory(
        KSPIN_LOCK *this,
        __int64 a2,
        unsigned int *a3,
        struct PRESENTHISTORYBUFFERENTRY *a4,
        struct PRESENTHISTORYBITS *a5)
{
  unsigned int v5; // r13d
  unsigned int v9; // r12d
  unsigned int v10; // eax
  unsigned int v11; // ecx
  unsigned int v12; // eax
  unsigned int v13; // ebp
  unsigned int v15; // ecx
  __int64 v16; // rax
  __int64 v17; // rax
  __int64 v18; // rax
  __int64 v19; // rax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-58h] BYREF

  v5 = 0;
  if ( a3 && a4 )
  {
    KeAcquireInStackQueuedSpinLock(this, &LockHandle);
    if ( *((_DWORD *)this + 2) >= 0x800u )
    {
      v16 = WdLogNewEntry5_WdAssertion();
      *(_QWORD *)(v16 + 24) = 237LL;
      WdLogEvent5_WdAssertion(v16);
    }
    if ( *((_DWORD *)this + 3) >= 0x800u )
    {
      v17 = WdLogNewEntry5_WdAssertion();
      *(_QWORD *)(v17 + 24) = 238LL;
      WdLogEvent5_WdAssertion(v17);
    }
    v9 = *((_DWORD *)this + 4);
    if ( v9 >= 0x800 )
    {
      v18 = WdLogNewEntry5_WdAssertion();
      *(_QWORD *)(v18 + 24) = 239LL;
      WdLogEvent5_WdAssertion(v18);
      v9 = *((_DWORD *)this + 4);
    }
    v10 = *((_DWORD *)this + 2);
    v11 = *a3;
    if ( v10 < v9 )
    {
      v13 = 2048 - v9;
      if ( 2048 - v9 >= v11 )
        v13 = *a3;
      v15 = v11 - v13;
      if ( v10 >= v15 )
        v10 = v15;
      v5 = v10;
    }
    else
    {
      v12 = v10 - v9;
      if ( v12 >= v11 )
        v12 = *a3;
      v13 = v12;
    }
    memmove(a4, &this[v9 + 10], 8LL * v13);
    memmove(a5, (char *)this + v9 + 16464, v13);
    memmove((char *)a4 + 8 * v13, this + 10, 8LL * v5);
    memmove((char *)a5 + v13, this + 2058, v5);
    *((_DWORD *)this + 4) = ((_WORD)v13 + (_WORD)v5 + (_WORD)v9) & 0x7FF;
    *a3 = v13 + v5;
    KeReleaseInStackQueuedSpinLock(&LockHandle);
    return 0LL;
  }
  else
  {
    v19 = WdLogNewEntry5_WdError(this);
    *(_QWORD *)(v19 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v19);
    return 3221225485LL;
  }
}
