/*
 * XREFs of zzzSetDesktop @ 0x1C0029750
 * Callers:
 *     xxxSetThreadDesktop @ 0x1C000D458 (xxxSetThreadDesktop.c)
 *     xxxCreateDesktopEx @ 0x1C007E33C (xxxCreateDesktopEx.c)
 *     xxxCreateWindowStation @ 0x1C007F978 (xxxCreateWindowStation.c)
 *     xxxSwitchDesktop @ 0x1C0137CE8 (xxxSwitchDesktop.c)
 * Callees:
 *     GetDesktopView @ 0x1C0021DE0 (GetDesktopView.c)
 *     UserSetLastError @ 0x1C002862C (UserSetLastError.c)
 *     GetJournallingQueue @ 0x1C0029E40 (GetJournallingQueue.c)
 *     CheckHandleFlag @ 0x1C0029EC8 (CheckHandleFlag.c)
 *     W32GetThreadWin32Thread @ 0x1C00AC2AC (W32GetThreadWin32Thread.c)
 *     zzzAttachToQueue @ 0x1C01362F0 (zzzAttachToQueue.c)
 *     IsThreadCrossSessionAttached @ 0x1C0164774 (IsThreadCrossSessionAttached.c)
 *     _guard_dispatch_icall_nop @ 0x1C01680F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall zzzSetDesktop(struct tagTHREADINFO *a1, __int64 a2, void *a3)
{
  PVOID *v7; // r13
  struct _KTHREAD *CurrentThread; // r12
  __int64 v9; // r14
  __int64 *ThreadWin32Thread; // rax
  char *v11; // r14
  __int64 v12; // rdx
  struct tagTHREADINFO **v13; // rcx
  __int64 v14; // rdx
  _QWORD *v15; // r8
  _QWORD *v16; // rdx
  _QWORD *v17; // rax
  __int64 v18; // rcx
  char *Heap; // rax
  _QWORD *DesktopView; // rax
  int v21; // ecx
  __int64 v22; // rax
  struct tagTHREADINFO *v23; // rcx
  __int64 v24; // rax
  __int64 JournallingQueue; // rax
  __int64 v26; // rax
  __int128 v27; // [rsp+48h] [rbp-90h] BYREF
  void (*v28)(void); // [rsp+58h] [rbp-80h]
  PVOID Object; // [rsp+70h] [rbp-68h] BYREF
  __int128 v30; // [rsp+90h] [rbp-48h]
  __int64 v31; // [rsp+A0h] [rbp-38h]
  struct _OBJECT_HANDLE_INFORMATION HandleInformation; // [rsp+F8h] [rbp+20h] BYREF

  v27 = 0LL;
  v28 = 0LL;
  if ( a2 && (*(_DWORD *)(a2 + 48) & 6) != 0 && a2 != *((_QWORD *)a1 + 56) && a1 != (struct tagTHREADINFO *)gTermIO[2] )
    return 3221225506LL;
  *((_DWORD *)a1 + 120) &= ~0x400000u;
  *((_QWORD *)a1 + 73) = a3;
  if ( a3 )
  {
    HandleInformation = 0LL;
    if ( ObReferenceObjectByHandle(a3, 0, (POBJECT_TYPE)ExDesktopObjectType, 1, &Object, &HandleInformation) < 0 )
    {
      *((_DWORD *)a1 + 222) = 0;
    }
    else
    {
      ObfDereferenceObject(Object);
      *((_DWORD *)a1 + 222) = HandleInformation.GrantedAccess;
      if ( (unsigned int)CheckHandleFlag(0LL) )
        *((_DWORD *)a1 + 120) |= 0x400000u;
      if ( !(unsigned int)SetHandleFlag(a3, 1LL, 1LL) )
        return 3221225495LL;
    }
  }
  else
  {
    *((_DWORD *)a1 + 222) = 0;
  }
  if ( a2 && a2 == *((_QWORD *)a1 + 56) )
    return 0LL;
  v7 = (PVOID *)*((_QWORD *)a1 + 56);
  CurrentThread = KeGetCurrentThread();
  v9 = 0LL;
  if ( !(unsigned int)IsThreadCrossSessionAttached() )
  {
    ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
    if ( ThreadWin32Thread )
      v9 = *ThreadWin32Thread;
  }
  *(_QWORD *)&v27 = *(_QWORD *)(v9 + 16);
  *(_QWORD *)(v9 + 16) = &v27;
  *((_QWORD *)&v27 + 1) = v7;
  v28 = (void (*)(void))UserDereferenceObject;
  if ( v7 )
    ObfReferenceObject(v7);
  v11 = (char *)*((_QWORD *)a1 + 55);
  if ( *((_QWORD *)a1 + 56) )
  {
    v12 = *((_QWORD *)a1 + 92);
    v13 = (struct tagTHREADINFO **)*((_QWORD *)a1 + 93);
    if ( *(struct tagTHREADINFO **)(v12 + 8) != (struct tagTHREADINFO *)((char *)a1 + 736)
      || *v13 != (struct tagTHREADINFO *)((char *)a1 + 736) )
    {
      __fastfail(3u);
    }
    *v13 = (struct tagTHREADINFO *)v12;
    *(_QWORD *)(v12 + 8) = v13;
  }
  v30 = *((_OWORD *)a1 + 24);
  v31 = *((_QWORD *)a1 + 50);
  LockObjectAssignment((char *)a1 + 448, a2);
  if ( a2 )
  {
    *((_QWORD *)a1 + 57) = *(_QWORD *)(a2 + 8);
    v16 = (_QWORD *)((char *)a1 + 736);
    v17 = (_QWORD *)(a2 + 168);
    v18 = *(_QWORD *)(a2 + 168);
    if ( *(_QWORD *)(v18 + 8) != a2 + 168 )
      __fastfail(3u);
    *v16 = v18;
    *((_QWORD *)a1 + 93) = v17;
    *(_QWORD *)(v18 + 8) = v16;
    *v17 = v16;
    Heap = (char *)RtlAllocateHeap(*(PVOID *)(a2 + 128), 0, 0x18uLL);
    *((_QWORD *)a1 + 55) = Heap;
    if ( Heap )
      goto LABEL_34;
  }
  else
  {
    *((_QWORD *)a1 + 57) = gpkdiStatic;
  }
  Heap = (char *)a1 + 1032;
  *((_QWORD *)a1 + 55) = (char *)a1 + 1032;
LABEL_34:
  if ( v11 )
  {
    if ( v11 != Heap )
    {
      *(_OWORD *)Heap = *(_OWORD *)v11;
      *((_QWORD *)Heap + 2) = *((_QWORD *)v11 + 2);
    }
    if ( v11 != (char *)a1 + 1032 )
      RtlFreeHeap(v7[16], 0, v11);
  }
  else
  {
    *(_QWORD *)Heap = 0LL;
    *((_QWORD *)Heap + 1) = 0LL;
    *((_QWORD *)Heap + 2) = 0LL;
  }
  if ( a2 && (DesktopView = GetDesktopView(*((_QWORD *)a1 + 52), a2), (v15 = DesktopView) != 0LL) )
  {
    v14 = *(_QWORD *)(a2 + 16) - DesktopView[2];
    *((_QWORD *)a1 + 58) = v14;
    *(_QWORD *)(*((_QWORD *)a1 + 59) + 32LL) = **((_QWORD **)a1 + 57) - v14;
    *(_QWORD *)(*((_QWORD *)a1 + 59) + 40LL) = DesktopView[2];
  }
  else
  {
    *((_QWORD *)a1 + 58) = 0LL;
    *(_QWORD *)(*((_QWORD *)a1 + 59) + 32LL) = 0LL;
    *(_QWORD *)(*((_QWORD *)a1 + 59) + 40LL) = 0LL;
    v21 = (gdwGTERMFlags & 1) - 1;
    *((_DWORD *)a1 + 188) = v21;
    v22 = *((_QWORD *)a1 + 53);
    if ( v22 )
      *(_DWORD *)(v22 + 392) = v21;
  }
  v23 = (struct tagTHREADINFO *)*((_QWORD *)a1 + 55);
  v24 = *((_QWORD *)a1 + 59);
  if ( v23 == (struct tagTHREADINFO *)((char *)a1 + 1032) )
    *(_QWORD *)(v24 + 96) = 0LL;
  else
    *(_QWORD *)(v24 + 96) = (char *)v23 - *((_QWORD *)a1 + 58);
  if ( *((_QWORD *)a1 + 53) )
  {
    JournallingQueue = GetJournallingQueue(a1, v14, v15);
    if ( JournallingQueue )
    {
      ++*(_DWORD *)(JournallingQueue + 400);
      zzzAttachToQueue(a1, (struct tagQ *)JournallingQueue);
    }
  }
  v26 = W32GetThreadWin32Thread(KeGetCurrentThread());
  *(_QWORD *)(v26 + 16) = v27;
  if ( *((_QWORD *)&v27 + 1) )
    v28();
  return 0LL;
}
