/*
 * XREFs of ?ModeFromStandardTimingBlock@EDID_MODES@MonDescParser@@QEAAJAEAVEDID_PARSER_STANDARD_TIMING@2@EPEAU_VideoModeDescriptor@@@Z @ 0x1C0020E1C
 * Callers:
 *     ?ObtainSupportedModes@EDID_MODES@MonDescParser@@QEAAJPEAG0PEAU_VideoModeDescriptor@@@Z @ 0x1C0020A10 (-ObtainSupportedModes@EDID_MODES@MonDescParser@@QEAAJPEAG0PEAU_VideoModeDescriptor@@@Z.c)
 * Callees:
 *     ?GTF_GetVideoModeDescriptor@@YAJGGKKEPEAU_VideoModeDescriptor@@@Z @ 0x1C0020F30 (-GTF_GetVideoModeDescriptor@@YAJGGKKEPEAU_VideoModeDescriptor@@@Z.c)
 *     ?CalculateVerticalActivePixelsFrom@MonDescParser@@YAJGGGPEAG@Z @ 0x1C00213D0 (-CalculateVerticalActivePixelsFrom@MonDescParser@@YAJGGGPEAG@Z.c)
 *     ?IsUnused@EDID_PARSER_STANDARD_TIMING@MonDescParser@@QEBA_NXZ @ 0x1C00215E8 (-IsUnused@EDID_PARSER_STANDARD_TIMING@MonDescParser@@QEBA_NXZ.c)
 */

int __fastcall MonDescParser::EDID_MODES::ModeFromStandardTimingBlock(
        MonDescParser::EDID_MODES *this,
        struct MonDescParser::EDID_PARSER_STANDARD_TIMING *a2,
        char a3,
        struct _VideoModeDescriptor *a4)
{
  unsigned __int8 **v7; // rdx
  unsigned __int8 *v8; // rax
  int v9; // edx
  unsigned int v10; // ebx
  unsigned __int16 v11; // r11
  int v12; // edx
  unsigned __int16 v13; // dx
  unsigned __int16 v14; // r8
  int result; // eax
  unsigned __int16 v16; // dx
  unsigned __int8 v17; // al
  int v18; // edx
  __int64 v19; // rcx
  unsigned __int8 v20; // al
  unsigned __int16 *v21; // [rsp+20h] [rbp-28h]
  unsigned __int16 v22; // [rsp+30h] [rbp-18h] BYREF

  if ( MonDescParser::EDID_PARSER_STANDARD_TIMING::IsUnused(a2) )
    return -1071841276;
  v8 = *v7;
  v22 = 0;
  v9 = v8[1] >> 6;
  v10 = (v8[1] & 0x3F) + 60;
  v11 = 8 * (*v8 + 31);
  if ( v9 )
  {
    v12 = v9 - 1;
    if ( !v12 )
    {
      v13 = 4;
      v14 = 3;
LABEL_5:
      result = MonDescParser::CalculateVerticalActivePixelsFrom(
                 (MonDescParser *)v11,
                 v13,
                 v14,
                 (unsigned __int16)&v22,
                 v21);
      v16 = v22;
      goto LABEL_6;
    }
    v18 = v12 - 1;
    if ( !v18 )
    {
      v13 = 5;
      v14 = 4;
      goto LABEL_5;
    }
    if ( v18 != 1 )
      return -1071841276;
    v14 = 9;
LABEL_22:
    v13 = 16;
    goto LABEL_5;
  }
  v19 = **(_QWORD **)this;
  v20 = *(_BYTE *)(v19 + 18);
  if ( v20 == 1 && *(_BYTE *)(v19 + 19) >= 3u || v20 >= 3u )
  {
    v14 = 10;
    goto LABEL_22;
  }
  v16 = v11;
  result = 0;
LABEL_6:
  if ( result < 0 )
    return result;
  if ( v16 < 0x64u )
    return -1071841276;
  if ( v11 != 1024 || v16 != 768 || (v17 = 1, v10 != 43) )
    v17 = 0;
  result = GTF_GetVideoModeDescriptor(v11, v16, v10, 1u, v17, a4);
  a4->VideoStandardType = 2;
  a4->Origin = *((_BYTE *)this + 8);
  a4->TimingType = (a3 != 0) + 2;
  return result;
}
