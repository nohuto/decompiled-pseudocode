/*
 * XREFs of RaidAdapterQueryCapabilitiesIrpCompletion @ 0x1C00143C0
 * Callers:
 *     <none>
 * Callees:
 *     RaidPnPPassToMiniPort @ 0x1C00144F4 (RaidPnPPassToMiniPort.c)
 *     __security_check_cookie @ 0x1C0026060 (__security_check_cookie.c)
 */

__int64 __fastcall RaidAdapterQueryCapabilitiesIrpCompletion(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  __int64 v3; // rbx
  __int64 v4; // r8
  int v5; // eax
  int v6; // eax
  __int64 v8; // [rsp+30h] [rbp-28h] BYREF
  __int64 v9; // [rsp+38h] [rbp-20h]
  __int64 v10; // [rsp+40h] [rbp-18h]

  v2 = *(_QWORD *)(a2 + 184);
  v3 = *(_QWORD *)(a1 + 64);
  v4 = *(_QWORD *)(v2 + 8);
  if ( *(_BYTE *)(a2 + 65) )
    *(_BYTE *)(v2 + 3) |= 1u;
  if ( *(_DWORD *)(v3 + 328) == 5 )
  {
    v5 = *(_DWORD *)(v4 + 4);
    if ( (v5 & 0x10) != 0 )
      *(_DWORD *)(v4 + 4) = v5 & 0xFFFFFDFF;
  }
  if ( (*(_BYTE *)(v3 + 104) & 1) != 0 && (*(_DWORD *)(*(_QWORD *)(v3 + 544) + 184LL) & 4) != 0 )
  {
    v9 = 0LL;
    v10 = 0LL;
    v8 = 1572865LL;
    v6 = *(_DWORD *)(v4 + 12);
    HIDWORD(v8) = *(_DWORD *)(v4 + 4) & 0x3FF | (*(_DWORD *)(v4 + 4) >> 7) & 0x400;
    HIDWORD(v9) = v6;
    RaidPnPPassToMiniPort(a1, 9, v4, (unsigned int)&v8, 24);
  }
  ExReleaseRundownProtectionCacheAware(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(v3 + 272));
  return 0LL;
}
