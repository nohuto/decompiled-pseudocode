/*
 * XREFs of PpmIdleGuestTest @ 0x1402E7710
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1401C6030 (_guard_dispatch_icall.c)
 */

__int64 __fastcall PpmIdleGuestTest(__int64 a1, __int64 a2, int a3)
{
  unsigned int v3; // edx
  unsigned int (__fastcall *v4)(__int64, _QWORD); // rax

  v3 = 0;
  if ( a3 != -1 )
  {
    v4 = *(unsigned int (__fastcall **)(__int64, _QWORD))(PpmPlatformStates + 16);
    if ( v4 )
      return v4(a1, 0LL);
  }
  return v3;
}
