/*
 * XREFs of MmAddRangeToCrashDump @ 0x1402AE400
 * Callers:
 *     MmGetDumpRange @ 0x1402AE4F8 (MmGetDumpRange.c)
 *     ExAddPrivateDataToCrashDump @ 0x14031A540 (ExAddPrivateDataToCrashDump.c)
 *     IopLiveDumpMarkDeviceNode @ 0x140579D68 (IopLiveDumpMarkDeviceNode.c)
 *     IopLiveDumpMarkImportantDumpData @ 0x140579DC8 (IopLiveDumpMarkImportantDumpData.c)
 *     IopLiveDumpMarkLoadedModuleList @ 0x140579EB4 (IopLiveDumpMarkLoadedModuleList.c)
 *     IopLiveDumpMarkProcessorData @ 0x140579F74 (IopLiveDumpMarkProcessorData.c)
 *     IopLiveDumpMarkRequiredDumpData @ 0x14057A088 (IopLiveDumpMarkRequiredDumpData.c)
 *     MmAddPrivateDataToCrashDump @ 0x14057D5F8 (MmAddPrivateDataToCrashDump.c)
 * Callees:
 *     MiIsWorkingSetTrimThread @ 0x1400E9540 (MiIsWorkingSetTrimThread.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     MiAddRangeToCrashDump @ 0x1402ADEE8 (MiAddRangeToCrashDump.c)
 */

__int64 __fastcall MmAddRangeToCrashDump(
        __int64 (__fastcall **a1)(_QWORD, __int64, __int64, __int64),
        unsigned __int64 a2,
        __int64 a3)
{
  __int64 (__fastcall **v3)(_QWORD, __int64, __int64, __int64); // r11
  BOOL IsWorkingSetTrimThread; // eax
  int v5; // ecx
  unsigned __int64 v6; // r8
  unsigned __int64 *v7; // r9
  __int64 v8; // r10
  _BYTE v10[8]; // [rsp+30h] [rbp-78h] BYREF
  char v11; // [rsp+38h] [rbp-70h] BYREF
  unsigned __int64 v12; // [rsp+70h] [rbp-38h]
  unsigned __int64 v13; // [rsp+78h] [rbp-30h]
  int v14; // [rsp+80h] [rbp-28h]

  v14 = 0;
  v3 = a1;
  if ( (KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors.Bitmap[0] & 0x100000000000LL) != 0 )
  {
    IsWorkingSetTrimThread = MiIsWorkingSetTrimThread();
    v5 = v14;
    if ( !IsWorkingSetTrimThread )
      v5 = 1;
    v14 = v5;
  }
  v12 = a2;
  v6 = a2 + a3 - 1;
  v13 = v6;
  v7 = (unsigned __int64 *)&v11;
  v8 = 4LL;
  do
  {
    a2 = ((a2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    v6 = ((v6 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    *(v7 - 1) = a2;
    *v7 = v6;
    v7 += 2;
    --v8;
  }
  while ( v8 );
  return MiAddRangeToCrashDump(v3, a2, v6, (__int64)v10, 3);
}
