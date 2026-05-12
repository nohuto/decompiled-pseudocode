/*
 * XREFs of RaidLogGetParm4 @ 0x1C0005270
 * Callers:
 *     RaidAdapterPostScatterGatherExecute @ 0x1C00049A0 (RaidAdapterPostScatterGatherExecute.c)
 * Callees:
 *     GetSrbScsiData @ 0x1C0021E90 (GetSrbScsiData.c)
 */

unsigned __int64 __fastcall RaidLogGetParm4(__int64 a1)
{
  __int64 v1; // r8
  unsigned __int8 v2; // bl
  char v3; // di
  unsigned __int8 v4; // r15
  int v5; // r12d
  int v6; // r13d
  unsigned int v7; // edx
  int v8; // ebp
  unsigned __int8 v9; // al
  unsigned __int8 v10; // r14
  unsigned __int8 v11; // r11
  unsigned __int8 v12; // si
  unsigned int v13; // r9d
  __int64 v14; // r10
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v19; // rdx
  __int64 v20; // rax
  unsigned int v21; // r9d
  unsigned int j; // r8d
  __int64 v23; // rcx
  unsigned __int64 v24; // rax
  unsigned int v25; // r11d
  unsigned int i; // r9d
  __int64 v27; // rcx
  unsigned __int64 v28; // rax
  unsigned int v29; // r9d
  __int64 v30; // rcx
  unsigned __int64 v31; // rax
  int v32; // ecx
  unsigned __int8 *SrbScsiData; // rax

  v1 = *(_QWORD *)(a1 + 168);
  v2 = 0;
  v3 = 0;
  v4 = 0;
  v5 = 255;
  LOBYTE(v6) = 0;
  v7 = 0;
  v8 = 0;
  v9 = *(_BYTE *)(v1 + 2);
  v10 = 0;
  v11 = 0;
  v12 = 0;
  if ( v9 == 40 )
    v13 = *(_DWORD *)(v1 + 20);
  else
    v13 = v9;
  v14 = *(_QWORD *)(a1 + 168);
  if ( v9 != 40 )
    v14 = 0LL;
  if ( v13 )
  {
    switch ( v13 )
    {
      case 0x17u:
        if ( v9 == 40 )
        {
          v29 = *(_DWORD *)(v14 + 56);
          if ( v29 )
          {
            do
            {
              v30 = *(unsigned int *)(v14 + 4LL * v7 + 120);
              if ( (unsigned int)v30 >= 0x80 )
              {
                v31 = *(unsigned int *)(v14 + 16);
                if ( (unsigned int)v30 <= (unsigned int)v31 )
                {
                  if ( *(_DWORD *)(v30 + v14) == 96 && v30 + 24 <= v31 )
                  {
                    v11 = *(_BYTE *)((unsigned int)v30 + v14 + 8);
                    v3 = 1;
                    v12 = *(_BYTE *)((unsigned int)v30 + v14 + 9);
                  }
                  if ( v3 )
                    break;
                }
              }
              ++v7;
            }
            while ( v7 < v29 );
          }
          v20 = v12;
          v19 = (v11 | 0x1700LL) << 16;
        }
        else
        {
          v32 = *(unsigned __int8 *)(v1 + 4) | (v9 << 8);
          v20 = *(unsigned __int8 *)(v1 + 9);
          v19 = v32 << 16;
        }
        break;
      case 0x24u:
        if ( v9 == 40 )
        {
          v25 = *(_DWORD *)(v14 + 56);
          for ( i = 0; i < v25; ++i )
          {
            v27 = *(unsigned int *)(v14 + 4LL * i + 120);
            if ( (unsigned int)v27 >= 0x80 )
            {
              v28 = *(unsigned int *)(v14 + 16);
              if ( (unsigned int)v27 <= (unsigned int)v28 )
              {
                if ( *(_DWORD *)(v27 + v14) == 97 && v27 + 24 <= v28 )
                {
                  v7 = *(_DWORD *)((unsigned int)v27 + v14 + 12);
                  v3 = 1;
                  v8 = *(_DWORD *)((unsigned int)v27 + v14 + 16);
                  v10 = *(_BYTE *)((unsigned int)v27 + v14 + 8);
                }
                if ( v3 )
                  break;
              }
            }
          }
          v20 = v10;
          v19 = (int)((v8 | ((v7 | 0x2400) << 8)) << 8);
        }
        else
        {
          v19 = (*(_DWORD *)(v1 + 64) | ((*(_DWORD *)(v1 + 8) | (v9 << 8)) << 8)) << 8;
          v20 = *(unsigned __int8 *)(v1 + 4);
        }
        break;
      case 0x25u:
        if ( v9 == 40 )
        {
          v21 = *(_DWORD *)(v14 + 56);
          for ( j = 0; j < v21; ++j )
          {
            v23 = *(unsigned int *)(v14 + 4LL * j + 120);
            if ( (unsigned int)v23 >= 0x80 )
            {
              v24 = *(unsigned int *)(v14 + 16);
              if ( (unsigned int)v23 <= (unsigned int)v24 )
              {
                if ( *(_DWORD *)(v23 + v14) == 98 && v23 + 24 <= v24 )
                {
                  v4 = *(_BYTE *)((unsigned int)v23 + v14 + 8);
                  v3 = 1;
                  v5 = *(_DWORD *)((unsigned int)v23 + v14 + 12);
                  v6 = *(_DWORD *)((unsigned int)v23 + v14 + 16);
                }
                if ( v3 )
                  break;
              }
            }
          }
          v16 = (unsigned __int8)v6;
          v15 = (v5 | ((v4 | 0x2500u) << 8)) << 8;
        }
        else
        {
          v15 = (*(_DWORD *)(v1 + 8) | ((*(unsigned __int8 *)(v1 + 4) | (v9 << 8)) << 8)) << 8;
          v16 = (unsigned __int8)*(_DWORD *)(v1 + 64);
        }
        return v16 | v15;
      default:
        return (unsigned __int64)v13 << 24;
    }
    return v20 | v19;
  }
  if ( v9 != 40 )
  {
    v15 = (*(unsigned __int8 *)(v1 + 9) | ((*(unsigned __int8 *)(v1 + 72) | (v9 << 8)) << 8)) << 8;
    v16 = *(unsigned __int8 *)(v1 + 8);
    return v16 | v15;
  }
  SrbScsiData = (unsigned __int8 *)GetSrbScsiData(v14, 0, 0, 0, 0LL, 0LL);
  if ( SrbScsiData )
    v2 = *SrbScsiData;
  return (unsigned __int64)v2 << 16;
}
