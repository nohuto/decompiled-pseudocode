/*
 * XREFs of CreateNameSpaceObject @ 0x1C0006190
 * Callers:
 *     Name @ 0x1C00038D0 (Name.c)
 *     Mutex @ 0x1C000FE70 (Mutex.c)
 *     Field @ 0x1C00215D0 (Field.c)
 *     ParseField @ 0x1C00217F0 (ParseField.c)
 *     Device @ 0x1C00223F0 (Device.c)
 *     CreateNativeNameSpaceObject @ 0x1C00229A0 (CreateNativeNameSpaceObject.c)
 *     Alias @ 0x1C0022C10 (Alias.c)
 *     Processor @ 0x1C0022D20 (Processor.c)
 *     IndexField @ 0x1C00231D0 (IndexField.c)
 *     PowerRes @ 0x1C0023590 (PowerRes.c)
 *     ThermalZone @ 0x1C0024CA0 (ThermalZone.c)
 *     Method @ 0x1C00262E0 (Method.c)
 *     CreateXField @ 0x1C0028790 (CreateXField.c)
 *     OpRegion @ 0x1C0029440 (OpRegion.c)
 *     AMLICreateNativeNamespaceObject @ 0x1C0061EF8 (AMLICreateNativeNamespaceObject.c)
 *     AMLIAddNextNamespaceOverride @ 0x1C00623F8 (AMLIAddNextNamespaceOverride.c)
 *     AMLIAddNextNamespaceOverrideObject @ 0x1C0062558 (AMLIAddNextNamespaceOverrideObject.c)
 *     AMLIApplyNextNamespaceOverride @ 0x1C00626C0 (AMLIApplyNextNamespaceOverride.c)
 *     BankField @ 0x1C0064AD0 (BankField.c)
 *     Event @ 0x1C0064E00 (Event.c)
 *     AMLIInitialize @ 0x1C00B8B2C (AMLIInitialize.c)
 *     Simulator_NotifyTablesAreLoaded @ 0x1C00BC90C (Simulator_NotifyTablesAreLoaded.c)
 * Callees:
 *     HeapAlloc @ 0x1C00088C0 (HeapAlloc.c)
 *     GetNameSpaceObjectNoLock @ 0x1C0008BF0 (GetNameSpaceObjectNoLock.c)
 *     LogError @ 0x1C0029B44 (LogError.c)
 *     AcpiDiagTraceAmlError @ 0x1C002AE60 (AcpiDiagTraceAmlError.c)
 *     NewNameSpaceObject @ 0x1C002B378 (NewNameSpaceObject.c)
 *     PrintDebugMessage @ 0x1C002BB94 (PrintDebugMessage.c)
 *     InsertOwnerObjList @ 0x1C002C398 (InsertOwnerObjList.c)
 *     __security_check_cookie @ 0x1C0030A80 (__security_check_cookie.c)
 *     memmove @ 0x1C0030D80 (memmove.c)
 *     memset @ 0x1C00310C0 (memset.c)
 *     Simulator_NotifyNamespaceCollision @ 0x1C00618B4 (Simulator_NotifyNamespaceCollision.c)
 */

