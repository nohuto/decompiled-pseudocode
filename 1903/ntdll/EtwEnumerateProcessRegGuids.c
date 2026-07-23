/*
 * XREFs of EtwEnumerateProcessRegGuids @ 0x18010CA10
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000835C @ 0x18000835C (sub_18000835C.c)
 *     RtlReleaseSRWLockShared @ 0x18001AAF0 (RtlReleaseSRWLockShared.c)
 */

ULONG __cdecl EtwEnumerateProcessRegGuids(PVOID OutBuffer, ULONG OutBufferSize, PULONG ReturnLength)
{
  ULONG v5; // edi
  ULONG v6; // ebx
  ULONG result; // eax
  _RTL_SRWLOCK *v8; // rcx
  ULONG v9; // r9d
  ULONG i; // eax
  __int64 v11; // r8
  char *v12; // rdx

  v5 = OutBufferSize >> 4;
  v6 = 0;
  if ( !OutBuffer && OutBufferSize )
    return 87;
  v8 = 0LL;
LABEL_5:
  while ( 1 )
  {
    v8 = (_RTL_SRWLOCK *)sub_18000835C(v8);
    if ( !v8 )
      break;
    v9 = v6;
    if ( v6 >= v5 )
      v9 = v5;
    for ( i = 0; i < v9; ++i )
    {
      v11 = 16LL * i;
      v12 = (char *)v8[4].Ptr - *(_QWORD *)((char *)OutBuffer + v11);
      if ( !v12 )
        v12 = (char *)v8[5].Ptr - *(_QWORD *)((char *)OutBuffer + v11 + 8);
      if ( !v12 )
        goto LABEL_5;
    }
    if ( v6 < v5 )
      *((_OWORD *)OutBuffer + v6) = *(_OWORD *)&v8[4].Ptr;
    ++v6;
  }
  result = v5 < v6 ? 0x7A : 0;
  *ReturnLength = 16 * v6;
  return result;
}
