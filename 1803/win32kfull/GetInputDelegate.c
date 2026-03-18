/*
 * XREFs of GetInputDelegate @ 0x1C0019B34
 * Callers:
 *     PostInputMessage @ 0x1C0019B84 (PostInputMessage.c)
 *     EditionGetInputDelegate @ 0x1C01ABA30 (EditionGetInputDelegate.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall GetInputDelegate(__int64 a1, int a2)
{
  __int64 result; // rax
  int v3; // r8d

  result = 0LL;
  if ( a1 )
  {
    v3 = *(_DWORD *)(a1 + 256);
    if ( v3 )
    {
      if ( (v3 & a2) != 0 )
        return *(_QWORD *)(a1 + 248);
    }
  }
  return result;
}
