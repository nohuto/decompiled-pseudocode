/*
 * XREFs of WbDecryptWarbirdEncryptionSegmentBlockV0 @ 0x1405855DC
 * Callers:
 *     WbDecryptWarbirdEncryptionSegment @ 0x1405854AC (WbDecryptWarbirdEncryptionSegment.c)
 * Callees:
 *     ApplyRelocations @ 0x1400014FC (ApplyRelocations.c)
 *     ZwFlushInstructionCache @ 0x1401B9F30 (ZwFlushInstructionCache.c)
 *     sub_140585974 @ 0x140585974 (sub_140585974.c)
 *     WbVerifyVirtualAddressSignature @ 0x140691B44 (WbVerifyVirtualAddressSignature.c)
 *     sub_140691C44 @ 0x140691C44 (sub_140691C44.c)
 *     sub_140692704 @ 0x140692704 (sub_140692704.c)
 */

__int64 __fastcall WbDecryptWarbirdEncryptionSegmentBlockV0(__int64 *a1, int a2, _DWORD *a3)
{
  void *v6; // rsi
  int v7; // ebx
  __int64 v8; // r15
  PMDL Mdl; // [rsp+50h] [rbp-38h] BYREF
  __int64 v11; // [rsp+A8h] [rbp+20h] BYREF

  v11 = 0LL;
  Mdl = 0LL;
  if ( a2 && (*a3 & 1) != 0 )
  {
    v7 = 0;
  }
  else
  {
    v6 = (void *)(a1[4] + (a3[1] & 0xFFFFFFF));
    v7 = WbVerifyVirtualAddressSignature(v6);
    if ( v7 >= 0 )
    {
      v7 = sub_140585974((_DWORD)v6, a3[2] & 0xFFFFFFF, (*a3 & 2) == 0, (unsigned int)&Mdl, (__int64)&v11);
      if ( v7 >= 0 )
      {
        v8 = v11;
        if ( !a2
          || (v7 = ApplyRelocations(
                     a1[5],
                     *(_DWORD *)(a1[7] + 48),
                     a1[4],
                     *(_QWORD *)(a1[7] + 56) - a1[4],
                     (__int64)v6,
                     v11,
                     a3[2] & 0xFFFFFFF),
              v7 >= 0) )
        {
          v7 = sub_140691C44(0, (_DWORD)v6, v8, a3[2] & 0xFFFFFFF, a1[7] + 72, a3[1] & 0xFFFFFFF, a1[7] + 80);
          if ( v7 >= 0 )
          {
            if ( !a2
              || (v7 = ApplyRelocations(
                         a1[5],
                         *(_DWORD *)(a1[7] + 48),
                         a1[4],
                         a1[4] - *(_QWORD *)(a1[7] + 56),
                         (__int64)v6,
                         v8,
                         a3[2] & 0xFFFFFFF),
                  v7 >= 0) )
            {
              v7 = ZwFlushInstructionCache((HANDLE)0xFFFFFFFFFFFFFFFFLL, v6, a3[2] & 0xFFFFFFF);
            }
          }
        }
      }
    }
  }
  sub_140692704(Mdl);
  return (unsigned int)v7;
}
