/*
 * XREFs of ResetWindowTransform @ 0x1C0015020
 * Callers:
 *     ?xxxSetParentWorker@@YAPEAUtagWND@@PEAU1@00H@Z @ 0x1C0017CC4 (-xxxSetParentWorker@@YAPEAUtagWND@@PEAU1@00H@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ResetWindowTransform(__int64 a1)
{
  __int64 v2; // rcx
  __int64 result; // rax

  v2 = *(_QWORD *)(a1 + 216);
  if ( v2 )
  {
    result = Win32FreePool(v2);
    *(_QWORD *)(a1 + 216) = 0LL;
  }
  return result;
}
