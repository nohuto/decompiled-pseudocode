/*
 * XREFs of RtlAddGrowableFunctionTable @ 0x180065C10
 * Callers:
 *     <none>
 * Callees:
 *     LdrControlFlowGuardEnforced @ 0x18001AE90 (LdrControlFlowGuardEnforced.c)
 *     RtlReleaseSRWLockExclusive @ 0x180035C30 (RtlReleaseSRWLockExclusive.c)
 *     sub_180035F18 @ 0x180035F18 (sub_180035F18.c)
 *     RtlAcquireSRWLockExclusive @ 0x180039340 (RtlAcquireSRWLockExclusive.c)
 *     RtlAllocateHeap @ 0x18003AA20 (RtlAllocateHeap.c)
 *     RtlFreeHeap @ 0x180040690 (RtlFreeHeap.c)
 *     RtlProtectHeap @ 0x180048240 (RtlProtectHeap.c)
 *     RtlAvlInsertNodeEx @ 0x180065E70 (RtlAvlInsertNodeEx.c)
 *     sub_18007C0A8 @ 0x18007C0A8 (sub_18007C0A8.c)
 *     ZwSetInformationProcess @ 0x18009CA60 (ZwSetInformationProcess.c)
 *     ZwQuerySystemTime @ 0x18009D220 (ZwQuerySystemTime.c)
 */

