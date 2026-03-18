/*
 * XREFs of CmpCommitSetValueKeyUoW @ 0x140632124
 * Callers:
 *     CmpTransMgrCommitUoW @ 0x14063367C (CmpTransMgrCommitUoW.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1401CC5F0 (_guard_dispatch_icall.c)
 *     ExAllocatePoolWithTag @ 0x14036E010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     HvpMarkCellDirty @ 0x1405D4FF0 (HvpMarkCellDirty.c)
 *     CmpCleanUpKcbCachedSymlink @ 0x14062DB24 (CmpCleanUpKcbCachedSymlink.c)
 *     CmpSetValueKeyNew @ 0x14062DBC4 (CmpSetValueKeyNew.c)
 *     CmpSetValueKeyExisting @ 0x14062F9C8 (CmpSetValueKeyExisting.c)
 *     CmpFindNameInList @ 0x1406304D4 (CmpFindNameInList.c)
 *     CmpInitializeValueNameString @ 0x14063248C (CmpInitializeValueNameString.c)
 *     CmpGetValueData @ 0x14064E540 (CmpGetValueData.c)
 */

__int64 __fastcall CmpCommitSetValueKeyUoW(__int64 a1, __int64 *a2)
{
  char *Src; // r12
  __int64 v4; // r15
  __int64 v5; // rdx
  PVOID v6; // r13
  __int64 v7; // rax
  ULONG_PTR v8; // rdi
  __int64 v9; // rax
  __int64 v10; // rbx
  unsigned int v11; // eax
  unsigned int v12; // r14d
  PVOID PoolWithTag; // rax
  int v14; // ebx
  __int16 v15; // cx
  __int64 v16; // rcx
  __int64 v17; // rdx
  int v18; // r8d
  char ValueData; // al
  unsigned int v21; // r13d
  __int64 v22; // r8
  size_t Size; // [rsp+28h] [rbp-41h]
  int v24[2]; // [rsp+30h] [rbp-39h]
  unsigned int v25; // [rsp+40h] [rbp-29h] BYREF
  __int64 v26; // [rsp+48h] [rbp-21h] BYREF
  PVOID P; // [rsp+50h] [rbp-19h]
  _DWORD v28[2]; // [rsp+58h] [rbp-11h] BYREF
  _DWORD v29[2]; // [rsp+60h] [rbp-9h] BYREF
  _DWORD v30[2]; // [rsp+68h] [rbp-1h] BYREF
  _QWORD v31[10]; // [rsp+70h] [rbp+7h] BYREF
  char v32; // [rsp+D0h] [rbp+67h]
  char v34; // [rsp+E8h] [rbp+7Fh] BYREF

  v30[1] = 0;
  v28[1] = 0;
  v29[1] = 0;
  Src = 0LL;
  v30[0] = -1;
  v4 = 0LL;
  v5 = *(unsigned int *)(a1 + 92);
  v6 = 0LL;
  v28[0] = -1;
  v29[0] = -1;
  v32 = 0;
  v34 = 0;
  v31[0] = 0LL;
  v31[1] = 0LL;
  v7 = *(_QWORD *)(a1 + 48);
  v26 = 0LL;
  v8 = *(_QWORD *)(v7 + 32);
  v9 = (*(__int64 (__fastcall **)(ULONG_PTR, __int64, _DWORD *))(v8 + 8))(v8, v5, v30);
  v10 = v9;
  if ( !v9 )
    return (unsigned int)-1073741670;
  v11 = *(_DWORD *)(v9 + 4);
  v12 = v11 + 0x80000000;
  if ( v11 < 0x80000000 )
    v12 = v11;
  v25 = v12;
  if ( v12 )
  {
    if ( v11 < 0x80000000 )
    {
      ValueData = CmpGetValueData(
                    v8,
                    *(_DWORD *)(a1 + 92),
                    v10,
                    (unsigned int)&v25,
                    (__int64)&v26,
                    (__int64)&v34,
                    (__int64)v28);
      Src = (char *)v26;
      if ( !ValueData )
        goto LABEL_36;
      v12 = v25;
      v32 = 1;
    }
    else
    {
      Src = (char *)(v10 + 8);
    }
  }
  v4 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, _DWORD *))(v8 + 8))(
         v8,
         *(unsigned int *)(*(_QWORD *)(a1 + 48) + 40LL),
         v29);
  if ( !v4 )
  {
LABEL_36:
    v14 = -1073741670;
    goto LABEL_20;
  }
  if ( HvpMarkCellDirty(v8, *(unsigned int *)(*(_QWORD *)(a1 + 48) + 40LL), 0) )
  {
    *(_DWORD *)(a1 + 72) = *(_DWORD *)(*(_QWORD *)(a1 + 48) + 40LL) >> 31;
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0x8000uLL, 0x62534D43u);
    P = PoolWithTag;
    v6 = PoolWithTag;
    if ( PoolWithTag )
    {
      CmpInitializeValueNameString(v10, v31, PoolWithTag);
      if ( CmpFindNameInList(v8, (unsigned int *)(v4 + 36), (unsigned __int16 *)v31, 0, (unsigned int *)&v26, &v25) )
      {
        if ( *(_DWORD *)(a1 + 68) != 5 || (v21 = v25, v25 == -1) )
        {
          v24[0] = v12;
          v14 = CmpSetValueKeyNew(
                  v8,
                  v4,
                  (__int64)v31,
                  (unsigned int)v26,
                  *(_DWORD *)(v10 + 12),
                  (__int64)Src,
                  *(size_t *)v24,
                  *(_DWORD *)(a1 + 72));
        }
        else
        {
          v26 = 0xFFFFFFFFLL;
          v22 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, __int64 *))(v8 + 8))(v8, v25, &v26);
          if ( !v22 )
          {
            v14 = -1073741670;
LABEL_19:
            v6 = P;
            goto LABEL_20;
          }
          LODWORD(Size) = v12;
          v14 = CmpSetValueKeyExisting(v8, v21, v22, *(_DWORD *)(v10 + 12), Src, Size, *(_DWORD *)(a1 + 72));
          (*(void (__fastcall **)(ULONG_PTR, __int64 *))(v8 + 16))(v8, &v26);
        }
        if ( v14 >= 0 )
        {
          HvpMarkCellDirty(v8, *(unsigned int *)(a1 + 92), 0);
          v15 = v31[0];
          if ( *(_DWORD *)(v4 + 60) < (unsigned int)LOWORD(v31[0]) )
          {
            *(_DWORD *)(v4 + 60) = LOWORD(v31[0]);
            *(_WORD *)(*(_QWORD *)(a1 + 48) + 178LL) = v15;
          }
          if ( *(_DWORD *)(v4 + 64) < v12 )
          {
            *(_DWORD *)(v4 + 64) = v12;
            *(_DWORD *)(*(_QWORD *)(a1 + 48) + 180LL) = v12;
          }
          ++*(_QWORD *)(*(_QWORD *)(a1 + 48) + 304LL);
          v16 = *a2;
          *(_QWORD *)(v4 + 4) = *a2;
          *(_QWORD *)(*(_QWORD *)(a1 + 48) + 168LL) = v16;
          CmpCleanUpKcbCachedSymlink(*(_QWORD *)(a1 + 48));
          v17 = *(_QWORD *)(a1 + 48);
          v18 = *(_DWORD *)(v4 + 40);
          *(_DWORD *)(v17 + 96) = *(_DWORD *)(v4 + 36);
          *(_DWORD *)(v17 + 100) = v18;
        }
        goto LABEL_19;
      }
    }
    goto LABEL_36;
  }
  v14 = -1073741443;
LABEL_20:
  if ( Src && v32 )
  {
    if ( v34 )
      ExFreePoolWithTag(Src, 0);
    else
      (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(v8 + 16))(v8, v28);
  }
  if ( v6 )
    ExFreePoolWithTag(v6, 0);
  if ( v4 )
    (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(v8 + 16))(v8, v29);
  (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(v8 + 16))(v8, v30);
  return (unsigned int)v14;
}
