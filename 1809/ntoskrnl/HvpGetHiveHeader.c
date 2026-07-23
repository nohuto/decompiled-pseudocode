/*
 * XREFs of HvpGetHiveHeader @ 0x1405A73B8
 * Callers:
 *     HvLoadHive @ 0x1405A5C9C (HvLoadHive.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1401C6030 (_guard_dispatch_icall.c)
 *     memset @ 0x1401D1980 (memset.c)
 *     HvpHeaderCheckSum @ 0x1405A74F0 (HvpHeaderCheckSum.c)
 */

__int64 __fastcall HvpGetHiveHeader(__int64 a1, char **a2, _QWORD *a3)
{
  char **v4; // r15
  char *v6; // rax
  char *v7; // rbx
  int v8; // ecx
  unsigned int v9; // eax
  unsigned int v10; // ecx
  unsigned int v11; // edi
  int v12; // eax
  int v14; // eax

  *a2 = 0LL;
  v4 = a2;
  LOBYTE(a2) = 1;
  v6 = (char *)(*(__int64 (__fastcall **)(_QWORD, char **, __int64))(a1 + 24))(
                 *(unsigned int *)(a1 + 132),
                 a2,
                 842222915LL);
  v7 = v6;
  if ( v6 )
  {
    memset(v6, 0, 0x1000uLL);
    if ( (*(int (__fastcall **)(__int64, _QWORD, _QWORD, char *, _DWORD))(a1 + 48))(
           a1,
           0LL,
           0LL,
           v7,
           *(_DWORD *)(a1 + 136) << 9) >= 0 )
    {
      if ( *(_DWORD *)v7 == 1718052210 && *((_DWORD *)v7 + 127) == (unsigned int)HvpHeaderCheckSum(v7) )
      {
        v8 = *((_DWORD *)v7 + 10);
        if ( (unsigned int)(v8 - 1) <= 0x7FFFDFFF && (v8 & 0xFFF) == 0 )
        {
          if ( !*((_DWORD *)v7 + 7) )
          {
            v9 = *((_DWORD *)v7 + 5);
            if ( v9 <= 1 )
            {
              v10 = *((_DWORD *)v7 + 6);
              if ( v10 >= 3 )
              {
                v11 = 5;
                if ( (v9 != 1 || v10 - 1 <= 5) && *((_DWORD *)v7 + 8) == 1 )
                {
                  *a3 = *(_QWORD *)(v7 + 12);
                  v12 = *((_DWORD *)v7 + 2);
                  *v4 = v7;
                  if ( *((_DWORD *)v7 + 1) == v12 )
                  {
                    *((_DWORD *)v7 + 11) = 1;
                    return 3;
                  }
                  return v11;
                }
              }
            }
          }
          goto LABEL_16;
        }
      }
      v14 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64, char *, _DWORD))(a1 + 48))(
              a1,
              0LL,
              4096LL,
              v7,
              *(_DWORD *)(a1 + 136) << 9);
      if ( v14 == -1073741807 )
      {
LABEL_16:
        v11 = 0;
LABEL_24:
        (*(void (__fastcall **)(char *, _QWORD))(a1 + 32))(v7, *(unsigned int *)(a1 + 132));
        return v11;
      }
      if ( v14 >= 0 )
      {
        if ( *(_DWORD *)v7 == 1852400232 && !*((_DWORD *)v7 + 1) )
        {
          v11 = 4;
          *a3 = *(_QWORD *)(v7 + 20);
          goto LABEL_24;
        }
        goto LABEL_16;
      }
    }
    v11 = 7;
    goto LABEL_24;
  }
  return 2LL;
}
