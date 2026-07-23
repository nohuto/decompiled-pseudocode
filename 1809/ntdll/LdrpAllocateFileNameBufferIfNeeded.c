/*
 * XREFs of LdrpAllocateFileNameBufferIfNeeded @ 0x180026594
 * Callers:
 *     LdrpAppendAnsiStringToFilenameBuffer @ 0x1800230BC (LdrpAppendAnsiStringToFilenameBuffer.c)
 *     LdrpAppendUnicodeStringToFilenameBuffer @ 0x180026510 (LdrpAppendUnicodeStringToFilenameBuffer.c)
 * Callees:
 *     NtdllpAllocateStringRoutine @ 0x18000EB60 (NtdllpAllocateStringRoutine.c)
 *     memmove @ 0x1800A6DC0 (memmove.c)
 *     NtdllpReallocateStringRoutine @ 0x1800D7028 (NtdllpReallocateStringRoutine.c)
 */

__int64 __fastcall LdrpAllocateFileNameBufferIfNeeded(unsigned __int16 *a1, unsigned int a2, __int64 a3, __int64 a4)
{
  unsigned int v4; // ebx
  unsigned int v7; // ebp
  unsigned __int16 *v8; // rdx
  unsigned int v9; // ebp
  __int64 v10; // rsi
  PVOID StringRoutine; // rax

  v4 = 0;
  if ( a2 > a1[1] )
  {
    if ( a2 > 0xFFFE )
      return (unsigned int)-1073741562;
    v7 = a2 + 63;
    v8 = (unsigned __int16 *)*((_QWORD *)a1 + 1);
    v9 = v7 & 0xFFFFFFC0;
    if ( v9 > 0xFFFE )
      v9 = 65534;
    if ( v8 == a1 + 8 )
    {
      StringRoutine = NtdllpAllocateStringRoutine(v9);
      v10 = (__int64)StringRoutine;
      if ( !StringRoutine )
        return (unsigned int)-1073741801;
      if ( *a1 )
        memmove(StringRoutine, *((const void **)a1 + 1), *a1);
    }
    else
    {
      v10 = NtdllpReallocateStringRoutine(v9, v8, a3, a4);
    }
    if ( v10 )
    {
      *((_QWORD *)a1 + 1) = v10;
      a1[1] = v9;
      return v4;
    }
    return (unsigned int)-1073741801;
  }
  return v4;
}
