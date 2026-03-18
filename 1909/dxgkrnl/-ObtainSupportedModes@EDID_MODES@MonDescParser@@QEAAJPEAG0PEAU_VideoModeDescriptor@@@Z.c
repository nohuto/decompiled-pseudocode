/*
 * XREFs of ?ObtainSupportedModes@EDID_MODES@MonDescParser@@QEAAJPEAG0PEAU_VideoModeDescriptor@@@Z @ 0x1C0020A60
 * Callers:
 *     ?EDID_V1_GetMonitorModes@@YAJW4__WMI_MONITOR_CAPABILITY_ORIGIN_TYPE@@KPEBEPEAKPEAU_VideoModeDescriptor@@2@Z @ 0x1C00209AC (-EDID_V1_GetMonitorModes@@YAJW4__WMI_MONITOR_CAPABILITY_ORIGIN_TYPE@@KPEBEPEAKPEAU_VideoModeDesc.c)
 * Callees:
 *     ?GetDetTimParser@EDID_PARSER@MonDescParser@@QEAA_NHAEAVEDID_PARSER_DETAILED_TIMING@2@_N@Z @ 0x1C000D5DC (-GetDetTimParser@EDID_PARSER@MonDescParser@@QEAA_NHAEAVEDID_PARSER_DETAILED_TIMING@2@_N@Z.c)
 *     ?ModeFromDetailedTimingBlock@EDID_MODES@MonDescParser@@QEAAJAEAVEDID_PARSER_DETAILED_TIMING@2@PEAU_VideoModeDescriptor@@@Z @ 0x1C0020690 (-ModeFromDetailedTimingBlock@EDID_MODES@MonDescParser@@QEAAJAEAVEDID_PARSER_DETAILED_TIMING@2@PE.c)
 *     ??$IndexOf@PEAU_VideoModeDescriptor@@U1@@MonDescParser@@YA_KPEAU_VideoModeDescriptor@@0AEAU1@@Z @ 0x1C0020E34 (--$IndexOf@PEAU_VideoModeDescriptor@@U1@@MonDescParser@@YA_KPEAU_VideoModeDescriptor@@0AEAU1@@Z.c)
 *     ?ModeFromStandardTimingBlock@EDID_MODES@MonDescParser@@QEAAJAEAVEDID_PARSER_STANDARD_TIMING@2@EPEAU_VideoModeDescriptor@@@Z @ 0x1C0020E6C (-ModeFromStandardTimingBlock@EDID_MODES@MonDescParser@@QEAAJAEAVEDID_PARSER_STANDARD_TIMING@2@EP.c)
 *     ?GetModeCounts@EDID_MODES@MonDescParser@@QEAAJPEAG00PEAPEBU__EDID_V1_MONDESC_EXTRA_STANDARD_TIMINGS@@00@Z @ 0x1C0021450 (-GetModeCounts@EDID_MODES@MonDescParser@@QEAAJPEAG00PEAPEBU__EDID_V1_MONDESC_EXTRA_STANDARD_TIMI.c)
 *     ?GetBlockType@EDID_PARSER@MonDescParser@@QEBA?AW4EDID_V1_BLOCK_TYPE@2@I@Z @ 0x1C00216C4 (-GetBlockType@EDID_PARSER@MonDescParser@@QEBA-AW4EDID_V1_BLOCK_TYPE@2@I@Z.c)
 *     ?ModesFromEstablishedTimings@EDID_MODES@MonDescParser@@QEAAJ_KPEAU_VideoModeDescriptor@@@Z @ 0x1C0021C2C (-ModesFromEstablishedTimings@EDID_MODES@MonDescParser@@QEAAJ_KPEAU_VideoModeDescriptor@@@Z.c)
 *     memset @ 0x1C0025440 (memset.c)
 *     ?ChangeCEABlock@EDID_PARSER_CEA_861_EXT@MonDescParser@@QEAAXPEAT_EDID_V1_BLOCK@@@Z @ 0x1C0058198 (-ChangeCEABlock@EDID_PARSER_CEA_861_EXT@MonDescParser@@QEAAXPEAT_EDID_V1_BLOCK@@@Z.c)
 *     ?GetDataBlock@EDID_PARSER_CEA_861_EXT@MonDescParser@@QEAA_NIPEAPEAU_EDID_V1_CEA_861_DATA_HEADER@@@Z @ 0x1C00581E0 (-GetDataBlock@EDID_PARSER_CEA_861_EXT@MonDescParser@@QEAA_NIPEAPEAU_EDID_V1_CEA_861_DATA_HEADER@.c)
 *     ?GetDetTimParser@EDID_PARSER_CEA_861_EXT@MonDescParser@@QEAA_NHAEAVEDID_PARSER_DETAILED_TIMING@2@@Z @ 0x1C0058244 (-GetDetTimParser@EDID_PARSER_CEA_861_EXT@MonDescParser@@QEAA_NHAEAVEDID_PARSER_DETAILED_TIMING@2.c)
 *     ?ModeFromCeaVideoFormat@EDID_MODES@MonDescParser@@QEAAJPEBU_EDID_V1_CEA_861_SHORT_VIDEO_DESC@@PEAU_VideoModeDescriptor@@@Z @ 0x1C00588AC (-ModeFromCeaVideoFormat@EDID_MODES@MonDescParser@@QEAAJPEBU_EDID_V1_CEA_861_SHORT_VIDEO_DESC@@PE.c)
 */

