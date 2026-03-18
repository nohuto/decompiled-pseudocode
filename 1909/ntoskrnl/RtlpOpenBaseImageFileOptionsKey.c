/*
 * XREFs of RtlpOpenBaseImageFileOptionsKey @ 0x1406D3994
 * Callers:
 *     RtlpOpenImageFileOptionsKeyEx @ 0x1406D3864 (RtlpOpenImageFileOptionsKeyEx.c)
 *     RtlQueryImageFileExecutionOptions @ 0x140763C9C (RtlQueryImageFileExecutionOptions.c)
 * Callees:
 *     ZwClose @ 0x1401C0E30 (ZwClose.c)
 *     RtlpOpenBaseImageFileOptionsKeyEx @ 0x140789A04 (RtlpOpenBaseImageFileOptionsKeyEx.c)
 */

__int64 __fastcall RtlpOpenBaseImageFileOptionsKey(_QWORD *a1)
{
  HANDLE v1; // rax
  __int64 result; // rax
  HANDLE Handle; // [rsp+38h] [rbp+10h] BYREF

  v1 = (HANDLE)qword_1404F2B40;
  Handle = (HANDLE)qword_1404F2B40;
  if ( qword_1404F2B40 )
  {
LABEL_2:
    *a1 = v1;
    return 0LL;
  }
  result = RtlpOpenBaseImageFileOptionsKeyEx(&Handle);
  if ( (int)result >= 0 )
  {
    if ( !RtlpDisableIFEOCaching && _InterlockedCompareExchange64(&qword_1404F2B40, (signed __int64)Handle, 0LL) )
    {
      ZwClose(Handle);
      v1 = (HANDLE)qword_1404F2B40;
    }
    else
    {
      v1 = Handle;
    }
    goto LABEL_2;
  }
  return result;
}
