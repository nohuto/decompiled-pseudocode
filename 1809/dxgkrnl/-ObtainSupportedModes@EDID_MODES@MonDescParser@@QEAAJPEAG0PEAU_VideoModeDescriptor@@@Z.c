/*
 * XREFs of ?ObtainSupportedModes@EDID_MODES@MonDescParser@@QEAAJPEAG0PEAU_VideoModeDescriptor@@@Z @ 0x1C001BF64
 * Callers:
 *     ?EDID_V1_GetMonitorModes@@YAJW4__WMI_MONITOR_CAPABILITY_ORIGIN_TYPE@@KPEBEPEAKPEAU_VideoModeDescriptor@@2@Z @ 0x1C001BB9C (-EDID_V1_GetMonitorModes@@YAJW4__WMI_MONITOR_CAPABILITY_ORIGIN_TYPE@@KPEBEPEAKPEAU_VideoModeDesc.c)
 * Callees:
 *     ?GetDetTimParser@EDID_PARSER@MonDescParser@@QEAA_NHAEAVEDID_PARSER_DETAILED_TIMING@2@_N@Z @ 0x1C0003288 (-GetDetTimParser@EDID_PARSER@MonDescParser@@QEAA_NHAEAVEDID_PARSER_DETAILED_TIMING@2@_N@Z.c)
 *     ?ModeFromDetailedTimingBlock@EDID_MODES@MonDescParser@@QEAAJAEAVEDID_PARSER_DETAILED_TIMING@2@PEAU_VideoModeDescriptor@@@Z @ 0x1C001BC48 (-ModeFromDetailedTimingBlock@EDID_MODES@MonDescParser@@QEAAJAEAVEDID_PARSER_DETAILED_TIMING@2@PE.c)
 *     ??$IndexOf@PEAU_VideoModeDescriptor@@U1@@MonDescParser@@YA_KPEAU_VideoModeDescriptor@@0AEAU1@@Z @ 0x1C001C334 (--$IndexOf@PEAU_VideoModeDescriptor@@U1@@MonDescParser@@YA_KPEAU_VideoModeDescriptor@@0AEAU1@@Z.c)
 *     ?ModeFromStandardTimingBlock@EDID_MODES@MonDescParser@@QEAAJAEAVEDID_PARSER_STANDARD_TIMING@2@EPEAU_VideoModeDescriptor@@@Z @ 0x1C001C36C (-ModeFromStandardTimingBlock@EDID_MODES@MonDescParser@@QEAAJAEAVEDID_PARSER_STANDARD_TIMING@2@EP.c)
 *     ?GetModeCounts@EDID_MODES@MonDescParser@@QEAAJPEAG00PEAPEBU__EDID_V1_MONDESC_EXTRA_STANDARD_TIMINGS@@00@Z @ 0x1C001C90C (-GetModeCounts@EDID_MODES@MonDescParser@@QEAAJPEAG00PEAPEBU__EDID_V1_MONDESC_EXTRA_STANDARD_TIMI.c)
 *     ?GetBlockType@EDID_PARSER@MonDescParser@@QEBA?AW4EDID_V1_BLOCK_TYPE@2@I@Z @ 0x1C001CB30 (-GetBlockType@EDID_PARSER@MonDescParser@@QEBA-AW4EDID_V1_BLOCK_TYPE@2@I@Z.c)
 *     ?ModesFromEstablishedTimings@EDID_MODES@MonDescParser@@QEAAJ_KPEAU_VideoModeDescriptor@@@Z @ 0x1C001CB5C (-ModesFromEstablishedTimings@EDID_MODES@MonDescParser@@QEAAJ_KPEAU_VideoModeDescriptor@@@Z.c)
 *     memset @ 0x1C00231C0 (memset.c)
 *     ?ChangeCEABlock@EDID_PARSER_CEA_861_EXT@MonDescParser@@QEAAXPEAT_EDID_V1_BLOCK@@@Z @ 0x1C0051808 (-ChangeCEABlock@EDID_PARSER_CEA_861_EXT@MonDescParser@@QEAAXPEAT_EDID_V1_BLOCK@@@Z.c)
 *     ?GetDataBlock@EDID_PARSER_CEA_861_EXT@MonDescParser@@QEAA_NIPEAPEAU_EDID_V1_CEA_861_DATA_HEADER@@@Z @ 0x1C0051850 (-GetDataBlock@EDID_PARSER_CEA_861_EXT@MonDescParser@@QEAA_NIPEAPEAU_EDID_V1_CEA_861_DATA_HEADER@.c)
 *     ?GetDetTimParser@EDID_PARSER_CEA_861_EXT@MonDescParser@@QEAA_NHAEAVEDID_PARSER_DETAILED_TIMING@2@@Z @ 0x1C0051898 (-GetDetTimParser@EDID_PARSER_CEA_861_EXT@MonDescParser@@QEAA_NHAEAVEDID_PARSER_DETAILED_TIMING@2.c)
 *     ?ModeFromCeaVideoFormat@EDID_MODES@MonDescParser@@QEAAJPEBU_EDID_V1_CEA_861_SHORT_VIDEO_DESC@@PEAU_VideoModeDescriptor@@@Z @ 0x1C005211C (-ModeFromCeaVideoFormat@EDID_MODES@MonDescParser@@QEAAJPEBU_EDID_V1_CEA_861_SHORT_VIDEO_DESC@@PE.c)
 */

