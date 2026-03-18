/*
 * XREFs of ?ValidateHistoryBuffers@VIDMM_GLOBAL@@QEAAJPEAPEAU_VIDMM_MULTI_ALLOC@@_K@Z @ 0x1C00B1398
 * Callers:
 *     VidMmValidateHistoryBuffers @ 0x1C0024E10 (VidMmValidateHistoryBuffers.c)
 * Callees:
 *     VidSchMarkDeviceAsError @ 0x1C0001010 (VidSchMarkDeviceAsError.c)
 */

__int64 __fastcall VIDMM_GLOBAL::ValidateHistoryBuffers(VIDMM_GLOBAL *this, struct _VIDMM_MULTI_ALLOC **a2, __int64 a3)
{
  struct _VIDMM_MULTI_ALLOC **v3; // r9
  int *v4; // rbx
  __int64 v5; // rdi
  __int64 v7; // rax
  __int64 v8; // rax

  v3 = &a2[a3];
  while ( 1 )
  {
    if ( a2 == v3 )
      return 0LL;
    v4 = (int *)*a2++;
    v5 = **(_QWORD **)v4;
    if ( (**(_DWORD **)(v5 + 504) & 0x4000) == 0 )
      break;
    if ( v4[38] < 2 )
    {
      v7 = WdLogNewEntry5_WdAssertion(this, a2);
      *(_QWORD *)(v7 + 24) = v4;
      *(_QWORD *)(v7 + 32) = v4[38];
      WdLogEvent5_WdAssertion(v7);
      VidSchMarkDeviceAsError(*(_QWORD *)(*((_QWORD *)v4 + 1) + 32LL));
      return 3221225473LL;
    }
  }
  v8 = WdLogNewEntry5_WdAssertion(this, a2);
  *(_QWORD *)(v8 + 24) = v4;
  *(_QWORD *)(v8 + 32) = v5;
  WdLogEvent5_WdAssertion(v8);
  return 3221225473LL;
}
