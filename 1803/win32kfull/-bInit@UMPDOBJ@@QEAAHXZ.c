/*
 * XREFs of ?bInit@UMPDOBJ@@QEAAHXZ @ 0x1C00190FC
 * Callers:
 *     ??0XUMPDOBJ@@QEAA@XZ @ 0x1C00187A4 (--0XUMPDOBJ@@QEAA@XZ.c)
 * Callees:
 *     ??0PROXYPORT@@QEAA@_K@Z @ 0x1C00195F0 (--0PROXYPORT@@QEAA@_K@Z.c)
 *     ?CreateUMPDHeap@UMPDOBJ@@AEAAPEAU_UMPDHEAP@@XZ @ 0x1C01200D8 (-CreateUMPDHeap@UMPDOBJ@@AEAAPEAU_UMPDHEAP@@XZ.c)
 *     IsThreadCrossSessionAttached @ 0x1C0139D6C (IsThreadCrossSessionAttached.c)
 *     memset @ 0x1C013D6C0 (memset.c)
 *     ?FreeNonCachedUserMem@UMPDOBJ@@QEAAXXZ @ 0x1C0196FF0 (-FreeNonCachedUserMem@UMPDOBJ@@QEAAXXZ.c)
 */

__int64 __fastcall UMPDOBJ::bInit(UMPDOBJ *this)
{
  __int64 v2; // rcx
  __int64 CurrentProcessWin32Process; // rax
  struct _KTHREAD *CurrentThread; // r14
  __int64 v5; // rbx
  __int64 v6; // rbp
  _QWORD *v7; // rsi
  __int64 v8; // rcx
  _QWORD *ThreadWin32Thread; // rax
  __int64 v10; // rax
  unsigned __int64 v11; // rdx
  UMPDOBJ *v12; // rcx
  int v13; // eax
  __int64 v14; // rax
  __int64 v15; // rax
  struct _UMPDHEAP *v16; // rax
  struct _UMPDHEAP *UMPDHeap; // rax
  struct _KTHREAD *v18; // rsi
  __int64 *v19; // rax
  __int64 *v20; // rbx
  _QWORD *v21; // rax
  __int64 v22; // rcx
  __int64 v24; // [rsp+40h] [rbp+8h] BYREF

  memset(this, 0, 0x1B0uLL);
  *((_DWORD *)this + 9) = 1886221639;
  CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v2);
  CurrentThread = KeGetCurrentThread();
  v5 = 0LL;
  v6 = CurrentProcessWin32Process;
  v7 = 0LL;
  if ( !(unsigned int)IsThreadCrossSessionAttached() )
  {
    ThreadWin32Thread = (_QWORD *)PsGetThreadWin32Thread(CurrentThread);
    if ( ThreadWin32Thread )
      v7 = (_QWORD *)*ThreadWin32Thread;
  }
  if ( !v6 || !v7 )
    return 0LL;
  v10 = PsGetCurrentProcessWin32Process(v8);
  v12 = (UMPDOBJ *)v10;
  if ( v10 )
    v13 = *(_DWORD *)(v10 + 264) | *(_DWORD *)(v10 + 12) & 0x80;
  else
    v13 = 0;
  *((_DWORD *)this + 106) = v13;
  if ( !v13 )
  {
    if ( (_QWORD *)v7[5] == v7 + 5 )
    {
      v16 = (struct _UMPDHEAP *)v7[7];
      if ( !v16 )
      {
        UMPDHeap = UMPDOBJ::CreateUMPDHeap(v12);
        *((_QWORD *)this + 7) = UMPDHeap;
        v7[7] = UMPDHeap;
        goto LABEL_21;
      }
      *((_DWORD *)v16 + 6) = 0;
    }
    else
    {
      v16 = UMPDOBJ::CreateUMPDHeap(v12);
    }
    *((_QWORD *)this + 7) = v16;
LABEL_21:
    if ( *((_QWORD *)this + 7) )
      goto LABEL_22;
    return 0LL;
  }
  v14 = v7[8];
  if ( v14 )
  {
    *((_QWORD *)this + 49) = v14;
    *(_DWORD *)(v14 + 56) = 0;
    goto LABEL_14;
  }
  PROXYPORT::PROXYPORT((PROXYPORT *)&v24, v11);
  v15 = v24;
  if ( !v24 )
    return 0LL;
  *((_QWORD *)this + 49) = v24;
  v7[8] = v15;
LABEL_14:
  *((_QWORD *)this + 3) = v7;
LABEL_22:
  if ( HmgInsertObjectInternal(this, 0xBu, 0x11u) )
  {
    *((_QWORD *)this + 50) = KeGetCurrentThread();
    *((_DWORD *)this + 102) = (unsigned int)PsGetCurrentProcessId() & 0xFFFFFFFC;
    if ( !*((_DWORD *)this + 106) )
    {
      v18 = KeGetCurrentThread();
      if ( !(unsigned int)IsThreadCrossSessionAttached() )
      {
        v19 = (__int64 *)PsGetThreadWin32Thread(v18);
        if ( v19 )
          v5 = *v19;
      }
      v20 = (__int64 *)(v5 + 40);
      v21 = (_QWORD *)((char *)this + 40);
      v22 = *v20;
      if ( *(__int64 **)(*v20 + 8) != v20 )
        __fastfail(3u);
      *v21 = v22;
      *((_QWORD *)this + 6) = v20;
      *(_QWORD *)(v22 + 8) = v21;
      *v20 = (__int64)v21;
    }
    _InterlockedDecrement((volatile signed __int32 *)this + 3);
    LODWORD(v5) = 1;
  }
  else
  {
    UMPDOBJ::FreeNonCachedUserMem(this);
  }
  return (unsigned int)v5;
}
