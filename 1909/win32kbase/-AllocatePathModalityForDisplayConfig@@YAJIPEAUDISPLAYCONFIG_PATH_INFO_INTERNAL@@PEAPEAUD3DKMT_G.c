/*
 * XREFs of ?AllocatePathModalityForDisplayConfig@@YAJIPEAUDISPLAYCONFIG_PATH_INFO_INTERNAL@@PEAPEAUD3DKMT_GETPATHSMODALITY@@@Z @ 0x1C0126838
 * Callers:
 *     DrvSetDisplayConfig @ 0x1C0048030 (DrvSetDisplayConfig.c)
 *     DrvFunctionalizeDisplayConfig @ 0x1C012B584 (DrvFunctionalizeDisplayConfig.c)
 * Callees:
 *     ?AllocPathsModality@@YAPEAUD3DKMT_GETPATHSMODALITY@@G@Z @ 0x1C0048D88 (-AllocPathsModality@@YAPEAUD3DKMT_GETPATHSMODALITY@@G@Z.c)
 */

__int64 __fastcall AllocatePathModalityForDisplayConfig(
        __int64 a1,
        struct DISPLAYCONFIG_PATH_INFO_INTERNAL *a2,
        struct D3DKMT_GETPATHSMODALITY **a3)
{
  unsigned int v3; // ebx
  struct DISPLAYCONFIG_PATH_INFO_INTERNAL *v5; // rdi
  __int64 v6; // r9
  __int64 v7; // rax
  struct D3DKMT_GETPATHSMODALITY *v8; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // rax
  __int64 v14; // rax

  v3 = 0;
  v5 = a2;
  if ( !(_DWORD)a1 )
    goto LABEL_10;
  v6 = (unsigned int)a1;
  do
  {
    v7 = *(_QWORD *)a2;
    a1 = v3++;
    a2 = (struct DISPLAYCONFIG_PATH_INFO_INTERNAL *)((char *)a2 + 200);
    if ( v7 >= 0 )
      v3 = a1;
    --v6;
  }
  while ( v6 );
  if ( v3 )
  {
    v8 = AllocPathsModality(v3);
    *a3 = v8;
    if ( v8 )
    {
      return 0LL;
    }
    else
    {
      v12 = WdLogNewEntry5_WdError(v10, v9, v11);
      *(_QWORD *)(v12 + 24) = v3;
      WdLogEvent5_WdError(v12);
      return 3221225495LL;
    }
  }
  else
  {
LABEL_10:
    v14 = WdLogNewEntry5_WdError(a1, a2, a3);
    *(_QWORD *)(v14 + 24) = v5;
    WdLogEvent5_WdError(v14);
    return 3221225485LL;
  }
}
