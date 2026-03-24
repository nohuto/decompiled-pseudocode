/*
 * XREFs of WheapInitializeDeferredErrorSources @ 0x14031FA54
 * Callers:
 *     WheaConfigureErrorSource @ 0x140573910 (WheaConfigureErrorSource.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1401C5ED0 (_guard_dispatch_icall.c)
 *     WheapInitializeErrorSource @ 0x140727D98 (WheapInitializeErrorSource.c)
 */

__int64 __fastcall WheapInitializeDeferredErrorSources(int a1)
{
  int v1; // edi
  __int64 i; // rbx

  v1 = 0;
  for ( i = qword_1404C64A8; v1 < dword_1404C64A4; ++v1 )
  {
    if ( *(_DWORD *)(i + 97) == a1
      && *(_BYTE *)(i + 88)
      && (int)WheapInitializeErrorSource(i) >= 0
      && (*((int (__fastcall **)(__int64, __int64, _QWORD))&unk_1404DC0B8 + 6 * *(int *)(i + 40)))(
           1LL,
           i + 89,
           *(_QWORD *)(i + 56)) >= 0 )
    {
      *(_DWORD *)(i + 101) = 2;
      *(_BYTE *)(i + 88) = 0;
    }
    i = *(_QWORD *)i;
  }
  return 0LL;
}
