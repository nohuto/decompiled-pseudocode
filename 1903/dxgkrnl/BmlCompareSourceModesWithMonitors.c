/*
 * XREFs of BmlCompareSourceModesWithMonitors @ 0x1C00DCCFC
 * Callers:
 *     BmlCompareSourceModes @ 0x1C00DB7F8 (BmlCompareSourceModes.c)
 * Callees:
 *     ??$DIFF@H@@YAHHH@Z @ 0x1C0003AC0 (--$DIFF@H@@YAHHH@Z.c)
 *     ?BmlGetScaledAspectRatio@@YAHAEBU_D3DKMDT_2DREGION@@@Z @ 0x1C00DBE2C (-BmlGetScaledAspectRatio@@YAHAEBU_D3DKMDT_2DREGION@@@Z.c)
 *     ??$BmlCompareValues@I@@YA?AW4BML_COMPARISON_RESULT@@II@Z @ 0x1C00DBE58 (--$BmlCompareValues@I@@YA-AW4BML_COMPARISON_RESULT@@II@Z.c)
 *     ??$BmlCompareValues@H@@YA?AW4BML_COMPARISON_RESULT@@HH@Z @ 0x1C00DBE6C (--$BmlCompareValues@H@@YA-AW4BML_COMPARISON_RESULT@@HH@Z.c)
 *     BmlGetModeCategoryForRegion @ 0x1C00DCCA8 (BmlGetModeCategoryForRegion.c)
 */

__int64 __fastcall BmlCompareSourceModesWithMonitors(
        __int64 a1,
        unsigned __int16 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5)
{
  __int64 v6; // r13
  __int64 v7; // rdx
  __int64 v9; // rdi
  __int64 v10; // rcx
  __int64 v11; // rsi
  struct _D3DKMDT_2DREGION *v12; // r13
  struct _D3DKMDT_2DREGION *v13; // r15
  unsigned int ModeCategoryForRegion; // ebx
  unsigned int v15; // eax
  __int64 result; // rax
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  unsigned int v20; // ebx
  unsigned int v21; // eax
  __int64 v22; // rdx
  _QWORD *v23; // rax
  _QWORD *v24; // rax
  int v25; // edi
  int ScaledAspectRatio; // eax
  int v27; // ebx
  __int64 v28; // rdx
  int v29; // eax
  int v30; // eax
  __int64 v31; // [rsp+60h] [rbp+8h]
  __int64 v32; // [rsp+70h] [rbp+18h]

  v6 = a2;
  v7 = 104LL * a2;
  v31 = v6;
  v32 = v7;
  v9 = v7 + a1;
  v10 = *(unsigned int *)(v7 + a1 + 52);
  v11 = v7 + a1;
  if ( *(_DWORD *)(v7 + a1 + 36) && *(_DWORD *)(v11 + 40) )
  {
    v12 = (struct _D3DKMDT_2DREGION *)(a5 + 76);
    v13 = (struct _D3DKMDT_2DREGION *)(a4 + 76);
    ModeCategoryForRegion = BmlGetModeCategoryForRegion((int *)(a5 + 76), (_DWORD *)(v11 + 36));
    v15 = BmlGetModeCategoryForRegion((int *)v13, (_DWORD *)(v11 + 36));
    result = BmlCompareValues<unsigned int>(v15, ModeCategoryForRegion);
    if ( (_DWORD)result )
      return result;
  }
  else
  {
    v23 = (_QWORD *)WdLogNewEntry5_WdWarning(v10, v7, a3);
    v23[3] = a1;
    v23[4] = v6;
    v23[5] = *(unsigned int *)(v11 + 36);
    v23[6] = *(unsigned int *)(v11 + 40);
    WdLogEvent5_WdWarning(v23);
    v13 = (struct _D3DKMDT_2DREGION *)(a4 + 76);
    v12 = (struct _D3DKMDT_2DREGION *)(a5 + 76);
  }
  if ( *(_DWORD *)(v9 + 52) && *(_DWORD *)(v9 + 56) )
  {
    v20 = BmlGetModeCategoryForRegion((int *)v13, (_DWORD *)(v9 + 52));
    v21 = BmlGetModeCategoryForRegion((int *)v12, (_DWORD *)(v9 + 52));
    result = BmlCompareValues<unsigned int>(v20, v21);
    if ( (_DWORD)result )
      return result;
    if ( v20 == 3 )
    {
      v25 = *(_DWORD *)(v32 + a1 + 60);
      ScaledAspectRatio = BmlGetScaledAspectRatio(v13, v22);
      v27 = DIFF<int>(ScaledAspectRatio, v25);
      v29 = BmlGetScaledAspectRatio(v12, v28);
      v30 = DIFF<int>(v29, v25);
      return BmlCompareValues<int>(v30, v27);
    }
  }
  else
  {
    v24 = (_QWORD *)WdLogNewEntry5_WdWarning(v18, v17, v19);
    v24[4] = v31;
    v24[3] = a1;
    v24[5] = *(unsigned int *)(v9 + 52);
    v24[6] = *(unsigned int *)(v9 + 56);
    WdLogEvent5_WdWarning(v24);
  }
  return 0LL;
}
