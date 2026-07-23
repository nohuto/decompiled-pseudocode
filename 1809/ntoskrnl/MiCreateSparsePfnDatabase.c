/*
 * XREFs of MiCreateSparsePfnDatabase @ 0x1409BC4A4
 * Callers:
 *     MiCreatePfnDatabase @ 0x1409BB550 (MiCreatePfnDatabase.c)
 * Callees:
 *     MxMapPfnRange @ 0x1409BC688 (MxMapPfnRange.c)
 */

__int64 __fastcall MiCreateSparsePfnDatabase(__int64 a1)
{
  __int64 *v1; // r14
  __int64 *v2; // rbx
  int v3; // edi
  __int64 v4; // rsi
  __int64 v5; // r9
  __int64 v6; // rdx
  unsigned __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r8

  v1 = (__int64 *)(a1 + 32);
  v2 = *(__int64 **)(a1 + 32);
  v3 = 3;
  v4 = 0LL;
  v5 = -1LL;
  if ( v2 == (__int64 *)(a1 + 32) )
    goto LABEL_25;
  v6 = 0x5C0C00048LL;
  do
  {
    v7 = *((int *)v2 + 4);
    if ( (unsigned int)v7 <= 0x22 && _bittest64(&v6, v7) )
    {
      if ( v5 == -1 )
        goto LABEL_20;
    }
    else
    {
      if ( v5 == -1 )
      {
        v5 = v2[3];
        v6 = 0x5C0C00048LL;
        goto LABEL_19;
      }
      if ( v4 + v5 == v2[3] )
      {
        if ( (v3 == 2 || v3 == 24) && ((_DWORD)v7 == 2 || (_DWORD)v7 == 24) )
        {
LABEL_13:
          v4 += v2[4];
          v6 = 0x5C0C00048LL;
          goto LABEL_20;
        }
        if ( v3 == 2 )
          goto LABEL_14;
        if ( (_DWORD)v7 != 2 && v3 != 24 && (_DWORD)v7 != 24 )
          goto LABEL_13;
      }
    }
    if ( v3 != 2 && v3 != 24 )
    {
      v8 = 1LL;
      goto LABEL_15;
    }
LABEL_14:
    v8 = 0LL;
LABEL_15:
    if ( !(unsigned int)MxMapPfnRange(v5, v4, v8) )
      return 0LL;
    v7 = *((int *)v2 + 4);
    v6 = 0x5C0C00048LL;
    if ( (unsigned int)v7 > 0x22 || !_bittest64(&v6, v7) )
    {
      v5 = v2[3];
LABEL_19:
      v4 = v2[4];
      v3 = v7;
      goto LABEL_20;
    }
    v5 = -1LL;
LABEL_20:
    v2 = (__int64 *)*v2;
  }
  while ( v2 != v1 );
  if ( v5 == -1 || (v3 == 2 || v3 == 24 ? (v9 = 0LL) : (v9 = 1LL), (unsigned int)MxMapPfnRange(v5, v4, v9)) )
  {
LABEL_25:
    if ( (qword_14043BB20 == 0x1000000000LL || (unsigned int)MxMapPfnRange(qword_14043BB20, 2048LL, 1LL))
      && (unsigned int)MxMapPfnRange(0x1000000000LL, -1LL, 1LL) )
    {
      return 1LL;
    }
  }
  return 0LL;
}
