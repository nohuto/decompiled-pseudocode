/*
 * XREFs of sub_14058585C @ 0x14058585C
 * Callers:
 *     WbReEncryptWarbirdEncryptionSegment @ 0x1405857A8 (WbReEncryptWarbirdEncryptionSegment.c)
 * Callees:
 *     sub_140585974 @ 0x140585974 (sub_140585974.c)
 *     WbVerifyVirtualAddressSignature @ 0x140691B44 (WbVerifyVirtualAddressSignature.c)
 *     sub_140691C44 @ 0x140691C44 (sub_140691C44.c)
 *     sub_140692704 @ 0x140692704 (sub_140692704.c)
 */

__int64 __fastcall sub_14058585C(__int64 a1, _DWORD *a2)
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
    v6 = sub_140585974((_DWORD)v5, a2[2] & 0xFFFFFFF, (*a2 & 2) == 0, (unsigned int)&Mdl, (__int64)&v8);
    if ( v6 >= 0 )
    {
      v6 = sub_140691C44(
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
  sub_140692704(Mdl);
  return (unsigned int)v6;
}
