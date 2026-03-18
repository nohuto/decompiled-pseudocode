/*
 * XREFs of MiInitializeSystemWorkingSetList @ 0x1407400C8
 * Callers:
 *     MiSessionCreate @ 0x14073FA18 (MiSessionCreate.c)
 *     MiInitializeSystemCache @ 0x14074E604 (MiInitializeSystemCache.c)
 *     MiInitializeSystemPtes @ 0x1409EE400 (MiInitializeSystemPtes.c)
 *     MiBuildPagedPool @ 0x1409EE5C8 (MiBuildPagedPool.c)
 *     MiInitSystem @ 0x1409F0E88 (MiInitSystem.c)
 *     MiInitializeNonPagedPool @ 0x1409F18B4 (MiInitializeNonPagedPool.c)
 * Callees:
 *     MiChargeResident @ 0x1400A75A8 (MiChargeResident.c)
 *     MiInitializeWorkingSetList @ 0x1400E55C0 (MiInitializeWorkingSetList.c)
 *     MiAllowWorkingSetExpansion @ 0x1400E5724 (MiAllowWorkingSetExpansion.c)
 *     MiTranslateWsType @ 0x1400F1A38 (MiTranslateWsType.c)
 */

__int64 __fastcall MiInitializeSystemWorkingSetList(ULONG_PTR *a1, __int64 a2, int a3, __int64 a4)
{
  int v8; // eax
  __int64 v9; // rdx
  __int64 v10; // r15
  unsigned __int64 v11; // r14
  __int64 v12; // r13
  __int64 *v13; // rbp

  if ( a3 == 1 )
  {
    v13 = (__int64 *)qword_1404659C8;
LABEL_8:
    *(_DWORD *)a2 = 0;
    *(_WORD *)(a2 + 174) = *(_WORD *)a1;
    MiInitializeWorkingSetList(a2, (__int64)v13, a3, a4);
    MiAllowWorkingSetExpansion(a2);
    return 1LL;
  }
  v8 = MiTranslateWsType(a3);
  if ( v8 > 2 )
  {
    *(_BYTE *)(v9 + 184) ^= (*(_BYTE *)(v9 + 184) ^ a3) & 7;
    *(_DWORD *)v9 = 0;
    *(_WORD *)(v9 + 174) = *(_WORD *)a1;
    return 1LL;
  }
  v10 = v8;
  v11 = (-(__int64)(a1[986] < 0x4000) & 0xFFFFFFFFFFFFFF20uLL) + 256;
  v12 = 5LL * v8;
  v13 = &MiState[5 * v8 + 845];
  if ( (unsigned int)MiChargeResident(a1, v11, 20LL) )
  {
    if ( a1 != &MiSystemPartition )
    {
      v13 = (__int64 *)&a1[v12 + 1048];
      a4 = MiState[40 * v10 + 1227];
    }
    *(_QWORD *)(a2 + 112) = v11;
    goto LABEL_8;
  }
  return 0LL;
}
