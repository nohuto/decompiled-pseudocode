/*
 * XREFs of CmpGetValueData @ 0x14064E540
 * Callers:
 *     CmpCompareNewValueDataAgainstKCBCache @ 0x14062D2F0 (CmpCompareNewValueDataAgainstKCBCache.c)
 *     CmQueryMultipleValueKey @ 0x140630040 (CmQueryMultipleValueKey.c)
 *     CmpCommitSetValueKeyUoW @ 0x140632124 (CmpCommitSetValueKeyUoW.c)
 *     CmAddLogForAction @ 0x140633958 (CmAddLogForAction.c)
 *     CmpQueryKeyValueData @ 0x14064DFB0 (CmpQueryKeyValueData.c)
 *     CmpGetSymbolicLinkTarget @ 0x140655BB0 (CmpGetSymbolicLinkTarget.c)
 *     CmpLightWeightPrepareSetValueKeyUoW @ 0x1406E23D8 (CmpLightWeightPrepareSetValueKeyUoW.c)
 *     CmpValueToData @ 0x140765554 (CmpValueToData.c)
 *     CmQueryMultipleValueForLayeredKey @ 0x1408280E4 (CmQueryMultipleValueForLayeredKey.c)
 *     CmpCopyValue @ 0x1408367E8 (CmpCopyValue.c)
 *     CmpPreserveSystemHiveData @ 0x140837104 (CmpPreserveSystemHiveData.c)
 *     CmpGetValueForAudit @ 0x1408399E8 (CmpGetValueForAudit.c)
 *     CmpFindTagIndex @ 0x140A12710 (CmpFindTagIndex.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1401CC5F0 (_guard_dispatch_icall.c)
 *     memmove @ 0x1401D6880 (memmove.c)
 *     ExAllocatePoolWithTag @ 0x14036E010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 */

bool __fastcall CmpGetValueData(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        unsigned int *a4,
        __int64 a5,
        __int64 a6,
        __int64 a7)
{
  _BYTE *v7; // r14
  unsigned __int16 v8; // bp
  __int64 *v9; // rsi
  unsigned int v12; // eax
  unsigned int v13; // ecx
  __int64 v14; // rax
  __int64 v16; // rdx
  char *PoolWithTag; // r15
  __int64 (__fastcall *v18)(__int64, __int64, int *); // rax
  char v19; // r12
  __int64 v20; // rax
  __int64 v21; // r13
  unsigned int v22; // edi
  const void *v23; // rax
  size_t v24; // r8
  int v25; // [rsp+80h] [rbp+18h] BYREF
  int v26; // [rsp+84h] [rbp+1Ch]
  __int64 v27; // [rsp+88h] [rbp+20h]

  v7 = (_BYTE *)a6;
  v8 = 0;
  v9 = (__int64 *)a5;
  *(_BYTE *)a6 = 0;
  *v9 = 0LL;
  v12 = *(_DWORD *)(a3 + 4);
  v13 = v12 + 0x80000000;
  if ( v12 < 0x80000000 )
    v13 = *(_DWORD *)(a3 + 4);
  *a4 = v13;
  if ( *(_DWORD *)(a3 + 4) < 0x80000000 )
  {
    if ( *(_DWORD *)(a1 + 212) < 4u || v13 - 16345 > 0x7FFFC026 )
    {
      v14 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64))(a1 + 8))(a1, *(unsigned int *)(a3 + 8), a7);
      *v9 = v14;
      return v14 != 0;
    }
    v16 = *(unsigned int *)(a3 + 8);
    v26 = 0;
    PoolWithTag = 0LL;
    v18 = *(__int64 (__fastcall **)(__int64, __int64, int *))(a1 + 8);
    v19 = 1;
    v25 = -1;
    a6 = 0xFFFFFFFFLL;
    a5 = 0xFFFFFFFFLL;
    v20 = v18(a1, v16, &v25);
    v21 = v20;
    if ( !v20 )
      return 0;
    v27 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64 *))(a1 + 8))(a1, *(unsigned int *)(v20 + 4), &a5);
    if ( !v27 )
    {
      v19 = 0;
      goto LABEL_19;
    }
    v22 = *(_DWORD *)(a3 + 4);
    PoolWithTag = (char *)ExAllocatePoolWithTag(PagedPool, v22, 0x64764D43u);
    if ( PoolWithTag )
    {
      if ( !*(_WORD *)(v21 + 2) )
      {
LABEL_18:
        (*(void (__fastcall **)(__int64, __int64 *))(a1 + 16))(a1, &a5);
LABEL_19:
        (*(void (__fastcall **)(__int64, int *))(a1 + 16))(a1, &v25);
        if ( v19 )
        {
          *v9 = (__int64)PoolWithTag;
          *v7 = 1;
          return 1;
        }
        if ( PoolWithTag )
          ExFreePoolWithTag(PoolWithTag, 0);
        return 0;
      }
      while ( 1 )
      {
        v23 = (const void *)(*(__int64 (__fastcall **)(__int64, _QWORD, __int64 *))(a1 + 8))(
                              a1,
                              *(unsigned int *)(v27 + 4LL * v8),
                              &a6);
        if ( !v23 )
          break;
        v24 = v22;
        if ( v22 > 0x3FD8 )
          v24 = 16344LL;
        memmove(&PoolWithTag[16344 * v8], v23, v24);
        v22 -= 16344;
        (*(void (__fastcall **)(__int64, __int64 *))(a1 + 16))(a1, &a6);
        if ( ++v8 >= *(_WORD *)(v21 + 2) )
          goto LABEL_18;
      }
    }
    v19 = 0;
    goto LABEL_18;
  }
  if ( (*(__int64 (__fastcall **)(__int64, __int64, __int64))(a1 + 8))(a1, a2, a7) )
  {
    *v9 = a3 + 8;
    return 1;
  }
  return 0;
}