signed int __fastcall MonDescParser::EDID_MODES::ObtainSupportedModes(
        MonDescParser::EDID_MODES *this,
        unsigned __int16 *a2,
        unsigned __int16 *a3,
        struct _VideoModeDescriptor *a4)
{
  signed int result; // eax
  unsigned __int16 v7; // si
  unsigned __int16 v8; // r13
  unsigned __int16 v9; // r12
  unsigned __int16 v10; // r15
  unsigned __int16 v11; // bx
  unsigned __int16 v12; // di
  char v13; // r13
  __int64 v14; // r11
  struct _VideoModeDescriptor *v15; // rdx
  unsigned __int16 v16; // ax
  unsigned __int16 v17; // si
  bool i; // cf
  __int64 v19; // rax
  struct _VideoModeDescriptor *v20; // r8
  _WORD *v21; // r10
  bool DetTimParser; // al
  unsigned __int16 v23; // si
  __int64 v24; // r8
  int v25; // r10d
  __int128 v26; // xmm0
  struct _VideoModeDescriptor *v27; // r8
  unsigned __int16 v28; // r15
  MonDescParser::EDID_MODES *v29; // r12
  __int64 v30; // rdx
  int v31; // edx
  __int64 v32; // r10
  __int64 v33; // r11
  int v34; // ecx
  __int64 v35; // r8
  struct _EDID_V1_CEA_861_DATA_HEADER *v36; // r11
  unsigned __int16 v37; // si
  struct _VideoModeDescriptor *v38; // r15
  unsigned int v39; // esi
  bool DataBlock; // al
  struct _EDID_V1_CEA_861_DATA_HEADER *v41; // r12
  struct _EDID_V1_CEA_861_DATA_HEADER *v42; // rcx
  unsigned int j; // r15d
  char v44; // [rsp+48h] [rbp-49h]
  unsigned __int16 v45; // [rsp+48h] [rbp-49h]
  struct _VideoModeDescriptor *v46; // [rsp+50h] [rbp-41h]
  unsigned __int16 v47[2]; // [rsp+58h] [rbp-39h] BYREF
  unsigned __int16 v48[2]; // [rsp+5Ch] [rbp-35h] BYREF
  unsigned __int16 v49[2]; // [rsp+60h] [rbp-31h] BYREF
  unsigned __int16 v50; // [rsp+64h] [rbp-2Dh] BYREF
  unsigned __int16 v51; // [rsp+68h] [rbp-29h] BYREF
  struct _EDID_V1_CEA_861_DATA_HEADER *v52; // [rsp+70h] [rbp-21h] BYREF
  __int128 v53; // [rsp+78h] [rbp-19h] BYREF
  __int128 v54; // [rsp+88h] [rbp-9h]
  _OWORD v55[5]; // [rsp+98h] [rbp+7h] BYREF

