/*
 * XREFs of __tlregdtor @ 0x180126AC4
 * Callers:
 *     sub_1800633E0 @ 0x1800633E0 (sub_1800633E0.c)
 * Callees:
 *     _o__free_base @ 0x180125B17 (_o__free_base.c)
 *     _o__malloc_base @ 0x180125B2F (_o__malloc_base.c)
 */

__int64 __fastcall _tlregdtor(__int64 a1)
{
  __int64 v2; // rdi
  __int64 v3; // rbx

  v2 = *((_QWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + (unsigned int)TlsIndex);
  v3 = *(_QWORD *)(v2 + 48);
  if ( !v3 )
  {
    v3 = v2 + 64;
LABEL_7:
    *(_DWORD *)v3 = 0;
    *(_QWORD *)(v2 + 48) = v3;
    goto LABEL_8;
  }
  if ( *(_DWORD *)v3 == 30 )
  {
    v3 = o__malloc_base();
    o__free_base();
    if ( !v3 )
      return 0xFFFFFFFFLL;
    *(_QWORD *)(v3 + 8) = *(_QWORD *)(v2 + 48);
    goto LABEL_7;
  }
LABEL_8:
  *(_QWORD *)(v3 + 8LL * (int)(*(_DWORD *)v3)++ + 16) = a1;
  return 0LL;
}
