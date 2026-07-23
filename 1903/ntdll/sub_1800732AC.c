/*
 * XREFs of sub_1800732AC @ 0x1800732AC
 * Callers:
 *     sub_180073150 @ 0x180073150 (sub_180073150.c)
 *     LdrQueryImageFileExecutionOptionsEx @ 0x1800799E0 (LdrQueryImageFileExecutionOptionsEx.c)
 * Callees:
 *     sub_18007330C @ 0x18007330C (sub_18007330C.c)
 *     ZwClose @ 0x18009C8C0 (ZwClose.c)
 */

__int64 __fastcall sub_1800732AC(_QWORD *a1)
{
  HANDLE v1; // rax
  __int64 result; // rax
  HANDLE Handle; // [rsp+38h] [rbp+10h] BYREF

  v1 = (HANDLE)qword_180166340;
  Handle = (HANDLE)qword_180166340;
  if ( qword_180166340 )
    goto LABEL_2;
  result = sub_18007330C(&Handle, 9LL, 0LL);
  if ( (int)result >= 0 )
  {
    if ( _InterlockedCompareExchange64(&qword_180166340, (signed __int64)Handle, 0LL) )
    {
      ZwClose(Handle);
      v1 = (HANDLE)qword_180166340;
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
