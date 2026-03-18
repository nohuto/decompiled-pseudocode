/*
 * XREFs of SepSetTokenSessionById @ 0x140619754
 * Callers:
 *     SepGetAnonymousToken @ 0x140087A4C (SepGetAnonymousToken.c)
 *     SeSubProcessToken @ 0x140618F30 (SeSubProcessToken.c)
 *     SepFilterToken @ 0x14061CD30 (SepFilterToken.c)
 *     SeSetSessionIdToken @ 0x1406E5E90 (SeSetSessionIdToken.c)
 *     SeExchangePrimaryToken @ 0x14078038C (SeExchangePrimaryToken.c)
 * Callees:
 *     MmGetSessionObjectById @ 0x140002348 (MmGetSessionObjectById.c)
 *     ObfDereferenceObject @ 0x14003E260 (ObfDereferenceObject.c)
 */

void __fastcall SepSetTokenSessionById(__int64 a1, __int64 a2, char a3, __int64 a4, _QWORD *a5)
{
  unsigned int v5; // edi
  void *v7; // rcx

  v5 = a2;
  if ( *(_DWORD *)(a1 + 120) != (_DWORD)a2 )
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
        *(_QWORD *)(a1 + 1160) = MmGetSessionObjectById(v5, a2);
      }
    }
  }
}
