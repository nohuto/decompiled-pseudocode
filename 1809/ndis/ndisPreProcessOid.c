/*
 * XREFs of ndisPreProcessOid @ 0x1C000D970
 * Callers:
 *     ndisFDoOidRequestInternal @ 0x1C000D050 (ndisFDoOidRequestInternal.c)
 *     ndisMDoOidRequest @ 0x1C000E0B0 (ndisMDoOidRequest.c)
 * Callees:
 *     ndisOidRequestComplete @ 0x1C000D320 (ndisOidRequestComplete.c)
 *     _guard_dispatch_icall_nop @ 0x1C0026E30 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0027180 (memset.c)
 *     WPP_SF_qdD @ 0x1C003A814 (WPP_SF_qdD.c)
 *     WPP_SF_qDqL @ 0x1C0041FBC (WPP_SF_qDqL.c)
 */

__int64 __fastcall ndisPreProcessOid(__int64 a1, __int64 a2, unsigned int a3, unsigned int *a4)
{
  unsigned __int8 v4; // r14
  unsigned int v9; // ebx
  unsigned int v10; // r8d
  unsigned int v11; // eax
  __int64 v12; // rcx
  unsigned int v13; // r9d
  unsigned int v14; // r10d
  unsigned int v15; // ecx
  int v16; // ecx
  __int64 (__fastcall *v17)(_QWORD *); // rax
  __int64 v18; // rdx
  unsigned int v20; // eax
  unsigned int v21; // ecx
  unsigned int v22; // eax
  unsigned int v23; // eax
  _QWORD v24[9]; // [rsp+30h] [rbp-48h] BYREF

  v4 = 0;
  v9 = 0;
  if ( (unsigned __int8)byte_1C00A025A >= 4u )
    WPP_SF_qDqL(39LL, &WPP_3347f5d6e7de3bf7a7aa2b0281c0f110_Traceguids, a1, a3, a2, *(_DWORD *)(a2 + 32));
  if ( a3 == 17 )
  {
    v20 = *(_DWORD *)(a2 + 12);
    if ( v20 < 0x3C )
    {
      v21 = *(_DWORD *)(a1 + 376);
      if ( v21 )
      {
        v22 = v21 + v20 - 1;
        if ( v21 == 2 )
          v23 = v22 >> 1;
        else
          v23 = v22 / v21;
        *(_WORD *)(a1 + 1822) = v23;
      }
    }
  }
  *(_DWORD *)(a2 + 88) &= ~4u;
  v10 = 0;
  v11 = 73;
  if ( *(_BYTE *)a1 == 17 )
    v12 = a1;
  else
    v12 = *(_QWORD *)(a1 + 32);
  if ( !*(_DWORD *)(a2 + 8) || (*(_DWORD *)(v12 + 1880) & 0x200) == 0 )
  {
    v13 = *(_DWORD *)(a2 + 32);
    v14 = 146;
    while ( v11 >= v10 )
    {
      v15 = *((_DWORD *)&unk_1C0085340 + 6 * v11);
      if ( v15 > v13 )
      {
        if ( !v11 )
          break;
        v14 = v11 - 1;
      }
      else
      {
        if ( v15 == v13 )
        {
          *(_DWORD *)(a2 + 92) = v11;
          memset(v24, 0, 0x30uLL);
          v16 = *(_DWORD *)(a2 + 88);
          *(_DWORD *)(a2 + 88) = v16 | 4;
          if ( a3 == 17 )
          {
            v24[0] = a1;
            v24[2] = 0LL;
          }
          else if ( a3 == 5 )
          {
            v24[2] = a1;
            v24[0] = 0LL;
          }
          v24[4] = a2;
          if ( (v16 & 0x220) != 0 )
            v24[3] = *(_QWORD *)(a2 + 104);
          else
            v24[3] = 0LL;
          if ( (v16 & 0x40) != 0 )
            v24[1] = *(_QWORD *)(a2 + 104);
          else
            v24[1] = 0LL;
          LODWORD(v24[5]) = 0;
          if ( (v16 & 0x840080) != 0 )
          {
            v4 = 0;
          }
          else
          {
            v17 = (__int64 (__fastcall *)(_QWORD *))*((_QWORD *)&unk_1C0085340 + 3 * *(unsigned int *)(a2 + 92) + 1);
            if ( v17 )
            {
              v4 = v17(v24);
              if ( v4 == 1 )
              {
                ndisOidRequestComplete((__int64)v24, v18);
                v9 = 259;
              }
              else
              {
                v9 = v24[5];
              }
            }
          }
          break;
        }
        v10 = v11 + 1;
      }
      v11 = v10 + ((v14 - v10 + 1) >> 1);
      if ( v11 > v14 )
        break;
    }
  }
  *a4 = v9;
  if ( (unsigned __int8)byte_1C00A025A >= 4u )
    WPP_SF_qdD(40LL, &WPP_3347f5d6e7de3bf7a7aa2b0281c0f110_Traceguids, a2, v9, v4);
  return v4;
}
