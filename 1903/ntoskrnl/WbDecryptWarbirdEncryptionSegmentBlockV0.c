/*
 * XREFs of WbDecryptWarbirdEncryptionSegmentBlockV0 @ 0x1405B3DE4
 * Callers:
 *     WbDecryptWarbirdEncryptionSegment @ 0x1405B3CB4 (WbDecryptWarbirdEncryptionSegment.c)
 * Callees:
 *     ApplyRelocations @ 0x140001720 (ApplyRelocations.c)
 *     ZwFlushInstructionCache @ 0x1401C1D30 (ZwFlushInstructionCache.c)
 *     sub_1405B417C @ 0x1405B417C (sub_1405B417C.c)
 *     WbVerifyVirtualAddressSignature @ 0x1406AE564 (WbVerifyVirtualAddressSignature.c)
 *     sub_1406AEB04 @ 0x1406AEB04 (sub_1406AEB04.c)
 *     sub_1406AF504 @ 0x1406AF504 (sub_1406AF504.c)
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
      v7 = sub_1405B417C((_DWORD)v6, a3[2] & 0xFFFFFFF, (*a3 & 2) == 0, (unsigned int)&Mdl, (__int64)&v11);
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
          v7 = sub_1406AEB04(0, (_DWORD)v6, v8, a3[2] & 0xFFFFFFF, a1[7] + 72, a3[1] & 0xFFFFFFF, a1[7] + 80);
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
  sub_1406AF504(Mdl);
  return (unsigned int)v7;
}
