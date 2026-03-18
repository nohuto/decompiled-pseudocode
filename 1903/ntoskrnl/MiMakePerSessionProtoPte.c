/*
 * XREFs of MiMakePerSessionProtoPte @ 0x1402E4DD4
 * Callers:
 *     MiBuildForkPte @ 0x1402E1E60 (MiBuildForkPte.c)
 * Callees:
 *     MmGetSessionIdEx @ 0x14003F4F0 (MmGetSessionIdEx.c)
 *     MiSwizzleInvalidPte @ 0x1400763F0 (MiSwizzleInvalidPte.c)
 *     MiGetProtoPteAddress @ 0x1400C7FF0 (MiGetProtoPteAddress.c)
 *     MiGetSharedProtos @ 0x14015C5CC (MiGetSharedProtos.c)
 */

__int64 __fastcall MiMakePerSessionProtoPte(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  int SessionId; // r14d
  __int64 v8; // rbp
  __int64 ProtoPteAddress; // rdi
  __int64 v10; // rdi
  __int64 SharedProtos; // rax
  _BYTE *v13; // [rsp+20h] [rbp-28h] BYREF

  SessionId = MmGetSessionIdEx(a1);
  if ( SessionId == (unsigned int)MmGetSessionIdEx(a2) )
    return ZeroPte;
  v13 = *(_BYTE **)(a4 + 72);
  v8 = *(_QWORD *)v13;
  if ( (*(_DWORD *)(*(_QWORD *)v13 + 56LL) & 0x4000000) == 0 )
    return ZeroPte;
  ProtoPteAddress = MiGetProtoPteAddress(a4, (unsigned __int64)(a3 << 25 >> 16) >> 12, 0, &v13);
  if ( !ProtoPteAddress || (v13[34] & 2) == 0 )
    return ZeroPte;
  v10 = (ProtoPteAddress - *(_QWORD *)(MiGetSharedProtos(v8) + 72)) >> 3;
  SharedProtos = MiGetSharedProtos(v8);
  return MiSwizzleInvalidPte(((*(_QWORD *)(SharedProtos + 72) + 8 * v10) << 16) | 0x400);
}
