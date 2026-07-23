/*
 * XREFs of ObpReleaseLookupContext @ 0x140016078
 * Callers:
 *     ObpDeleteNameCheck @ 0x1405AA740 (ObpDeleteNameCheck.c)
 *     ObpInsertOrLocateNamedObject @ 0x1405C95A8 (ObpInsertOrLocateNamedObject.c)
 *     ObReferenceObjectByName @ 0x1405C9DA0 (ObReferenceObjectByName.c)
 *     ObCloseHandleTableEntry @ 0x1405E7360 (ObCloseHandleTableEntry.c)
 *     ObReferenceObjectByNameEx @ 0x14061245C (ObReferenceObjectByNameEx.c)
 *     ObpCreateSymbolicLinkName @ 0x1406C56E0 (ObpCreateSymbolicLinkName.c)
 *     ObCreateObjectTypeEx @ 0x140729BCC (ObCreateObjectTypeEx.c)
 *     ObInitSystem @ 0x1409B2964 (ObInitSystem.c)
 * Callees:
 *     ObfDereferenceObject @ 0x14004E150 (ObfDereferenceObject.c)
 *     ExReleasePushLockEx @ 0x14004F160 (ExReleasePushLockEx.c)
 *     KeLeaveCriticalRegion @ 0x14004F410 (KeLeaveCriticalRegion.c)
 */

void __fastcall ObpReleaseLookupContext(__int64 a1)
{
  void *v2; // rcx
  void *v3; // rcx

  if ( *(_BYTE *)(a1 + 30) )
  {
    ExReleasePushLockEx(*(_QWORD *)a1 + 296LL, 0LL);
    v2 = *(void **)a1;
    *(_DWORD *)(a1 + 32) = -286387660;
    ObfDereferenceObject(v2);
    *(_QWORD *)a1 = 0LL;
    *(_WORD *)(a1 + 30) = 0;
    KeLeaveCriticalRegion();
  }
  v3 = *(void **)(a1 + 8);
  if ( v3 )
  {
    ObfDereferenceObject(v3);
    *(_QWORD *)(a1 + 8) = 0LL;
  }
}
