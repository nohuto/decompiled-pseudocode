/*
 * XREFs of IopLiveDumpMarkRequiredDumpData @ 0x1405A8F04
 * Callers:
 *     IopLiveDumpEndMirroringCallback @ 0x1405A8710 (IopLiveDumpEndMirroringCallback.c)
 * Callees:
 *     KeEnumerateNextProcessor @ 0x14009E0E0 (KeEnumerateNextProcessor.c)
 *     MmAddPrivateDataToCrashDump @ 0x1402C5B80 (MmAddPrivateDataToCrashDump.c)
 *     MmAddRangeToCrashDump @ 0x1402C5CB4 (MmAddRangeToCrashDump.c)
 *     IopLiveDumpMarkDeviceNode @ 0x1405A8BE8 (IopLiveDumpMarkDeviceNode.c)
 *     IopLiveDumpMarkLoadedModuleList @ 0x1405A8D30 (IopLiveDumpMarkLoadedModuleList.c)
 *     IopLiveDumpMarkProcessorData @ 0x1405A8DF0 (IopLiveDumpMarkProcessorData.c)
 */

__int64 __fastcall IopLiveDumpMarkRequiredDumpData(__int64 a1, __int64 (__fastcall *a2)(_QWORD, _QWORD, __int64))
{
  __int64 result; // rax
  unsigned __int64 v4; // rdi
  unsigned __int64 v5; // rdx
  unsigned __int16 *v6[2]; // [rsp+20h] [rbp-50h] BYREF
  __int16 v7; // [rsp+30h] [rbp-40h]
  int v8; // [rsp+32h] [rbp-3Eh]
  __int16 v9; // [rsp+36h] [rbp-3Ah]
  __int64 (__fastcall *v10[7])(_QWORD, _QWORD, __int64); // [rsp+38h] [rbp-38h] BYREF
  int v11; // [rsp+80h] [rbp+10h] BYREF

  v10[4] = a2;
  v10[5] = (__int64 (__fastcall *)(_QWORD, _QWORD, __int64))1;
  v10[2] = (__int64 (__fastcall *)(_QWORD, _QWORD, __int64))(a1 + 368);
  v10[3] = 0LL;
  v10[0] = (__int64 (__fastcall *)(_QWORD, _QWORD, __int64))IoSetDumpRange;
  v8 = 0;
  v9 = 0;
  v10[1] = 0LL;
  result = MmAddRangeToCrashDump(
             (__int64 (__fastcall **)(_QWORD, __int64, __int64, __int64))v10,
             (unsigned __int64)&KdDebuggerDataBlock,
             896LL);
  if ( (int)result >= 0 )
  {
    result = MmAddRangeToCrashDump(
               (__int64 (__fastcall **)(_QWORD, __int64, __int64, __int64))v10,
               (unsigned __int64)KiProcessorBlock,
               8LL * (unsigned int)KeNumberProcessors_0);
    if ( (int)result >= 0 )
    {
      result = IopLiveDumpMarkLoadedModuleList((__int64 (__fastcall **)(_QWORD, __int64, __int64, __int64))v10);
      if ( (int)result >= 0 )
      {
        v6[1] = (unsigned __int16 *)qword_140572748[0];
        v6[0] = (unsigned __int16 *)KeActiveProcessors;
        v7 = 0;
        while ( !(unsigned int)KeEnumerateNextProcessor(&v11, v6) )
        {
          result = IopLiveDumpMarkProcessorData((__int64 (__fastcall **)(_QWORD, __int64, __int64, __int64))v10, v11);
          if ( (int)result < 0 )
            return result;
        }
        result = MmAddPrivateDataToCrashDump(v10, 2);
        if ( (int)result >= 0 )
        {
          result = MmAddRangeToCrashDump(
                     (__int64 (__fastcall **)(_QWORD, __int64, __int64, __int64))v10,
                     0xFFFFF78000000000uLL,
                     1808LL);
          if ( (int)result >= 0 )
          {
            result = MmAddPrivateDataToCrashDump(v10, 4);
            if ( (int)result >= 0 )
            {
              result = MmAddPrivateDataToCrashDump(v10, 8);
              if ( (int)result >= 0 && *(_DWORD *)a1 == 351 && *(_QWORD *)(a1 + 8) == 2LL )
              {
                v4 = *(_QWORD *)(a1 + 16);
                result = MmAddRangeToCrashDump(
                           (__int64 (__fastcall **)(_QWORD, __int64, __int64, __int64))v10,
                           v4,
                           56LL);
                if ( (int)result >= 0 )
                {
                  result = IopLiveDumpMarkDeviceNode(
                             (__int64 (__fastcall **)(_QWORD, __int64, __int64, __int64))v10,
                             *(_QWORD *)(v4 + 48));
                  if ( (int)result >= 0 )
                  {
                    v5 = *(_QWORD *)(a1 + 32);
                    if ( v5 )
                      return IopLiveDumpMarkDeviceNode(
                               (__int64 (__fastcall **)(_QWORD, __int64, __int64, __int64))v10,
                               v5);
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  return result;
}
