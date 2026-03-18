/*
 * XREFs of CmpFreeAllMemory @ 0x140827840
 * Callers:
 *     CmShutdownSystem @ 0x1408273C4 (CmShutdownSystem.c)
 * Callees:
 *     __security_check_cookie @ 0x14019E700 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x1401C3B20 (KeBugCheckEx.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     CmpAttachToRegistryProcess @ 0x1405F31F0 (CmpAttachToRegistryProcess.c)
 *     CmpDetachFromRegistryProcess @ 0x1405FD4FC (CmpDetachFromRegistryProcess.c)
 *     CmpGetNextActiveHive @ 0x140661E60 (CmpGetNextActiveHive.c)
 *     CmpDumpKeyBodyList @ 0x14082B050 (CmpDumpKeyBodyList.c)
 *     CmpDestroyHive @ 0x14082F4C4 (CmpDestroyHive.c)
 */

void CmpFreeAllMemory()
{
  unsigned int v0; // edi
  char v1; // bp
  __int64 *NextActiveHive; // rbx
  int v3; // ecx
  int v4; // eax
  __int64 v5; // rsi
  __int64 *v6; // rsi
  __int64 v7; // r15
  __int64 i; // r14
  char v9; // al
  _QWORD *v10; // rcx
  _QWORD *j; // rdx
  char v12; // al
  int v13; // [rsp+30h] [rbp-58h] BYREF
  _BYTE v14[48]; // [rsp+38h] [rbp-50h] BYREF

  v0 = 0;
  v1 = 0;
  memset(v14, 0, sizeof(v14));
  NextActiveHive = CmpGetNextActiveHive(0LL);
  if ( NextActiveHive )
  {
    do
    {
      v3 = *((_DWORD *)NextActiveHive + 412);
      v4 = 0;
      v5 = NextActiveHive[205];
      v13 = 0;
      if ( v3 > 0 )
      {
        v6 = (__int64 *)(v5 + 16);
        v7 = (unsigned int)v3;
        do
        {
          for ( i = *v6; i; i = *(_QWORD *)(i + 8) )
          {
            v9 = v1;
            if ( !v1 )
              v9 = 1;
            v1 = v9;
            CmpDumpKeyBodyList(i - 16, &v13);
          }
          v6 += 3;
          --v7;
        }
        while ( v7 );
        v4 = v13;
      }
      v10 = (_QWORD *)NextActiveHive[198];
      v0 += v4;
      v1 = 0;
      while ( v10 )
      {
        for ( j = (_QWORD *)v10[2]; j != v10 + 2; j = (_QWORD *)*j )
        {
          if ( j[6] )
          {
            v12 = v1;
            if ( !v1 )
              v12 = 1;
            v1 = v12;
          }
        }
        v10 = (_QWORD *)*v10;
      }
      CmpAttachToRegistryProcess((__int64)v14);
      CmpDestroyHive(NextActiveHive);
      CmpDetachFromRegistryProcess((struct _KTHREAD *)v14);
      NextActiveHive = CmpGetNextActiveHive((struct _EX_RUNDOWN_REF *)NextActiveHive);
    }
    while ( NextActiveHive );
    if ( v0 )
      KeBugCheckEx(0x51u, 0xFuLL, 1uLL, v0, 0LL);
  }
  ExFreePoolWithTag(CmpNameCacheTable, 0);
}
