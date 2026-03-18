/*
 * XREFs of ?bInit@UMPDOBJ@@QEAAHXZ @ 0x1C0099FBC
 * Callers:
 *     ??0XUMPDOBJ@@QEAA@XZ @ 0x1C0099F38 (--0XUMPDOBJ@@QEAA@XZ.c)
 * Callees:
 *     ??0PROXYPORT@@QEAA@_K@Z @ 0x1C01030CC (--0PROXYPORT@@QEAA@_K@Z.c)
 *     ?CreateUMPDHeap@UMPDOBJ@@AEAAPEAU_UMPDHEAP@@XZ @ 0x1C0116158 (-CreateUMPDHeap@UMPDOBJ@@AEAAPEAU_UMPDHEAP@@XZ.c)
 *     IsThreadCrossSessionAttached @ 0x1C0164774 (IsThreadCrossSessionAttached.c)
 *     memset @ 0x1C0168440 (memset.c)
 *     ?FreeNonCachedUserMem@UMPDOBJ@@QEAAXXZ @ 0x1C028D868 (-FreeNonCachedUserMem@UMPDOBJ@@QEAAXXZ.c)
 */

__int64 __fastcall UMPDOBJ::bInit(UMPDOBJ *this)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 CurrentProcessWin32Process; // rax
  struct _KTHREAD *CurrentThread; // r14
  __int64 v6; // rbx
  __int64 v7; // rbp
  _QWORD *v8; // rsi
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // rdx
  __int64 v13; // rcx
  _QWORD *ThreadWin32Thread; // rax
  __int64 v15; // rax
  unsigned __int64 v16; // rdx
  UMPDOBJ *v17; // rcx
  int v18; // eax
  __int64 v19; // rax
  __int64 v20; // rax
  struct _UMPDHEAP *v21; // rax
  struct _UMPDHEAP *UMPDHeap; // rax
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // r8
  struct _KTHREAD *v26; // rsi
  __int64 *v27; // rax
  __int64 *v28; // rbx
  _QWORD *v29; // rax
  __int64 v30; // rcx
  __int64 v32; // [rsp+40h] [rbp+8h] BYREF

  memset(this, 0, 0x1B0uLL);
  *((_DWORD *)this + 9) = 1886221639;
  CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v3, v2);
  CurrentThread = KeGetCurrentThread();
  v6 = 0LL;
  v7 = CurrentProcessWin32Process;
  v8 = 0LL;
  if ( !(unsigned int)IsThreadCrossSessionAttached(v10, v9, v11) )
  {
    ThreadWin32Thread = (_QWORD *)PsGetThreadWin32Thread(CurrentThread);
    if ( ThreadWin32Thread )
      v8 = (_QWORD *)*ThreadWin32Thread;
  }
  if ( !v7 || !v8 )
    return 0LL;
  v15 = PsGetCurrentProcessWin32Process(v13, v12);
  v17 = (UMPDOBJ *)v15;
  if ( v15 )
    v18 = *(_DWORD *)(v15 + 264) | *(_DWORD *)(v15 + 12) & 0x80;
  else
    v18 = 0;
  *((_DWORD *)this + 106) = v18;
  if ( !v18 )
  {
    if ( (_QWORD *)v8[5] == v8 + 5 )
    {
      v21 = (struct _UMPDHEAP *)v8[7];
      if ( !v21 )
      {
        UMPDHeap = UMPDOBJ::CreateUMPDHeap(v17);
        *((_QWORD *)this + 7) = UMPDHeap;
        v8[7] = UMPDHeap;
        goto LABEL_21;
      }
      *((_DWORD *)v21 + 6) = 0;
    }
    else
    {
      v21 = UMPDOBJ::CreateUMPDHeap(v17);
    }
    *((_QWORD *)this + 7) = v21;
LABEL_21:
    if ( *((_QWORD *)this + 7) )
      goto LABEL_22;
    return 0LL;
  }
  v19 = v8[8];
  if ( v19 )
  {
    *((_QWORD *)this + 49) = v19;
    *(_DWORD *)(v19 + 56) = 0;
    goto LABEL_14;
  }
  PROXYPORT::PROXYPORT((PROXYPORT *)&v32, v16);
  v20 = v32;
  if ( !v32 )
    return 0LL;
  *((_QWORD *)this + 49) = v32;
  v8[8] = v20;
LABEL_14:
  *((_QWORD *)this + 3) = v8;
LABEL_22:
  if ( HmgInsertObjectInternal(this, 0xBu, 0x11u) )
  {
    *((_QWORD *)this + 50) = KeGetCurrentThread();
    *((_DWORD *)this + 102) = (unsigned int)PsGetCurrentProcessId() & 0xFFFFFFFC;
    if ( !*((_DWORD *)this + 106) )
    {
      v26 = KeGetCurrentThread();
      if ( !(unsigned int)IsThreadCrossSessionAttached(v24, v23, v25) )
      {
        v27 = (__int64 *)PsGetThreadWin32Thread(v26);
        if ( v27 )
          v6 = *v27;
      }
      v28 = (__int64 *)(v6 + 40);
      v29 = (_QWORD *)((char *)this + 40);
      v30 = *v28;
      if ( *(__int64 **)(*v28 + 8) != v28 )
        __fastfail(3u);
      *v29 = v30;
      *((_QWORD *)this + 6) = v28;
      *(_QWORD *)(v30 + 8) = v29;
      *v28 = (__int64)v29;
    }
    _InterlockedDecrement((volatile signed __int32 *)this + 3);
    LODWORD(v6) = 1;
  }
  else
  {
    UMPDOBJ::FreeNonCachedUserMem(this);
  }
  return (unsigned int)v6;
}
