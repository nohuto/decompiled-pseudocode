/*
 * XREFs of ?GreSetICMMode@@YAHPEAUHDC__@@KK@Z @ 0x1C00BF0A4
 * Callers:
 *     NtGdiSetIcmMode @ 0x1C00BF320 (NtGdiSetIcmMode.c)
 * Callees:
 *     ?vLock@XDCOBJ@@QEAAXPEAUHDC__@@@Z @ 0x1C00AB3B0 (-vLock@XDCOBJ@@QEAAXPEAUHDC__@@@Z.c)
 *     ?vDestructor@DEVLOCKOBJ@@QEAAXXZ @ 0x1C00AD000 (-vDestructor@DEVLOCKOBJ@@QEAAXXZ.c)
 *     ?vUnlock@DLODCOBJ@@QEAAXXZ @ 0x1C00C06B0 (-vUnlock@DLODCOBJ@@QEAAXXZ.c)
 */

__int64 __fastcall GreSetICMMode(HDC a1, int a2, unsigned int a3)
{
  unsigned int v5; // ebx
  DC *v6; // r9
  int v7; // r10d
  __int64 v8; // rax
  unsigned int v9; // r8d
  int v10; // edx
  int v11; // r11d
  __int64 v12; // rax
  __int64 v13; // r8
  signed __int32 v14; // edx
  __int64 v15; // rcx
  signed __int32 v16; // edx
  __int64 v17; // rax
  signed __int32 v18; // edx
  __int64 v19; // rcx
  signed __int32 v20; // edx
  struct _DC_ATTR *UserAttr; // rax
  __int64 v22; // rdi
  int v24; // eax
  int v25; // edx
  DC *v26; // [rsp+20h] [rbp-60h] BYREF
  __int64 v27; // [rsp+28h] [rbp-58h]
  __int128 v28; // [rsp+30h] [rbp-50h] BYREF
  __int64 v29; // [rsp+40h] [rbp-40h]
  int v30; // [rsp+48h] [rbp-38h]
  _QWORD v31[2]; // [rsp+50h] [rbp-30h] BYREF
  __int16 v32; // [rsp+60h] [rbp-20h]
  __int64 v33; // [rsp+68h] [rbp-18h]
  __int64 v34; // [rsp+70h] [rbp-10h]
  __int64 v35; // [rsp+78h] [rbp-8h]
  int v36; // [rsp+C8h] [rbp+48h] BYREF

  v27 = 0LL;
  v5 = 1;
  XDCOBJ::vLock((XDCOBJ *)&v26, a1);
  if ( !v26 )
    return 0;
  v31[1] = 0LL;
  v28 = 0LL;
  v32 = 256;
  v29 = 0LL;
  v30 = 0;
  v31[0] = 0LL;
  v35 = 0LL;
  v34 = 0LL;
  v33 = 0LL;
  if ( !DEVLOCKOBJ::bLock((DEVLOCKOBJ *)&v28, (struct XDCOBJ *)&v26, 0) )
  {
LABEL_17:
    v6 = v26;
    goto LABEL_18;
  }
  v6 = v26;
  v7 = *((_DWORD *)v26 + 30);
  v8 = *((_QWORD *)v26 + 6);
  v9 = v7 & 0xF0000000;
  v10 = (unsigned __int8)v7;
  v11 = v7 & 0xF00;
  if ( a2 == 1 )
  {
    if ( !a3 )
    {
      v11 = 0;
      v10 = v7 & 0xF0;
      goto LABEL_33;
    }
    if ( a3 == 256 || a3 == 512 || a3 == 1024 )
    {
      v11 = a3;
      v25 = (a3 >> 8) & 0xF;
      if ( (a3 & 0x200) != 0 )
      {
        if ( !v8 )
          goto LABEL_36;
        if ( (*(_DWORD *)(v8 + 1824) & 0x2000000) == 0 || *((_DWORD *)v26 + 8) == 1 )
          v25 = 1;
      }
      v10 = v7 & 0xF0 | v25;
      goto LABEL_7;
    }
LABEL_36:
    v5 = 0;
    goto LABEL_18;
  }
  if ( a2 == 2 )
  {
    v10 = (unsigned __int8)v7 | 0x20;
    if ( !a3 )
      v10 = v7 & 0xDF;
LABEL_7:
    if ( (unsigned __int8)v7 == v10
      && (*((_DWORD *)v26 + 30) & 0xF0000000) == v9
      && (*((_DWORD *)v26 + 30) & 0xF00) == v11 )
    {
      goto LABEL_18;
    }
    *((_DWORD *)v26 + 30) = v9 | v10 | v11;
    *(_DWORD *)(*((_QWORD *)v26 + 122) + 240LL) = v9 | v10 | v11 | *(_DWORD *)(*((_QWORD *)v26 + 122) + 240LL) & 0xF000;
    if ( (unsigned __int8)v7 != v10 )
    {
      v6 = v26;
      v12 = *((_QWORD *)v26 + 11);
      v13 = *((_QWORD *)v26 + 62);
      if ( !v12 )
        goto LABEL_18;
      v14 = _InterlockedExchangeAdd(*(volatile signed __int32 **)&ulXlatePalUnique, 1u);
      v15 = *(_QWORD *)(v12 + 120);
      v16 = v14 + 1;
      *(_DWORD *)(v12 + 32) = v16;
      if ( v15 != v12 )
        *(_DWORD *)(v15 + 32) = v16;
      if ( v13 )
      {
        v17 = *(_QWORD *)(v13 + 128);
        if ( v17 )
        {
          v18 = _InterlockedExchangeAdd(*(volatile signed __int32 **)&ulXlatePalUnique, 1u);
          v19 = *(_QWORD *)(v17 + 120);
          v20 = v18 + 1;
          *(_DWORD *)(v17 + 32) = v20;
          if ( v19 != v17 )
            *(_DWORD *)(v19 + 32) = v20;
        }
      }
    }
    goto LABEL_17;
  }
  if ( (unsigned int)(a2 - 3) > 1 )
    goto LABEL_36;
  if ( a3 == 16 || a3 == 8 )
  {
    v9 = 0x20000000;
    goto LABEL_33;
  }
  if ( a3 != 32 && a3 != 773 || !v8 || (*(_DWORD *)(v8 + 1824) & 0x4000000) == 0 )
    goto LABEL_36;
  v24 = *((_DWORD *)v26 + 8);
  v9 = 0x20000000;
  if ( v24 != 1 )
    v9 = 0x10000000;
  v10 = (unsigned __int8)v7 | 0x10;
  if ( v24 != 1 )
    v10 = (unsigned __int8)v7;
LABEL_33:
  if ( a2 != 4 )
    goto LABEL_7;
LABEL_18:
  if ( (_DWORD)v27 && (*((_DWORD *)v6 + 11) & 2) != 0 )
  {
    if ( !HIDWORD(v27) )
    {
      UserAttr = XDCOBJ::GetUserAttr((XDCOBJ *)&v26);
      if ( UserAttr )
        DC::RestoreAttributes(v26, UserAttr);
      v6 = v26;
    }
    *((_DWORD *)v6 + 11) &= ~2u;
    v6 = v26;
    LODWORD(v27) = 0;
  }
  v36 = 0;
  v22 = *(_QWORD *)v6;
  HmgDecrementExclusiveReferenceCountEx(v6, HIDWORD(v27), &v36);
  if ( v36 )
    bDeleteDCInternalEx(v22, 0LL);
  DEVLOCKOBJ::vDestructor((DEVLOCKOBJ *)&v28);
  if ( v31[0] )
    DLODCOBJ::vUnlock((DLODCOBJ *)v31);
  return v5;
}
