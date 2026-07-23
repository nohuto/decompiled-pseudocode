/*
 * XREFs of MiLimitLoaderBlockTotalMemory @ 0x1409D4B20
 * Callers:
 *     MiMemoryLicense @ 0x1409D4A44 (MiMemoryLicense.c)
 * Callees:
 *     KeBugCheckEx @ 0x1401BBD20 (KeBugCheckEx.c)
 */

unsigned __int64 __fastcall MiLimitLoaderBlockTotalMemory(__int64 a1, ULONG_PTR a2)
{
  __int64 *v2; // r8
  __int64 *v3; // rdi
  ULONG_PTR v4; // r9
  ULONG_PTR BugCheckParameter4; // r11
  unsigned __int64 v6; // rbx
  __int64 *v7; // r10
  __int64 v8; // rbp
  int i; // esi
  unsigned __int64 v10; // rcx
  __int64 v11; // rax
  unsigned __int64 v12; // rdx
  unsigned __int64 v13; // rax
  __int64 v14; // rcx
  unsigned __int64 v15; // rcx
  unsigned int v17; // eax
  unsigned __int64 v18; // rax
  __int64 *v19; // rax
  __int64 **v20; // rcx

  v2 = *(__int64 **)(a1 + 40);
  v3 = (__int64 *)(a1 + 32);
  v4 = 0LL;
  BugCheckParameter4 = 0LL;
  v6 = 0LL;
  v7 = v2;
  v8 = 0x5C0C00048LL;
  for ( i = 16777524; v7 != v3; v7 = (__int64 *)v7[1] )
  {
    v10 = *((int *)v7 + 4);
    if ( (unsigned int)v10 > 0x22 || !_bittest64(&v8, v10) )
    {
      v11 = v7[4];
      v4 += v11;
      if ( (unsigned int)v10 <= 0x18 )
      {
        if ( _bittest(&i, v10) )
          BugCheckParameter4 += v11;
      }
    }
  }
  if ( v4 - BugCheckParameter4 > a2 )
    KeBugCheckEx(0x1Au, 0x3030309uLL, a2, v4, BugCheckParameter4);
  if ( v2 != v3 )
  {
    v12 = (v4 - a2) & -(__int64)(a2 < v4);
    do
    {
      if ( v12 )
      {
        v17 = *((_DWORD *)v2 + 4);
        if ( v17 <= 0x18 )
        {
          if ( _bittest(&i, v17) )
          {
            v18 = v2[4];
            if ( v18 > v12 )
            {
              v2[4] = v18 - v12;
              v12 = 0LL;
            }
            else
            {
              v19 = (__int64 *)*v2;
              if ( *(__int64 **)(*v2 + 8) != v2 || (v20 = (__int64 **)v2[1], *v20 != v2) )
                __fastfail(3u);
              *v20 = v19;
              v19[1] = (__int64)v20;
              v12 -= v2[4];
              v2[4] = 0LL;
            }
          }
        }
      }
      v13 = *((int *)v2 + 4);
      if ( (unsigned int)v13 > 0x22 || !_bittest64(&v8, v13) )
      {
        v14 = v2[4];
        if ( v14 )
        {
          v15 = v2[3] + v14;
          if ( v15 > v6 )
            v6 = v15;
        }
      }
      v2 = (__int64 *)v2[1];
    }
    while ( v2 != v3 );
  }
  return v6;
}
