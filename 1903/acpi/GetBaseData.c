/*
 * XREFs of GetBaseData @ 0x1C001C030
 * Callers:
 *     ParseSuperName @ 0x1C00195D0 (ParseSuperName.c)
 *     DerefOf @ 0x1C001BE00 (DerefOf.c)
 *     ObjTypeSizeOf @ 0x1C0069A70 (ObjTypeSizeOf.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall GetBaseData(__int64 a1)
{
  __int16 v1; // ax

  while ( 1 )
  {
    while ( 1 )
    {
      v1 = *(_WORD *)(a1 + 2);
      if ( v1 != 128 )
        break;
      a1 = *(_QWORD *)(a1 + 16) + 64LL;
    }
    if ( v1 != 129 )
      break;
    a1 = *(_QWORD *)(a1 + 16);
  }
  return a1;
}