__int64 __fastcall CreateNameSpaceObject(
        __int64 a1,
        unsigned __int8 *a2,
        __int64 a3,
        struct _EX_RUNDOWN_REF *a4,
        _QWORD *a5,
        int a6)
{
  _QWORD *v6; // r14
  _QWORD *v7; // r12
  unsigned int v8; // ebp
  __int64 v10; // rsi
  unsigned __int8 *v11; // rdi
  __int64 v12; // rbx
  size_t v13; // rbx
  char *PoolWithTag; // r15
  unsigned int NameSpaceObjectNoLock; // eax
  int v16; // ecx
  char *v17; // rax
  __int64 v18; // rdx
  __int64 v19; // r8
  __int64 v20; // r9
  unsigned __int8 *v21; // r14
  __int64 v22; // rbx
  char *v23; // rax
  __int64 v24; // rdx
  __int64 v25; // r8
  __int64 v26; // r9
  char *v27; // rsi
  _DWORD *v28; // rcx
  __int64 v29; // rbx
  _QWORD *v30; // rcx
  __int64 v32; // rdx
  __int64 v33; // r8
  __int64 v34; // r9
  KIRQL v35; // bl
  _QWORD *v36; // rdx
  KIRQL v37; // dl
  __int64 v38; // rax
  __int64 v39; // rdx
  __int64 v40; // r8
  __int64 v41; // r9
  __int64 v42; // rax
  __int64 i; // rax
  __int64 v44; // rdx
  __int64 v45; // r8
  __int64 v46; // r9
  KIRQL v47; // [rsp+30h] [rbp-108h]
  __int64 v48; // [rsp+38h] [rbp-100h]
  __int64 v49; // [rsp+40h] [rbp-F8h]
  __int64 v50; // [rsp+48h] [rbp-F0h]
  char Str[128]; // [rsp+60h] [rbp-D8h] BYREF

  v6 = a5;
  v7 = 0LL;
  v8 = 0;
  v49 = a3;
  v10 = a3;
  v11 = a2;
  v12 = a1;
  if ( a2 )
  {
    v13 = -1LL;
    do
      ++v13;
    while ( a2[v13] );
    if ( v13 + 1 >= 0x80 )
    {
      PoolWithTag = (char *)ExAllocatePoolWithTag(NonPagedPoolNx, v13 + 1, 0x69706341u);
      if ( !PoolWithTag )
        return 3221225626LL;
    }
    else
    {
      PoolWithTag = Str;
    }
    memmove(PoolWithTag, v11, v13);
    PoolWithTag[v13] = 0;
    v11 = (unsigned __int8 *)PoolWithTag;
    v12 = a1;
  }
  else
  {
    PoolWithTag = 0LL;
  }
  if ( !v10 )
  {
    v10 = gpnsNameSpaceRoot;
    v49 = gpnsNameSpaceRoot;
  }
  if ( !v11 )
  {
    v48 = NewNameSpaceObject(v12);
    v7 = (_QWORD *)v48;
    if ( !v48 )
    {
      v8 = -1073741670;
      LogError(3221225626LL, v32, v33, v34);
      AcpiDiagTraceAmlError(0LL, 3221225626LL);
      PrintDebugMessage(36, 0, 0, 0, 0LL);
      goto LABEL_39;
    }
    v35 = ExAcquireSpinLockExclusive(&ACPINamespaceLock);
    *(_QWORD *)(v48 + 16) = v10;
    if ( (gdwfAMLI & 4) != 0 )
    {
      _InterlockedIncrement((volatile signed __int32 *)(v10 + 112));
      v7 = (_QWORD *)v48;
    }
    InsertOwnerObjList(a4, v7);
    v36 = *(_QWORD **)(v10 + 32);
    if ( *v36 != v10 + 24 )
      goto LABEL_81;
    v7[1] = v36;
    *v7 = v10 + 24;
    *v36 = v7;
    v37 = v35;
    *(_QWORD *)(v10 + 32) = v7;
LABEL_52:
    ExReleaseSpinLockExclusive(&ACPINamespaceLock, v37);
    goto LABEL_37;
  }
  v47 = ExAcquireSpinLockExclusive(&ACPINamespaceLock);
  if ( !*v11 )
    goto LABEL_14;
  NameSpaceObjectNoLock = GetNameSpaceObjectNoLock(v11);
  v8 = NameSpaceObjectNoLock;
  if ( !NameSpaceObjectNoLock )
  {
    if ( (a6 & 0x20000) != 0 )
    {
      v8 = -1073741771;
      ExReleaseSpinLockExclusive(&ACPINamespaceLock, v47);
      v7 = 0LL;
      goto LABEL_37;
    }
    v7 = 0LL;
    if ( (MEMORY[0x40] & 0x100) == 0 )
    {
      ExReleaseSpinLockExclusive(&ACPINamespaceLock, v47);
      if ( (!g_SimulatorCallbackObject || (int)Simulator_NotifyNamespaceCollision(v11, v10) < 0) && (a6 & 0x10000) == 0 )
      {
        LogError(3221225525LL, v44, v45, v46);
        AcpiDiagTraceAmlError(0LL, 3221225525LL);
        PrintDebugMessage(35, (_DWORD)v11, 0, 0, 0LL);
      }
      v8 = -1073741771;
      goto LABEL_37;
    }
    if ( MEMORY[0x30] )
    {
      for ( i = *(_QWORD *)(MEMORY[0x30] + 24LL); i; i = *(_QWORD *)(i + 56) )
        ;
      ExReleaseRundownProtection((PEX_RUNDOWN_REF)(MEMORY[0x30] + 32LL));
    }
    InsertOwnerObjList(a4, 0LL);
    v37 = v47;
    MEMORY[0x40] = MEMORY[0x40] & 0xFE7F | 0x80;
    goto LABEL_52;
  }
  if ( NameSpaceObjectNoLock != -1073741772 )
  {
    ExReleaseSpinLockExclusive(&ACPINamespaceLock, v47);
    v7 = 0LL;
    goto LABEL_36;
  }
  v7 = 0LL;
LABEL_14:
  v8 = 0;
  v16 = *v11 - (unsigned __int8)asc_1C006E310[0];
  if ( !v16 )
    v16 = v11[1] - (unsigned __int8)asc_1C006E310[1];
  if ( !v16 )
  {
    v38 = NewNameSpaceObject(v12);
    v7 = (_QWORD *)v38;
    if ( v38 )
    {
      *(_DWORD *)(v38 + 40) = 1600085852;
      gpnsNameSpaceRoot = v38;
      InsertOwnerObjList(a4, v38);
    }
    else
    {
      v8 = -1073741670;
      LogError(3221225626LL, v39, v40, v41);
      AcpiDiagTraceAmlError(0LL, 3221225626LL);
      PrintDebugMessage(36, 0, 0, 0, 0LL);
    }
    goto LABEL_35;
  }
  v17 = strrchr((const char *)v11, 46);
  if ( v17 )
  {
    *v17 = 0;
    v21 = (unsigned __int8 *)(v17 + 1);
    v8 = GetNameSpaceObjectNoLock(v11);
    if ( v8 )
      goto LABEL_34;
    v49 = v50;
  }
  else if ( *v11 == 92 )
  {
    v21 = v11 + 1;
    v49 = gpnsNameSpaceRoot;
    v50 = gpnsNameSpaceRoot;
  }
  else
  {
    v50 = v10;
    v21 = v11;
    if ( *v11 == 94 )
    {
      v42 = v10;
      do
      {
        if ( !v42 )
          break;
        v42 = *(_QWORD *)(v10 + 16);
        ++v21;
        v10 = v42;
        v49 = v42;
        v50 = v42;
      }
      while ( *v21 == 94 );
    }
  }
  v22 = -1LL;
  do
    ++v22;
  while ( v21[v22] );
  if ( (unsigned int)v22 > 4 && *v21 )
  {
    v8 = -1073741773;
    LogError(3221225523LL, v18, v19, v20);
    AcpiDiagTraceAmlError(0LL, 3221225523LL);
    PrintDebugMessage(37, (_DWORD)v21, 0, 0, 0LL);
    goto LABEL_34;
  }
  v23 = (char *)HeapAlloc(a1, 1330859592LL);
  v27 = v23;
  if ( v23 )
  {
    memset(v23, 0, 0xA0uLL);
    *((_QWORD *)v27 + 4) = v27 + 24;
    *((_QWORD *)v27 + 3) = v27 + 24;
    *((_DWORD *)v27 + 28) = 2;
    *((_DWORD *)v27 + 32) = 1;
    *((_QWORD *)v27 + 15) = v27;
    *((_QWORD *)v27 + 18) = 0LL;
    *((_QWORD *)v27 + 19) = -1LL;
  }
  v7 = v27;
  if ( !v27 )
  {
    v8 = -1073741670;
    LogError(3221225626LL, v24, v25, v26);
    AcpiDiagTraceAmlError(0LL, 3221225626LL);
    PrintDebugMessage(36, 0, 0, 0, 0LL);
    goto LABEL_34;
  }
  v28 = v27 + 40;
  if ( *v11 )
  {
    *v28 = 1600085855;
    memmove(v28, v21, (unsigned int)v22);
  }
  else
  {
    *v28 = 0;
  }
  v29 = v49;
  *((_QWORD *)v27 + 2) = v49;
  if ( (gdwfAMLI & 4) != 0 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v49 + 112));
    v7 = v27;
    v29 = v50;
  }
  *((_QWORD *)v27 + 6) = a4;
  if ( a4 )
  {
    *((struct _EX_RUNDOWN_REF *)v27 + 7) = a4[3];
    a4[3].Count = (unsigned __int64)v27;
    ExAcquireRundownProtection(a4 + 4);
  }
  v30 = *(_QWORD **)(v29 + 32);
  if ( *v30 != v29 + 24 )
LABEL_81:
    __fastfail(3u);
  *(_QWORD *)v27 = v29 + 24;
  *((_QWORD *)v27 + 1) = v30;
  *v30 = v27;
  *(_QWORD *)(v29 + 32) = v27;
LABEL_34:
  v6 = a5;
LABEL_35:
  ExReleaseSpinLockExclusive(&ACPINamespaceLock, v47);
LABEL_36:
  if ( !v8 || v8 == -1073741771 )
  {
LABEL_37:
    if ( v6 )
      *v6 = v7;
  }
LABEL_39:
  if ( PoolWithTag )
  {
    if ( Str != PoolWithTag )
      ExFreePoolWithTag(PoolWithTag, 0);
  }
  return v8;
}
