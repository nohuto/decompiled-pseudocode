/*
 * XREFs of KeIntSteerGetSteeringMode @ 0x14017CB78
 * Callers:
 *     KiIntSteerChooseInitialTargetProcessors @ 0x14017CA60 (KiIntSteerChooseInitialTargetProcessors.c)
 *     ExpQueryInterruptSteeringInformation @ 0x140786BD4 (ExpQueryInterruptSteeringInformation.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KeIntSteerGetSteeringMode(__int64 a1, __int64 a2, char a3, int a4, __int64 a5)
{
  unsigned int v5; // edx
  __int64 v6; // rcx

  v5 = 0;
  if ( KiIntSteerEnabled && a3 && !*(_WORD *)(a5 + 8) )
  {
    v6 = 0LL;
    if ( LOWORD(KeActiveProcessors[0]) )
      v6 = qword_140572748[0];
    if ( *(_QWORD *)a5 == v6 )
    {
      if ( (KiInterruptControllerInfo & 1) != 0 && !a4 )
        return 1;
      if ( a4 != 1 )
        return v5;
      if ( (((unsigned int)KiInterruptControllerInfo >> 1) & 1) != 0 )
        return 1;
      if ( (KiInterruptControllerInfo & 1) != 0 )
        return 2;
    }
  }
  return v5;
}
