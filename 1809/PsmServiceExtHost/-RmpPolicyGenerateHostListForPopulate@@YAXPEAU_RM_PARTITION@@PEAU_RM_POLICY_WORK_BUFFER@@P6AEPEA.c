/*
 * XREFs of ?RmpPolicyGenerateHostListForPopulate@@YAXPEAU_RM_PARTITION@@PEAU_RM_POLICY_WORK_BUFFER@@P6AEPEAU_RM_ACTIVITY_HOST@@PEAX@Z3@Z @ 0x180037818
 * Callers:
 *     ?RmpPolicyPopulateActivityHostMetrics@@YAXPEAU_RM_PARTITION@@W4Enum@Priority@ExecutionModel@@PEAU_RM_POLICY_WORK_BUFFER@@GP6AEPEAU_RM_ACTIVITY_HOST@@PEAX@Z4@Z @ 0x180036CD8 (-RmpPolicyPopulateActivityHostMetrics@@YAXPEAU_RM_PARTITION@@W4Enum@Priority@ExecutionModel@@PEA.c)
 * Callees:
 *     ?RmpObjectRelease@@YAXPEAU_RM_OBJECT_HEADER@@@Z @ 0x180008370 (-RmpObjectRelease@@YAXPEAU_RM_OBJECT_HEADER@@@Z.c)
 *     ?RmpObjectTableEnumerationGetNext@@YAPEAU_RM_OBJECT_HEADER@@PEAU_RM_OBJECT_TABLE_ENUMERATION_CONTEXT@@@Z @ 0x180037910 (-RmpObjectTableEnumerationGetNext@@YAPEAU_RM_OBJECT_HEADER@@PEAU_RM_OBJECT_TABLE_ENUMERATION_CON.c)
 *     ?RmpObjectTableEnumerationBegin@@YAXPEAU_RM_OBJECT_TABLE@@PEAU_RM_OBJECT_TABLE_ENUMERATION_CONTEXT@@@Z @ 0x1800379A8 (-RmpObjectTableEnumerationBegin@@YAXPEAU_RM_OBJECT_TABLE@@PEAU_RM_OBJECT_TABLE_ENUMERATION_CONTE.c)
 *     memset_0 @ 0x180049A1A (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x180049A30 (_guard_dispatch_icall_nop.c)
 */

void __fastcall RmpPolicyGenerateHostListForPopulate(
        struct _RM_PARTITION *a1,
        struct _RM_POLICY_WORK_BUFFER *a2,
        unsigned __int8 (__fastcall *a3)(struct _RM_OBJECT_HEADER *, void *),
        void *a4)
{
  struct _RM_OBJECT_HEADER *Next; // rax
  struct _RM_OBJECT_HEADER *v9; // rdi
  _QWORD *v10; // rbx
  _QWORD v11[7]; // [rsp+20h] [rbp-38h] BYREF

  *((_DWORD *)a2 + 9) = 0;
  memset_0(*(void **)a2, 0, (unsigned __int64)*((unsigned int *)a2 + 8) << 6);
  RmpObjectTableEnumerationBegin(
    (struct _RM_OBJECT_TABLE *)(*((_QWORD *)a1 + 3) + 16LL),
    (struct _RM_OBJECT_TABLE_ENUMERATION_CONTEXT *)v11);
  while ( 1 )
  {
    Next = RmpObjectTableEnumerationGetNext((struct _RM_OBJECT_TABLE_ENUMERATION_CONTEXT *)v11);
    v9 = Next;
    if ( !Next )
      break;
    if ( (*((_QWORD *)Next + 4) & 0xF000000000000000uLL) != 0x2000000000000000LL
      && *((struct _RM_PARTITION **)Next + 7) == a1
      && (!a3 || a3(Next, a4)) )
    {
      v10 = (_QWORD *)(*(_QWORD *)a2 + ((unsigned __int64)*((unsigned int *)a2 + 9) << 6));
      memset_0(v10, 0, 0x40uLL);
      v10[6] = v9;
      ++*((_DWORD *)a2 + 9);
    }
    RmpObjectRelease(v9);
  }
  RtlReleaseSRWLockShared(v11[0] + 16LL);
}
