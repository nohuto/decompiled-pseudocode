/*
 * XREFs of SepAssemblePrivileges @ 0x1406B33C4
 * Callers:
 *     SepAccessCheck @ 0x1400528F0 (SepAccessCheck.c)
 *     SepAccessCheckEx @ 0x14015BED8 (SepAccessCheckEx.c)
 * Callees:
 *     ExAllocatePoolWithTag @ 0x14034C010 (ExAllocatePoolWithTag.c)
 */

void __fastcall SepAssemblePrivileges(int a1, char a2, char a3, char a4, LUID **a5)
{
  LUID *PoolWithTag; // rax
  LUID *v9; // r8
  __int64 LowPart; // rax

  if ( a5 )
  {
    if ( a1 )
    {
      PoolWithTag = (LUID *)ExAllocatePoolWithTag(PagedPool, (unsigned int)(12 * (a1 - 1) + 20), 0x72506553u);
      v9 = PoolWithTag;
      if ( PoolWithTag )
      {
        PoolWithTag->LowPart = 0;
        PoolWithTag->HighPart = 0;
        LowPart = 0LL;
        if ( a2 )
        {
          v9[1] = SeSecurityPrivilege;
          *(&v9[2].LowPart + 3 * v9->LowPart++) = 0x80000000;
          LowPart = v9->LowPart;
        }
        if ( a3 )
        {
          *(LUID *)((char *)&v9[1] + 12 * LowPart) = (LUID)SeTakeOwnershipPrivilege;
          *(&v9[2].LowPart + 3 * v9->LowPart++) = 0x80000000;
          LowPart = v9->LowPart;
        }
        if ( a4 )
        {
          *(LUID *)((char *)&v9[1] + 12 * LowPart) = (LUID)SeRelabelPrivilege;
          *(&v9[2].LowPart + 3 * v9->LowPart++) = 0x80000000;
        }
        *a5 = v9;
      }
    }
  }
}
