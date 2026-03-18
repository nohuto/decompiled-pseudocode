/*
 * XREFs of NtGdiSetBrushOrg @ 0x1C012B6A0
 * Callers:
 *     <none>
 * Callees:
 *     GreSetBrushOrg @ 0x1C012BE74 (GreSetBrushOrg.c)
 */

__int64 __fastcall NtGdiSetBrushOrg(HDC a1, __int64 a2, __int64 a3, _QWORD *a4)
{
  __int64 result; // rax

  result = GreSetBrushOrg(a1);
  if ( (_DWORD)result && a4 )
  {
    if ( (unsigned __int64)a4 >= MmUserProbeAddress )
      a4 = (_QWORD *)MmUserProbeAddress;
    *a4 = 0LL;
  }
  return result;
}
