/*
 * XREFs of SepSetTokenSessionById @ 0x14064FD9C
 * Callers:
 *     SepGetAnonymousToken @ 0x1400DD4EC (SepGetAnonymousToken.c)
 *     SeSetSessionIdToken @ 0x1405BC45C (SeSetSessionIdToken.c)
 *     SeSubProcessToken @ 0x14064EA6C (SeSubProcessToken.c)
 *     SepFilterToken @ 0x140657CEC (SepFilterToken.c)
 *     SeExchangePrimaryToken @ 0x140748BB8 (SeExchangePrimaryToken.c)
 * Callees:
 *     ObfDereferenceObject @ 0x14004E150 (ObfDereferenceObject.c)
 *     MmGetSessionObjectById @ 0x14007F244 (MmGetSessionObjectById.c)
 */

void __fastcall SepSetTokenSessionById(__int64 a1, unsigned int a2, char a3, __int64 a4, _QWORD *a5)
{
  void *v7; // rcx

  if ( *(_DWORD *)(a1 + 120) != a2 )
  {
    *(_DWORD *)(a1 + 120) = a2;
    if ( !SeTokenDoesNotTrackSessionObject )
    {
      if ( a3 )
      {
        if ( a5 )
          *a5 = *(_QWORD *)(a1 + 1160);
        *(_QWORD *)(a1 + 1160) = a4;
      }
      else
      {
        v7 = *(void **)(a1 + 1160);
        if ( v7 )
          ObfDereferenceObject(v7);
        *(_QWORD *)(a1 + 1160) = MmGetSessionObjectById(a2);
      }
    }
  }
}
