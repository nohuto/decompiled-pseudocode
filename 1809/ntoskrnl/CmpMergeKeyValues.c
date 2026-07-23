/*
 * XREFs of CmpMergeKeyValues @ 0x1407FECE0
 * Callers:
 *     CmpCopySyncTree2 @ 0x1407FDE04 (CmpCopySyncTree2.c)
 *     CmSaveMergedKeys @ 0x1408034FC (CmSaveMergedKeys.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1401C6030 (_guard_dispatch_icall.c)
 *     ExAllocatePoolWithTag @ 0x14034C010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     CmpAddValueToListEx @ 0x1405AE8B0 (CmpAddValueToListEx.c)
 *     CmpInitializeValueNameString @ 0x1405B046C (CmpInitializeValueNameString.c)
 *     CmpFindNameInList @ 0x1405D162C (CmpFindNameInList.c)
 *     CmpCopyValue @ 0x1407FE584 (CmpCopyValue.c)
 *     CmpSyncKeyValues @ 0x1407FF6DC (CmpSyncKeyValues.c)
 */

char __fastcall CmpMergeKeyValues(__int64 a1, __int64 a2, _DWORD *a3, ULONG_PTR a4, unsigned int a5, __int64 a6)
{
  char v7; // bl
  __int64 v9; // rax
  unsigned int v10; // ecx
  unsigned int v11; // ecx
  unsigned int *v12; // r13
  _WORD *PoolWithTag; // rax
  unsigned int v14; // r14d
  _WORD *v15; // r12
  unsigned int *v16; // rsi
  unsigned int v17; // r15d
  ULONG_PTR v18; // rax
  bool v19; // zf
  void (__fastcall *v20)(__int64, _DWORD *); // rax
  int v21; // eax
  _DWORD v23[2]; // [rsp+40h] [rbp-20h] BYREF
  _DWORD v24[2]; // [rsp+48h] [rbp-18h] BYREF
  _QWORD v25[2]; // [rsp+50h] [rbp-10h] BYREF
  int v26; // [rsp+A8h] [rbp+48h]
  unsigned int v27; // [rsp+B0h] [rbp+50h] BYREF
  ULONG_PTR v28; // [rsp+B8h] [rbp+58h]

  v28 = a4;
  v24[1] = 0;
  v23[1] = 0;
  v7 = 0;
  v25[0] = 0LL;
  v25[1] = 0LL;
  v9 = a6;
  v24[0] = -1;
  v23[0] = -1;
  v10 = a3[15];
  if ( *(_DWORD *)(a6 + 60) < v10 )
    *(_DWORD *)(a6 + 60) = v10;
  v11 = a3[16];
  if ( *(_DWORD *)(v9 + 64) < v11 )
    *(_DWORD *)(v9 + 64) = v11;
  v12 = (unsigned int *)(v9 + 36);
  if ( *(_DWORD *)(v9 + 36) )
  {
    v14 = a3[9];
    if ( v14 )
    {
      PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0x7FFFuLL, 0x20204D43u);
      v15 = PoolWithTag;
      if ( !PoolWithTag )
        return (char)PoolWithTag;
      v26 = a5 >> 31;
      v16 = (unsigned int *)(*(__int64 (__fastcall **)(__int64, _QWORD, _DWORD *))(a1 + 8))(
                              a1,
                              (unsigned int)a3[10],
                              v24);
      if ( v16 )
      {
        v17 = 0;
        while ( 1 )
        {
          v18 = (*(__int64 (__fastcall **)(__int64, _QWORD, _DWORD *))(a1 + 8))(a1, *v16, v23);
          if ( !v18 )
            break;
          CmpInitializeValueNameString(v18, (__int64)v25, v15);
          v19 = !CmpFindNameInList(v28, (int)v12, (int)v25, 0, (__int64)&v27, (__int64)&a6);
          v20 = *(void (__fastcall **)(__int64, _DWORD *))(a1 + 16);
          if ( v19 )
          {
            v20(a1, v23);
            break;
          }
          v20(a1, v23);
          if ( (_DWORD)a6 == -1 )
          {
            v21 = CmpCopyValue(a1, *v16, v28, v26);
            if ( v21 == -1 || (int)CmpAddValueToListEx(v28, v21, v27, v26, v12, 1) < 0 )
              break;
          }
          ++v17;
          ++v16;
          if ( v17 >= v14 )
          {
            v7 = 1;
            break;
          }
        }
        (*(void (__fastcall **)(__int64, _DWORD *))(a1 + 16))(a1, v24);
      }
      ExFreePoolWithTag(v15, 0);
    }
    else
    {
      v7 = 1;
    }
    LOBYTE(PoolWithTag) = v7;
    return (char)PoolWithTag;
  }
  LOBYTE(PoolWithTag) = CmpSyncKeyValues(a1, a2, a3, a4, a5);
  return (char)PoolWithTag;
}
