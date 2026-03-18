/*
 * XREFs of NtGdiGetBitmapDimension @ 0x1C02A7740
 * Callers:
 *     <none>
 * Callees:
 *     GreGetBitmapDimension @ 0x1C02B95E0 (GreGetBitmapDimension.c)
 */

__int64 __fastcall NtGdiGetBitmapDimension(__int64 a1, _QWORD *a2)
{
  __int64 result; // rax
  __int64 v4; // [rsp+30h] [rbp+8h] BYREF

  v4 = 0LL;
  if ( !a1 )
    return 0LL;
  result = GreGetBitmapDimension(a1, &v4);
  if ( (_DWORD)result )
  {
    if ( (unsigned __int64)a2 >= MmUserProbeAddress )
      a2 = (_QWORD *)MmUserProbeAddress;
    *a2 = v4;
  }
  return result;
}
