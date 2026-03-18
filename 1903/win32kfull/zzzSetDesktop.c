/*
 * XREFs of zzzSetDesktop @ 0x1C00232E0
 * Callers:
 *     xxxSetThreadDesktop @ 0x1C00189F8 (xxxSetThreadDesktop.c)
 *     xxxSwitchDesktop @ 0x1C0081EE8 (xxxSwitchDesktop.c)
 *     xxxCreateDesktopEx @ 0x1C00DE64C (xxxCreateDesktopEx.c)
 *     xxxCreateWindowStation @ 0x1C00DFC88 (xxxCreateWindowStation.c)
 * Callees:
 *     zzzAttachToQueue @ 0x1C0012DFC (zzzAttachToQueue.c)
 *     GetDesktopView @ 0x1C0019FC0 (GetDesktopView.c)
 *     GetJournallingQueue @ 0x1C00239D0 (GetJournallingQueue.c)
 *     CheckHandleFlag @ 0x1C0023A58 (CheckHandleFlag.c)
 *     W32GetThreadWin32Thread @ 0x1C0062084 (W32GetThreadWin32Thread.c)
 *     UserSetLastError @ 0x1C008B3AC (UserSetLastError.c)
 *     IsThreadCrossSessionAttached @ 0x1C01637A4 (IsThreadCrossSessionAttached.c)
 *     _guard_dispatch_icall_nop @ 0x1C01664D0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall zzzSetDesktop(struct tagTHREADINFO *a1, __int64 a2, void *a3, __int64 a4)
{
  PVOID *v8; // r13
  struct _KTHREAD *CurrentThread; // r12
  __int64 v10; // r14
  __int64 *ThreadWin32Thread; // rax
  char *v12; // r14
  __int64 v13; // rdx
  struct tagTHREADINFO **v14; // rcx
  __int64 v15; // rdx
  _QWORD *v16; // r8
  _QWORD *v17; // rdx
  _QWORD *v18; // rax
  __int64 v19; // rcx
  char *Heap; // rax
  _QWORD *DesktopView; // rax
  int v22; // ecx
  __int64 v23; // rax
  struct tagTHREADINFO *v24; // rcx
  __int64 v25; // rax
  __int64 JournallingQueue; // rax
  __int64 v27; // rax
  __int128 v28; // [rsp+48h] [rbp-90h] BYREF
  void (*v29)(void); // [rsp+58h] [rbp-80h]
  PVOID Object; // [rsp+70h] [rbp-68h] BYREF
  __int128 v31; // [rsp+90h] [rbp-48h]
  __int64 v32; // [rsp+A0h] [rbp-38h]
  struct _OBJECT_HANDLE_INFORMATION HandleInformation; // [rsp+F8h] [rbp+20h] BYREF

  v28 = 0LL;
  v29 = 0LL;
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
  v8 = (PVOID *)*((_QWORD *)a1 + 56);
  CurrentThread = KeGetCurrentThread();
  v10 = 0LL;
  if ( !(unsigned int)IsThreadCrossSessionAttached(a1, a2, a3, a4) )
  {
    ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
    if ( ThreadWin32Thread )
      v10 = *ThreadWin32Thread;
  }
  *(_QWORD *)&v28 = *(_QWORD *)(v10 + 16);
  *(_QWORD *)(v10 + 16) = &v28;
  *((_QWORD *)&v28 + 1) = v8;
  v29 = (void (*)(void))UserDereferenceObject;
  if ( v8 )
    ObfReferenceObject(v8);
  v12 = (char *)*((_QWORD *)a1 + 55);
  if ( *((_QWORD *)a1 + 56) )
  {
    v13 = *((_QWORD *)a1 + 92);
    v14 = (struct tagTHREADINFO **)*((_QWORD *)a1 + 93);
    if ( *(struct tagTHREADINFO **)(v13 + 8) != (struct tagTHREADINFO *)((char *)a1 + 736)
      || *v14 != (struct tagTHREADINFO *)((char *)a1 + 736) )
    {
      __fastfail(3u);
    }
    *v14 = (struct tagTHREADINFO *)v13;
    *(_QWORD *)(v13 + 8) = v14;
  }
  v31 = *((_OWORD *)a1 + 24);
  v32 = *((_QWORD *)a1 + 50);
  LockObjectAssignment((char *)a1 + 448, a2);
  if ( a2 )
  {
    *((_QWORD *)a1 + 57) = *(_QWORD *)(a2 + 8);
    v17 = (_QWORD *)((char *)a1 + 736);
    v18 = (_QWORD *)(a2 + 168);
    v19 = *(_QWORD *)(a2 + 168);
    if ( *(_QWORD *)(v19 + 8) != a2 + 168 )
      __fastfail(3u);
    *v17 = v19;
    *((_QWORD *)a1 + 93) = v18;
    *(_QWORD *)(v19 + 8) = v17;
    *v18 = v17;
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
  if ( v12 )
  {
    if ( v12 != Heap )
    {
      *(_OWORD *)Heap = *(_OWORD *)v12;
      *((_QWORD *)Heap + 2) = *((_QWORD *)v12 + 2);
    }
    if ( v12 != (char *)a1 + 1032 )
      RtlFreeHeap(v8[16], 0, v12);
  }
  else
  {
    *(_QWORD *)Heap = 0LL;
    *((_QWORD *)Heap + 1) = 0LL;
    *((_QWORD *)Heap + 2) = 0LL;
  }
  if ( a2 && (DesktopView = GetDesktopView(*((_QWORD *)a1 + 52), a2), (v16 = DesktopView) != 0LL) )
  {
    v15 = *(_QWORD *)(a2 + 16) - DesktopView[2];
    *((_QWORD *)a1 + 58) = v15;
    *(_QWORD *)(*((_QWORD *)a1 + 59) + 32LL) = **((_QWORD **)a1 + 57) - v15;
    *(_QWORD *)(*((_QWORD *)a1 + 59) + 40LL) = DesktopView[2];
  }
  else
  {
    *((_QWORD *)a1 + 58) = 0LL;
    *(_QWORD *)(*((_QWORD *)a1 + 59) + 32LL) = 0LL;
    *(_QWORD *)(*((_QWORD *)a1 + 59) + 40LL) = 0LL;
    v22 = (gdwGTERMFlags & 1) - 1;
    *((_DWORD *)a1 + 188) = v22;
    v23 = *((_QWORD *)a1 + 53);
    if ( v23 )
      *(_DWORD *)(v23 + 392) = v22;
  }
  v24 = (struct tagTHREADINFO *)*((_QWORD *)a1 + 55);
  v25 = *((_QWORD *)a1 + 59);
  if ( v24 == (struct tagTHREADINFO *)((char *)a1 + 1032) )
    *(_QWORD *)(v25 + 96) = 0LL;
  else
    *(_QWORD *)(v25 + 96) = (char *)v24 - *((_QWORD *)a1 + 58);
  if ( *((_QWORD *)a1 + 53) )
  {
    JournallingQueue = GetJournallingQueue(a1, v15, v16);
    if ( JournallingQueue )
    {
      ++*(_DWORD *)(JournallingQueue + 400);
      zzzAttachToQueue(a1, (struct tagQ *)JournallingQueue, 0LL, 0);
    }
  }
  v27 = W32GetThreadWin32Thread(KeGetCurrentThread());
  *(_QWORD *)(v27 + 16) = v28;
  if ( *((_QWORD *)&v28 + 1) )
    v29();
  return 0LL;
}
