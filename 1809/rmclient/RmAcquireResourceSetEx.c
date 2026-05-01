/*
 * XREFs of RmAcquireResourceSetEx @ 0x180004D90
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall RmAcquireResourceSetEx(int a1, int a2, int a3, int a4, __int64 a5, __int64 a6, int a7, __int64 a8)
{
  return RmpClientAcquireResourceSet(a1, a2, a3, a4, a5, a6, a7, a8);
}
