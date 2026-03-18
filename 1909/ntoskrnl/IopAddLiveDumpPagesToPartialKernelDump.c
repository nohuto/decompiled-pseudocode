/*
 * XREFs of IopAddLiveDumpPagesToPartialKernelDump @ 0x14029C94C
 * Callers:
 *     IoAddPagesForPartialKernelDump @ 0x14029C780 (IoAddPagesForPartialKernelDump.c)
 * Callees:
 *     KeEnumerateNextProcessor @ 0x14009E0E0 (KeEnumerateNextProcessor.c)
 *     memset @ 0x1401D77C0 (memset.c)
 *     IopMarkPagesForDeviceNode @ 0x14029CFD0 (IopMarkPagesForDeviceNode.c)
 *     IopMarkPagesForProcessorData @ 0x14029D210 (IopMarkPagesForProcessorData.c)
 *     MmAddPrivateDataToCrashDump @ 0x1402C5B80 (MmAddPrivateDataToCrashDump.c)
 *     MmAddRangeToCrashDump @ 0x1402C5CB4 (MmAddRangeToCrashDump.c)
 *     RtlNumberOfSetBitsEx @ 0x14030D500 (RtlNumberOfSetBitsEx.c)
 *     ExAddPrivateDataToCrashDump @ 0x140338B20 (ExAddPrivateDataToCrashDump.c)
 */

__int64 IopAddLiveDumpPagesToPartialKernelDump(int a1, __int64 a2, __int64 a3, ...)
{
  __int64 v6; // rbx
  __int64 v7; // rax
  __int64 v8; // rdx
  __int64 result; // rax
  int v10; // ebx
  __int64 *i; // rbx
  _QWORD **v12; // rsi
  _QWORD *v13; // rdi
  __int64 v14; // [rsp+20h] [rbp-60h] BYREF
  __int64 v15; // [rsp+28h] [rbp-58h] BYREF
  __int64 v16; // [rsp+30h] [rbp-50h]
  unsigned __int16 *v17; // [rsp+38h] [rbp-48h] BYREF
  __int64 v18; // [rsp+40h] [rbp-40h]
  __int64 v19; // [rsp+48h] [rbp-38h]
  _QWORD v20[6]; // [rsp+50h] [rbp-30h] BYREF
  __int64 v21; // [rsp+C8h] [rbp+48h] BYREF
  va_list va; // [rsp+C8h] [rbp+48h]
  __int64 v23; // [rsp+D0h] [rbp+50h]
  va_list va1; // [rsp+D8h] [rbp+58h] BYREF

  va_start(va1, a3);
  va_start(va, a3);
  v21 = va_arg(va1, _QWORD);
  v23 = va_arg(va1, _QWORD);
  memset(v20, 0, sizeof(v20));
  v15 = 0LL;
  v16 = 0LL;
  v17 = 0LL;
  v18 = 0LL;
  v19 = 0LL;
  v14 = 0LL;
  v6 = *(_QWORD *)(CrashdmpDumpBlock + 8);
  v15 = *(_QWORD *)(v6 + 48);
  v16 = v6 + 56;
  if ( *(_QWORD *)(CrashdmpDumpBlock + 1424) <= (unsigned __int64)RtlNumberOfSetBitsEx(&v15) )
    return 3221225507LL;
  v7 = RtlNumberOfSetBitsEx(&v15);
  v8 = *(_QWORD *)(CrashdmpDumpBlock + 1424);
  LODWORD(v20[5]) |= 3u;
  v14 = v8 - v7;
  v20[2] = &v15;
  v20[3] = v6;
  v20[4] = &v14;
  v20[0] = IoSetDumpRangeForPartialKernelDump;
  v20[1] = 0LL;
  result = MmAddRangeToCrashDump(v20, &KdDebuggerDataBlock, 896LL);
  if ( (int)result < 0 )
    return result;
  result = MmAddRangeToCrashDump(v20, KiProcessorBlock, 8LL * (unsigned int)KeNumberProcessors_0);
  if ( (int)result < 0 )
    return result;
  v10 = 0;
  if ( !(_DWORD)KeNumberProcessors_0 )
  {
LABEL_7:
    v18 = qword_140572748[0];
    v17 = (unsigned __int16 *)KeActiveProcessors;
    LOWORD(v19) = 0;
    while ( !(unsigned int)KeEnumerateNextProcessor((__int64 *)va, &v17) )
    {
      result = IopMarkPagesForProcessorData(v20, (unsigned int)v21);
      if ( (int)result < 0 )
        return result;
    }
    result = MmAddPrivateDataToCrashDump(v20, 2LL);
    if ( (int)result < 0 )
      return result;
    result = MmAddRangeToCrashDump(v20, 0xFFFFF78000000000uLL, 1808LL);
    if ( (int)result < 0 )
      return result;
    result = MmAddPrivateDataToCrashDump(v20, 4LL);
    if ( (int)result < 0 )
      return result;
    result = MmAddPrivateDataToCrashDump(v20, 8LL);
    if ( (int)result < 0 )
      return result;
    if ( a1 != 351 || a2 != 2 )
    {
LABEL_21:
      result = ExAddPrivateDataToCrashDump(v20);
      if ( (int)result >= 0 )
      {
        for ( i = (__int64 *)PsActiveProcessHead; i != &PsActiveProcessHead; i = (__int64 *)*i )
        {
          v12 = (_QWORD **)(i + 51);
          v13 = *v12;
          result = MmAddRangeToCrashDump(v20, i - 94, 2176LL);
          if ( (int)result < 0 )
            return result;
          while ( v13 != v12 )
          {
            result = MmAddRangeToCrashDump(v20, v13 - 215, 2080LL);
            if ( (int)result < 0 )
              return result;
            result = MmAddRangeToCrashDump(v20, *(v13 - 209), *(v13 - 208) - *(v13 - 209));
            if ( (int)result < 0 )
              return result;
            v13 = (_QWORD *)*v13;
          }
        }
        result = MmAddPrivateDataToCrashDump(v20, 16LL);
        if ( (int)result >= 0 )
          return MmAddPrivateDataToCrashDump(v20, 1LL);
      }
      return result;
    }
    result = MmAddRangeToCrashDump(v20, a3, 56LL);
    if ( (int)result < 0 )
      return result;
    if ( (unsigned int)IopMarkPagesForDeviceNode(v20, *(_QWORD *)(a3 + 48)) != -1073741789 )
    {
      if ( v23 )
      {
        result = IopMarkPagesForDeviceNode(v20, v23);
        if ( (int)result < 0 )
          return result;
      }
      goto LABEL_21;
    }
    return 3221225507LL;
  }
  while ( 1 )
  {
    result = MmAddRangeToCrashDump(v20, KiProcessorBlock[v10], 36608LL);
    if ( (int)result < 0 )
      return result;
    if ( ++v10 >= (unsigned int)KeNumberProcessors_0 )
      goto LABEL_7;
  }
}
