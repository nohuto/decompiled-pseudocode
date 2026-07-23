/*
 * XREFs of KsepCacheUninitialize @ 0x14084A15C
 * Callers:
 *     KseInitialize @ 0x1409B0930 (KseInitialize.c)
 * Callees:
 *     KsepPoolFreePaged @ 0x1400F4D34 (KsepPoolFreePaged.c)
 *     _guard_dispatch_icall @ 0x1401C6030 (_guard_dispatch_icall.c)
 */

void __fastcall KsepCacheUninitialize(__int64 a1)
{
  _QWORD *v1; // rsi
  _QWORD *v3; // rdi
  _QWORD *v4; // rcx

  v1 = (_QWORD *)(a1 + 32);
  v3 = *(_QWORD **)(a1 + 32);
  while ( v3 != v1 )
  {
    v4 = v3 - 3;
    v3 = (_QWORD *)*v3;
    (*(void (__fastcall **)(_QWORD *))(a1 + 88))(v4);
  }
  KsepPoolFreePaged(*(void **)(a1 + 16));
  KsepPoolFreePaged((void *)a1);
}