signed int __fastcall MonDescParser::EDID_MODES::ObtainSupportedModes(
        MonDescParser::EDID_MODES *this,
        unsigned __int16 *a2,
        unsigned __int16 *a3,
        struct _VideoModeDescriptor *a4)
{
  signed int result; // eax
  unsigned __int16 v7; // r14
  unsigned __int16 v8; // r13
  unsigned __int16 v9; // r12
  unsigned __int16 v10; // r15
  unsigned __int16 v11; // bx
  unsigned __int16 v12; // di
  struct _VideoModeDescriptor *v13; // r14
  unsigned __int16 v14; // ax
  unsigned __int16 v15; // r10
  __int64 v16; // rax
  _WORD *v17; // r11
  int v18; // r11d
  unsigned __int16 v19; // r15
  unsigned int v20; // r12d
  __int64 v21; // rcx
  unsigned __int8 v22; // r8
  unsigned __int8 v23; // r9
  __int128 v24; // xmm0
  MonDescParser::EDID_MODES *v25; // r13
  int v26; // ecx
  unsigned __int16 v27; // r12
  __int64 *v28; // rax
  __int64 v29; // rdx
  int v30; // edx
  __int64 v31; // r10
  __int64 v32; // r11
  int v33; // ecx
  __int64 v34; // r8
  struct _EDID_V1_CEA_861_DATA_HEADER *v35; // r11
  unsigned __int16 i; // r15
  unsigned int v37; // r15d
  bool DataBlock; // al
  struct _EDID_V1_CEA_861_DATA_HEADER *v39; // r13
  struct _EDID_V1_CEA_861_DATA_HEADER *v40; // rcx
  unsigned int j; // r12d
  unsigned __int8 v42; // [rsp+48h] [rbp-39h]
  unsigned __int16 v43; // [rsp+4Ch] [rbp-35h] BYREF
  unsigned __int16 v44[2]; // [rsp+50h] [rbp-31h] BYREF
  unsigned __int16 v45; // [rsp+54h] [rbp-2Dh] BYREF
  struct _EDID_V1_CEA_861_DATA_HEADER *v46[2]; // [rsp+58h] [rbp-29h] BYREF
  unsigned __int16 v47[8]; // [rsp+68h] [rbp-19h] BYREF
  unsigned __int16 v48[8]; // [rsp+78h] [rbp-9h] BYREF
  _OWORD v49[5]; // [rsp+88h] [rbp+7h] BYREF

