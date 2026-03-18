/*
 * XREFs of ?DisplayID_GetVideoModeFromType7Desc@@YAJAEAU_DISPLAYID_DETAILED_TIMING_DESCRIPTOR@@AEAU_VideoModeDescriptor@@@Z @ 0x1C0057A90
 * Callers:
 *     ?DisplayID_GetVideoModeDescriptors@@YAJAEBUDisplayIDObj@@AEAGPEAU_VideoModeDescriptor@@1G@Z @ 0x1C0057678 (-DisplayID_GetVideoModeDescriptors@@YAJAEBUDisplayIDObj@@AEAGPEAU_VideoModeDescriptor@@1G@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DisplayID_GetVideoModeFromType7Desc(
        struct _DISPLAYID_DETAILED_TIMING_DESCRIPTOR *a1,
        struct _VideoModeDescriptor *a2)
{
  signed int v4; // r10d
  USHORT v5; // bx
  USHORT v6; // r11
  USHORT v7; // r8
  unsigned __int16 v8; // r8
  USHORT v9; // si
  __int16 v10; // ax
  __int16 v11; // dx
  int v12; // ebp
  int v13; // r8d
  int v14; // edi
  int v15; // ecx
  unsigned int v16; // esi
  ULONG v17; // eax
  int v18; // ecx
  int v19; // r8d

  a2->TimingType = 4;
  a2->VideoStandardType = 0;
  v4 = 1000 * (((*((unsigned __int8 *)a1 + 1) + (*((unsigned __int8 *)a1 + 2) << 8)) << 8) + *(unsigned __int8 *)a1 + 1);
  a2->PixelClockRate = v4;
  v5 = *((unsigned __int8 *)a1 + 4) + (*((unsigned __int8 *)a1 + 5) << 8) + 1;
  a2->HorizontalActivePixels = v5;
  v6 = *((unsigned __int8 *)a1 + 12) + (*((unsigned __int8 *)a1 + 13) << 8) + 1;
  a2->VerticalActivePixels = v6;
  if ( v4 )
  {
    if ( v5 )
    {
      if ( v6 )
      {
        v7 = *((unsigned __int8 *)a1 + 6) + (*((unsigned __int8 *)a1 + 7) << 8) + 1;
        a2->HorizontalBlankingPixels = v7;
        v8 = v5 + v7;
        v9 = *((unsigned __int8 *)a1 + 14) + (*((unsigned __int8 *)a1 + 15) << 8) + 1;
        a2->VerticalBlankingPixels = v9;
        a2->HorizontalSyncOffset = *((unsigned __int8 *)a1 + 8) + ((*((_BYTE *)a1 + 9) & 0x7F) << 8) + 1;
        a2->VerticalSyncOffset = *((unsigned __int8 *)a1 + 16) + ((*((_BYTE *)a1 + 17) & 0x7F) << 8) + 1;
        a2->HorizontalSyncPulseWidth = *((unsigned __int8 *)a1 + 10) + (*((unsigned __int8 *)a1 + 11) << 8) + 1;
        v10 = *((unsigned __int8 *)a1 + 18);
        v11 = *((unsigned __int8 *)a1 + 19);
        *(_DWORD *)&a2->HorizontalBorder = 0;
        a2->VerticalSyncPulseWidth = v10 + (v11 << 8) + 1;
        a2->IsInterlaced = (*((_BYTE *)a1 + 3) & 0x10) != 0;
        LOBYTE(v10) = (*((_BYTE *)a1 + 3) >> 5) & 3;
        a2->SyncSignalType = 3;
        a2->StereoModeType = v10;
        a2->HorizontalPolarityType = (unsigned __int8)~*((_BYTE *)a1 + 9) >> 7;
        LOBYTE(v10) = ~*((_BYTE *)a1 + 17);
        *(_WORD *)&a2->IsSerrationRequired = 514;
        a2->VerticalPolarityType = (unsigned __int8)v10 >> 7;
        a2->CompositePolarityType = 2;
        a2->HorizontalImageSize = *((_BYTE *)a1 + 3) >> 7;
        if ( v8 )
        {
          if ( v9 + v6 )
          {
            v12 = v8;
            v13 = v4;
            v14 = v12 * (unsigned __int16)(v9 + v6);
            if ( v4 < 0 )
              v13 = -v4;
            v15 = -v14;
            if ( v14 >= 0 )
              v15 = v12 * (unsigned __int16)(v9 + v6);
            if ( v15 )
            {
              while ( 1 )
              {
                v13 %= v15;
                if ( !v13 )
                  break;
                v15 %= v13;
                if ( !v15 )
                  goto LABEL_13;
              }
            }
            else
            {
LABEL_13:
              v15 = v13;
            }
            v16 = v4 / v15;
            a2->VerticalRefreshRateNumerator = v4 / v15;
            v17 = v14 / v15;
            v18 = -v4;
            a2->VerticalRefreshRateDenominator = v17;
            if ( v4 >= 0 )
              v18 = v4;
            v19 = v12;
            while ( 1 )
            {
              v18 %= v19;
              if ( !v18 )
                break;
              v19 %= v18;
              if ( !v19 )
              {
                v19 = v18;
                break;
              }
            }
            a2->HorizontalRefreshRateNumerator = v4 / v19;
            a2->HorizontalRefreshRateDenominator = v12 / v19;
            if ( v5 != 1920 )
              goto LABEL_28;
            if ( v6 != 540 )
              goto LABEL_28;
            if ( !a2->IsInterlaced )
              goto LABEL_28;
            a2->VerticalActivePixels = 1080;
            if ( v16 / v17 != 30 )
              goto LABEL_28;
            if ( v16 <= 0x7FFFFFFF )
            {
              a2->VerticalRefreshRateNumerator = 2 * v16;
LABEL_28:
              a2->TimingType = 4;
              return 0LL;
            }
            if ( v17 >= 2 )
            {
              a2->VerticalRefreshRateDenominator = v17 >> 1;
              goto LABEL_28;
            }
          }
        }
      }
    }
  }
  return 3223126025LL;
}
