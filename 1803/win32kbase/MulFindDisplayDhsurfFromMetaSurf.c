/*
 * XREFs of MulFindDisplayDhsurfFromMetaSurf @ 0x1C00C7FA4
 * Callers:
 *     bDfbSurfacesMigrated @ 0x1C004A640 (bDfbSurfacesMigrated.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MulFindDisplayDhsurfFromMetaSurf(__int64 *a1)
{
  __int64 v3; // rax
  __int64 v4; // rcx
  __int64 v5; // r8
  __int64 **v6; // rdx
  __int64 v7; // r9
  _QWORD *v8; // r8
  __int64 v9; // rax

  if ( *((_WORD *)a1 + 38) != 3 )
    return 0LL;
  v3 = a1[3];
  v4 = 0LL;
  v5 = *a1;
  if ( v3 )
  {
    if ( (*(_DWORD *)(v3 + 40) & 0x20000) != 0 )
    {
      if ( v5 )
      {
        v6 = *(__int64 ***)a1[2];
        if ( v6 )
        {
          v7 = *(_QWORD *)(v5 + 8);
          while ( 1 )
          {
            v8 = *(_QWORD **)(v7 + 8LL * *((unsigned int *)v6 + 4));
            if ( v8 )
            {
              v9 = v8[3];
              if ( !v9 || *(_DWORD *)(*(_QWORD *)(v9 + 1784) + 24LL) == 1 )
                break;
            }
            v6 = (__int64 **)*v6;
            if ( !v6 )
              return v4;
          }
          return *v8;
        }
      }
    }
  }
  return v4;
}
