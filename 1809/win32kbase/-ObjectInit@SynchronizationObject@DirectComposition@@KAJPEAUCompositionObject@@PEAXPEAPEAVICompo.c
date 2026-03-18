/*
 * XREFs of ?ObjectInit@SynchronizationObject@DirectComposition@@KAJPEAUCompositionObject@@PEAXPEAPEAVICompositionObject@@@Z @ 0x1C0167E10
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DirectComposition::SynchronizationObject::ObjectInit(
        struct CompositionObject *a1,
        void *a2,
        struct ICompositionObject **a3)
{
  struct ICompositionObject *v3; // rax
  __int64 result; // rax

  v3 = (struct CompositionObject *)((char *)a1 + 24);
  if ( a1 != (struct CompositionObject *)-24LL )
  {
    *((_QWORD *)a1 + 4) = 0LL;
    *(_QWORD *)v3 = &DirectComposition::CSynchronizationInfo::`vftable';
  }
  *a3 = v3;
  result = 0LL;
  *((_DWORD *)a1 + 9) = 0;
  *((_WORD *)a1 + 16) = 1;
  return result;
}
