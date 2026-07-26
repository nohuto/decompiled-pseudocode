/*
 * XREFs of ndisMergeOffloadCapsAndRegistry @ 0x1C0019FEC
 * Callers:
 *     ndisIndicateOffloadChangeInternal @ 0x1C0019F54 (ndisIndicateOffloadChangeInternal.c)
 *     ndisMInitializeAdapter @ 0x1C010B314 (ndisMInitializeAdapter.c)
 * Callees:
 *     memset @ 0x1C0027180 (memset.c)
 */

void __fastcall ndisMergeOffloadCapsAndRegistry(__int64 a1, __int64 a2)
{
  int v4; // eax
  unsigned int v5; // ecx
  int v6; // eax
  unsigned int v7; // ecx
  int v8; // eax
  unsigned int v9; // ecx
  int v10; // eax
  unsigned int v11; // ecx
  int v12; // eax
  unsigned __int8 v13; // cl
  int v14; // eax
  int v15; // edx
  int v16; // eax

  if ( *(_BYTE *)a2 == 0xA7 && *(_WORD *)(a2 + 2) >= 0x70u && *(_BYTE *)(a2 + 1) )
  {
    v4 = *(_DWORD *)(a1 + 3704);
    if ( (v4 & 0x400) != 0 )
    {
      *(_DWORD *)(a2 + 48) &= 0xFFFFFFF0;
      *(_QWORD *)(a2 + 36) = 0LL;
      *(_DWORD *)(a2 + 44) = 0;
      v4 = *(_DWORD *)(a1 + 3704);
    }
    if ( (v4 & 0x1000) != 0 )
    {
      *(_DWORD *)(a2 + 104) &= 0xFFFFFFF0;
      *(_QWORD *)(a2 + 92) = 0LL;
      *(_DWORD *)(a2 + 100) = 0;
      v4 = *(_DWORD *)(a1 + 3704);
    }
    if ( (v4 & 0x800) != 0 )
    {
      *(_QWORD *)(a2 + 80) = 0LL;
      *(_DWORD *)(a2 + 88) = 0;
      v4 = *(_DWORD *)(a1 + 3704);
    }
    v5 = *(_DWORD *)(a2 + 8);
    if ( (v4 & 1) != 0 )
    {
      v5 &= 0xFFFFFCFC;
      *(_DWORD *)(a2 + 8) = v5;
      v4 = *(_DWORD *)(a1 + 3704);
    }
    if ( (v4 & 4) != 0 )
    {
      v5 &= 0xFFFFFFC3;
      *(_DWORD *)(a2 + 8) = v5;
      v4 = *(_DWORD *)(a1 + 3704);
    }
    if ( (v4 & 0x10) != 0 )
    {
      v5 &= 0xFFFFFF3F;
      *(_DWORD *)(a2 + 8) = v5;
    }
    if ( (((unsigned __int8)v5 | (unsigned __int8)((v5 | (v5 >> 2)) >> 2)) & 0x30) == 0 )
      *(_DWORD *)(a2 + 4) = 0;
    v6 = *(_DWORD *)(a1 + 3704);
    v7 = *(_DWORD *)(a2 + 16);
    if ( (v6 & 2) != 0 )
    {
      v7 &= 0xFFFFFCFC;
      *(_DWORD *)(a2 + 16) = v7;
      v6 = *(_DWORD *)(a1 + 3704);
    }
    if ( (v6 & 8) != 0 )
    {
      v7 &= 0xFFFFFFC3;
      *(_DWORD *)(a2 + 16) = v7;
      v6 = *(_DWORD *)(a1 + 3704);
    }
    if ( (v6 & 0x20) != 0 )
    {
      v7 &= 0xFFFFFF3F;
      *(_DWORD *)(a2 + 16) = v7;
    }
    if ( (((unsigned __int8)v7 | (unsigned __int8)((v7 | (v7 >> 2)) >> 2)) & 0x30) == 0 )
      *(_DWORD *)(a2 + 12) = 0;
    v8 = *(_DWORD *)(a1 + 3704);
    v9 = *(_DWORD *)(a2 + 24);
    if ( (v8 & 0x40) != 0 )
    {
      v9 &= 0xFFFFFFC3;
      *(_DWORD *)(a2 + 24) = v9;
      v8 = *(_DWORD *)(a1 + 3704);
    }
    if ( (v8 & 0x100) != 0 )
    {
      v9 &= 0xFFFFFF3F;
      *(_DWORD *)(a2 + 24) = v9;
    }
    if ( (v9 & 3) == 0 && (((unsigned __int8)v9 | (unsigned __int8)(v9 >> 2)) & 0x30) == 0 )
      *(_DWORD *)(a2 + 20) = 0;
    v10 = *(_DWORD *)(a1 + 3704);
    v11 = *(_DWORD *)(a2 + 32);
    if ( (v10 & 0x80u) != 0 )
    {
      v11 &= 0xFFFFFFC3;
      *(_DWORD *)(a2 + 32) = v11;
      v10 = *(_DWORD *)(a1 + 3704);
    }
    if ( (v10 & 0x200) != 0 )
    {
      v11 &= 0xFFFFFF3F;
      *(_DWORD *)(a2 + 32) = v11;
    }
    if ( (((unsigned __int8)v11 | (unsigned __int8)(v11 >> 6)) & 3) == 0 && (v11 & 0x30) == 0 )
      *(_DWORD *)(a2 + 28) = 0;
    v12 = *(_DWORD *)(a1 + 3704);
    if ( (v12 & 0x2000) != 0 )
    {
      *(_DWORD *)(a2 + 72) = 0;
      v12 = *(_DWORD *)(a1 + 3704);
    }
    if ( (v12 & 0x4000) != 0 )
      *(_DWORD *)(a2 + 76) = 0;
    v13 = *(_BYTE *)(a2 + 1);
    if ( v13 >= 2u && *(_WORD *)(a2 + 2) >= 0x90u )
    {
      v14 = *(_DWORD *)(a1 + 3704);
      if ( (v14 & 0x400000) != 0 )
      {
        *(_BYTE *)(a2 + 116) = 0;
        v14 = *(_DWORD *)(a1 + 3704);
        if ( (v14 & 0x100000) != 0 )
        {
          *(_BYTE *)(a2 + 119) = 0;
          v14 = *(_DWORD *)(a1 + 3704);
        }
        if ( (v14 & 0x200000) != 0 )
        {
          *(_BYTE *)(a2 + 120) = 0;
          v14 = *(_DWORD *)(a1 + 3704);
        }
        v15 = 3145728;
      }
      else
      {
        if ( (v14 & 0x40000) != 0 )
        {
          *(_BYTE *)(a2 + 119) = 0;
          v14 = *(_DWORD *)(a1 + 3704);
        }
        if ( (v14 & 0x80000) != 0 )
        {
          *(_BYTE *)(a2 + 120) = 0;
          v14 = *(_DWORD *)(a1 + 3704);
        }
        v15 = 786432;
      }
      if ( (v15 & v14) == v15 )
        *(_WORD *)(a2 + 119) = 0;
      if ( (*(_DWORD *)(a1 + 3704) & 0x3C0000) == 0x3C0000 )
      {
        memset((void *)(a2 + 112), 0, 0x20uLL);
        v13 = *(_BYTE *)(a2 + 1);
      }
      if ( v13 >= 3u && *(_WORD *)(a2 + 2) >= 0x9Cu )
      {
        v16 = *(_DWORD *)(a1 + 3704);
        if ( (v16 & 0x800000) != 0 )
        {
          *(_BYTE *)(a2 + 144) = 0;
          v16 = *(_DWORD *)(a1 + 3704);
        }
        if ( (v16 & 0x1000000) != 0 )
        {
          *(_BYTE *)(a2 + 145) = 0;
          v16 = *(_DWORD *)(a1 + 3704);
        }
        if ( (v16 & 0x2000000) != 0 )
          *(_QWORD *)(a2 + 148) = 0LL;
      }
    }
  }
}
