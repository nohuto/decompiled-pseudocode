/*
 * XREFs of CreateNameSpaceObject @ 0x1C0017B60
 * Callers:
 *     CreateNativeNameSpaceObject @ 0x1C0006870 (CreateNativeNameSpaceObject.c)
 *     Mutex @ 0x1C0006FE0 (Mutex.c)
 *     Device @ 0x1C000E9C0 (Device.c)
 *     Method @ 0x1C0014A40 (Method.c)
 *     Name @ 0x1C0017730 (Name.c)
 *     ParseField @ 0x1C00178D0 (ParseField.c)
 *     CreateXField @ 0x1C0019A9C (CreateXField.c)
 *     OpRegion @ 0x1C0028BF0 (OpRegion.c)
 *     Field @ 0x1C002A090 (Field.c)
 *     Processor @ 0x1C002E1F0 (Processor.c)
 *     Alias @ 0x1C002E750 (Alias.c)
 *     PowerRes @ 0x1C002F010 (PowerRes.c)
 *     IndexField @ 0x1C002F8E0 (IndexField.c)
 *     ThermalZone @ 0x1C0030E10 (ThermalZone.c)
 *     AMLICreateNativeNamespaceObject @ 0x1C0063E84 (AMLICreateNativeNamespaceObject.c)
 *     AMLIAddNextNamespaceOverride @ 0x1C0064384 (AMLIAddNextNamespaceOverride.c)
 *     AMLIAddNextNamespaceOverrideObject @ 0x1C00644E4 (AMLIAddNextNamespaceOverrideObject.c)
 *     AMLIApplyNextNamespaceOverride @ 0x1C006464C (AMLIApplyNextNamespaceOverride.c)
 *     BankField @ 0x1C0066AC0 (BankField.c)
 *     Event @ 0x1C0066DF0 (Event.c)
 *     AMLIInitialize @ 0x1C00BC5B4 (AMLIInitialize.c)
 *     Simulator_NotifyTablesAreLoaded @ 0x1C00C0558 (Simulator_NotifyTablesAreLoaded.c)
 * Callees:
 *     HeapAlloc @ 0x1C0003960 (HeapAlloc.c)
 *     InsertOwnerObjList @ 0x1C0006C70 (InsertOwnerObjList.c)
 *     NewNameSpaceObject @ 0x1C0006CA4 (NewNameSpaceObject.c)
 *     GetNameSpaceObjectNoLock @ 0x1C00193E0 (GetNameSpaceObjectNoLock.c)
 *     PrintDebugMessage @ 0x1C0020B04 (PrintDebugMessage.c)
 *     AcpiDiagTraceAmlError @ 0x1C0020C1C (AcpiDiagTraceAmlError.c)
 *     LogError @ 0x1C0020D64 (LogError.c)
 *     __security_check_cookie @ 0x1C0031700 (__security_check_cookie.c)
 *     memmove @ 0x1C0031A00 (memmove.c)
 *     memset @ 0x1C0031D40 (memset.c)
 *     Simulator_NotifyNamespaceCollision @ 0x1C0063834 (Simulator_NotifyNamespaceCollision.c)
 */

