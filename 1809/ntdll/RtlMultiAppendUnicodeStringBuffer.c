/*
 * XREFs of RtlMultiAppendUnicodeStringBuffer @ 0x180075930
 * Callers:
 *     RtlDosApplyFileIsolationRedirection_Ustr @ 0x18000B060 (RtlDosApplyFileIsolationRedirection_Ustr.c)
 *     RtlAppendPathElement @ 0x1800CE350 (RtlAppendPathElement.c)
 * Callees:
 *     RtlpEnsureBufferSize @ 0x180075A40 (RtlpEnsureBufferSize.c)
 *     memmove @ 0x1800A6DC0 (memmove.c)
 */

__int64 __fastcall RtlMultiAppendUnicodeStringBuffer(unsigned __int16 *a1, int a2, __int64 a3)
{
  unsigned __int64 v3; // rdi
  unsigned int v7; // ecx
  unsigned __int64 v8; // rbx
  unsigned __int64 v9; // rbx
  __int64 v10; // rax
  unsigned int v11; // r14d
  __int64 v12; // rax
  __int64 result; // rax

  v3 = *a1;
  v7 = 0;
  v8 = (unsigned int)v3;
  if ( a2 )
  {
    do
    {
      v8 += *(unsigned __int16 *)(a3 + 16LL * v7);
      if ( v8 > 0xFFFE )
        return 3221225734LL;
    }
    while ( ++v7 != a2 );
  }
  v9 = v8 + 2;
  if ( v9 > 0xFFFE )
    return 3221225734LL;
  if ( a1 != (unsigned __int16 *)-16LL && v9 <= *((_QWORD *)a1 + 4)
    || (result = RtlpEnsureBufferSize(0LL, a1 + 8), (int)result >= 0) )
  {
    v10 = *((_QWORD *)a1 + 2);
    v11 = 0;
    a1[1] = v9;
    *a1 = v9 - 2;
    *((_QWORD *)a1 + 1) = v10;
    if ( a2 )
    {
      do
      {
        memmove(
          (void *)(*((_QWORD *)a1 + 1) + 2 * (v3 >> 1)),
          *(const void **)(a3 + 16LL * v11 + 8),
          *(unsigned __int16 *)(a3 + 16LL * v11));
        v12 = *(unsigned __int16 *)(a3 + 16LL * v11++);
        v3 += v12;
      }
      while ( v11 != a2 );
      v10 = *((_QWORD *)a1 + 1);
    }
    *(_WORD *)(v10 + 2 * (v3 >> 1)) = 0;
    return 0LL;
  }
  return result;
}
