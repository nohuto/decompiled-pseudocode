/*
 * XREFs of ?CompareWaveFormat@@YAHPEBUtWAVEFORMATEX@@0@Z @ 0x14000FDE0
 * Callers:
 *     ?ResolveFormatConflictsLeftRight@CPipeInstance@@AEAAJXZ @ 0x14000B420 (-ResolveFormatConflictsLeftRight@CPipeInstance@@AEAAJXZ.c)
 *     ?ConnectToRightSubmix@CSubmixImpl@@UEAAJPEAUISubmix@@W4SUBMIX_CONNECT_OPTIONS@@@Z @ 0x14000FAE0 (-ConnectToRightSubmix@CSubmixImpl@@UEAAJPEAUISubmix@@W4SUBMIX_CONNECT_OPTIONS@@@Z.c)
 *     ?ResolveFormatConflictsRightLeft@CPipeInstance@@AEAAJXZ @ 0x140010F90 (-ResolveFormatConflictsRightLeft@CPipeInstance@@AEAAJXZ.c)
 * Callees:
 *     __security_check_cookie @ 0x14001BC40 (__security_check_cookie.c)
 *     memcmp_0 @ 0x14001D9A3 (memcmp_0.c)
 */

__int64 __fastcall CompareWaveFormat(const struct tWAVEFORMATEX *a1, const struct tWAVEFORMATEX *a2)
{
  unsigned int v2; // ebx
  WORD wFormatTag; // r9
  __int16 v4; // r8
  WORD cbSize; // ax
  __int128 v6; // xmm1
  __int16 v7; // r11
  __int64 v8; // xmm0_8
  int v9; // r10d
  WORD v10; // r9
  WORD v11; // ax
  __int128 v12; // xmm1
  __int64 v13; // xmm0_8
  int v14; // r9d
  __int16 v15; // dx
  int v16; // ecx
  __int16 v17; // ax
  __int64 v18; // rax
  __int64 v20; // rax
  __int64 v21; // rax
  WORD nChannels; // di
  __int128 v23; // xmm0
  __int64 v24; // rax
  __int64 v25; // rax
  WORD v26; // di
  __int128 v27; // xmm0
  int v28; // eax
  __int128 Buf2; // [rsp+20h] [rbp-60h] BYREF
  _BYTE v30[24]; // [rsp+30h] [rbp-50h]
  __int128 Buf1; // [rsp+48h] [rbp-38h] BYREF
  _BYTE v32[24]; // [rsp+58h] [rbp-28h]

  v2 = 0;
  if ( !a1 )
    return a2 == 0LL;
  if ( a2 )
  {
    wFormatTag = a1->wFormatTag;
    v4 = -2;
    cbSize = a1->cbSize;
    if ( a1->wFormatTag == 0xFFFE )
    {
      if ( cbSize != 22 )
      {
        v20 = *(_QWORD *)((char *)&a1[1].nSamplesPerSec + 2)
            - *(_QWORD *)&GUID_00000003_0000_0010_8000_00aa00389b71.Data1;
        if ( !v20 )
          v20 = *(_QWORD *)&a1[1].wBitsPerSample - *(_QWORD *)GUID_00000003_0000_0010_8000_00aa00389b71.Data4;
        if ( v20 )
        {
          v21 = *(_QWORD *)((char *)&a1[1].nSamplesPerSec + 2)
              - *(_QWORD *)&GUID_00000001_0000_0010_8000_00aa00389b71.Data1;
          if ( !v21 )
            v21 = *(_QWORD *)&a1[1].wBitsPerSample - *(_QWORD *)GUID_00000001_0000_0010_8000_00aa00389b71.Data4;
          if ( v21 )
            return v2;
        }
      }
      v6 = *(_OWORD *)&a1->cbSize;
      Buf1 = *(_OWORD *)&a1->wFormatTag;
      v7 = Buf1;
      v8 = *(_QWORD *)&a1[1].wBitsPerSample;
      *(_OWORD *)v32 = v6;
      v9 = DWORD1(v6);
      *(_QWORD *)&v32[16] = v8;
    }
    else
    {
      if ( cbSize && ((wFormatTag - 1) & 0xFFFD) != 0 )
        return v2;
      nChannels = a1->nChannels;
      if ( (unsigned __int16)(nChannels - 1) > 1u || ((a1->wBitsPerSample - 8) & 0xFFE7) != 0 )
        return v2;
      v23 = *(_OWORD *)&a1->wFormatTag;
      *(_WORD *)&v32[2] = a1->wBitsPerSample;
      v7 = -2;
      v9 = (nChannels == 1) + 3;
      Buf1 = v23;
      *(_DWORD *)&v32[4] = v9;
      *(GUID *)&v32[8] = GUID_00000000_0000_0010_8000_00aa00389b71;
      LOWORD(Buf1) = -2;
      *(_DWORD *)&v32[8] = wFormatTag;
    }
    v10 = a2->wFormatTag;
    v11 = a2->cbSize;
    *(_WORD *)v32 = 22;
    if ( v10 != 0xFFFE )
    {
      if ( v11 && ((v10 - 1) & 0xFFFD) != 0 )
        return v2;
      v26 = a2->nChannels;
      if ( (unsigned __int16)(v26 - 1) > 1u || ((a2->wBitsPerSample - 8) & 0xFFE7) != 0 )
        return v2;
      v27 = *(_OWORD *)&a2->wFormatTag;
      v28 = v10;
      *(_WORD *)&v30[2] = a2->wBitsPerSample;
      v14 = (v26 == 1) + 3;
      Buf2 = v27;
      *(_DWORD *)&v30[4] = v14;
      *(GUID *)&v30[8] = GUID_00000000_0000_0010_8000_00aa00389b71;
      LOWORD(Buf2) = -2;
      *(_DWORD *)&v30[8] = v28;
      goto LABEL_9;
    }
    if ( v11 == 22 )
      goto LABEL_8;
    v24 = *(_QWORD *)((char *)&a2[1].nSamplesPerSec + 2) - *(_QWORD *)&GUID_00000003_0000_0010_8000_00aa00389b71.Data1;
    if ( !v24 )
      v24 = *(_QWORD *)&a2[1].wBitsPerSample - *(_QWORD *)GUID_00000003_0000_0010_8000_00aa00389b71.Data4;
    if ( !v24 )
      goto LABEL_8;
    v25 = *(_QWORD *)((char *)&a2[1].nSamplesPerSec + 2) - *(_QWORD *)&GUID_00000001_0000_0010_8000_00aa00389b71.Data1;
    if ( !v25 )
      v25 = *(_QWORD *)&a2[1].wBitsPerSample - *(_QWORD *)GUID_00000001_0000_0010_8000_00aa00389b71.Data4;
    if ( !v25 )
    {
LABEL_8:
      v12 = *(_OWORD *)&a2->cbSize;
      Buf2 = *(_OWORD *)&a2->wFormatTag;
      v4 = Buf2;
      v13 = *(_QWORD *)&a2[1].wBitsPerSample;
      *(_OWORD *)v30 = v12;
      v14 = DWORD1(v12);
      *(_QWORD *)&v30[16] = v13;
LABEL_9:
      *(_WORD *)v30 = 22;
      if ( WORD1(Buf1) )
      {
        v15 = WORD1(Buf2);
      }
      else
      {
        v15 = 0;
        WORD1(Buf2) = 0;
        DWORD2(Buf2) = 0;
        WORD6(Buf2) = 0;
      }
      if ( DWORD1(Buf1) )
      {
        v16 = DWORD1(Buf2);
      }
      else
      {
        v16 = 0;
        *(_QWORD *)((char *)&Buf2 + 4) = 0LL;
      }
      if ( HIWORD(Buf1) )
      {
        v17 = HIWORD(Buf2);
      }
      else
      {
        v17 = 0;
        HIDWORD(Buf2) = 0;
      }
      if ( !v9 )
      {
        v14 = 0;
        *(_DWORD *)&v30[4] = 0;
      }
      if ( !v7 )
      {
        v4 = 0;
        LOWORD(Buf2) = 0;
      }
      if ( !v15 )
      {
        WORD1(Buf1) = 0;
        DWORD2(Buf1) = 0;
        WORD6(Buf1) = 0;
      }
      if ( !v16 )
        *(_QWORD *)((char *)&Buf1 + 4) = 0LL;
      if ( !v17 )
        HIDWORD(Buf1) = 0;
      if ( !v14 )
        *(_DWORD *)&v32[4] = 0;
      if ( !v4 )
        LOWORD(Buf1) = 0;
      v18 = *(_QWORD *)&v32[8] - *(_QWORD *)&v30[8];
      if ( *(_QWORD *)&v32[8] == *(_QWORD *)&v30[8] )
        v18 = *(_QWORD *)&v32[16] - *(_QWORD *)&v30[16];
      if ( !v18 && !memcmp_0(&Buf1, &Buf2, 0x28uLL) )
        return 1;
    }
  }
  return v2;
}
