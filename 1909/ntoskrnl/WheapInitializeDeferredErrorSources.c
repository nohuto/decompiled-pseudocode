/*
 * XREFs of WheapInitializeDeferredErrorSources @ 0x14033F47C
 * Callers:
 *     WheaConfigureErrorSource @ 0x1405A2F30 (WheaConfigureErrorSource.c)
 * Callees:
 *     WheapCallErrorSourceInitialize @ 0x14018B9C0 (WheapCallErrorSourceInitialize.c)
 *     WheapInitializeErrorSource @ 0x14075E018 (WheapInitializeErrorSource.c)
 */

__int64 __fastcall WheapInitializeDeferredErrorSources(int a1)
{
  int v1; // edi
  __int64 i; // rbx

  v1 = 0;
  for ( i = qword_1404F27E8; v1 < dword_1404F27DC; ++v1 )
  {
    if ( *(_DWORD *)(i + 104) == a1
      && *(_BYTE *)(i + 88)
      && (int)WheapInitializeErrorSource(i) >= 0
      && (int)WheapCallErrorSourceInitialize(i, 1u) >= 0 )
    {
      *(_DWORD *)(i + 108) = 2;
      *(_BYTE *)(i + 88) = 0;
    }
    i = *(_QWORD *)i;
  }
  return 0LL;
}
