/*
 * XREFs of SelectNewFrameRgn @ 0x1C00C0B70
 * Callers:
 *     ?xxxSetParentWorker@@YAPEAUtagWND@@PEAU1@00H@Z @ 0x1C00C11FC (-xxxSetParentWorker@@YAPEAUtagWND@@PEAU1@00H@Z.c)
 *     NtUserSetWindowRgnEx @ 0x1C01F5F90 (NtUserSetWindowRgnEx.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall SelectNewFrameRgn(__int64 a1, __int64 a2)
{
  __int64 v4; // rcx
  __int64 result; // rax

  v4 = *(_QWORD *)(a1 + 152);
  if ( v4 )
  {
    result = GreDeleteObject(v4);
    *(_QWORD *)(a1 + 152) = 0LL;
  }
  if ( a2 )
  {
    result = GreSetRegionOwner(a2, 0LL);
    *(_QWORD *)(a1 + 152) = a2;
  }
  return result;
}
