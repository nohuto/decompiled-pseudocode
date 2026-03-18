/*
 * XREFs of CmpCommitDeleteValueKeyUoW @ 0x1406DCE2C
 * Callers:
 *     CmpTransMgrCommitUoW @ 0x14063367C (CmpTransMgrCommitUoW.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1401CC5F0 (_guard_dispatch_icall.c)
 *     ExAllocatePoolWithTag @ 0x14036E010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     CmpCleanUpKcbCachedSymlink @ 0x14062DB24 (CmpCleanUpKcbCachedSymlink.c)
 *     CmpFreeValue @ 0x14062ED1C (CmpFreeValue.c)
 *     CmpMarkValueDataDirty @ 0x14062FECC (CmpMarkValueDataDirty.c)
 *     CmpFindNameInList @ 0x1406304D4 (CmpFindNameInList.c)
 *     CmpInitializeValueNameString @ 0x14063248C (CmpInitializeValueNameString.c)
 *     CmpRemoveValueFromList @ 0x1406DD06C (CmpRemoveValueFromList.c)
 *     HvMarkCellDirty @ 0x14083A4F8 (HvMarkCellDirty.c)
 */

__int64 __fastcall CmpCommitDeleteValueKeyUoW(__int64 a1, __int64 *a2, __int64 a3)
{
  __int64 v4; // rax
  ULONG_PTR v5; // rdi
  __int64 v6; // rax
  __int64 v7; // r14
  __int64 v8; // rdx
  unsigned int *v9; // r13
  __int64 (__fastcall *v10)(ULONG_PTR, __int64, _DWORD *); // rax
  __int64 v11; // r12
  PVOID PoolWithTag; // rax
  int v13; // ebx
  __int64 v14; // rdx
  __int64 v15; // rcx
  int v16; // edx
  _DWORD v18[2]; // [rsp+30h] [rbp-30h] BYREF
  _DWORD v19[2]; // [rsp+38h] [rbp-28h] BYREF
  PVOID P; // [rsp+40h] [rbp-20h]
  _QWORD v21[3]; // [rsp+48h] [rbp-18h] BYREF
  ULONG_PTR BugCheckParameter3; // [rsp+A0h] [rbp+40h] BYREF
  __int64 *v23; // [rsp+A8h] [rbp+48h]
  __int64 v24; // [rsp+B0h] [rbp+50h]
  unsigned int v25; // [rsp+B8h] [rbp+58h] BYREF

  v24 = a3;
  v23 = a2;
  v19[0] = -1;
  v18[0] = -1;
  v19[1] = 0;
  v18[1] = 0;
  v21[0] = 0LL;
  v21[1] = 0LL;
  v4 = *(_QWORD *)(a1 + 48);
  v5 = *(_QWORD *)(v4 + 32);
  v6 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, _DWORD *))(v5 + 8))(v5, *(unsigned int *)(v4 + 40), v19);
  v7 = v6;
  if ( !v6 )
    return 3221225626LL;
  v8 = *(unsigned int *)(a1 + 88);
  v9 = (unsigned int *)(v6 + 36);
  v10 = *(__int64 (__fastcall **)(ULONG_PTR, __int64, _DWORD *))(v5 + 8);
  LODWORD(BugCheckParameter3) = -1;
  v11 = v10(v5, v8, v18);
  if ( v11 )
  {
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0x8000uLL, 0x62534D43u);
    P = PoolWithTag;
    if ( PoolWithTag )
    {
      CmpInitializeValueNameString(v11, (__int64)v21, (__int64)PoolWithTag);
      if ( CmpFindNameInList(v5, v9, (unsigned __int16 *)v21, 0, &v25, &BugCheckParameter3)
        && (_DWORD)BugCheckParameter3 != -1
        && ((*(void (__fastcall **)(ULONG_PTR, _DWORD *))(v5 + 16))(v5, v18),
            (v11 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, _DWORD *))(v5 + 8))(
                     v5,
                     (unsigned int)BugCheckParameter3,
                     v18)) != 0) )
      {
        if ( (unsigned __int8)HvMarkCellDirty(v5, *(unsigned int *)(*(_QWORD *)(a1 + 48) + 40LL), 0LL)
          && (unsigned __int8)HvMarkCellDirty(v5, *(unsigned int *)(v7 + 40), 0LL)
          && (unsigned __int8)HvMarkCellDirty(v5, (unsigned int)BugCheckParameter3, 0LL)
          && CmpMarkValueDataDirty(v5, v11) )
        {
          v13 = CmpRemoveValueFromList(v5);
          if ( v13 >= 0 )
          {
            CmpFreeValue(v5, (unsigned int)BugCheckParameter3);
            v14 = *v23;
            *(_QWORD *)(v7 + 4) = *v23;
            *(_QWORD *)(*(_QWORD *)(a1 + 48) + 168LL) = v14;
            if ( !*v9 )
            {
              *(_QWORD *)(v7 + 60) = 0LL;
              *(_WORD *)(*(_QWORD *)(a1 + 48) + 178LL) = 0;
              *(_DWORD *)(*(_QWORD *)(a1 + 48) + 180LL) = 0;
            }
            ++*(_QWORD *)(*(_QWORD *)(a1 + 48) + 304LL);
            CmpCleanUpKcbCachedSymlink(*(_QWORD *)(a1 + 48));
            v15 = *(_QWORD *)(a1 + 48);
            v16 = *(_DWORD *)(v7 + 40);
            *(_DWORD *)(v15 + 96) = *v9;
            *(_DWORD *)(v15 + 100) = v16;
          }
        }
        else
        {
          v13 = -1073741443;
        }
      }
      else
      {
        v13 = -1073741670;
      }
      ExFreePoolWithTag(P, 0);
    }
    else
    {
      v13 = -1073741670;
    }
    if ( v11 )
      (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(v5 + 16))(v5, v18);
  }
  else
  {
    v13 = -1073741670;
  }
  (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(v5 + 16))(v5, v19);
  return (unsigned int)v13;
}
