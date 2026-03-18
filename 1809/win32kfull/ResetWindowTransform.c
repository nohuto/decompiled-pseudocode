/*
 * XREFs of ResetWindowTransform @ 0x1C000B73C
 * Callers:
 *     ?xxxSetParentWorker@@YAPEAUtagWND@@PEAU1@00H@Z @ 0x1C000C2E4 (-xxxSetParentWorker@@YAPEAUtagWND@@PEAU1@00H@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ResetWindowTransform(__int64 a1)
{
  __int64 v2; // rcx
  __int64 result; // rax

  v2 = *(_QWORD *)(a1 + 200);
  if ( v2 )
  {
    result = Win32FreePool(v2);
    *(_QWORD *)(a1 + 200) = 0LL;
  }
  return result;
}
