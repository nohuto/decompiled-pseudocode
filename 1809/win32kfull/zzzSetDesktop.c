/*
 * XREFs of zzzSetDesktop @ 0x1C00B11B0
 * Callers:
 *     xxxSetThreadDesktop @ 0x1C00B0F18 (xxxSetThreadDesktop.c)
 *     xxxSwitchDesktop @ 0x1C00D513C (xxxSwitchDesktop.c)
 *     xxxCreateWindowStation @ 0x1C00EC474 (xxxCreateWindowStation.c)
 *     xxxCreateDesktopEx @ 0x1C00EFCF4 (xxxCreateDesktopEx.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0065998 (W32GetThreadWin32Thread.c)
 *     UserSetLastError @ 0x1C0073CC4 (UserSetLastError.c)
 *     GetJournallingQueue @ 0x1C00B1840 (GetJournallingQueue.c)
 *     CheckHandleFlag @ 0x1C00B18C8 (CheckHandleFlag.c)
 *     zzzAttachToQueue @ 0x1C00D6E7C (zzzAttachToQueue.c)
 *     IsThreadCrossSessionAttached @ 0x1C015BC14 (IsThreadCrossSessionAttached.c)
 *     _guard_dispatch_icall_nop @ 0x1C01632C0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall zzzSetDesktop(struct tagTHREADINFO *a1, __int64 a2, void *a3)
{
  PVOID *v7; // r13
  struct _KTHREAD *CurrentThread; // r15
  __int64 v9; // rsi
  __int64 *ThreadWin32Thread; // rax
  _QWORD *v11; // rsi
  __int64 v12; // r8
  struct tagTHREADINFO **v13; // rdx
  __int64 v14; // rdx
  __int64 *v15; // rax
  __int64 **v16; // rcx
  _QWORD *i; // r8
  int v18; // ecx
  __int64 v19; // rax
  __int64 v20; // rcx
  _QWORD *v21; // rax
  __int64 JournallingQueue; // rax
  __int64 v23; // rax
  __int64 v24; // [rsp+48h] [rbp-80h] BYREF
  PVOID *v25; // [rsp+50h] [rbp-78h]
  void (*v26)(void); // [rsp+58h] [rbp-70h]
  struct _OBJECT_HANDLE_INFORMATION HandleInformation; // [rsp+70h] [rbp-58h] BYREF
  PVOID Object; // [rsp+E8h] [rbp+20h] BYREF

  if ( a2 && (*(_DWORD *)(a2 + 48) & 6) != 0 && a2 != *((_QWORD *)a1 + 57) && a1 != *(&gTermIO + 2) )
    return 3221225506LL;
  *((_DWORD *)a1 + 122) &= ~0x400000u;
  *((_QWORD *)a1 + 74) = a3;
  if ( a3 )
  {
    if ( ObReferenceObjectByHandle(a3, 0, (POBJECT_TYPE)ExDesktopObjectType, 1, &Object, &HandleInformation) < 0 )
    {
      *((_DWORD *)a1 + 222) = 0;
    }
    else
    {
      ObfDereferenceObject(Object);
      *((_DWORD *)a1 + 222) = HandleInformation.GrantedAccess;
      if ( (unsigned int)CheckHandleFlag(0LL) )
        *((_DWORD *)a1 + 122) |= 0x400000u;
      if ( !(unsigned int)SetHandleFlag(a3, 1LL, 1LL) )
        return 3221225495LL;
    }
  }
  else
  {
    *((_DWORD *)a1 + 222) = 0;
  }
  if ( a2 && a2 == *((_QWORD *)a1 + 57) )
    return 0LL;
  v7 = (PVOID *)*((_QWORD *)a1 + 57);
  CurrentThread = KeGetCurrentThread();
  v9 = 0LL;
  if ( !(unsigned int)IsThreadCrossSessionAttached(a1, a2) )
  {
    ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
    if ( ThreadWin32Thread )
      v9 = *ThreadWin32Thread;
  }
  v24 = *(_QWORD *)(v9 + 16);
  *(_QWORD *)(v9 + 16) = &v24;
  v25 = v7;
  v26 = (void (*)(void))UserDereferenceObject;
  if ( v7 )
    ObfReferenceObject(v7);
  v11 = (_QWORD *)*((_QWORD *)a1 + 56);
  if ( *((_QWORD *)a1 + 57) )
  {
    v12 = *((_QWORD *)a1 + 93);
    v13 = (struct tagTHREADINFO **)*((_QWORD *)a1 + 94);
    if ( *(struct tagTHREADINFO **)(v12 + 8) != (struct tagTHREADINFO *)((char *)a1 + 744)
      || *v13 != (struct tagTHREADINFO *)((char *)a1 + 744) )
    {
LABEL_28:
      __fastfail(3u);
    }
    *v13 = (struct tagTHREADINFO *)v12;
    *(_QWORD *)(v12 + 8) = v13;
  }
  LockObjectAssignment((char *)a1 + 456, a2);
  if ( a2 )
  {
    *((_QWORD *)a1 + 58) = *(_QWORD *)(a2 + 8);
    v15 = (__int64 *)((char *)a1 + 744);
    v16 = (__int64 **)(a2 + 168);
    v14 = *(_QWORD *)(a2 + 168);
    if ( *(_QWORD *)(v14 + 8) != a2 + 168 )
      goto LABEL_28;
    *v15 = v14;
    *((_QWORD *)a1 + 94) = v16;
    *(_QWORD *)(v14 + 8) = v15;
    *v16 = v15;
  }
  else
  {
    *((_QWORD *)a1 + 58) = gpkdiStatic;
  }
  if ( !a2 )
    goto LABEL_38;
  for ( i = *(_QWORD **)(*((_QWORD *)a1 + 53) + 704LL); i && i[1] != a2; i = (_QWORD *)*i )
    ;
  if ( i )
  {
    v14 = *(_QWORD *)(a2 + 16) - i[2];
    *((_QWORD *)a1 + 59) = v14;
    *(_QWORD *)(*((_QWORD *)a1 + 60) + 32LL) = **((_QWORD **)a1 + 58) - v14;
    *(_QWORD *)(*((_QWORD *)a1 + 60) + 40LL) = i[2];
  }
  else
  {
LABEL_38:
    *(_QWORD *)(*((_QWORD *)a1 + 60) + 32LL) = 0LL;
    *(_QWORD *)(*((_QWORD *)a1 + 60) + 40LL) = 0LL;
    *((_QWORD *)a1 + 59) = 0LL;
    v18 = (gdwGTERMFlags & 1) - 1;
    *((_DWORD *)a1 + 190) = v18;
    v19 = *((_QWORD *)a1 + 54);
    if ( v19 )
      *(_DWORD *)(v19 + 384) = v18;
  }
  if ( a2
    && (*((_QWORD *)a1 + 56) = RtlAllocateHeap(*(PVOID *)(a2 + 128), 0, 0x18uLL), (v20 = *((_QWORD *)a1 + 56)) != 0) )
  {
    *(_QWORD *)(*((_QWORD *)a1 + 60) + 96LL) = v20 - *((_QWORD *)a1 + 59);
  }
  else
  {
    *((_QWORD *)a1 + 56) = (char *)a1 + 1032;
    *(_QWORD *)(*((_QWORD *)a1 + 60) + 96LL) = 0LL;
  }
  v21 = (_QWORD *)*((_QWORD *)a1 + 56);
  if ( v11 )
  {
    if ( v11 != v21 )
    {
      *(_OWORD *)v21 = *(_OWORD *)v11;
      v21[2] = v11[2];
    }
    if ( v11 != (_QWORD *)((char *)a1 + 1032) )
      RtlFreeHeap(v7[16], 0, v11);
  }
  else
  {
    *v21 = 0LL;
    v21[1] = 0LL;
    v21[2] = 0LL;
  }
  if ( *((_QWORD *)a1 + 54) )
  {
    JournallingQueue = GetJournallingQueue(a1);
    if ( JournallingQueue )
    {
      ++*(_DWORD *)(JournallingQueue + 392);
      zzzAttachToQueue(a1, (struct tagQ *)JournallingQueue);
    }
  }
  v23 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v14);
  *(_QWORD *)(v23 + 16) = v24;
  if ( v25 )
    v26();
  return 0LL;
}
