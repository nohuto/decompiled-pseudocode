/*
 * XREFs of KiIntSteerDistributeInterrupts @ 0x140063190
 * Callers:
 *     KeIntSteerPeriodic @ 0x1400626A0 (KeIntSteerPeriodic.c)
 * Callees:
 *     KiIntSteerUpdateDeviceInterruptMask @ 0x14012F790 (KiIntSteerUpdateDeviceInterruptMask.c)
 *     KiIntSteerSetDestination @ 0x140131B98 (KiIntSteerSetDestination.c)
 */

__int64 KiIntSteerDistributeInterrupts()
{
  ULONG_PTR v0; // rbx
  __int64 v1; // rdx
  __int64 v2; // rcx
  ULONG_PTR j; // rbx
  __int64 v5; // rcx
  __int64 v6; // rax
  __int64 v7; // [rsp+20h] [rbp-18h] BYREF
  __int64 i; // [rsp+28h] [rbp-10h]

  v0 = KiIntTrackRootList;
  v7 = 0LL;
  for ( i = 0LL; (ULONG_PTR *)v0 != &KiIntTrackRootList; v0 = *(_QWORD *)v0 )
  {
    if ( *(_BYTE *)(v0 + 132) )
    {
      v1 = *(_QWORD *)(v0 + 176);
      v2 = *(_QWORD *)(v0 + 160);
      if ( v1 != v2 )
      {
        LOWORD(i) = *(_WORD *)(v0 + 184);
        if ( (_WORD)i == *(_WORD *)(v0 + 168) )
          v5 = v1 & ~v2;
        else
          v5 = v1;
        v7 = v5;
        KiIntSteerUpdateDeviceInterruptMask(&v7, 0LL);
      }
    }
  }
  for ( j = KiIntTrackRootList; (ULONG_PTR *)j != &KiIntTrackRootList; j = *(_QWORD *)j )
  {
    if ( *(_BYTE *)(j + 132) && *(_QWORD *)(j + 176) != *(_QWORD *)(j + 160) )
    {
      KiIntSteerSetDestination(j);
      LOWORD(i) = *(_WORD *)(j + 184);
      if ( *(_WORD *)(j + 168) == (_WORD)i )
        v6 = *(_QWORD *)(j + 160) & ~*(_QWORD *)(j + 176);
      else
        v6 = *(_QWORD *)(j + 160);
      v7 = v6;
      KiIntSteerUpdateDeviceInterruptMask(&v7, 1LL);
      *(_WORD *)(j + 168) = *(_WORD *)(j + 184);
      *(_QWORD *)(j + 160) = *(_QWORD *)(j + 176);
    }
  }
  return 0LL;
}
