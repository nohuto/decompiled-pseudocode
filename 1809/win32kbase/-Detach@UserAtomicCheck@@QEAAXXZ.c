/*
 * XREFs of ?Detach@UserAtomicCheck@@QEAAXXZ @ 0x1C00E4238
 * Callers:
 *     xxxCreateThreadInfo @ 0x1C002C1CC (xxxCreateThreadInfo.c)
 * Callees:
 *     UserIsUserCritSecInExclusive @ 0x1C002E700 (UserIsUserCritSecInExclusive.c)
 */

void __fastcall UserAtomicCheck::Detach(UserAtomicCheck *this)
{
  unsigned int v2; // edx

  if ( gpresUser )
  {
    if ( UserIsUserCritSecInExclusive() )
    {
      *(_BYTE *)this = 1;
      LODWORD(gdwInAtomicOperation) = gdwInAtomicOperation - 1;
      if ( gpAtomickCheckStacks )
      {
        v2 = 0;
        if ( gdwAtomicCheckLogSize )
        {
          while ( *(_DWORD *)(((unsigned __int64)v2 << 6) + gpAtomickCheckStacks) != *((_DWORD *)this + 1) )
          {
            if ( ++v2 >= gdwAtomicCheckLogSize )
              return;
          }
          *(_DWORD *)(((unsigned __int64)v2 << 6) + gpAtomickCheckStacks) = 0;
        }
      }
    }
  }
}
