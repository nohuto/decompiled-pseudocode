/*
 * XREFs of MiComputeIdealDpcGang @ 0x1402E83AC
 * Callers:
 *     MiInitializeDpcGang @ 0x1402E8814 (MiInitializeDpcGang.c)
 * Callees:
 *     KeQueryNodeActiveAffinity @ 0x1401089A0 (KeQueryNodeActiveAffinity.c)
 *     MiGetClosestNodeWithProcessors @ 0x1402D1D78 (MiGetClosestNodeWithProcessors.c)
 */

__int64 __fastcall MiComputeIdealDpcGang(__int64 a1, unsigned int a2)
{
  unsigned int ClosestNodeWithProcessors; // eax
  unsigned int v4; // ecx
  unsigned int v5; // r9d
  unsigned int v6; // r8d
  __int64 v7; // rdx
  __int64 v8; // rdx
  struct _GROUP_AFFINITY Affinity; // [rsp+20h] [rbp-18h] BYREF
  USHORT Count; // [rsp+40h] [rbp+8h] BYREF

  Affinity.Mask = 0LL;
  *(_QWORD *)&Affinity.Group = 0LL;
  ClosestNodeWithProcessors = MiGetClosestNodeWithProcessors(a2);
  v4 = ClosestNodeWithProcessors < (unsigned __int16)KeNumberNodes ? ClosestNodeWithProcessors : 0;
  *(_DWORD *)(a1 + 116) = v4;
  KeQueryNodeActiveAffinity(v4, &Affinity, &Count);
  v5 = 0;
  v6 = 0;
  for ( *(struct _GROUP_AFFINITY *)(a1 + 120) = Affinity; v6 < (unsigned int)KeNumberProcessors_0; ++v6 )
  {
    v7 = KiProcessorBlock[v6];
    if ( *(unsigned __int8 *)(v7 + 208) == Affinity.Group )
    {
      v8 = *(_QWORD *)(v7 + 24920);
      if ( (v8 & Affinity.Mask) != 0 )
      {
        ++v5;
        Affinity.Mask &= ~v8;
        if ( !Affinity.Mask )
          break;
      }
    }
  }
  return v5;
}
