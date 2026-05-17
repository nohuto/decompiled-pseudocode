/*
 * XREFs of RtlpOpenBaseImageFileOptionsKey @ 0x18007384C
 * Callers:
 *     RtlpOpenImageFileOptionsKeyEx @ 0x1800736F0 (RtlpOpenImageFileOptionsKeyEx.c)
 *     RtlQueryImageFileExecutionOptions @ 0x180079E60 (RtlQueryImageFileExecutionOptions.c)
 * Callees:
 *     RtlpOpenBaseImageFileOptionsKeyEx @ 0x1800738AC (RtlpOpenBaseImageFileOptionsKeyEx.c)
 *     NtClose @ 0x18009D070 (NtClose.c)
 */

__int64 __fastcall RtlpOpenBaseImageFileOptionsKey(_QWORD *a1)
{
  HANDLE v1; // rax
  __int64 result; // rax
  HANDLE Handle; // [rsp+38h] [rbp+10h] BYREF

  v1 = (HANDLE)qword_180166350;
  Handle = (HANDLE)qword_180166350;
  if ( qword_180166350 )
    goto LABEL_2;
  result = RtlpOpenBaseImageFileOptionsKeyEx(&Handle, 9LL, 0LL);
  if ( (int)result >= 0 )
  {
    if ( _InterlockedCompareExchange64(&qword_180166350, (signed __int64)Handle, 0LL) )
    {
      NtClose(Handle);
      v1 = (HANDLE)qword_180166350;
    }
    else
    {
      v1 = Handle;
    }
LABEL_2:
    *a1 = v1;
    return 0LL;
  }
  return result;
}
