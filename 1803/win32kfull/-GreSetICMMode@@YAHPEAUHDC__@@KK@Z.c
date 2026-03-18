/*
 * XREFs of ?GreSetICMMode@@YAHPEAUHDC__@@KK@Z @ 0x1C0125354
 * Callers:
 *     NtGdiSetIcmMode @ 0x1C0125340 (NtGdiSetIcmMode.c)
 * Callees:
 *     ?vDestructor@DEVLOCKOBJ@@QEAAXXZ @ 0x1C008F380 (-vDestructor@DEVLOCKOBJ@@QEAAXXZ.c)
 *     ?vLock@XDCOBJ@@QEAAXPEAUHDC__@@@Z @ 0x1C008FB20 (-vLock@XDCOBJ@@QEAAXPEAUHDC__@@@Z.c)
 *     ?RestoreAttributes@XDCOBJ@@AEAAXXZ @ 0x1C008FCD0 (-RestoreAttributes@XDCOBJ@@AEAAXXZ.c)
 */

__int64 __fastcall GreSetICMMode(HDC a1, int a2, unsigned int a3)
{
  unsigned int v4; // ebx
  int v6; // edi
  int v7; // r9d
  __int64 v8; // rax
  unsigned int v9; // r8d
  int v10; // edx
  int v11; // r11d
  __int64 v12; // r8
  __int64 v13; // rax
  signed __int32 v14; // edx
  __int64 v15; // rcx
  signed __int32 v16; // edx
  __int64 v17; // rax
  signed __int32 v18; // edx
  __int64 v19; // rcx
  signed __int32 v20; // edx
  __int64 v21; // rsi
  int v23; // eax
  int v24; // edx
  __int64 *v25; // [rsp+20h] [rbp-60h] BYREF
  __int64 v26; // [rsp+28h] [rbp-58h]
  __int128 v27; // [rsp+30h] [rbp-50h] BYREF
  __int64 v28; // [rsp+40h] [rbp-40h]
  int v29; // [rsp+48h] [rbp-38h]
  __int64 v30; // [rsp+50h] [rbp-30h]
  __int64 v31; // [rsp+58h] [rbp-28h]
  __int64 v32; // [rsp+60h] [rbp-20h]
  __int64 v33; // [rsp+68h] [rbp-18h]
  __int64 v34; // [rsp+70h] [rbp-10h]
  int v35; // [rsp+C8h] [rbp+48h] BYREF

  v4 = 0;
  v26 = 0LL;
  v6 = 1;
  XDCOBJ::vLock((XDCOBJ *)&v25, a1);
  if ( !v25 )
    return v4;
  v31 = 0LL;
  v27 = 0LL;
  v28 = 0LL;
  v29 = 0;
  v30 = 0LL;
  v34 = 0LL;
  v33 = 0LL;
  v32 = 0LL;
  if ( DEVLOCKOBJ::bLock((DEVLOCKOBJ *)&v27, (struct XDCOBJ *)&v25, 0) )
  {
    v7 = *((_DWORD *)v25 + 32);
    v8 = v25[6];
    v9 = v7 & 0xF0000000;
    v10 = (unsigned __int8)v7;
    v11 = v7 & 0xF00;
    if ( a2 != 1 )
    {
      if ( a2 == 2 )
      {
        if ( a3 )
          v10 = (unsigned __int8)v7 | 0x20;
        else
          v10 = v7 & 0xDF;
        goto LABEL_7;
      }
      if ( (unsigned int)(a2 - 3) <= 1 )
      {
        if ( a3 == 16 || a3 == 8 )
        {
          v9 = 0x20000000;
          goto LABEL_24;
        }
        if ( (a3 == 32 || a3 == 773) && v8 && (*(_DWORD *)(v8 + 1816) & 0x4000000) != 0 )
        {
          v23 = *((_DWORD *)v25 + 8);
          v9 = 0x20000000;
          if ( v23 != 1 )
            v9 = 0x10000000;
          v10 = (unsigned __int8)v7 | 0x10;
          if ( v23 != 1 )
            v10 = (unsigned __int8)v7;
LABEL_24:
          if ( a2 == 4 )
            goto LABEL_17;
LABEL_7:
          if ( (unsigned __int8)v7 != v10 || (v25[16] & 0xF0000000) != v9 || (v25[16] & 0xF00) != v11 )
          {
            *((_DWORD *)v25 + 32) = v9 | v10 | v11;
            *(_DWORD *)(v25[10] + 108) = v9 | v10 | v11 | *(_DWORD *)(v25[10] + 108) & 0xF000;
            if ( (unsigned __int8)v7 != v10 )
            {
              v12 = v25[63];
              v13 = v25[12];
              if ( v13 )
              {
                v14 = _InterlockedExchangeAdd(*(volatile signed __int32 **)&ulXlatePalUnique, 1u);
                v15 = *(_QWORD *)(v13 + 120);
                v16 = v14 + 1;
                *(_DWORD *)(v13 + 32) = v16;
                if ( v15 != v13 )
                  *(_DWORD *)(v15 + 32) = v16;
                if ( v12 )
                {
                  v17 = *(_QWORD *)(v12 + 128);
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
            }
          }
          goto LABEL_17;
        }
      }
      goto LABEL_26;
    }
    if ( !a3 )
    {
      v11 = 0;
      v10 = v7 & 0xF0;
      goto LABEL_24;
    }
    if ( a3 != 256 && a3 != 512 && a3 != 1024 )
      goto LABEL_26;
    v11 = a3;
    v24 = (a3 >> 8) & 0xF;
    if ( (a3 & 0x200) != 0 )
    {
      if ( !v8 )
      {
LABEL_26:
        v6 = 0;
        goto LABEL_17;
      }
      if ( (*(_DWORD *)(v8 + 1816) & 0x2000000) == 0 || *((_DWORD *)v25 + 8) == 1 )
        v24 = 1;
    }
    v10 = v7 & 0xF0 | v24;
    goto LABEL_7;
  }
LABEL_17:
  XDCOBJ::RestoreAttributes((XDCOBJ *)&v25);
  v35 = 0;
  v21 = *v25;
  HmgDecrementExclusiveReferenceCountEx(v25, HIDWORD(v26), &v35);
  if ( v35 )
    bDeleteDCInternalEx(v21, 0LL);
  v4 = v6;
  DEVLOCKOBJ::vDestructor((DEVLOCKOBJ *)&v27);
  return v4;
}
