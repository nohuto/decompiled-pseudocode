/*
 * XREFs of zzzSetDesktop @ 0x1C000F360
 * Callers:
 *     xxxSetThreadDesktop @ 0x1C000EEA8 (xxxSetThreadDesktop.c)
 *     xxxCreateWindowStation @ 0x1C00B437C (xxxCreateWindowStation.c)
 *     xxxCreateDesktopEx @ 0x1C00B91B4 (xxxCreateDesktopEx.c)
 *     xxxSwitchDesktop @ 0x1C00BFEDC (xxxSwitchDesktop.c)
 * Callees:
 *     GetJournallingQueue @ 0x1C000F790 (GetJournallingQueue.c)
 *     CheckHandleFlag @ 0x1C000F81C (CheckHandleFlag.c)
 *     UserSetLastError @ 0x1C003A8EC (UserSetLastError.c)
 *     zzzAttachToQueue @ 0x1C0058B78 (zzzAttachToQueue.c)
 *     IsThreadCrossSessionAttached @ 0x1C0139D6C (IsThreadCrossSessionAttached.c)
 *     _guard_dispatch_icall_nop @ 0x1C013D370 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall zzzSetDesktop(struct tagTHREADINFO *a1, __int64 a2, void *a3)
{
  PVOID *v7; // r13
  struct _KTHREAD *CurrentThread; // r15
  __int64 v9; // rsi
  __int64 *ThreadWin32Thread; // rax
  _QWORD *v11; // rsi
  __int64 v12; // rdx
  struct tagTHREADINFO **v13; // rcx
  _QWORD *v14; // rax
  _QWORD *v15; // rcx
  __int64 v16; // rdx
  _QWORD *i; // r8
  __int64 v18; // rdx
  int v19; // ecx
  __int64 v20; // rax
  __int64 v21; // rcx
  _QWORD *v22; // rax
  __int64 JournallingQueue; // rax
  struct _KTHREAD *v24; // rdi
  __int64 v25; // rbx
  __int64 *v26; // rax
  __int64 v27; // [rsp+48h] [rbp-80h] BYREF
  PVOID *v28; // [rsp+50h] [rbp-78h]
  void (*v29)(void); // [rsp+58h] [rbp-70h]
  struct _OBJECT_HANDLE_INFORMATION HandleInformation; // [rsp+70h] [rbp-58h] BYREF
  PVOID Object; // [rsp+E8h] [rbp+20h] BYREF

  if ( a2 && (*(_DWORD *)(a2 + 48) & 6) != 0 && a2 != *((_QWORD *)a1 + 56) && a1 != *(&gTermIO + 2) )
    return 3221225506LL;
  *((_DWORD *)a1 + 120) &= ~0x400000u;
  *((_QWORD *)a1 + 73) = a3;
  if ( a3 )
  {
    if ( ObReferenceObjectByHandle(a3, 0, (POBJECT_TYPE)ExDesktopObjectType, 1, &Object, &HandleInformation) < 0 )
    {
      *((_DWORD *)a1 + 220) = 0;
    }
    else
    {
      ObfDereferenceObject(Object);
      *((_DWORD *)a1 + 220) = HandleInformation.GrantedAccess;
      if ( (unsigned int)CheckHandleFlag(0LL) )
        *((_DWORD *)a1 + 120) |= 0x400000u;
      if ( !(unsigned int)SetHandleFlag(a3, 1LL, 1LL) )
        return 3221225495LL;
    }
  }
  else
  {
    *((_DWORD *)a1 + 220) = 0;
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
  v27 = *(_QWORD *)(v9 + 16);
  *(_QWORD *)(v9 + 16) = &v27;
  v28 = v7;
  v29 = (void (*)(void))UserDereferenceObject;
  if ( v7 )
    ObfReferenceObject(v7);
  v11 = (_QWORD *)*((_QWORD *)a1 + 55);
  if ( *((_QWORD *)a1 + 56) )
  {
    v12 = *((_QWORD *)a1 + 91);
    v13 = (struct tagTHREADINFO **)*((_QWORD *)a1 + 92);
    if ( *(struct tagTHREADINFO **)(v12 + 8) != (struct tagTHREADINFO *)((char *)a1 + 728)
      || *v13 != (struct tagTHREADINFO *)((char *)a1 + 728) )
    {
      __fastfail(3u);
    }
    *v13 = (struct tagTHREADINFO *)v12;
    *(_QWORD *)(v12 + 8) = v13;
  }
  LockObjectAssignment((char *)a1 + 448, a2);
  if ( a2 )
  {
    *((_QWORD *)a1 + 57) = *(_QWORD *)(a2 + 8);
    v14 = (_QWORD *)((char *)a1 + 728);
    v15 = (_QWORD *)(a2 + 168);
    v16 = *(_QWORD *)(a2 + 168);
    if ( *(_QWORD *)(v16 + 8) != a2 + 168 )
      __fastfail(3u);
    *v14 = v16;
    *((_QWORD *)a1 + 92) = v15;
    *(_QWORD *)(v16 + 8) = v14;
    *v15 = v14;
  }
  else
  {
    *((_QWORD *)a1 + 57) = gpkdiStatic;
  }
  if ( !a2 )
    goto LABEL_39;
  for ( i = *(_QWORD **)(*((_QWORD *)a1 + 52) + 696LL); i && i[1] != a2; i = (_QWORD *)*i )
    ;
  if ( i )
  {
    v18 = *(_QWORD *)(a2 + 16) - i[2];
    *((_QWORD *)a1 + 58) = v18;
    *(_QWORD *)(*((_QWORD *)a1 + 59) + 32LL) = **((_QWORD **)a1 + 57) - v18;
    *(_QWORD *)(*((_QWORD *)a1 + 59) + 40LL) = i[2];
  }
  else
  {
LABEL_39:
    *(_QWORD *)(*((_QWORD *)a1 + 59) + 32LL) = 0LL;
    *(_QWORD *)(*((_QWORD *)a1 + 59) + 40LL) = 0LL;
    *((_QWORD *)a1 + 58) = 0LL;
    v19 = (gdwGTERMFlags & 1) - 1;
    *((_DWORD *)a1 + 186) = v19;
    v20 = *((_QWORD *)a1 + 53);
    if ( v20 )
      *(_DWORD *)(v20 + 384) = v19;
  }
  if ( a2
    && (*((_QWORD *)a1 + 55) = RtlAllocateHeap(*(PVOID *)(a2 + 128), 0, 0x18uLL), (v21 = *((_QWORD *)a1 + 55)) != 0) )
  {
    *(_QWORD *)(*((_QWORD *)a1 + 59) + 96LL) = v21 - *((_QWORD *)a1 + 58);
  }
  else
  {
    *((_QWORD *)a1 + 55) = (char *)a1 + 1024;
    *(_QWORD *)(*((_QWORD *)a1 + 59) + 96LL) = 0LL;
  }
  v22 = (_QWORD *)*((_QWORD *)a1 + 55);
  if ( v11 )
  {
    if ( v11 != v22 )
    {
      *(_OWORD *)v22 = *(_OWORD *)v11;
      v22[2] = v11[2];
    }
    if ( v11 != (_QWORD *)((char *)a1 + 1024) )
      RtlFreeHeap(v7[16], 0, v11);
  }
  else
  {
    *v22 = 0LL;
    v22[1] = 0LL;
    v22[2] = 0LL;
  }
  if ( *((_QWORD *)a1 + 53) )
  {
    JournallingQueue = GetJournallingQueue(a1);
    if ( JournallingQueue )
    {
      ++*(_DWORD *)(JournallingQueue + 392);
      zzzAttachToQueue(a1, (struct tagQ *)JournallingQueue);
    }
  }
  v24 = KeGetCurrentThread();
  v25 = 0LL;
  if ( !(unsigned int)IsThreadCrossSessionAttached() )
  {
    v26 = (__int64 *)PsGetThreadWin32Thread(v24);
    if ( v26 )
      v25 = *v26;
  }
  *(_QWORD *)(v25 + 16) = v27;
  if ( v28 )
    v29();
  return 0LL;
}
