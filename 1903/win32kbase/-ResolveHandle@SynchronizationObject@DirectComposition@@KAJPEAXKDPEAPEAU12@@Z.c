/*
 * XREFs of ?ResolveHandle@SynchronizationObject@DirectComposition@@KAJPEAXKDPEAPEAU12@@Z @ 0x1C01A3E54
 * Callers:
 *     NtDCompositionSubmitDWMBatch @ 0x1C000DD80 (NtDCompositionSubmitDWMBatch.c)
 *     NtDCompositionCommitChannel @ 0x1C000E1B0 (NtDCompositionCommitChannel.c)
 *     DCompositionCreateSynchronizationObject @ 0x1C01A1F60 (DCompositionCreateSynchronizationObject.c)
 *     NtDCompositionCommitSynchronizationObject @ 0x1C01A20E0 (NtDCompositionCommitSynchronizationObject.c)
 * Callees:
 *     ?ResolveHandle@CompositionObject@@SAJPEAXKDW4CompositionObjectType@@PEAPEAU1@@Z @ 0x1C0080730 (-ResolveHandle@CompositionObject@@SAJPEAXKDW4CompositionObjectType@@PEAPEAU1@@Z.c)
 */

__int64 __fastcall DirectComposition::SynchronizationObject::ResolveHandle(
        void *a1,
        ACCESS_MASK a2,
        KPROCESSOR_MODE a3,
        struct DirectComposition::SynchronizationObject **a4)
{
  __int64 result; // rax
  struct DirectComposition::SynchronizationObject *v6; // [rsp+58h] [rbp+20h] BYREF

  *a4 = 0LL;
  v6 = 0LL;
  result = CompositionObject::ResolveHandle(a1, a2, a3, 3, &v6);
  if ( (int)result >= 0 )
    *a4 = v6;
  return result;
}
