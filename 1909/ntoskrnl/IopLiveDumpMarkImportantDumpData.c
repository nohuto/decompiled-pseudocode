/*
 * XREFs of IopLiveDumpMarkImportantDumpData @ 0x1405A8C48
 * Callers:
 *     IopLiveDumpEndMirroringCallback @ 0x1405A8710 (IopLiveDumpEndMirroringCallback.c)
 * Callees:
 *     MmAddPrivateDataToCrashDump @ 0x1402C5B80 (MmAddPrivateDataToCrashDump.c)
 *     MmAddRangeToCrashDump @ 0x1402C5CB4 (MmAddRangeToCrashDump.c)
 *     ExAddPrivateDataToCrashDump @ 0x140338B20 (ExAddPrivateDataToCrashDump.c)
 */

__int64 __fastcall IopLiveDumpMarkImportantDumpData(
        __int64 (__fastcall *a1)(_QWORD, _QWORD, __int64),
        __int64 (__fastcall *a2)(_QWORD, _QWORD, __int64))
{
  unsigned int v2; // ebx
  int v3; // eax
  __int64 *i; // rdi
  int v5; // eax
  int v6; // eax
  int v7; // eax
  __int64 (__fastcall *v9[6])(_QWORD, _QWORD, __int64); // [rsp+20h] [rbp-30h] BYREF

  v9[5] = (__int64 (__fastcall *)(_QWORD, _QWORD, __int64))1;
  v9[3] = 0LL;
  v2 = 0;
  v9[1] = 0LL;
  v9[2] = a1;
  v9[0] = (__int64 (__fastcall *)(_QWORD, _QWORD, __int64))IoSetDumpRange;
  v9[4] = a2;
  v3 = ExAddPrivateDataToCrashDump((__int64 (__fastcall **)(_QWORD, __int64, __int64, __int64))v9);
  if ( v3 < 0 )
  {
    if ( v3 == -1073741789 )
      return 0LL;
    v2 = v3;
  }
  for ( i = (__int64 *)PsActiveProcessHead; i != &PsActiveProcessHead; i = (__int64 *)*i )
  {
    v5 = MmAddRangeToCrashDump(
           (__int64 (__fastcall **)(_QWORD, __int64, __int64, __int64))v9,
           (unsigned __int64)(i - 94),
           2176LL);
    if ( v5 < 0 )
    {
      if ( v5 == -1073741789 )
        return 0LL;
      v2 = v5;
    }
  }
  v6 = MmAddPrivateDataToCrashDump(v9, 16);
  if ( v6 < 0 )
  {
    if ( v6 != -1073741789 )
    {
      v2 = v6;
      goto LABEL_13;
    }
    return 0LL;
  }
LABEL_13:
  v7 = MmAddPrivateDataToCrashDump(v9, 1);
  if ( v7 < 0 )
  {
    if ( v7 == -1073741789 )
      return 0LL;
    return (unsigned int)v7;
  }
  return v2;
}
