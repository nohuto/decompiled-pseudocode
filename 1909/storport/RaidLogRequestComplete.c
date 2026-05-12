/*
 * XREFs of RaidLogRequestComplete @ 0x1C0047D60
 * Callers:
 *     RaidUnitCompleteRequest @ 0x1C0009590 (RaidUnitCompleteRequest.c)
 *     RaUnitAsyncError @ 0x1C000B754 (RaUnitAsyncError.c)
 *     RaidUnitCompleteResetRequest @ 0x1C0048580 (RaidUnitCompleteResetRequest.c)
 *     RaidUnitIdentityUpdateWorkRoutine @ 0x1C0048C00 (RaidUnitIdentityUpdateWorkRoutine.c)
 * Callees:
 *     DbgLogRequest @ 0x1C000211C (DbgLogRequest.c)
 *     GetSrbScsiData @ 0x1C001F958 (GetSrbScsiData.c)
 */

void __fastcall RaidLogRequestComplete(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned __int8 v3; // di
  unsigned __int8 v7; // r14
  int v8; // r8d
  unsigned __int8 v9; // al
  unsigned __int8 v10; // r10
  char v11; // r11
  int v12; // edx
  __int64 v13; // rsi
  unsigned __int64 v14; // rcx
  __int64 v15; // rax
  unsigned int v16; // r9d
  unsigned int k; // edx
  __int64 v18; // rcx
  unsigned __int64 v19; // rax
  unsigned __int64 v20; // rcx
  unsigned __int64 v21; // rax
  __int64 v22; // rcx
  unsigned int v23; // r10d
  unsigned int j; // edx
  __int64 v25; // rcx
  unsigned __int64 v26; // rax
  int v27; // ecx
  unsigned int v28; // r9d
  unsigned int i; // edx
  __int64 v30; // rcx
  unsigned __int64 v31; // rax
  unsigned __int64 v32; // rcx
  unsigned __int64 v33; // rax
  unsigned __int8 *SrbScsiData; // rax
  unsigned __int8 v35; // [rsp+78h] [rbp+10h] BYREF

  v3 = 0;
  v35 = 0;
  v7 = 0;
  v8 = 0;
  v9 = *(_BYTE *)(a3 + 2);
  v10 = 0;
  v11 = 0;
  if ( v9 == 40 )
    v12 = *(_DWORD *)(a3 + 20);
  else
    v12 = v9;
  v13 = a3;
  if ( v9 != 40 )
    v13 = 0LL;
  switch ( v12 )
  {
    case 0:
      if ( v9 == 40 )
      {
        SrbScsiData = (unsigned __int8 *)GetSrbScsiData(v13, 0LL, 0LL, &v35, 0LL, 0LL);
        if ( SrbScsiData )
          v3 = *SrbScsiData;
        v14 = ((unsigned __int64)v3 << 8) | *(unsigned __int8 *)(v13 + 3);
        v15 = v35;
      }
      else
      {
        v14 = *(unsigned __int8 *)(a3 + 3) | ((unsigned __int64)*(unsigned __int8 *)(a3 + 72) << 8);
        v15 = *(unsigned __int8 *)(a3 + 4);
      }
      goto LABEL_52;
    case 23:
      if ( v9 == 40 )
      {
        v28 = *(_DWORD *)(v13 + 56);
        for ( i = 0; i < v28; ++i )
        {
          v30 = *(unsigned int *)(v13 + 4LL * i + 120);
          if ( (unsigned int)v30 >= 0x80 )
          {
            v31 = *(unsigned int *)(v13 + 16);
            if ( (unsigned int)v30 <= (unsigned int)v31 )
            {
              if ( *(_DWORD *)(v30 + v13) == 96 && v30 + 24 <= v31 )
              {
                v10 = *(_BYTE *)((unsigned int)v30 + v13 + 8);
                v11 = 1;
              }
              if ( v11 )
                break;
            }
          }
        }
        v32 = *(unsigned __int8 *)(v13 + 3);
        v33 = (unsigned __int64)v10 << 8;
      }
      else
      {
        v33 = *(unsigned __int8 *)(a3 + 3);
        v32 = (unsigned __int64)*(unsigned __int8 *)(a3 + 4) << 8;
      }
      v22 = ((v33 | v32) << 8) | 0x17000000;
      break;
    case 36:
      if ( v9 == 40 )
      {
        v23 = *(_DWORD *)(v13 + 56);
        for ( j = 0; j < v23; ++j )
        {
          v25 = *(unsigned int *)(v13 + 4LL * j + 120);
          if ( (unsigned int)v25 >= 0x80 )
          {
            v26 = *(unsigned int *)(v13 + 16);
            if ( (unsigned int)v25 <= (unsigned int)v26 )
            {
              if ( *(_DWORD *)(v25 + v13) == 97 && v25 + 24 <= v26 )
              {
                v8 = *(_DWORD *)((unsigned int)v25 + v13 + 12);
                v11 = 1;
              }
              if ( v11 )
                break;
            }
          }
        }
        v27 = (v8 << 8) | *(unsigned __int8 *)(v13 + 3);
      }
      else
      {
        v27 = *(unsigned __int8 *)(a3 + 3) | (*(_DWORD *)(a3 + 8) << 8);
      }
      v22 = (unsigned int)(v27 << 8) | 0x24000000LL;
      break;
    case 37:
      if ( v9 == 40 )
      {
        v16 = *(_DWORD *)(v13 + 56);
        for ( k = 0; k < v16; ++k )
        {
          v18 = *(unsigned int *)(v13 + 4LL * k + 120);
          if ( (unsigned int)v18 >= 0x80 )
          {
            v19 = *(unsigned int *)(v13 + 16);
            if ( (unsigned int)v18 <= (unsigned int)v19 )
            {
              if ( *(_DWORD *)(v18 + v13) == 98 && v18 + 24 <= v19 )
              {
                v7 = *(_BYTE *)((unsigned int)v18 + v13 + 8);
                v11 = 1;
              }
              if ( v11 )
                break;
            }
          }
        }
        v20 = *(unsigned __int8 *)(v13 + 3);
        v21 = (unsigned __int64)v7 << 8;
      }
      else
      {
        v21 = *(unsigned __int8 *)(a3 + 3);
        v20 = (unsigned __int64)*(unsigned __int8 *)(a3 + 4) << 8;
      }
      v22 = ((v21 | v20) << 8) | 0x25000000;
      break;
    default:
      v14 = *(unsigned __int8 *)(a3 + 3);
      v15 = (unsigned int)(v12 << 24);
LABEL_52:
      v22 = v15 | (v14 << 8);
      break;
  }
  DbgLogRequest(a1, 2, a2, *(int *)(a2 + 48), a3, v22, 0LL);
}
