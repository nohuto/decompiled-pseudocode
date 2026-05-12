/*
 * XREFs of RaidLogMiniportCompletion @ 0x1C0005F9C
 * Callers:
 *     RaidAdapterRequestComplete @ 0x1C0005DE0 (RaidAdapterRequestComplete.c)
 *     RaidAdapterRequestDirectComplete @ 0x1C0038D70 (RaidAdapterRequestDirectComplete.c)
 * Callees:
 *     DbgGetAddressLongFromXrb @ 0x1C0006148 (DbgGetAddressLongFromXrb.c)
 *     GetSrbScsiData @ 0x1C0021E90 (GetSrbScsiData.c)
 */

__int64 __fastcall RaidLogMiniportCompletion(__int64 a1, __int64 i)
{
  __int64 v2; // r9
  unsigned __int8 v3; // si
  __int64 v4; // rdi
  char v5; // r11
  unsigned __int8 v6; // r14
  int v7; // r10d
  unsigned __int8 v8; // bp
  int v10; // eax
  int v11; // ebx
  unsigned __int64 v12; // r8
  __int64 v13; // rax
  unsigned __int64 v14; // r8
  __int64 result; // rax
  __int64 v16; // r8
  __int64 v17; // r9
  __int64 v18; // r11
  __int64 v19; // r10
  __int64 v20; // rbx
  __int64 v21; // rdx
  __int64 v22; // rcx
  unsigned int v23; // ebx
  unsigned int v24; // r9d
  __int64 v25; // rcx
  unsigned __int64 v26; // rax
  int v27; // ebx
  __int64 v28; // rax
  unsigned int v29; // r9d
  __int64 v30; // rcx
  unsigned __int64 v31; // rax
  unsigned int v32; // r9d
  __int64 v33; // rcx
  unsigned __int64 v34; // rax
  unsigned __int8 *SrbScsiData; // rax
  unsigned __int8 v36; // [rsp+60h] [rbp+8h] BYREF
  __int64 v37; // [rsp+68h] [rbp+10h]

  v2 = *(_QWORD *)(a1 + 168);
  v3 = 0;
  v36 = 0;
  v4 = 0LL;
  v37 = 0LL;
  v5 = 0;
  v6 = 0;
  LOBYTE(i) = *(_BYTE *)(v2 + 2);
  v7 = 0;
  v8 = 0;
  if ( (_BYTE)i == 40 )
  {
    v10 = *(_DWORD *)(v2 + 20);
    v4 = v2;
  }
  else
  {
    v10 = (unsigned __int8)i;
  }
  v11 = *(unsigned __int8 *)(v2 + 3);
  if ( !v10 )
  {
    if ( (_BYTE)i == 40 )
    {
      SrbScsiData = (unsigned __int8 *)GetSrbScsiData(v4, 0, 0, (unsigned int)&v36, 0LL, 0LL);
      if ( SrbScsiData )
        v3 = *SrbScsiData;
      v12 = ((unsigned __int64)v3 << 16) | (unsigned int)(v11 << 8);
      v13 = v36;
      goto LABEL_7;
    }
    v12 = *(unsigned __int8 *)(v2 + 4) | ((unsigned __int64)*(unsigned __int8 *)(v2 + 72) << 16);
    goto LABEL_6;
  }
  if ( v10 == 23 )
  {
    if ( (_BYTE)i != 40 )
    {
      v12 = (unsigned __int64)*(unsigned __int8 *)(v2 + 4) << 16;
      v11 |= 0x170000u;
      goto LABEL_6;
    }
    v32 = *(_DWORD *)(v4 + 56);
    for ( i = 0LL; (unsigned int)i < v32; i = (unsigned int)(i + 1) )
    {
      v33 = *(unsigned int *)(v4 + 4 * i + 120);
      if ( (unsigned int)v33 >= 0x80 )
      {
        v34 = *(unsigned int *)(v4 + 16);
        if ( (unsigned int)v33 <= (unsigned int)v34 )
        {
          if ( *(_DWORD *)(v33 + v4) == 96 && v33 + 24 <= v34 )
          {
            v8 = *(_BYTE *)((unsigned int)v33 + v4 + 8);
            v5 = 1;
          }
          if ( v5 )
            break;
        }
      }
    }
    v27 = v11 | 0x170000;
    v28 = v8;
LABEL_35:
    v12 = (unsigned int)(v27 << 8);
    v13 = v28 << 16;
    goto LABEL_7;
  }
  if ( v10 != 36 )
  {
    if ( v10 != 37 )
    {
      v14 = (v11 | (unsigned int)(v10 << 16)) << 8;
      goto LABEL_8;
    }
    if ( (_BYTE)i != 40 )
    {
      v12 = (unsigned __int64)*(unsigned __int8 *)(v2 + 4) << 16;
      v11 |= 0x250000u;
LABEL_6:
      v13 = (unsigned int)(v11 << 8);
LABEL_7:
      v14 = v13 | v12;
      goto LABEL_8;
    }
    v24 = *(_DWORD *)(v4 + 56);
    for ( i = 0LL; (unsigned int)i < v24; i = (unsigned int)(i + 1) )
    {
      v25 = *(unsigned int *)(v4 + 4 * i + 120);
      if ( (unsigned int)v25 >= 0x80 )
      {
        v26 = *(unsigned int *)(v4 + 16);
        if ( (unsigned int)v25 <= (unsigned int)v26 )
        {
          if ( *(_DWORD *)(v25 + v4) == 98 && v25 + 24 <= v26 )
          {
            v6 = *(_BYTE *)((unsigned int)v25 + v4 + 8);
            v5 = 1;
          }
          if ( v5 )
            break;
        }
      }
    }
    v27 = v11 | 0x250000;
    v28 = v6;
    goto LABEL_35;
  }
  if ( (_BYTE)i == 40 )
  {
    v29 = *(_DWORD *)(v4 + 56);
    for ( i = 0LL; (unsigned int)i < v29; i = (unsigned int)(i + 1) )
    {
      v30 = *(unsigned int *)(v4 + 4 * i + 120);
      if ( (unsigned int)v30 >= 0x80 )
      {
        v31 = *(unsigned int *)(v4 + 16);
        if ( (unsigned int)v30 <= (unsigned int)v31 )
        {
          if ( *(_DWORD *)(v30 + v4) == 97 && v30 + 24 <= v31 )
          {
            v7 = *(_DWORD *)((unsigned int)v30 + v4 + 12);
            v5 = 1;
          }
          if ( v5 )
            break;
        }
      }
    }
    v23 = (v7 << 16) | ((v11 | 0x240000) << 8);
  }
  else
  {
    v23 = ((v11 | 0x240000) << 8) | (*(_DWORD *)(v2 + 8) << 16);
  }
  v14 = v23;
LABEL_8:
  result = DbgGetAddressLongFromXrb(a1, i, v14);
  v19 = *(_QWORD *)(a1 + 216);
  v20 = (unsigned int)result;
  if ( v19 && *(_DWORD *)(v19 + 5124) && *(_QWORD *)(v19 + 5128) )
  {
    v21 = (unsigned int)_InterlockedIncrement((volatile signed __int32 *)(v19 + 5120)) % *(_DWORD *)(v19 + 5124);
    result = v37;
    v22 = *(_QWORD *)(v19 + 5128) + 48 * v21;
    *(_DWORD *)v22 = 1;
    if ( !result )
      result = MEMORY[0xFFFFF78000000014];
    *(_QWORD *)(v22 + 40) = result;
    *(_QWORD *)(v22 + 8) = v17;
    *(_QWORD *)(v22 + 16) = v20;
    *(_QWORD *)(v22 + 24) = v18;
    *(_QWORD *)(v22 + 32) = v16;
  }
  return result;
}
