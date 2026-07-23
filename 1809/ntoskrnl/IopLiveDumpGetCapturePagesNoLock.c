/*
 * XREFs of IopLiveDumpGetCapturePagesNoLock @ 0x140579C58
 * Callers:
 *     IopLiveDumpBufferDumpData @ 0x140578FC0 (IopLiveDumpBufferDumpData.c)
 *     IopLiveDumpGetNtMergePages @ 0x1408214FC (IopLiveDumpGetNtMergePages.c)
 * Callees:
 *     RtlFindSetBitsEx @ 0x140061C10 (RtlFindSetBitsEx.c)
 */

__int64 __fastcall IopLiveDumpGetCapturePagesNoLock(
        PRTL_BITMAP_EX BitMapHeader,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        _DWORD *a5,
        _QWORD *a6)
{
  __int64 result; // rax
  __int64 v7; // rdi
  ULONG64 v8; // rbp
  char v12; // r14
  ULONG64 SetBits; // rax
  __int64 v14; // rcx
  __int64 v15; // rcx
  _UNKNOWN *retaddr; // [rsp+38h] [rbp+0h] BYREF

  result = (__int64)&retaddr;
  v7 = -1LL;
  v8 = *(_QWORD *)(a2 + 40);
  *a5 = 0;
  if ( v8 != -1LL )
  {
    v12 = 1;
    while ( 1 )
    {
      SetBits = RtlFindSetBitsEx(BitMapHeader, 1uLL, v8);
      if ( SetBits < v8 || SetBits == -1LL )
        break;
      v14 = (unsigned int)*a5;
      v8 = SetBits + 1;
      *(_QWORD *)(a3 + 8 * v14) = SetBits;
      result = (unsigned int)(v14 + 1);
      *a5 = result;
      if ( (unsigned int)result >= 0x40 )
        goto LABEL_8;
    }
    result = (unsigned int)*a5;
    v12 = 0;
LABEL_8:
    if ( v12 )
    {
      result = (unsigned int)(result - 1);
      v7 = *(_QWORD *)(a3 + 8 * result) + 1LL;
    }
  }
  *(_QWORD *)(a2 + 40) = v7;
  if ( *a5 )
  {
    v15 = *(_QWORD *)(a2 + 48);
    *(_DWORD *)(a2 + 32) = *a5;
    *a6 = v15;
    result = v15 + 1;
    *(_QWORD *)(a2 + 48) = v15 + 1;
  }
  return result;
}
