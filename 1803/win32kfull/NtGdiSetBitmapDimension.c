/*
 * XREFs of NtGdiSetBitmapDimension @ 0x1C0280380
 * Callers:
 *     <none>
 * Callees:
 *     GreSetBitmapDimension @ 0x1C028F0F8 (GreSetBitmapDimension.c)
 */

__int64 __fastcall NtGdiSetBitmapDimension(__int64 a1, __int64 a2, __int64 a3, _QWORD *a4)
{
  __int64 result; // rax
  __int64 v6; // [rsp+30h] [rbp+8h] BYREF

  if ( !a1 )
    return 0LL;
  result = GreSetBitmapDimension(a1, a2, a3, &v6);
  if ( (_DWORD)result && a4 )
  {
    if ( (unsigned __int64)a4 >= MmUserProbeAddress )
      a4 = (_QWORD *)MmUserProbeAddress;
    *a4 = v6;
  }
  return result;
}
