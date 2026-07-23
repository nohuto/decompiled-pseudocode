/*
 * XREFs of CmpLightWeightPrepareSetSecDescUoW @ 0x140805C50
 * Callers:
 *     CmpProcessLightWeightUOW @ 0x140695BDC (CmpProcessLightWeightUOW.c)
 * Callees:
 *     CmpDereferenceSecurityNode @ 0x1401B3530 (CmpDereferenceSecurityNode.c)
 *     _guard_dispatch_icall @ 0x1401C6030 (_guard_dispatch_icall.c)
 *     ExAllocatePoolWithTag @ 0x14034C010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     CmpGetSecurityDescriptorNodeEx @ 0x140581AB8 (CmpGetSecurityDescriptorNodeEx.c)
 *     HvMarkCellDirty @ 0x1408021B4 (HvMarkCellDirty.c)
 */

__int64 __fastcall CmpLightWeightPrepareSetSecDescUoW(__int64 a1)
{
  _DWORD *v2; // r14
  __int64 v3; // rax
  __int64 v4; // r15
  ULONG_PTR v5; // rdi
  unsigned int v6; // ebx
  ULONG_PTR *PoolWithTag; // rax
  ULONG_PTR *v8; // rsi
  int SecurityDescriptorNode; // ebx
  __int64 v10; // r13
  unsigned int v11; // r12d
  __int64 v12; // rax
  unsigned int v13; // ebx
  ULONG_PTR v14; // rdx
  _DWORD v16[2]; // [rsp+40h] [rbp-18h] BYREF
  _DWORD v17[4]; // [rsp+48h] [rbp-10h] BYREF
  unsigned int v19; // [rsp+A8h] [rbp+50h]
  unsigned int v20; // [rsp+B0h] [rbp+58h]
  int v21; // [rsp+B8h] [rbp+60h] BYREF
  int v22; // [rsp+BCh] [rbp+64h]

  v16[1] = 0;
  v22 = 0;
  v2 = 0LL;
  v17[1] = 0;
  v3 = *(_QWORD *)(a1 + 48);
  v4 = 0LL;
  v16[0] = -1;
  v21 = -1;
  v17[0] = -1;
  v5 = *(_QWORD *)(v3 + 24);
  v6 = *(_DWORD *)(v3 + 32);
  PoolWithTag = (ULONG_PTR *)ExAllocatePoolWithTag(PagedPool, 0x10uLL, 0x77554D43u);
  v8 = PoolWithTag;
  if ( !PoolWithTag )
    return (unsigned int)-1073741670;
  *PoolWithTag = 0LL;
  PoolWithTag[1] = v5;
  *(_DWORD *)PoolWithTag = -1;
  v10 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, _DWORD *))(v5 + 8))(v5, v6, v16);
  if ( !v10 )
    goto LABEL_4;
  if ( !HvMarkCellDirty(v5, v6, 1) )
    goto LABEL_13;
  v2 = (_DWORD *)(*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, int *))(v5 + 8))(v5, *(unsigned int *)(a1 + 96), &v21);
  if ( !v2
    || (v11 = *(_DWORD *)(v10 + 44),
        v12 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, _DWORD *))(v5 + 8))(v5, v11, v17),
        (v4 = v12) == 0) )
  {
LABEL_4:
    SecurityDescriptorNode = -1073741670;
LABEL_14:
    v14 = *(unsigned int *)v8;
    if ( (_DWORD)v14 != -1 )
      CmpDereferenceSecurityNode(v8[1], v14);
    ExFreePoolWithTag(v8, 0x77554D43u);
    goto LABEL_17;
  }
  v19 = *(_DWORD *)(v12 + 8);
  v20 = *(_DWORD *)(v12 + 4);
  if ( !HvMarkCellDirty(v5, v11, 1) || !HvMarkCellDirty(v5, v19, 1) || !HvMarkCellDirty(v5, v20, 1) )
  {
LABEL_13:
    SecurityDescriptorNode = -1073741443;
    goto LABEL_14;
  }
  SecurityDescriptorNode = CmpGetSecurityDescriptorNodeEx(v5, v6, v10, v6 >> 31, v2 + 5, 1, (unsigned int *)v8);
  if ( SecurityDescriptorNode < 0 )
    goto LABEL_14;
  (*(void (__fastcall **)(ULONG_PTR, int *))(v5 + 16))(v5, &v21);
  v2 = (_DWORD *)(*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, int *))(v5 + 8))(v5, *(unsigned int *)v8, &v21);
  v13 = v2[1];
  HvMarkCellDirty(v5, (unsigned int)v2[2], 1);
  HvMarkCellDirty(v5, v13, 1);
  SecurityDescriptorNode = 0;
  *(_QWORD *)(a1 + 104) = v8;
LABEL_17:
  if ( v10 )
    (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(v5 + 16))(v5, v16);
  if ( v2 )
    (*(void (__fastcall **)(ULONG_PTR, int *))(v5 + 16))(v5, &v21);
  if ( v4 )
    (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(v5 + 16))(v5, v17);
  return (unsigned int)SecurityDescriptorNode;
}