__int64 __fastcall CreateNameSpaceObject(
        struct _SLIST_ENTRY *a1,
        unsigned __int8 *a2,
        __int64 a3,
        struct _EX_RUNDOWN_REF *a4,
        struct _EX_RUNDOWN_REF **a5,
        int a6)
{
  struct _EX_RUNDOWN_REF **v6; // r14
  struct _EX_RUNDOWN_REF *v7; // r12
  unsigned int v8; // ebp
  __int64 v10; // rsi
  unsigned __int8 *v11; // rdi
  struct _SLIST_ENTRY *v12; // rbx
  size_t v13; // rbx
  char *PoolWithTag; // r15
  unsigned int NameSpaceObjectNoLock; // eax
  int v16; // ecx
  char *v17; // rax
  unsigned __int8 *v18; // r14
  __int64 v19; // rbx
  char *v20; // rax
  char *v21; // rsi
  _DWORD *v22; // rcx
  __int64 v23; // rbx
  _QWORD *v24; // rcx
  KIRQL v26; // bl
  struct _EX_RUNDOWN_REF **v27; // rdx
  KIRQL v28; // dl
  struct _EX_RUNDOWN_REF *v29; // rax
  __int64 v30; // rax
  __int64 i; // rax
  KIRQL v32; // [rsp+30h] [rbp-108h]
  struct _EX_RUNDOWN_REF *v33; // [rsp+38h] [rbp-100h]
  __int64 v34; // [rsp+40h] [rbp-F8h]
  __int64 v35; // [rsp+48h] [rbp-F0h]
  char Str[128]; // [rsp+60h] [rbp-D8h] BYREF

  v6 = a5;
  v7 = 0LL;
  v8 = 0;
  v34 = a3;
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
    v34 = gpnsNameSpaceRoot;
  }
  if ( !v11 )
  {
    v33 = (struct _EX_RUNDOWN_REF *)NewNameSpaceObject(v12);
    v7 = v33;
    if ( !v33 )
    {
      v8 = -1073741670;
      LogError(3221225626LL);
      AcpiDiagTraceAmlError(0LL, 3221225626LL);
      PrintDebugMessage(36, 0, 0, 0, 0LL);
      goto LABEL_39;
    }
    v26 = ExAcquireSpinLockExclusive(&ACPINamespaceLock);
    v33[2].Count = v10;
    if ( (gdwfAMLI & 4) != 0 )
    {
      _InterlockedIncrement((volatile signed __int32 *)(v10 + 112));
      v7 = v33;
    }
    InsertOwnerObjList(a4, v7);
    v27 = *(struct _EX_RUNDOWN_REF ***)(v10 + 32);
    if ( *v27 != (struct _EX_RUNDOWN_REF *)(v10 + 24) )
      goto LABEL_81;
    v7[1].Count = (unsigned __int64)v27;
    v7->Count = v10 + 24;
    *v27 = v7;
    v28 = v26;
    *(_QWORD *)(v10 + 32) = v7;
LABEL_52:
    ExReleaseSpinLockExclusive(&ACPINamespaceLock, v28);
    goto LABEL_37;
  }
  v32 = ExAcquireSpinLockExclusive(&ACPINamespaceLock);
  if ( !*v11 )
    goto LABEL_14;
  NameSpaceObjectNoLock = GetNameSpaceObjectNoLock(v11);
  v8 = NameSpaceObjectNoLock;
  if ( !NameSpaceObjectNoLock )
  {
    if ( (a6 & 0x20000) != 0 )
    {
      v8 = -1073741771;
      ExReleaseSpinLockExclusive(&ACPINamespaceLock, v32);
      v7 = 0LL;
      goto LABEL_37;
    }
    v7 = 0LL;
    if ( (MEMORY[0x40] & 0x100) == 0 )
    {
      ExReleaseSpinLockExclusive(&ACPINamespaceLock, v32);
      if ( (!g_SimulatorCallbackObject || (int)Simulator_NotifyNamespaceCollision(v11, v10) < 0) && (a6 & 0x10000) == 0 )
      {
        LogError(3221225525LL);
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
    v28 = v32;
    MEMORY[0x40] = MEMORY[0x40] & 0xFE7F | 0x80;
    goto LABEL_52;
  }
  if ( NameSpaceObjectNoLock != -1073741772 )
  {
    ExReleaseSpinLockExclusive(&ACPINamespaceLock, v32);
    v7 = 0LL;
    goto LABEL_36;
  }
  v7 = 0LL;
LABEL_14:
  v8 = 0;
  v16 = *v11 - (unsigned __int8)asc_1C006FED8[0];
  if ( !v16 )
    v16 = v11[1] - (unsigned __int8)asc_1C006FED8[1];
  if ( !v16 )
  {
    v29 = (struct _EX_RUNDOWN_REF *)NewNameSpaceObject(v12);
    v7 = v29;
    if ( v29 )
    {
      LODWORD(v29[5].Count) = 1600085852;
      gpnsNameSpaceRoot = (__int64)v29;
      InsertOwnerObjList(a4, v29);
    }
    else
    {
      v8 = -1073741670;
      LogError(3221225626LL);
      AcpiDiagTraceAmlError(0LL, 3221225626LL);
      PrintDebugMessage(36, 0, 0, 0, 0LL);
    }
    goto LABEL_35;
  }
  v17 = strrchr((const char *)v11, 46);
  if ( v17 )
  {
    *v17 = 0;
    v18 = (unsigned __int8 *)(v17 + 1);
    v8 = GetNameSpaceObjectNoLock(v11);
    if ( v8 )
      goto LABEL_34;
    v34 = v35;
  }
  else if ( *v11 == 92 )
  {
    v18 = v11 + 1;
    v34 = gpnsNameSpaceRoot;
    v35 = gpnsNameSpaceRoot;
  }
  else
  {
    v35 = v10;
    v18 = v11;
    if ( *v11 == 94 )
    {
      v30 = v10;
      do
      {
        if ( !v30 )
          break;
        v30 = *(_QWORD *)(v10 + 16);
        ++v18;
        v10 = v30;
        v34 = v30;
        v35 = v30;
      }
      while ( *v18 == 94 );
    }
  }
  v19 = -1LL;
  do
    ++v19;
  while ( v18[v19] );
  if ( (unsigned int)v19 > 4 && *v18 )
  {
    v8 = -1073741773;
    LogError(3221225523LL);
    AcpiDiagTraceAmlError(0LL, 3221225523LL);
    PrintDebugMessage(37, (_DWORD)v18, 0, 0, 0LL);
    goto LABEL_34;
  }
  v20 = (char *)HeapAlloc(a1, 1330859592, 0xA0u);
  v21 = v20;
  if ( v20 )
  {
    memset(v20, 0, 0xA0uLL);
    *((_QWORD *)v21 + 4) = v21 + 24;
    *((_QWORD *)v21 + 3) = v21 + 24;
    *((_DWORD *)v21 + 28) = 2;
    *((_DWORD *)v21 + 32) = 1;
    *((_QWORD *)v21 + 15) = v21;
    *((_QWORD *)v21 + 18) = 0LL;
    *((_QWORD *)v21 + 19) = -1LL;
  }
  v7 = (struct _EX_RUNDOWN_REF *)v21;
  if ( !v21 )
  {
    v8 = -1073741670;
    LogError(3221225626LL);
    AcpiDiagTraceAmlError(0LL, 3221225626LL);
    PrintDebugMessage(36, 0, 0, 0, 0LL);
    goto LABEL_34;
  }
  v22 = v21 + 40;
  if ( *v11 )
  {
    *v22 = 1600085855;
    memmove(v22, v18, (unsigned int)v19);
  }
  else
  {
    *v22 = 0;
  }
  v23 = v34;
  *((_QWORD *)v21 + 2) = v34;
  if ( (gdwfAMLI & 4) != 0 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v34 + 112));
    v7 = (struct _EX_RUNDOWN_REF *)v21;
    v23 = v35;
  }
  *((_QWORD *)v21 + 6) = a4;
  if ( a4 )
  {
    *((struct _EX_RUNDOWN_REF *)v21 + 7) = a4[3];
    a4[3].Count = (unsigned __int64)v21;
    ExAcquireRundownProtection(a4 + 4);
  }
  v24 = *(_QWORD **)(v23 + 32);
  if ( *v24 != v23 + 24 )
LABEL_81:
    __fastfail(3u);
  *(_QWORD *)v21 = v23 + 24;
  *((_QWORD *)v21 + 1) = v24;
  *v24 = v21;
  *(_QWORD *)(v23 + 32) = v21;
LABEL_34:
  v6 = a5;
LABEL_35:
  ExReleaseSpinLockExclusive(&ACPINamespaceLock, v32);
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
