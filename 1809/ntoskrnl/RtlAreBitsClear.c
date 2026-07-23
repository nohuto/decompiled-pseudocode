/*
 * XREFs of RtlAreBitsClear @ 0x14000F1D0
 * Callers:
 *     HvGetHiveLogFileStatus @ 0x1405A72C8 (HvGetHiveLogFileStatus.c)
 *     MiReturnPageTablePageCommitment @ 0x1405ED380 (MiReturnPageTablePageCommitment.c)
 *     MiCommitPageTablesForVad @ 0x1405EDBB0 (MiCommitPageTablesForVad.c)
 *     CmpMountPreloadedHives @ 0x1407369D0 (CmpMountPreloadedHives.c)
 *     CmpLoadHiveThread @ 0x140736D20 (CmpLoadHiveThread.c)
 *     HvIsRangeDirty @ 0x140802124 (HvIsRangeDirty.c)
 * Callees:
 *     <none>
 */

BOOLEAN __stdcall RtlAreBitsClear(PRTL_BITMAP BitMapHeader, ULONG StartingIndex, ULONG Length)
{
  char v3; // r9
  unsigned int v4; // r10d
  BOOLEAN result; // al
  unsigned int *Buffer; // rcx
  unsigned int *v7; // rdx
  unsigned int v8; // ebx
  unsigned int *v9; // r11
  unsigned int *v10; // rdx

  v3 = StartingIndex;
  v4 = StartingIndex + Length - 1;
  if ( v4 >= BitMapHeader->SizeOfBitMap )
    return 0;
  if ( Length <= 1 )
  {
    if ( Length == 1 )
      return !_bittest((const signed __int32 *)BitMapHeader->Buffer, StartingIndex);
    return 0;
  }
  Buffer = BitMapHeader->Buffer;
  v7 = &Buffer[(unsigned __int64)StartingIndex >> 5];
  v8 = *v7;
  v9 = &Buffer[(unsigned __int64)v4 >> 5];
  if ( v7 == v9 )
    return (v8 & (0xFFFFFFFF >> (32 - Length) << v3)) == 0;
  if ( (v8 & (-1 << v3)) != 0 )
    return 0;
  v10 = v7 + 1;
  if ( v10 == v9 )
    return (*v10 & (0xFFFFFFFF >> ~(_BYTE)v4)) == 0;
  result = 0;
  while ( !*v10 )
  {
    if ( ++v10 == v9 )
      return (*v10 & (0xFFFFFFFF >> ~(_BYTE)v4)) == 0;
  }
  return result;
}
