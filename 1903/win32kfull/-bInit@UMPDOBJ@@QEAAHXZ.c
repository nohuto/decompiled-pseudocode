/*
 * XREFs of ?bInit@UMPDOBJ@@QEAAHXZ @ 0x1C0050750
 * Callers:
 *     ??0XUMPDOBJ@@QEAA@XZ @ 0x1C00506CC (--0XUMPDOBJ@@QEAA@XZ.c)
 * Callees:
 *     ??0PROXYPORT@@QEAA@_K@Z @ 0x1C0128020 (--0PROXYPORT@@QEAA@_K@Z.c)
 *     ?CreateUMPDHeap@UMPDOBJ@@AEAAPEAU_UMPDHEAP@@XZ @ 0x1C013C938 (-CreateUMPDHeap@UMPDOBJ@@AEAAPEAU_UMPDHEAP@@XZ.c)
 *     IsThreadCrossSessionAttached @ 0x1C01637A4 (IsThreadCrossSessionAttached.c)
 *     memset @ 0x1C0166840 (memset.c)
 *     ?FreeNonCachedUserMem@UMPDOBJ@@QEAAXXZ @ 0x1C028DEF8 (-FreeNonCachedUserMem@UMPDOBJ@@QEAAXXZ.c)
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
  __int64 v12; // r9
  __int64 v13; // rdx
  __int64 v14; // rcx
  _QWORD *ThreadWin32Thread; // rax
  __int64 v16; // rax
  unsigned __int64 v17; // rdx
  UMPDOBJ *v18; // rcx
  int v19; // eax
  __int64 v20; // rax
  __int64 v21; // rax
  struct _UMPDHEAP *v22; // rax
  struct _UMPDHEAP *UMPDHeap; // rax
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // r8
  __int64 v27; // r9
  struct _KTHREAD *v28; // rsi
  __int64 *v29; // rax
  __int64 *v30; // rbx
  _QWORD *v31; // rax
  __int64 v32; // rcx
  __int64 v34; // [rsp+40h] [rbp+8h] BYREF

  memset(this, 0, 0x1B0uLL);
  *((_DWORD *)this + 9) = 1886221639;
  CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v3, v2);
  CurrentThread = KeGetCurrentThread();
  v6 = 0LL;
  v7 = CurrentProcessWin32Process;
  v8 = 0LL;
  if ( !(unsigned int)IsThreadCrossSessionAttached(v10, v9, v11, v12) )
  {
    ThreadWin32Thread = (_QWORD *)PsGetThreadWin32Thread(CurrentThread);
    if ( ThreadWin32Thread )
      v8 = (_QWORD *)*ThreadWin32Thread;
  }
  if ( !v7 || !v8 )
    return 0LL;
  v16 = PsGetCurrentProcessWin32Process(v14, v13);
  v18 = (UMPDOBJ *)v16;
  if ( v16 )
    v19 = *(_DWORD *)(v16 + 264) | *(_DWORD *)(v16 + 12) & 0x80;
  else
    v19 = 0;
  *((_DWORD *)this + 106) = v19;
  if ( !v19 )
  {
    if ( (_QWORD *)v8[5] == v8 + 5 )
    {
      v22 = (struct _UMPDHEAP *)v8[7];
      if ( !v22 )
      {
        UMPDHeap = UMPDOBJ::CreateUMPDHeap(v18);
        *((_QWORD *)this + 7) = UMPDHeap;
        v8[7] = UMPDHeap;
        goto LABEL_21;
      }
      *((_DWORD *)v22 + 6) = 0;
    }
    else
    {
      v22 = UMPDOBJ::CreateUMPDHeap(v18);
    }
    *((_QWORD *)this + 7) = v22;
LABEL_21:
    if ( *((_QWORD *)this + 7) )
      goto LABEL_22;
    return 0LL;
  }
  v20 = v8[8];
  if ( v20 )
  {
    *((_QWORD *)this + 49) = v20;
    *(_DWORD *)(v20 + 56) = 0;
    goto LABEL_14;
  }
  PROXYPORT::PROXYPORT((PROXYPORT *)&v34, v17);
  v21 = v34;
  if ( !v34 )
    return 0LL;
  *((_QWORD *)this + 49) = v34;
  v8[8] = v21;
LABEL_14:
  *((_QWORD *)this + 3) = v8;
LABEL_22:
  if ( HmgInsertObjectInternal(this, 0xBu, 0x11u) )
  {
    *((_QWORD *)this + 50) = KeGetCurrentThread();
    *((_DWORD *)this + 102) = (unsigned int)PsGetCurrentProcessId() & 0xFFFFFFFC;
    if ( !*((_DWORD *)this + 106) )
    {
      v28 = KeGetCurrentThread();
      if ( !(unsigned int)IsThreadCrossSessionAttached(v25, v24, v26, v27) )
      {
        v29 = (__int64 *)PsGetThreadWin32Thread(v28);
        if ( v29 )
          v6 = *v29;
      }
      v30 = (__int64 *)(v6 + 40);
      v31 = (_QWORD *)((char *)this + 40);
      v32 = *v30;
      if ( *(__int64 **)(*v30 + 8) != v30 )
        __fastfail(3u);
      *v31 = v32;
      *((_QWORD *)this + 6) = v30;
      *(_QWORD *)(v32 + 8) = v31;
      *v30 = (__int64)v31;
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
