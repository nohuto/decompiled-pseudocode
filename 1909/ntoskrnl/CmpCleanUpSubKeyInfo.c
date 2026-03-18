/*
 * XREFs of CmpCleanUpSubKeyInfo @ 0x140634F00
 * Callers:
 *     CmpCreateTombstone @ 0x14028097C (CmpCreateTombstone.c)
 *     CmpCreateChild @ 0x140634398 (CmpCreateChild.c)
 *     CmpRebuildKcbCacheFromNode @ 0x140634DF8 (CmpRebuildKcbCacheFromNode.c)
 *     CmDeleteKey @ 0x14063B4FC (CmDeleteKey.c)
 *     CmpCompleteUnloadKey @ 0x1406B9974 (CmpCompleteUnloadKey.c)
 *     CmpCommitDeleteKeyUoW @ 0x1406F9BA0 (CmpCommitDeleteKeyUoW.c)
 *     CmpInvalidateSubtreeWorker @ 0x1407293E0 (CmpInvalidateSubtreeWorker.c)
 *     CmRenameKey @ 0x140827C5C (CmRenameKey.c)
 *     CmRestoreKey @ 0x140839F74 (CmRestoreKey.c)
 *     CmpLightWeightCommitDeleteKeyUoW @ 0x14083C694 (CmpLightWeightCommitDeleteKeyUoW.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1401CD170 (_guard_dispatch_icall.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 */

__int16 __fastcall CmpCleanUpSubKeyInfo(__int64 a1, char a2)
{
  int v3; // eax
  __int16 result; // ax
  __int64 v6; // rdx
  __int64 v7; // rax
  int v8; // [rsp+30h] [rbp+8h] BYREF
  int v9; // [rsp+34h] [rbp+Ch]

  v8 = -1;
  v9 = 0;
  v3 = *(_DWORD *)(a1 + 8);
  if ( (v3 & 7) != 0 )
  {
    if ( (v3 & 4) != 0 )
      ExFreePoolWithTag(*(PVOID *)(a1 + 112), 0x6E494D43u);
    LOWORD(v3) = *(_WORD *)(a1 + 8) & 0xFFF8;
  }
  result = v3 | 0x40;
  *(_WORD *)(a1 + 8) = result;
  if ( a2 )
  {
    v6 = *(unsigned int *)(a1 + 40);
    if ( (_DWORD)v6 != -1 )
    {
      v7 = (*(__int64 (__fastcall **)(_QWORD, __int64, int *))(*(_QWORD *)(a1 + 32) + 8LL))(
             *(_QWORD *)(a1 + 32),
             v6,
             &v8);
      *(_WORD *)(a1 + 8) &= ~0x40u;
      *(_DWORD *)(a1 + 112) = *(_DWORD *)(v7 + 20) + *(_DWORD *)(v7 + 24);
      return (*(__int64 (__fastcall **)(_QWORD, int *))(*(_QWORD *)(a1 + 32) + 16LL))(*(_QWORD *)(a1 + 32), &v8);
    }
  }
  return result;
}
