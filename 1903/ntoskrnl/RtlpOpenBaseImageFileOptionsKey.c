/*
 * XREFs of RtlpOpenBaseImageFileOptionsKey @ 0x1406D42AC
 * Callers:
 *     RtlpOpenImageFileOptionsKeyEx @ 0x1406D417C (RtlpOpenImageFileOptionsKeyEx.c)
 *     RtlQueryImageFileExecutionOptions @ 0x14075F378 (RtlQueryImageFileExecutionOptions.c)
 * Callees:
 *     ZwClose @ 0x1401C02B0 (ZwClose.c)
 *     RtlpOpenBaseImageFileOptionsKeyEx @ 0x140787598 (RtlpOpenBaseImageFileOptionsKeyEx.c)
 */

__int64 __fastcall RtlpOpenBaseImageFileOptionsKey(_QWORD *a1)
{
  HANDLE v1; // rax
  __int64 result; // rax
  HANDLE Handle; // [rsp+38h] [rbp+10h] BYREF

  v1 = (HANDLE)qword_1404F2E00;
  Handle = (HANDLE)qword_1404F2E00;
  if ( qword_1404F2E00 )
  {
LABEL_2:
    *a1 = v1;
    return 0LL;
  }
  result = RtlpOpenBaseImageFileOptionsKeyEx(&Handle);
  if ( (int)result >= 0 )
  {
    if ( !RtlpDisableIFEOCaching && _InterlockedCompareExchange64(&qword_1404F2E00, (signed __int64)Handle, 0LL) )
    {
      ZwClose(Handle);
      v1 = (HANDLE)qword_1404F2E00;
    }
    else
    {
      v1 = Handle;
    }
    goto LABEL_2;
  }
  return result;
}