  if ( !a2 || (!a4 || !a3) && *a2 )
    return -1073741811;
  v52 = 0LL;
  v49[0] = 0;
  v50 = 0;
  v51 = 0;
  v48[0] = 0;
  v47[0] = 0;
  v44 = 0;
  result = MonDescParser::EDID_MODES::GetModeCounts(this, v49, &v50, &v51, &v52, v48, v47);
  if ( result >= 0 )
  {
    v7 = v49[0];
    if ( v49[0] > 0x11u )
      return -1071841278;
    v8 = v50;
    if ( v50 > 8u )
      return -1071841278;
    v9 = v51;
    if ( v51 > 6u )
      return -1071841278;
    v10 = v48[0];
    if ( v48[0] > 4u )
      return -1071841278;
    v11 = *a2;
    v12 = v49[0] + v50 + v51 + v48[0] + v47[0];
    if ( !v11 )
    {
      v13 = 1;
LABEL_11:
      *a2 = v12;
      return v13 != 0 ? 0xC0000023 : 0;
    }
    memset(a4, 0, 56LL * v11);
    v14 = 0LL;
    v46 = a4;
    *a3 = -1;
    v12 = 0;
    v15 = a4;
    if ( v11 < v7 )
    {
      v44 = 1;
      v7 = v11;
    }
    if ( !v7 )
    {
LABEL_20:
      if ( v11 < v10 )
      {
        v44 = 1;
        v10 = v11;
      }
      v16 = 0;
      v17 = 0;
      for ( i = v10 != 0; ; i = v17 < v10 )
      {
        v48[0] = v16;
        if ( !i || v16 >= 4u )
          break;
        *(_QWORD *)&v53 = v14;
        DetTimParser = MonDescParser::EDID_PARSER::GetDetTimParser(
                         *(MonDescParser::EDID_PARSER **)this,
                         v16,
                         (struct MonDescParser::EDID_PARSER_DETAILED_TIMING *)&v53);
        v14 = 0LL;
        if ( !DetTimParser
          || (result = MonDescParser::EDID_MODES::ModeFromDetailedTimingBlock(
                         this,
                         (struct MonDescParser::EDID_PARSER_DETAILED_TIMING *)&v53,
                         v46),
              v14 = 0LL,
              result == -1071841271) )
        {
          v15 = v46;
        }
        else
        {
          if ( result < 0 )
            return result;
          if ( !v17 )
            *a3 = v12;
          if ( v12
            && (v19 = MonDescParser::IndexOf<_VideoModeDescriptor *,_VideoModeDescriptor>(a4, &a4[v12], v46), v19 != -1) )
          {
            v15 = v20;
            if ( (_WORD)v14 == v17 )
              *v21 = v19;
          }
          else
          {
            --v11;
            ++v17;
            ++v12;
            v15 = ++v46;
          }
        }
        v16 = v48[0] + 1;
      }
      if ( v11 < v8 )
      {
        v8 = v11;
        v9 = v14;
      }
      else
      {
        if ( v11 >= v8 + (unsigned int)v9 )
        {
LABEL_36:
          v23 = v14;
          if ( v8 + v9 )
          {
            do
            {
              v24 = **(_QWORD **)this;
              v25 = *(unsigned __int8 *)(v24 + 19);
              if ( v23 >= v8 )
              {
                DWORD2(v53) = *(unsigned __int8 *)(v24 + 18);
                HIDWORD(v53) = v25;
                *(_QWORD *)&v53 = (char *)v52 + 2 * (v23 - (unsigned __int64)v8);
                v26 = v53;
              }
              else
              {
                DWORD2(v54) = *(unsigned __int8 *)(v24 + 18);
                HIDWORD(v54) = v25;
                *(_QWORD *)&v54 = v24 + 38 + 2LL * v23;
                v26 = v54;
              }
              v55[0] = v26;
              result = MonDescParser::EDID_MODES::ModeFromStandardTimingBlock(
                         this,
                         (struct MonDescParser::EDID_PARSER_STANDARD_TIMING *)v55,
                         v23 >= v8,
                         v15);
              v14 = 0LL;
              if ( result == -1071841276 )
              {
                v15 = v46;
              }
              else
              {
                if ( result < 0 )
                  return result;
                if ( v12 && MonDescParser::IndexOf<_VideoModeDescriptor *,_VideoModeDescriptor>(a4, &a4[v12], v46) != -1 )
                {
                  v15 = v27;
                }
                else
                {
                  --v11;
                  ++v12;
                  v15 = ++v46;
                }
              }
              ++v23;
            }
            while ( v23 < v8 + (unsigned int)v9 );
          }
          v28 = v14;
          v13 = v44;
          v29 = this;
          if ( v11 < v47[0] )
            v13 = 1;
          *(_QWORD *)&v53 = v14;
          DWORD2(v53) = v14;
          v45 = v14;
          *(_DWORD *)v48 = *(_DWORD *)(*(_QWORD *)this + 80LL);
          if ( *(_DWORD *)v48 )
          {
            v30 = (unsigned int)v14;
            do
            {
              if ( (unsigned int)MonDescParser::EDID_PARSER::GetBlockType(*(_QWORD *)v29, v30) == 2 )
              {
                v34 = v33;
                v35 = v32 + 8LL * *(_QWORD *)(v32 + 80);
                while ( v32 != v35 )
                {
                  if ( v34 == v31 )
                    goto LABEL_66;
                  ++v34;
                  v32 += 8LL;
                }
                v32 = v33;
LABEL_66:
                MonDescParser::EDID_PARSER_CEA_861_EXT::ChangeCEABlock(
                  (MonDescParser::EDID_PARSER_CEA_861_EXT *)&v53,
                  *(union _EDID_V1_BLOCK **)v32);
                v36 = 0LL;
                v52 = 0LL;
                v37 = 0;
                if ( v11 )
                {
                  v38 = v46;
                  do
                  {
                    if ( !MonDescParser::EDID_PARSER_CEA_861_EXT::GetDetTimParser(
                            (MonDescParser::EDID_PARSER_CEA_861_EXT *)&v53,
                            v37,
                            (struct MonDescParser::EDID_PARSER_DETAILED_TIMING *)&v52) )
                      break;
                    result = MonDescParser::EDID_MODES::ModeFromDetailedTimingBlock(
                               v29,
                               (struct MonDescParser::EDID_PARSER_DETAILED_TIMING *)&v52,
                               v38);
                    v36 = 0LL;
                    if ( result != -1071841271 )
                    {
                      if ( result < 0 )
                        return result;
                      if ( !v12
                        || MonDescParser::IndexOf<_VideoModeDescriptor *,_VideoModeDescriptor>(a4, &a4[v12], v38) == -1 )
                      {
                        ++v12;
                        --v11;
                        v46 = ++v38;
                      }
                    }
                    ++v37;
                  }
                  while ( v11 );
                  v28 = v45;
                }
                v39 = (unsigned int)v36;
                if ( v11 )
                {
                  do
                  {
                    if ( v39 >= DWORD2(v53) )
                      break;
                    v52 = v36;
                    DataBlock = MonDescParser::EDID_PARSER_CEA_861_EXT::GetDataBlock(
                                  (MonDescParser::EDID_PARSER_CEA_861_EXT *)&v53,
                                  v39,
                                  &v52);
                    v36 = 0LL;
                    if ( DataBlock )
                    {
                      v41 = v52;
                      if ( (*(_BYTE *)v52 & 0xE0) == 0x40 )
                      {
                        v42 = (struct _EDID_V1_CEA_861_DATA_HEADER *)((char *)v52 + 1);
                        for ( j = 0; ; ++j )
                        {
                          v52 = v42;
                          if ( !v11 || j >= (*(_BYTE *)v41 & 0x1Fu) )
                            break;
                          result = MonDescParser::EDID_MODES::ModeFromCeaVideoFormat(this, v42, v46);
                          v36 = 0LL;
                          if ( result != -1071841278 )
                          {
                            if ( result < 0 )
                              return result;
                            ++v12;
                            --v11;
                            ++v46;
                          }
                          v42 = (struct _EDID_V1_CEA_861_DATA_HEADER *)((char *)v52 + 1);
                        }
                      }
                    }
                    ++v39;
                  }
                  while ( v11 );
                  v29 = this;
                  v28 = v45;
                }
              }
              v30 = ++v28;
              v45 = v28;
            }
            while ( (unsigned int)v28 < *(_DWORD *)v48 );
          }
          goto LABEL_11;
        }
        v9 = v11 - v8;
      }
      v44 = 1;
      goto LABEL_36;
    }
    result = MonDescParser::EDID_MODES::ModesFromEstablishedTimings(this, v7, a4);
    v14 = 0LL;
    if ( result >= 0 )
    {
      v11 -= v7;
      v12 = v7;
      v15 = &a4[v7];
      v46 = v15;
      goto LABEL_20;
    }
  }
  return result;
}
