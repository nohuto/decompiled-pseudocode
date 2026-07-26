/*
 * XREFs of ndisSetTaskOffloadValidate @ 0x1C00700C4
 * Callers:
 *     ndisPreTaskOffloadSet @ 0x1C006F024 (ndisPreTaskOffloadSet.c)
 * Callees:
 *     NdisConvertNtStatusToNdisStatus @ 0x1C003F4F0 (NdisConvertNtStatusToNdisStatus.c)
 */

__int64 __fastcall ndisSetTaskOffloadValidate(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned __int64 v3; // rbp
  unsigned int v4; // r9d
  __int64 v5; // r15
  _DWORD *v6; // rax
  __int64 v7; // rdi
  _DWORD *v8; // rsi
  int v9; // edx
  unsigned int v10; // eax
  unsigned int v11; // eax
  __int64 v12; // rcx
  __int64 v13; // r14
  unsigned int v14; // ecx
  int v15; // eax
  unsigned int v16; // edx

  v3 = *(unsigned int *)(a3 + 48);
  v4 = 0;
  v5 = a2;
  if ( !a2 )
    v5 = *(_QWORD *)(a1 + 32);
  if ( (unsigned int)v3 >= 0x1C
    && (v6 = *(_DWORD **)(a3 + 40), v6[1] == 28)
    && *v6 == 1
    && (v7 = (unsigned int)v6[3], (unsigned int)v7 <= (unsigned int)v3) )
  {
    if ( (_DWORD)v7 )
    {
      v8 = (_DWORD *)((char *)v6 + v7);
      if ( (unsigned int)v7 < 0xFFFFFFE8 )
      {
        while ( (unsigned __int64)(unsigned int)v7 + 24 <= v3 )
        {
          v9 = v8[4];
          v10 = v9 + v7;
          if ( v9 + (int)v7 < (unsigned int)v7 )
            break;
          if ( v10 > (unsigned int)v3 )
            break;
          v11 = v10 + 20;
          if ( v11 < 0x14 || v11 > (unsigned int)v3 )
            break;
          if ( v8[2] == 2 )
          {
            v12 = *(_QWORD *)(v5 + 4096);
            if ( v9 == 16 && v8[6] <= *(_DWORD *)(v12 + 264) )
            {
              if ( v8[7] < *(_DWORD *)(v12 + 268) )
                v4 = -1073676267;
            }
            else
            {
              v4 = -1073676267;
            }
          }
          v13 = (unsigned int)v8[3];
          if ( !(_DWORD)v13 )
            return v4;
          v14 = v13 + v7;
          v15 = -1;
          v16 = v7;
          if ( (int)v13 + (int)v7 >= (unsigned int)v7 )
            v15 = v13 + v7;
          LODWORD(v7) = v15;
          v4 = NdisConvertNtStatusToNdisStatus(v14 < v16 ? 0xC0000095 : 0);
          if ( !v4 )
          {
            v8 = (_DWORD *)((char *)v8 + v13);
            if ( (unsigned int)v7 < 0xFFFFFFE8 )
              continue;
          }
          return (unsigned int)-1073676267;
        }
      }
      return (unsigned int)-1073676267;
    }
  }
  else
  {
    return (unsigned int)-1073676267;
  }
  return v4;
}
