/*
 * XREFs of CmpLightWeightPrepareSetSecDescUoW @ 0x14083D8B4
 * Callers:
 *     CmpProcessLightWeightUOW @ 0x1406E3990 (CmpProcessLightWeightUOW.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1401CD170 (_guard_dispatch_icall.c)
 *     ExAllocatePoolWithTag @ 0x14036E010 (ExAllocatePoolWithTag.c)
 *     CmpGetSecurityDescriptorNode @ 0x14064052C (CmpGetSecurityDescriptorNode.c)
 *     HvMarkCellDirty @ 0x140839B58 (HvMarkCellDirty.c)
 *     CmpFreeUnitOfWork @ 0x14083C4A0 (CmpFreeUnitOfWork.c)
 */

__int64 __fastcall CmpLightWeightPrepareSetSecDescUoW(__int64 a1)
{
  __int64 v2; // r13
  __int64 v3; // rax
  __int64 v4; // r14
  unsigned int v5; // ebx
  ULONG_PTR v6; // rdi
  _DWORD *PoolWithTag; // rax
  void *v8; // rsi
  int SecurityDescriptorNode; // ebx
  __int64 v10; // r15
  unsigned int v11; // ebx
  __int64 v12; // rax
  _DWORD v14[2]; // [rsp+30h] [rbp-18h] BYREF
  _DWORD v15[4]; // [rsp+38h] [rbp-10h] BYREF
  unsigned int v16; // [rsp+90h] [rbp+48h]
  unsigned int v17; // [rsp+98h] [rbp+50h]
  unsigned int v18; // [rsp+A0h] [rbp+58h]
  int v19; // [rsp+A8h] [rbp+60h] BYREF
  int v20; // [rsp+ACh] [rbp+64h]

  v20 = 0;
  v14[1] = 0;
  v2 = 0LL;
  v15[1] = 0;
  v3 = *(_QWORD *)(a1 + 48);
  v4 = 0LL;
  v19 = -1;
  v14[0] = -1;
  v15[0] = -1;
  v5 = *(_DWORD *)(v3 + 40);
  v6 = *(_QWORD *)(v3 + 32);
  v18 = v5;
  PoolWithTag = ExAllocatePoolWithTag(PagedPool, 4uLL, 0x77554D43u);
  v8 = PoolWithTag;
  if ( !PoolWithTag )
    return (unsigned int)-1073741670;
  *PoolWithTag = 0;
  v10 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, int *))(v6 + 8))(v6, v5, &v19);
  if ( !v10 )
    goto LABEL_4;
  if ( !HvMarkCellDirty(v6, v5, 1) )
    goto LABEL_13;
  v2 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, _DWORD *))(v6 + 8))(v6, *(unsigned int *)(a1 + 96), v14);
  if ( !v2
    || (v11 = *(_DWORD *)(v10 + 44),
        v12 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, _DWORD *))(v6 + 8))(v6, v11, v15),
        (v4 = v12) == 0) )
  {
LABEL_4:
    SecurityDescriptorNode = -1073741670;
LABEL_14:
    CmpFreeUnitOfWork(v8);
    goto LABEL_15;
  }
  v16 = *(_DWORD *)(v12 + 8);
  v17 = *(_DWORD *)(v12 + 4);
  if ( !HvMarkCellDirty(v6, v11, 1) || !HvMarkCellDirty(v6, v16, 1) || !HvMarkCellDirty(v6, v17, 1) )
  {
LABEL_13:
    SecurityDescriptorNode = -1073741443;
    goto LABEL_14;
  }
  SecurityDescriptorNode = CmpGetSecurityDescriptorNode(v6, v18, v10, (void *)(v2 + 20), 1, (unsigned int *)v8);
  if ( SecurityDescriptorNode < 0 )
    goto LABEL_14;
  *(_QWORD *)(a1 + 104) = v8;
  SecurityDescriptorNode = 0;
LABEL_15:
  if ( v10 )
    (*(void (__fastcall **)(ULONG_PTR, int *))(v6 + 16))(v6, &v19);
  if ( v2 )
    (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(v6 + 16))(v6, v14);
  if ( v4 )
    (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(v6 + 16))(v6, v15);
  return (unsigned int)SecurityDescriptorNode;
}