__int64 __fastcall RtlAddGrowableFunctionTable(
        __int64 *a1,
        __int64 a2,
        unsigned int a3,
        unsigned int a4,
        unsigned __int64 a5,
        unsigned __int64 a6)
{
  __int64 result; // rax
  int v10; // ebx
  void *ProcessHeap; // rcx
  __int64 Heap; // rax
  __int64 v13; // rbx
  int v14; // ebp
  __int64 v15; // r8
  __int64 *i; // rax
  unsigned __int64 v17; // rdx
  unsigned __int64 v18; // rcx
  _QWORD *v19; // rdx
  _QWORD *v20; // rax
  __int64 *v21; // rax
  int v22; // ecx
  bool v23; // zf
  void *v24; // rcx
  int v25; // r8d
  void *v26; // rcx
  int v27; // ecx
  int v28; // ecx
  __int64 v29; // [rsp+20h] [rbp-28h] BYREF
  char v30; // [rsp+28h] [rbp-20h]

  if ( a3 > a4 || a5 >= a6 )
    __fastfail(5u);
  result = sub_18007C0A8();
  if ( (int)result < 0 )
    return result;
  if ( (unsigned int)LdrControlFlowGuardEnforced() )
  {
    RtlAcquireSRWLockExclusive(&qword_180165010);
    v10 = *(_DWORD *)qword_18017A288;
    if ( !*(_DWORD *)qword_18017A288 )
      RtlProtectHeap((_DWORD *)qword_18017A278, 0);
    if ( v10 == -1 )
      goto LABEL_60;
    *(_DWORD *)qword_18017A288 = v10 + 1;
    RtlReleaseSRWLockExclusive(&qword_180165010);
  }
  if ( (unsigned int)LdrControlFlowGuardEnforced() )
    ProcessHeap = (void *)qword_18017A278;
  else
    ProcessHeap = NtCurrentPeb()->ProcessHeap;
  Heap = RtlAllocateHeap((__int64)ProcessHeap, 0, 112LL);
  v13 = Heap;
  if ( !Heap )
  {
    if ( (unsigned int)LdrControlFlowGuardEnforced() )
    {
      RtlAcquireSRWLockExclusive(&qword_180165010);
      v28 = *(_DWORD *)qword_18017A288;
      if ( !*(_DWORD *)qword_18017A288 )
        goto LABEL_60;
      *(_DWORD *)qword_18017A288 = v28 - 1;
      if ( v28 == 1 )
        RtlProtectHeap((_DWORD *)qword_18017A278, 1);
      RtlReleaseSRWLockExclusive(&qword_180165010);
    }
    return 3221225626LL;
  }
  *(_QWORD *)(Heap + 16) = a2;
  *(_DWORD *)(Heap + 84) = a3;
  ZwQuerySystemTime(Heap + 24);
  *(_QWORD *)(v13 + 32) = a5;
  *(_QWORD *)(v13 + 40) = a6;
  *(_QWORD *)(v13 + 48) = a5;
  *(_DWORD *)(v13 + 80) = 3;
  v29 = v13;
  v30 = 0;
  v14 = ZwSetInformationProcess(-1LL, 53LL, &v29, 16LL);
  if ( v14 < 0 )
  {
    if ( (unsigned int)LdrControlFlowGuardEnforced() )
      v24 = (void *)qword_18017A278;
    else
      v24 = NtCurrentPeb()->ProcessHeap;
    RtlFreeHeap((__int64)v24, 0, v13);
    if ( (unsigned int)LdrControlFlowGuardEnforced() )
    {
      RtlAcquireSRWLockExclusive(&qword_180165010);
      v25 = *(_DWORD *)qword_18017A288;
      if ( !*(_DWORD *)qword_18017A288 )
        goto LABEL_60;
      v23 = v25 == 1;
      *(_DWORD *)qword_18017A288 = v25 - 1;
LABEL_30:
      if ( v23 )
        RtlProtectHeap((_DWORD *)qword_18017A278, 1);
      RtlReleaseSRWLockExclusive(&qword_180165010);
    }
    return (unsigned int)v14;
  }
  sub_180035F18(0);
  RtlAcquireSRWLockExclusive(&qword_180164350);
  for ( i = (__int64 *)qword_18017A2B0; i != &qword_18017A2B0; i = (__int64 *)*i )
  {
    v17 = i[5];
    if ( a5 < v17 )
    {
      v18 = i[4];
      if ( a6 > v18 )
      {
        if ( v18 != a5 || v17 != a6 )
        {
          RtlReleaseSRWLockExclusive(&qword_180164350);
          sub_180035F18(1);
          v30 = 1;
          ZwSetInformationProcess(-1LL, 53LL, &v29, 16LL);
          if ( (unsigned int)LdrControlFlowGuardEnforced() )
            v26 = (void *)qword_18017A278;
          else
            v26 = NtCurrentPeb()->ProcessHeap;
          RtlFreeHeap((__int64)v26, 0, v13);
          if ( (unsigned int)LdrControlFlowGuardEnforced() )
          {
            RtlAcquireSRWLockExclusive(&qword_180165010);
            v27 = *(_DWORD *)qword_18017A288;
            if ( !*(_DWORD *)qword_18017A288 )
              goto LABEL_60;
            *(_DWORD *)qword_18017A288 = v27 - 1;
            if ( v27 == 1 )
              RtlProtectHeap((_DWORD *)qword_18017A278, 1);
            RtlReleaseSRWLockExclusive(&qword_180165010);
          }
          return 3221225496LL;
        }
        break;
      }
    }
  }
  v19 = (_QWORD *)qword_18017A2A8;
  LOBYTE(v15) = 0;
  if ( !qword_18017A2A8 )
    goto LABEL_26;
  while ( *(_QWORD *)(v13 + 32) < *(v19 - 7) )
  {
    v20 = (_QWORD *)*v19;
    if ( !*v19 )
    {
      LOBYTE(v15) = 0;
      goto LABEL_26;
    }
LABEL_22:
    v19 = v20;
  }
  v20 = (_QWORD *)v19[1];
  if ( v20 )
    goto LABEL_22;
  LOBYTE(v15) = 1;
LABEL_26:
  RtlAvlInsertNodeEx(&qword_18017A2A8, v19, v15, v13 + 88);
  v21 = (__int64 *)qword_18017A2B8;
  if ( *(__int64 **)qword_18017A2B8 != &qword_18017A2B0 )
    __fastfail(3u);
  *(_QWORD *)v13 = &qword_18017A2B0;
  *(_QWORD *)(v13 + 8) = v21;
  *v21 = v13;
  qword_18017A2B8 = v13;
  RtlReleaseSRWLockExclusive(&qword_180164350);
  sub_180035F18(1);
  *a1 = v13;
  if ( (unsigned int)LdrControlFlowGuardEnforced() )
  {
    RtlAcquireSRWLockExclusive(&qword_180165010);
    v22 = *(_DWORD *)qword_18017A288;
    if ( *(_DWORD *)qword_18017A288 )
    {
      v23 = v22 == 1;
      *(_DWORD *)qword_18017A288 = v22 - 1;
      goto LABEL_30;
    }
LABEL_60:
    RtlReleaseSRWLockExclusive(&qword_180165010);
    __fastfail(0xEu);
  }
  return (unsigned int)v14;
}
