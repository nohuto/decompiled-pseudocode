/*
 * XREFs of WheapInsertTriageDataBlock @ 0x1408DD944
 * Callers:
 *     WheapCreateLiveTriageDump @ 0x1408DD83C (WheapCreateLiveTriageDump.c)
 * Callees:
 *     memmove @ 0x1401D1640 (memmove.c)
 */

__int64 __fastcall WheapInsertTriageDataBlock(_DWORD *a1, const void *a2, unsigned int a3)
{
  size_t v4; // rbp
  unsigned int v6; // r9d
  unsigned int v7; // ebx
  __int64 v8; // rcx
  unsigned int v9; // r8d
  unsigned int v10; // esi
  unsigned int v11; // r11d
  _DWORD *v12; // r10
  unsigned int v13; // edx
  unsigned int v14; // ecx
  unsigned int v15; // edx
  unsigned int v16; // eax
  char *v17; // rcx
  unsigned int v18; // esi

  v4 = a3;
  if ( (a1[1038] & 0x800) != 0 )
  {
    v6 = a1[2079];
    v7 = 0;
    if ( v6 )
    {
      v8 = (unsigned int)a1[2078];
      if ( v8 + 16 * (unsigned __int64)v6 <= 0x40000 )
      {
        v9 = 0x40000;
        v10 = 0;
        v11 = 0;
        v12 = (_DWORD *)((char *)a1 + v8 + 12);
        while ( 1 )
        {
          v13 = *(v12 - 1);
          if ( v13 != ((v13 + 7) & 0xFFFFFFF8) )
            break;
          v14 = (v13 + *v12 + 7) & 0xFFFFFFF8;
          if ( v13 >= v9 )
            v13 = v9;
          v9 = v13;
          if ( v14 <= v10 )
            v14 = v10;
          v12 += 4;
          ++v11;
          v10 = v14;
          if ( v11 >= v6 )
          {
            if ( 262140 - v14 >= 0x40000 || (((_DWORD)v4 + 7) & 0xFFFFFFF8) + 16 > 262140 - v14 )
            {
              return (unsigned int)-1073741789;
            }
            else
            {
              memmove((char *)a1 + v13 + 16, (char *)a1 + v13, v14 - v13);
              v15 = 0;
              v16 = a1[2079];
              v17 = (char *)a1 + (unsigned int)a1[2078];
              if ( v16 )
              {
                do
                {
                  *((_DWORD *)v17 + 2) += 16;
                  ++v15;
                  v16 = a1[2079];
                  v17 += 16;
                }
                while ( v15 < v16 );
              }
              v18 = v10 + 16;
              a1[2079] = v16 + 1;
              *(_QWORD *)v17 = a2;
              *((_DWORD *)v17 + 2) = v18;
              *((_DWORD *)v17 + 3) = v4;
              memmove((char *)a1 + v18, a2, v4);
            }
            return v7;
          }
        }
      }
    }
  }
  return (unsigned int)-1073741811;
}
