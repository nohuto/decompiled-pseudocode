/*
 * XREFs of SdbpReleaseSearchDBContext @ 0x14067FB84
 * Callers:
 *     SdbGetDatabaseMatch @ 0x14067F9BC (SdbGetDatabaseMatch.c)
 *     SdbpCheckKObject @ 0x140724020 (SdbpCheckKObject.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     SdbpFreePackageAttributes @ 0x1408E8588 (SdbpFreePackageAttributes.c)
 *     AslHashFree @ 0x1408EB138 (AslHashFree.c)
 */

void __fastcall SdbpReleaseSearchDBContext(_QWORD *a1)
{
  void *v2; // rcx
  void *v3; // rcx
  _DWORD *v4; // r8
  void *v5; // rcx
  void *v6; // rcx
  void *v7; // rcx
  void *v8; // rcx
  __int64 i; // rsi
  _QWORD *v10; // rdi
  void *v11; // rcx
  void *v12; // rcx
  void *v13; // rcx

  if ( a1 )
  {
    v2 = (void *)a1[3];
    if ( v2 )
    {
      ExFreePoolWithTag(v2, 0x74705041u);
      a1[3] = 0LL;
    }
    v3 = (void *)a1[8];
    if ( v3 )
    {
      ExFreePoolWithTag(v3, 0x74705041u);
      a1[8] = 0LL;
    }
    v4 = (_DWORD *)a1[9];
    if ( v4 )
    {
      for ( i = 0LL; (unsigned int)i < *v4; i = (unsigned int)(i + 1) )
      {
        v10 = &v4[12 * i + 2];
        if ( v10 )
        {
          v11 = (void *)v10[2];
          if ( v11 )
          {
            AslHashFree(v11);
            v10[2] = 0LL;
          }
          v12 = (void *)v10[3];
          if ( v12 )
          {
            AslHashFree(v12);
            v10[3] = 0LL;
          }
          v13 = (void *)v10[5];
          if ( v13 )
          {
            ExFreePoolWithTag(v13, 0x74705041u);
            v10[4] = 0LL;
            v10[5] = 0LL;
          }
        }
        v4 = (_DWORD *)a1[9];
      }
      if ( v4 )
        ExFreePoolWithTag(v4, 0x74705041u);
      a1[9] = 0LL;
    }
    v5 = (void *)a1[4];
    if ( v5 )
    {
      ExFreePoolWithTag(v5, 0x74705041u);
      a1[4] = 0LL;
    }
    v6 = (void *)a1[5];
    if ( v6 )
    {
      ExFreePoolWithTag(v6, 0x74705041u);
      a1[5] = 0LL;
    }
    v7 = (void *)a1[6];
    if ( v7 )
    {
      ExFreePoolWithTag(v7, 0x74705041u);
      a1[6] = 0LL;
    }
    v8 = (void *)a1[11];
    if ( v8 )
    {
      SdbpFreePackageAttributes(v8);
      a1[11] = 0LL;
    }
  }
}
