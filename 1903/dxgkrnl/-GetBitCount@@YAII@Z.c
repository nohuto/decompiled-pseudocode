/*
 * XREFs of ?GetBitCount@@YAII@Z @ 0x1C0120978
 * Callers:
 *     ?DxgkCreateContextVirtualImpl@@YAJPEAU_D3DKMT_CREATECONTEXTVIRTUAL@@E@Z @ 0x1C0120394 (-DxgkCreateContextVirtualImpl@@YAJPEAU_D3DKMT_CREATECONTEXTVIRTUAL@@E@Z.c)
 *     DxgkCreateContext @ 0x1C0123590 (DxgkCreateContext.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall GetBitCount(int a1)
{
  __int64 result; // rax

  for ( result = 0LL; a1; a1 &= a1 - 1 )
    result = (unsigned int)(result + 1);
  return result;
}
