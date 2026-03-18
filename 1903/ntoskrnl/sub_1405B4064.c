/*
 * XREFs of sub_1405B4064 @ 0x1405B4064
 * Callers:
 *     WbReEncryptWarbirdEncryptionSegment @ 0x1405B3FB0 (WbReEncryptWarbirdEncryptionSegment.c)
 * Callees:
 *     sub_1405B417C @ 0x1405B417C (sub_1405B417C.c)
 *     WbVerifyVirtualAddressSignature @ 0x1406AE564 (WbVerifyVirtualAddressSignature.c)
 *     sub_1406AEB04 @ 0x1406AEB04 (sub_1406AEB04.c)
 *     sub_1406AF504 @ 0x1406AF504 (sub_1406AF504.c)
 */

__int64 __fastcall sub_1405B4064(__int64 a1, _DWORD *a2)
{
  int v2; // esi
  void *v5; // rsi
  int v6; // edi
  __int64 v8; // [rsp+88h] [rbp+10h] BYREF
  PMDL Mdl; // [rsp+90h] [rbp+18h] BYREF

  v2 = a2[1];
  v8 = 0LL;
  v5 = (void *)(*(_QWORD *)(a1 + 32) + (v2 & 0xFFFFFFF));
  Mdl = 0LL;
  v6 = WbVerifyVirtualAddressSignature(v5);
  if ( v6 >= 0 )
  {
    v6 = sub_1405B417C((_DWORD)v5, a2[2] & 0xFFFFFFF, (*a2 & 2) == 0, (unsigned int)&Mdl, (__int64)&v8);
    if ( v6 >= 0 )
    {
      v6 = sub_1406AEB04(
             1,
             (_DWORD)v5,
             v8,
             a2[2] & 0xFFFFFFF,
             *(_QWORD *)(a1 + 56) + 72LL,
             a2[1] & 0xFFFFFFF,
             *(_QWORD *)(a1 + 56) + 80LL);
      if ( v6 >= 0 )
        *a2 &= 0xFFFFFC03;
    }
  }
  sub_1406AF504(Mdl);
  return (unsigned int)v6;
}
