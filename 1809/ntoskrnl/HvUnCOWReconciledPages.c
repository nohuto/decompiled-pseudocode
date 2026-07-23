/*
 * XREFs of HvUnCOWReconciledPages @ 0x14000EEC0
 * Callers:
 *     CmpFlushHive @ 0x1405B3F54 (CmpFlushHive.c)
 * Callees:
 *     RtlMergeBitMaps @ 0x14000FA94 (RtlMergeBitMaps.c)
 *     RtlFindNextForwardRunClearCapped @ 0x14002B750 (RtlFindNextForwardRunClearCapped.c)
 *     HvpViewMapUnCOWAndSealRange @ 0x1405A6824 (HvpViewMapUnCOWAndSealRange.c)
 */

void __fastcall HvUnCOWReconciledPages(__int64 a1)
{
  __int64 v2; // rdi
  unsigned int v3; // edx
  __int64 v4; // r9
  int *v5; // r10
  int v6; // r8d
  int v7; // r8d
  __int64 i; // rdx
  int NextForwardRunClearCapped; // eax
  int v10; // esi
  int v11; // r14d
  unsigned int v12; // r8d
  __int64 v13; // rdx
  int v14; // eax
  int v15; // [rsp+30h] [rbp+8h] BYREF

  if ( (*(_DWORD *)(a1 + 160) & 0x20000) != 0 )
  {
    v2 = a1 + 1728;
    if ( (*(_DWORD *)(a1 + 4280) & 1) != 0 && *(struct _KTHREAD **)(a1 + 4232) == KeGetCurrentThread() )
      RtlMergeBitMaps(v2, a1 + 1680);
    v3 = *(_DWORD *)v2;
    v4 = 0LL;
    while ( v3 )
    {
      v5 = (int *)(*(_QWORD *)(v2 + 8) + 4 * v4);
      v6 = *v5;
      if ( v3 < 0x20 )
      {
        v14 = 1 << v3;
        v3 = 0;
        v7 = (v14 - 1) ^ v6;
      }
      else
      {
        v3 -= 32;
        v7 = ~v6;
      }
      *v5 = v7;
      v4 = (unsigned int)(v4 + 1);
    }
    RtlMergeBitMaps(v2, a1 + 88);
    RtlMergeBitMaps(v2, a1 + 112);
    if ( (*(_DWORD *)(a1 + 4280) & 1) != 0 && *(struct _KTHREAD **)(a1 + 4232) != KeGetCurrentThread() )
      RtlMergeBitMaps(v2, a1 + 1680);
    for ( i = 0LL; ; i = (unsigned int)(v11 + v10) )
    {
      NextForwardRunClearCapped = RtlFindNextForwardRunClearCapped(v2, i, 0xFFFFFFFFLL, &v15);
      v10 = NextForwardRunClearCapped;
      if ( !NextForwardRunClearCapped )
        break;
      v11 = v15;
      v12 = ((v15 << 9) + (NextForwardRunClearCapped << 9)) & 0xFFFFF000;
      v13 = ((v15 << 9) + 4095) & 0xFFFFF000;
      if ( (_DWORD)v13 != v12 )
        HvpViewMapUnCOWAndSealRange(a1 + 216, v13, v12 - (unsigned int)v13);
    }
  }
}
