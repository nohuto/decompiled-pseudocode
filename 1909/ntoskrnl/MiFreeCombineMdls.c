/*
 * XREFs of MiFreeCombineMdls @ 0x1406F989C
 * Callers:
 *     MiCombineWorkingSet @ 0x1402E5F90 (MiCombineWorkingSet.c)
 *     MiProcessCrcList @ 0x1406F56E0 (MiProcessCrcList.c)
 * Callees:
 *     MiFreePagesFromMdl @ 0x1400DDE94 (MiFreePagesFromMdl.c)
 *     memmove @ 0x1401D7480 (memmove.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 */

void __fastcall MiFreeCombineMdls(__int64 a1)
{
  __int64 v1; // rsi
  unsigned int i; // ebp
  _DWORD *v3; // rdi
  unsigned int v4; // edx
  int v5; // eax
  _DWORD *v6; // r14
  unsigned __int64 v7; // rbx

  v1 = a1 + 64;
  for ( i = 0; i < 3; ++i )
  {
    v3 = *(_DWORD **)v1;
    if ( *(_QWORD *)v1 )
    {
      do
      {
        v4 = v3[11];
        v5 = v3[10];
        v6 = *(_DWORD **)v3;
        if ( v4 != v5 )
        {
          v7 = (unsigned __int64)(v5 - v4) >> 12;
          memmove(v3 + 12, &v3[2 * ((unsigned __int64)v4 >> 12) + 12], 8 * v7);
          *((_QWORD *)v3 + 5) = (unsigned int)((_DWORD)v7 << 12);
        }
        MiFreePagesFromMdl((ULONG_PTR)v3, 0);
        ExFreePoolWithTag(v3, 0);
        v3 = v6;
      }
      while ( v6 );
    }
    *(_QWORD *)v1 = 0LL;
    *(_QWORD *)(v1 + 24) = 0LL;
    v1 += 8LL;
  }
}
