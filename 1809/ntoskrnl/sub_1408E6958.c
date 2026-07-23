/*
 * XREFs of sub_1408E6958 @ 0x1408E6958
 * Callers:
 *     WbDecryptWarbirdEncryptionSegment @ 0x1405854AC (WbDecryptWarbirdEncryptionSegment.c)
 * Callees:
 *     ApplyRelocations @ 0x1400014FC (ApplyRelocations.c)
 *     ZwFlushInstructionCache @ 0x1401B9F30 (ZwFlushInstructionCache.c)
 *     memmove @ 0x1401D1640 (memmove.c)
 *     sub_140585974 @ 0x140585974 (sub_140585974.c)
 *     WbVerifyVirtualAddressSignature @ 0x140691B44 (WbVerifyVirtualAddressSignature.c)
 *     sub_140691C44 @ 0x140691C44 (sub_140691C44.c)
 *     sub_140692704 @ 0x140692704 (sub_140692704.c)
 */

__int64 __fastcall sub_1408E6958(__int64 *a1, int a2, _DWORD *a3)
{
  int v6; // edi
  void *v7; // rsi
  _DWORD *v8; // r14
  __int64 v10; // [rsp+38h] [rbp-50h]
  PMDL Mdl[2]; // [rsp+50h] [rbp-38h] BYREF
  char v12; // [rsp+98h] [rbp+10h] BYREF
  void *v13; // [rsp+A8h] [rbp+20h] BYREF

  v13 = 0LL;
  Mdl[0] = 0LL;
  v12 = 0;
  if ( a2 && (*a3 & 1) != 0 )
  {
    v6 = 0;
  }
  else
  {
    v7 = (void *)(a1[4] + (a3[1] & 0xFFFFFFF));
    v6 = WbVerifyVirtualAddressSignature(v7, a3[2] & 0xFFFFFFF, (*a3 & 2) == 0);
    if ( v6 >= 0 )
    {
      v6 = sub_140585974(v7, a3[2] & 0xFFFFFFF, (*a3 & 2) == 0, (__int64)Mdl, (__int64)&v13);
      if ( v6 >= 0 )
      {
        v8 = v13;
        if ( !a2
          || (v6 = ApplyRelocations(
                     a1[5],
                     *(_DWORD *)(a1[7] + 48),
                     a1[4],
                     *(_QWORD *)(a1[7] + 56) - a1[4],
                     (__int64)v7,
                     (__int64)v13,
                     a3[2] & 0xFFFFFFF),
              v6 >= 0) )
        {
          memmove(v8, v7, a3[2] & 0xFFFFFFF);
          if ( (*a3 & 2) != 0 || (a3[2] & 0xFFFFFFFu) >= 4 )
          {
            if ( (*a3 & 2) == 0 )
              *v8 = a3[3];
            v6 = sub_140691C44(
                   0,
                   v8,
                   (char *)v8,
                   a3[2] & 0xFFFFFFF,
                   (__int64 *)(a1[7] + 72),
                   a3[1] & 0xFFFFFFF,
                   (__int128 *)(a1[7] + 80),
                   v10,
                   &v12);
            if ( v6 >= 0 )
            {
              if ( !a2
                || (v6 = ApplyRelocations(
                           a1[5],
                           *(_DWORD *)(a1[7] + 48),
                           a1[4],
                           a1[4] - *(_QWORD *)(a1[7] + 56),
                           (__int64)v7,
                           (__int64)v8,
                           a3[2] & 0xFFFFFFF),
                    v6 >= 0) )
              {
                v6 = ZwFlushInstructionCache((HANDLE)0xFFFFFFFFFFFFFFFFLL, v7, a3[2] & 0xFFFFFFF);
              }
            }
          }
          else
          {
            v6 = -1073741811;
          }
        }
      }
    }
  }
  sub_140692704(Mdl[0]);
  return (unsigned int)v6;
}
