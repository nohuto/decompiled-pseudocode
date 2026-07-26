/*
 * XREFs of ndisCopyNdisOffload @ 0x1C003C574
 * Callers:
 *     ndisOidPreOffloadHwCaps @ 0x1C003C450 (ndisOidPreOffloadHwCaps.c)
 *     ndisQueryFilterOffloadCaps @ 0x1C006F374 (ndisQueryFilterOffloadCaps.c)
 *     ndisQueryMiniportOffloadCaps @ 0x1C006F4B4 (ndisQueryMiniportOffloadCaps.c)
 * Callees:
 *     <none>
 */

void __fastcall ndisCopyNdisOffload(__int64 a1, __int64 a2, unsigned int a3, _DWORD *a4, char a5)
{
  unsigned int v5; // eax

  if ( a3 < 0xD8 )
  {
    if ( a3 < 0xBC )
    {
      if ( a3 < 0xB1 )
      {
        if ( a3 < 0x9C )
        {
          if ( a3 < 0x90 )
          {
            if ( a3 < 0x70 )
            {
              *a4 = 0;
            }
            else
            {
              *(_OWORD *)a1 = *(_OWORD *)a2;
              *(_OWORD *)(a1 + 16) = *(_OWORD *)(a2 + 16);
              *(_OWORD *)(a1 + 32) = *(_OWORD *)(a2 + 32);
              *(_OWORD *)(a1 + 48) = *(_OWORD *)(a2 + 48);
              *(_OWORD *)(a1 + 64) = *(_OWORD *)(a2 + 64);
              *(_OWORD *)(a1 + 80) = *(_OWORD *)(a2 + 80);
              *(_OWORD *)(a1 + 96) = *(_OWORD *)(a2 + 96);
              *(_BYTE *)(a1 + 1) = 1;
              *(_WORD *)(a1 + 2) = 112;
              *a4 = 112;
            }
          }
          else
          {
            *(_OWORD *)a1 = *(_OWORD *)a2;
            *(_OWORD *)(a1 + 16) = *(_OWORD *)(a2 + 16);
            *(_OWORD *)(a1 + 32) = *(_OWORD *)(a2 + 32);
            *(_OWORD *)(a1 + 48) = *(_OWORD *)(a2 + 48);
            *(_OWORD *)(a1 + 64) = *(_OWORD *)(a2 + 64);
            *(_OWORD *)(a1 + 80) = *(_OWORD *)(a2 + 80);
            *(_OWORD *)(a1 + 96) = *(_OWORD *)(a2 + 96);
            *(_OWORD *)(a1 + 112) = *(_OWORD *)(a2 + 112);
            *(_OWORD *)(a1 + 128) = *(_OWORD *)(a2 + 128);
            *(_BYTE *)(a1 + 1) = 2;
            *(_WORD *)(a1 + 2) = 144;
            *a4 = 144;
          }
        }
        else
        {
          *(_OWORD *)a1 = *(_OWORD *)a2;
          *(_OWORD *)(a1 + 16) = *(_OWORD *)(a2 + 16);
          *(_OWORD *)(a1 + 32) = *(_OWORD *)(a2 + 32);
          *(_OWORD *)(a1 + 48) = *(_OWORD *)(a2 + 48);
          *(_OWORD *)(a1 + 64) = *(_OWORD *)(a2 + 64);
          *(_OWORD *)(a1 + 80) = *(_OWORD *)(a2 + 80);
          *(_OWORD *)(a1 + 96) = *(_OWORD *)(a2 + 96);
          *(_OWORD *)(a1 + 112) = *(_OWORD *)(a2 + 112);
          *(_OWORD *)(a1 + 128) = *(_OWORD *)(a2 + 128);
          *(_QWORD *)(a1 + 144) = *(_QWORD *)(a2 + 144);
          *(_DWORD *)(a1 + 152) = *(_DWORD *)(a2 + 152);
          *(_BYTE *)(a1 + 1) = 3;
          *(_WORD *)(a1 + 2) = 156;
          *a4 = 156;
        }
        return;
      }
      *(_OWORD *)a1 = *(_OWORD *)a2;
      *(_OWORD *)(a1 + 16) = *(_OWORD *)(a2 + 16);
      *(_OWORD *)(a1 + 32) = *(_OWORD *)(a2 + 32);
      *(_OWORD *)(a1 + 48) = *(_OWORD *)(a2 + 48);
      *(_OWORD *)(a1 + 64) = *(_OWORD *)(a2 + 64);
      *(_OWORD *)(a1 + 80) = *(_OWORD *)(a2 + 80);
      *(_OWORD *)(a1 + 96) = *(_OWORD *)(a2 + 96);
      *(_OWORD *)(a1 + 112) = *(_OWORD *)(a2 + 112);
      *(_OWORD *)(a1 + 128) = *(_OWORD *)(a2 + 128);
      *(_OWORD *)(a1 + 144) = *(_OWORD *)(a2 + 144);
      *(_OWORD *)(a1 + 160) = *(_OWORD *)(a2 + 160);
      *(_BYTE *)(a1 + 176) = *(_BYTE *)(a2 + 176);
      *(_BYTE *)(a1 + 1) = 4;
      *(_WORD *)(a1 + 2) = 177;
      *a4 = 177;
    }
    else
    {
      *(_OWORD *)a1 = *(_OWORD *)a2;
      *(_OWORD *)(a1 + 16) = *(_OWORD *)(a2 + 16);
      *(_OWORD *)(a1 + 32) = *(_OWORD *)(a2 + 32);
      *(_OWORD *)(a1 + 48) = *(_OWORD *)(a2 + 48);
      *(_OWORD *)(a1 + 64) = *(_OWORD *)(a2 + 64);
      *(_OWORD *)(a1 + 80) = *(_OWORD *)(a2 + 80);
      *(_OWORD *)(a1 + 96) = *(_OWORD *)(a2 + 96);
      *(_OWORD *)(a1 + 112) = *(_OWORD *)(a2 + 112);
      *(_OWORD *)(a1 + 128) = *(_OWORD *)(a2 + 128);
      *(_OWORD *)(a1 + 144) = *(_OWORD *)(a2 + 144);
      *(_OWORD *)(a1 + 160) = *(_OWORD *)(a2 + 160);
      *(_QWORD *)(a1 + 176) = *(_QWORD *)(a2 + 176);
      *(_DWORD *)(a1 + 184) = *(_DWORD *)(a2 + 184);
      *(_BYTE *)(a1 + 1) = 5;
      *(_WORD *)(a1 + 2) = 188;
      *a4 = 188;
    }
    if ( a5 && *(_BYTE *)(a2 + 1) == 3 )
    {
      v5 = *(_DWORD *)(a2 + 148);
LABEL_5:
      if ( (((unsigned __int8)v5 | (unsigned __int8)((v5 | ((v5 | (v5 >> 8)) >> 4)) >> 4)) & 0xF) != 0 )
        *(_BYTE *)(a1 + 176) |= 1u;
    }
  }
  else
  {
    *(_OWORD *)a1 = *(_OWORD *)a2;
    *(_OWORD *)(a1 + 16) = *(_OWORD *)(a2 + 16);
    *(_OWORD *)(a1 + 32) = *(_OWORD *)(a2 + 32);
    *(_OWORD *)(a1 + 48) = *(_OWORD *)(a2 + 48);
    *(_OWORD *)(a1 + 64) = *(_OWORD *)(a2 + 64);
    *(_OWORD *)(a1 + 80) = *(_OWORD *)(a2 + 80);
    *(_OWORD *)(a1 + 96) = *(_OWORD *)(a2 + 96);
    *(_OWORD *)(a1 + 112) = *(_OWORD *)(a2 + 112);
    *(_OWORD *)(a1 + 128) = *(_OWORD *)(a2 + 128);
    *(_OWORD *)(a1 + 144) = *(_OWORD *)(a2 + 144);
    *(_OWORD *)(a1 + 160) = *(_OWORD *)(a2 + 160);
    *(_OWORD *)(a1 + 176) = *(_OWORD *)(a2 + 176);
    *(_OWORD *)(a1 + 192) = *(_OWORD *)(a2 + 192);
    *(_QWORD *)(a1 + 208) = *(_QWORD *)(a2 + 208);
    *(_BYTE *)(a1 + 1) = 6;
    *(_WORD *)(a1 + 2) = 216;
    *a4 = 216;
    if ( a5 && *(_BYTE *)(a2 + 1) == 3 )
    {
      v5 = *(_DWORD *)(a2 + 148);
      goto LABEL_5;
    }
  }
}
