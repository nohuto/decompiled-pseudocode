/*
 * XREFs of NtLoadKey3 @ 0x1405B03B0
 * Callers:
 *     <none>
 * Callees:
 *     CmLoadDifferencingKey @ 0x140638BDC (CmLoadDifferencingKey.c)
 *     ExRaiseDatatypeMisalignment @ 0x140913EC0 (ExRaiseDatatypeMisalignment.c)
 */

NTSTATUS __cdecl NtLoadKey3(
        POBJECT_ATTRIBUTES TargetKey,
        POBJECT_ATTRIBUTES SourceFile,
        ULONG Flags,
        PCM_EXTENDED_PARAMETER ExtendedParameters,
        ULONG ExtendedParameterCount,
        ACCESS_MASK DesiredAccess,
        PHANDLE RootHandle,
        PVOID Reserved)
{
  int v9; // esi
  KPROCESSOR_MODE PreviousMode; // bl
  int ULong64; // r10d
  int v13; // ecx
  __int128 v14; // xmm0
  int v16; // [rsp+38h] [rbp-60h]
  int v17; // [rsp+60h] [rbp-38h]
  int v18; // [rsp+68h] [rbp-30h]
  ULONG64 v19; // [rsp+70h] [rbp-28h]
  ULONG64 v20; // [rsp+78h] [rbp-20h]

  v9 = (int)TargetKey;
  v20 = 0LL;
  v19 = 0LL;
  v17 = 0;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  ULong64 = 0;
  v18 = 0;
  v13 = 0;
  while ( ExtendedParameterCount )
  {
    if ( PreviousMode == 1 )
    {
      if ( ((unsigned __int8)ExtendedParameters & 7) != 0 )
        ExRaiseDatatypeMisalignment();
      v13 = v17;
      ULong64 = v18;
    }
    v14 = *(_OWORD *)&ExtendedParameters->0;
    if ( (unsigned __int8)*(_OWORD *)&ExtendedParameters->0 == 1LL )
    {
      if ( (v13 & 2) != 0 )
        return -1073741582;
      ULong64 = ExtendedParameters->ULong64;
      v18 = ULong64;
      v13 |= 2u;
    }
    else if ( (unsigned __int8)v14 == 2LL )
    {
      if ( (v13 & 4) != 0 )
        return -1073741582;
      v20 = ExtendedParameters->ULong64;
      v13 |= 4u;
    }
    else
    {
      if ( (unsigned __int8)v14 != 3LL )
        return -1073741582;
      if ( (v13 & 8) != 0 )
        return -1073741582;
      v19 = ExtendedParameters->ULong64;
      v13 |= 8u;
    }
    v17 = v13;
    ++ExtendedParameters;
    --ExtendedParameterCount;
  }
  return CmLoadDifferencingKey(
           v9,
           (int)SourceFile,
           Flags | 0x8000,
           ULong64,
           v20,
           DesiredAccess,
           (__int64)RootHandle,
           v16,
           0LL,
           0,
           v19,
           PreviousMode);
}
