/*
 * XREFs of PspWow64SetupUserProcessAddressSpace @ 0x1400F2A34
 * Callers:
 *     PspSetupUserProcessAddressSpace @ 0x14067912C (PspSetupUserProcessAddressSpace.c)
 * Callees:
 *     PspWow64ThunkProcessParameters @ 0x140133878 (PspWow64ThunkProcessParameters.c)
 */

__int64 __fastcall PspWow64SetupUserProcessAddressSpace(__int64 a1, __int64 a2)
{
  __int64 *v2; // rcx
  __int64 result; // rax
  __int16 v4; // r8
  __int64 v5; // rcx

  v2 = *(__int64 **)(a1 + 1064);
  result = 0LL;
  if ( v2 )
  {
    v4 = *((_WORD *)v2 + 4);
    if ( v4 == 332 || v4 == 452 )
    {
      v5 = *v2;
      *(_DWORD *)(a2 + 228) = v5;
      return PspWow64ThunkProcessParameters(v5, *(_QWORD *)(a2 + 208), a2 + 224);
    }
  }
  return result;
}