  if ( !a2 || (!a4 || !a3) && *a2 )
    return -1073741811;
  v46[0] = 0LL;
  v43 = 0;
  v45 = 0;
  v48[0] = 0;
  v47[0] = 0;
  v44[0] = 0;
  v42 = 0;
  result = MonDescParser::EDID_MODES::GetModeCounts(this, &v43, &v45, v48, v46, v47, v44);
  if ( result >= 0 )
  {
    v7 = v43;
    if ( v43 > 0x11u )
      return -1071841278;
    v8 = v45;
    if ( v45 > 8u )
      return -1071841278;
    v9 = v48[0];
    if ( v48[0] > 6u )
      return -1071841278;
    v10 = v47[0];
    if ( v47[0] > 4u )
      return -1071841278;
    v11 = *a2;
    v12 = v43 + v45 + v48[0] + v47[0] + v44[0];
    if ( !v11 )
    {
      LOBYTE(v26) = 1;
LABEL_47:
      *a2 = v12;
      return (_BYTE)v26 != 0 ? 0xC0000023 : 0;
    }
    memset(a4, 0, 56LL * v11);
    v12 = 0;
    *a3 = -1;
    if ( v11 < v7 )
    {
      v42 = 1;
      v7 = v11;
    }
    if ( v7 )
    {
      result = MonDescParser::EDID_MODES::ModesFromEstablishedTimings(this, v7, a4);
      if ( result < 0 )
        return result;
      v11 -= v7;
      v12 = v7;
      v13 = &a4[v7];
    }
    else
    {
      v13 = a4;
    }
    if ( v11 < v10 )
    {
      v42 = 1;
      v10 = v11;
    }
    v47[0] = 0;
    v14 = 0;
    v43 = 0;
    if ( v10 )
    {
      do
      {
        if ( v14 >= 4u )
          break;
        *(_QWORD *)v48 = 0LL;
        if ( !MonDescParser::EDID_PARSER::GetDetTimParser(
                *(MonDescParser::EDID_PARSER **)this,
                v14,
                (struct MonDescParser::EDID_PARSER_DETAILED_TIMING *)v48)
          || (result = MonDescParser::EDID_MODES::ModeFromDetailedTimingBlock(
                         this,
                         (struct MonDescParser::EDID_PARSER_DETAILED_TIMING *)v48,
                         v13),
              result == -1071841271) )
        {
          v15 = v43;
        }
        else
        {
          if ( result < 0 )
            return result;
          v15 = v43;
          if ( !v43 )
            *a3 = v12;
          if ( v12
            && (v16 = MonDescParser::IndexOf<_VideoModeDescriptor *,_VideoModeDescriptor>(a4, &a4[v12], v13), v16 != -1) )
          {
            if ( !v15 )
              *v17 = v16;
          }
          else
          {
            ++v15;
            --v11;
            v43 = v15;
            ++v12;
            ++v13;
          }
        }
        v14 = ++v47[0];
      }
      while ( v15 < v10 );
    }
    if ( v11 < v8 )
    {
      v8 = v11;
      v9 = 0;
    }
    else
    {
      if ( v11 >= v8 + (unsigned int)v9 )
      {
LABEL_30:
        v18 = v8;
        v19 = 0;
        v20 = v8 + v9;
        if ( v20 )
        {
          while ( 1 )
          {
            v21 = **(_QWORD **)this;
            v22 = *(_BYTE *)(v21 + 18);
            v23 = *(_BYTE *)(v21 + 19);
            if ( v19 >= v8 )
            {
              *(_QWORD *)&v49[0] = (char *)v46[0] + 2 * (v19 - (__int64)v18);
              DWORD2(v49[0]) = v22;
              HIDWORD(v49[0]) = v23;
              v24 = v49[0];
            }
            else
            {
              *(_QWORD *)v47 = v21 + 38 + 2LL * v19;
              *(_DWORD *)&v47[4] = v22;
              *(_DWORD *)&v47[6] = v23;
              v24 = *(_OWORD *)v47;
            }
            *(_OWORD *)v48 = v24;
            result = MonDescParser::EDID_MODES::ModeFromStandardTimingBlock(
                       this,
                       (struct MonDescParser::EDID_PARSER_STANDARD_TIMING *)v48,
                       v19 >= v8,
                       v13);
            if ( result != -1071841276 )
            {
              if ( result < 0 )
                return result;
              if ( !v12 || MonDescParser::IndexOf<_VideoModeDescriptor *,_VideoModeDescriptor>(a4, &a4[v12], v13) == -1 )
              {
                ++v12;
                --v11;
                ++v13;
              }
            }
            if ( ++v19 >= v20 )
              break;
            v18 = v8;
          }
        }
        v25 = this;
        v26 = v42;
        if ( v11 < v44[0] )
          v26 = 1;
        *(_DWORD *)v48 = v26;
        v27 = 0;
        v28 = *(__int64 **)this;
        *(_QWORD *)&v49[0] = 0LL;
        DWORD2(v49[0]) = 0;
        v44[0] = 0;
        *(_DWORD *)v47 = *((_DWORD *)v28 + 20);
        if ( *(_DWORD *)v47 )
        {
          v29 = 0LL;
          do
          {
            if ( (unsigned int)MonDescParser::EDID_PARSER::GetBlockType(*(_QWORD *)v25, v29) == 2 )
            {
              v33 = v32;
              v34 = v31 + 8LL * *(_QWORD *)(v31 + 80);
              while ( v31 != v34 )
              {
                if ( v33 == v30 )
                  goto LABEL_65;
                ++v33;
                v31 += 8LL;
              }
              v31 = v32;
LABEL_65:
              MonDescParser::EDID_PARSER_CEA_861_EXT::ChangeCEABlock(
                (MonDescParser::EDID_PARSER_CEA_861_EXT *)v49,
                *(union _EDID_V1_BLOCK **)v31);
              v35 = 0LL;
              v46[0] = 0LL;
              for ( i = 0;
                    v11
                 && MonDescParser::EDID_PARSER_CEA_861_EXT::GetDetTimParser(
                      (MonDescParser::EDID_PARSER_CEA_861_EXT *)v49,
                      i,
                      (struct MonDescParser::EDID_PARSER_DETAILED_TIMING *)v46);
                    ++i )
              {
                result = MonDescParser::EDID_MODES::ModeFromDetailedTimingBlock(
                           v25,
                           (struct MonDescParser::EDID_PARSER_DETAILED_TIMING *)v46,
                           v13);
                v35 = 0LL;
                if ( result != -1071841271 )
                {
                  if ( result < 0 )
                    return result;
                  if ( !v12
                    || MonDescParser::IndexOf<_VideoModeDescriptor *,_VideoModeDescriptor>(a4, &a4[v12], v13) == -1 )
                  {
                    ++v12;
                    --v11;
                    ++v13;
                  }
                }
              }
              v37 = (unsigned int)v35;
              if ( v11 )
              {
                do
                {
                  if ( v37 >= DWORD2(v49[0]) )
                    break;
                  v46[0] = v35;
                  DataBlock = MonDescParser::EDID_PARSER_CEA_861_EXT::GetDataBlock(
                                (MonDescParser::EDID_PARSER_CEA_861_EXT *)v49,
                                v37,
                                v46);
                  v35 = 0LL;
                  if ( DataBlock )
                  {
                    v39 = v46[0];
                    if ( (*(_BYTE *)v46[0] & 0xE0) == 0x40 )
                    {
                      v40 = (struct _EDID_V1_CEA_861_DATA_HEADER *)((char *)v46[0] + 1);
                      for ( j = 0; ; ++j )
                      {
                        v46[0] = v40;
                        if ( !v11 || j >= (*(_BYTE *)v39 & 0x1Fu) )
                          break;
                        result = MonDescParser::EDID_MODES::ModeFromCeaVideoFormat(this, v40, v13);
                        v35 = 0LL;
                        if ( result != -1071841278 )
                        {
                          if ( result < 0 )
                            return result;
                          ++v12;
                          --v11;
                          ++v13;
                        }
                        v40 = (struct _EDID_V1_CEA_861_DATA_HEADER *)((char *)v46[0] + 1);
                      }
                    }
                  }
                  ++v37;
                }
                while ( v11 );
                v25 = this;
                v27 = v44[0];
              }
            }
            v29 = ++v27;
            v44[0] = v27;
          }
          while ( (unsigned int)v27 < *(_DWORD *)v47 );
          LOBYTE(v26) = v48[0];
        }
        goto LABEL_47;
      }
      v9 = v11 - v8;
    }
    v42 = 1;
    goto LABEL_30;
  }
  return result;
}
