/*
 * XREFs of ndisOidPreRSSCaps @ 0x1C00D0DB0
 * Callers:
 *     <none>
 * Callees:
 *     memmove @ 0x1C0026E40 (memmove.c)
 *     WPP_SF_qqDD @ 0x1C003A8AC (WPP_SF_qqDD.c)
 *     WPP_SF_qqq @ 0x1C003A960 (WPP_SF_qqq.c)
 */

unsigned __int8 __fastcall ndisOidPreRSSCaps(__int64 *a1)
{
  __int64 v1; // rbp
  __int64 v3; // rsi
  unsigned __int8 v4; // bl
  __int64 v5; // r15
  unsigned int v7; // eax
  int v8; // r14d
  unsigned __int64 v9; // rdx
  __int64 v10; // [rsp+20h] [rbp-28h]

  v1 = *a1;
  v3 = a1[4];
  v4 = 0;
  v5 = a1[3];
  if ( (unsigned __int8)byte_1C00A025A >= 4u )
    WPP_SF_qqq(0xB2u, &WPP_3347f5d6e7de3bf7a7aa2b0281c0f110_Traceguids, v1, v5, v3);
  if ( (*(_DWORD *)(v3 + 4) & 0xFFFFFFFD) != 0 )
    goto LABEL_18;
  if ( !*a1 )
    goto LABEL_5;
  if ( !*(_WORD *)(v1 + 2710) )
  {
LABEL_18:
    *((_DWORD *)a1 + 10) = -1073741637;
  }
  else
  {
    *((_DWORD *)a1 + 10) = 0;
    v7 = *(_DWORD *)(v3 + 48);
    if ( v7 < 0x10 )
    {
      *(_DWORD *)(v3 + 56) = 16;
      *((_DWORD *)a1 + 10) = -1073676268;
    }
    else
    {
      if ( *(_BYTE *)(v1 + 2000) )
      {
        *(_DWORD *)(v1 + 2712) |= 0x8000000u;
        v7 = *(_DWORD *)(v3 + 48);
      }
      v8 = *(_DWORD *)(v3 + 48);
      v9 = v7;
      if ( v7 >= 0x14 )
        v9 = 20LL;
      if ( v9 < *(unsigned __int16 *)(v1 + 2710) )
      {
        if ( v7 >= 0x14 )
          LOWORD(v8) = 20;
      }
      else
      {
        LOWORD(v8) = *(_WORD *)(v1 + 2710);
      }
      memmove(*(void **)(v3 + 40), (const void *)(v1 + 2708), (unsigned __int16)v8);
      *(_WORD *)(*(_QWORD *)(v3 + 40) + 2LL) = v8;
      *(_DWORD *)(v3 + 52) = (unsigned __int16)v8;
      *((_DWORD *)a1 + 10) = 0;
    }
  }
  v4 = 1;
LABEL_5:
  if ( (unsigned __int8)byte_1C00A025A >= 4u )
  {
    LODWORD(v10) = v4;
    WPP_SF_qqDD(0xB3u, &WPP_3347f5d6e7de3bf7a7aa2b0281c0f110_Traceguids, v1, v5, v10, *((_DWORD *)a1 + 10));
  }
  return v4;
}
