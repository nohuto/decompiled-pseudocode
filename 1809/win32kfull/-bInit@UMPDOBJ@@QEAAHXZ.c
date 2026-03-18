/*
 * XREFs of ?bInit@UMPDOBJ@@QEAAHXZ @ 0x1C008E5F4
 * Callers:
 *     ??0XUMPDOBJ@@QEAA@XZ @ 0x1C008E570 (--0XUMPDOBJ@@QEAA@XZ.c)
 * Callees:
 *     ?bSandboxedCurrentProcess@@YAHXZ @ 0x1C008E800 (-bSandboxedCurrentProcess@@YAHXZ.c)
 *     ??0PROXYPORT@@QEAA@_K@Z @ 0x1C0121E64 (--0PROXYPORT@@QEAA@_K@Z.c)
 *     ?CreateUMPDHeap@UMPDOBJ@@AEAAPEAU_UMPDHEAP@@XZ @ 0x1C0132A9C (-CreateUMPDHeap@UMPDOBJ@@AEAAPEAU_UMPDHEAP@@XZ.c)
 *     IsThreadCrossSessionAttached @ 0x1C015BC14 (IsThreadCrossSessionAttached.c)
 *     ??1?$UnexpectedThreadTerminationHandler@VDWMSPRITEREF@@@@QEAA@XZ @ 0x1C015E8E8 (--1-$UnexpectedThreadTerminationHandler@VDWMSPRITEREF@@@@QEAA@XZ.c)
 *     memset @ 0x1C0163640 (memset.c)
 *     ??0HmgInsertObjectHelper@@QEAA@XZ @ 0x1C0251748 (--0HmgInsertObjectHelper@@QEAA@XZ.c)
 *     ?FreeNonCachedUserMem@UMPDOBJ@@QEAAXXZ @ 0x1C0277E88 (-FreeNonCachedUserMem@UMPDOBJ@@QEAAXXZ.c)
 */

__int64 __fastcall UMPDOBJ::bInit(UMPDOBJ *this)
{
  __int64 v2; // rcx
  __int64 CurrentProcessWin32Process; // rax
  struct _KTHREAD *CurrentThread; // rbp
  _QWORD *v5; // rdi
  __int64 v6; // rsi
  __int64 v7; // rdx
  __int64 v8; // rcx
  _QWORD *ThreadWin32Thread; // rax
  int v10; // eax
  unsigned __int64 v11; // rdx
  UMPDOBJ *v12; // rcx
  __int64 v13; // rax
  __int64 v14; // rax
  struct _UMPDHEAP *v15; // rax
  struct _UMPDHEAP *UMPDHeap; // rax
  unsigned int CurrentProcessId; // eax
  __int64 v18; // rdx
  __int64 v19; // rcx
  bool v20; // zf
  struct _KTHREAD *v21; // rsi
  __int64 v22; // rdi
  __int64 *v23; // rax
  _QWORD *v24; // rax
  _QWORD *v25; // rbx
  __int64 v26; // rcx
  unsigned int v27; // ebx
  _BYTE v29[32]; // [rsp+20h] [rbp-38h] BYREF
  UMPDOBJ *v30; // [rsp+40h] [rbp-18h]
  __int64 v31; // [rsp+60h] [rbp+8h] BYREF

  memset(this, 0, 0x1B0uLL);
  *((_DWORD *)this + 107) = -1;
  *((_DWORD *)this + 9) = 1886221639;
  CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v2);
  CurrentThread = KeGetCurrentThread();
  v5 = 0LL;
  v6 = CurrentProcessWin32Process;
  if ( !(unsigned int)IsThreadCrossSessionAttached(v8, v7) )
  {
    ThreadWin32Thread = (_QWORD *)PsGetThreadWin32Thread(CurrentThread);
    if ( ThreadWin32Thread )
      v5 = (_QWORD *)*ThreadWin32Thread;
  }
  if ( !v6 || !v5 )
    return 0LL;
  v10 = bSandboxedCurrentProcess();
  *((_DWORD *)this + 106) = v10;
  if ( v10 )
  {
    v13 = v5[8];
    if ( v13 )
    {
      *((_QWORD *)this + 49) = v13;
      *(_DWORD *)(v13 + 48) = 0;
      goto LABEL_11;
    }
    PROXYPORT::PROXYPORT((PROXYPORT *)&v31, v11);
    v14 = v31;
    if ( v31 )
    {
      *((_QWORD *)this + 49) = v31;
      v5[8] = v14;
LABEL_11:
      *((_QWORD *)this + 3) = v5;
      goto LABEL_19;
    }
    return 0LL;
  }
  if ( (_QWORD *)v5[5] == v5 + 5 )
  {
    v15 = (struct _UMPDHEAP *)v5[7];
    if ( !v15 )
    {
      UMPDHeap = UMPDOBJ::CreateUMPDHeap(v12);
      *((_QWORD *)this + 7) = UMPDHeap;
      v5[7] = UMPDHeap;
      goto LABEL_18;
    }
    *((_DWORD *)v15 + 6) = 0;
  }
  else
  {
    v15 = UMPDOBJ::CreateUMPDHeap(v12);
  }
  *((_QWORD *)this + 7) = v15;
LABEL_18:
  if ( !*((_QWORD *)this + 7) )
    return 0LL;
LABEL_19:
  HmgInsertObjectHelper::HmgInsertObjectHelper((HmgInsertObjectHelper *)v29);
  if ( v30 || !HmgInsertObjectInternal(this, 0xBu, 0x11u) )
  {
    UMPDOBJ::FreeNonCachedUserMem(this);
    v27 = 0;
  }
  else
  {
    v30 = this;
    *((_QWORD *)this + 50) = KeGetCurrentThread();
    CurrentProcessId = (unsigned int)PsGetCurrentProcessId();
    v20 = *((_DWORD *)this + 106) == 0;
    *((_DWORD *)this + 102) = CurrentProcessId & 0xFFFFFFFC;
    if ( v20 )
    {
      v21 = KeGetCurrentThread();
      v22 = 0LL;
      if ( !(unsigned int)IsThreadCrossSessionAttached(v19, v18) )
      {
        v23 = (__int64 *)PsGetThreadWin32Thread(v21);
        if ( v23 )
          v22 = *v23;
      }
      v24 = (_QWORD *)(v22 + 40);
      v25 = (_QWORD *)((char *)this + 40);
      v26 = *(_QWORD *)(v22 + 40);
      if ( *(_QWORD *)(v26 + 8) != v22 + 40 )
        __fastfail(3u);
      *v25 = v26;
      v25[1] = v24;
      *(_QWORD *)(v26 + 8) = v25;
      *v24 = v25;
    }
    v27 = 1;
  }
  if ( v30 )
    _InterlockedDecrement((volatile signed __int32 *)v30 + 3);
  UnexpectedThreadTerminationHandler<DWMSPRITEREF>::~UnexpectedThreadTerminationHandler<DWMSPRITEREF>(v29);
  return v27;
}
