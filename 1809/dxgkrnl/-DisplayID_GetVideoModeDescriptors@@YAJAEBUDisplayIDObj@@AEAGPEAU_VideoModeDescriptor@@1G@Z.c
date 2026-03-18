/*
 * XREFs of ?DisplayID_GetVideoModeDescriptors@@YAJAEBUDisplayIDObj@@AEAGPEAU_VideoModeDescriptor@@1G@Z @ 0x1C0050D28
 * Callers:
 *     ?DisplayID_GetSupportedModes@@YAJPEAUDisplayIDObj@@PEAK1PEAU_VideoModeDescriptor@@@Z @ 0x1C0050C34 (-DisplayID_GetSupportedModes@@YAJPEAUDisplayIDObj@@PEAK1PEAU_VideoModeDescriptor@@@Z.c)
 * Callees:
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0012060 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     memset @ 0x1C00231C0 (memset.c)
 *     ?AddVideoModesWithStereoCode@@YAXW4__WMI_MONITOR_VIDEO_MODE_STEREO_TYPE@@_NGPEAU_VideoModeDescriptor@@AEAG2@Z @ 0x1C005078C (-AddVideoModesWithStereoCode@@YAXW4__WMI_MONITOR_VIDEO_MODE_STEREO_TYPE@@_NGPEAU_VideoModeDescri.c)
 *     ?DisplayID_GetBlock@@YAJAEBUDisplayIDObj@@W4_DISPLAYID_DATA_BLOCK_TYPE@@AEAPEAU_DISPLAYID_BLOCK_HEADER@@@Z @ 0x1C0050858 (-DisplayID_GetBlock@@YAJAEBUDisplayIDObj@@W4_DISPLAYID_DATA_BLOCK_TYPE@@AEAPEAU_DISPLAYID_BLOCK_.c)
 *     ?DisplayID_GetPhysicalSize@@YAJPEBUDisplayIDObj@@PEAI1@Z @ 0x1C0050A84 (-DisplayID_GetPhysicalSize@@YAJPEBUDisplayIDObj@@PEAI1@Z.c)
 *     ?DisplayID_GetVideoModeFromType7Desc@@YAJAEAU_DISPLAYID_DETAILED_TIMING_DESCRIPTOR@@AEAU_VideoModeDescriptor@@@Z @ 0x1C0051140 (-DisplayID_GetVideoModeFromType7Desc@@YAJAEAU_DISPLAYID_DETAILED_TIMING_DESCRIPTOR@@AEAU_VideoMo.c)
 *     ?IsValidBlock@DisplayID_Type7Timing_Parser@@QEBA_NXZ @ 0x1C0051414 (-IsValidBlock@DisplayID_Type7Timing_Parser@@QEBA_NXZ.c)
 */

__int64 __fastcall DisplayID_GetVideoModeDescriptors(
        const struct DisplayIDObj *a1,
        unsigned __int16 *a2,
        struct _VideoModeDescriptor *a3,
        unsigned __int16 *a4,
        unsigned __int16 a5)
{
  unsigned __int16 *v5; // r14
  const struct DisplayIDObj *v7; // r12
  __int64 result; // rax
  bool v9; // r13
  SIZE_T v10; // rax
  char v11; // bl
  char v12; // r8
  bool v13; // cl
  int v14; // edx
  __int64 v15; // rcx
  unsigned __int16 v16; // di
  __int16 v17; // r10
  int v18; // r15d
  _BYTE *v19; // r14
  char v20; // al
  unsigned __int64 v21; // rcx
  int v22; // r9d
  unsigned int v23; // r11d
  bool IsValidBlock; // al
  unsigned __int8 v25; // r8
  struct _DISPLAYID_DETAILED_TIMING_DESCRIPTOR *v26; // rcx
  unsigned __int8 v27; // r12
  __int64 v28; // rax
  int VideoModeFromType7Desc; // eax
  __int64 v30; // r8
  unsigned __int16 v31; // dx
  USHORT v32; // dx
  USHORT *p_HorizontalImageSize; // rax
  USHORT v34; // r8
  __int64 v35; // rcx
  unsigned __int16 v36; // [rsp+38h] [rbp-91h] BYREF
  int v37; // [rsp+3Ch] [rbp-8Dh]
  __int64 v38; // [rsp+40h] [rbp-89h]
  _BYTE *v39; // [rsp+48h] [rbp-81h] BYREF
  unsigned int v40; // [rsp+50h] [rbp-79h] BYREF
  unsigned int v41; // [rsp+54h] [rbp-75h] BYREF
  PVOID P; // [rsp+58h] [rbp-71h]
  __int64 v43; // [rsp+60h] [rbp-69h]
  struct _VideoModeDescriptor *v44; // [rsp+68h] [rbp-61h]
  unsigned __int64 v45; // [rsp+70h] [rbp-59h]
  __int64 v46; // [rsp+78h] [rbp-51h]
  _BYTE *v47; // [rsp+80h] [rbp-49h] BYREF
  char v48; // [rsp+88h] [rbp-41h]
  char v51; // [rsp+138h] [rbp+6Fh]

  v5 = a4;
  v7 = a1;
  if ( !a3 )
    return 3221225485LL;
  v38 = *a2;
  memset(a3, 0, 56 * v38);
  *v5 = -1;
  result = DisplayID_GetPhysicalSize(v7, &v41, &v40);
  if ( (int)result >= 0 )
  {
    v39 = 0LL;
    v51 = 0;
    v9 = (int)DisplayID_GetBlock((__int64 *)v7, 39, &v39) >= 0;
    P = 0LL;
    if ( !a5 )
      goto LABEL_9;
    v10 = 56LL * a5;
    if ( !is_mul_ok(a5, 0x38uLL) )
      v10 = -1LL;
    P = operator new[](v10, 0x32444944u, PagedPool);
    if ( P )
    {
LABEL_9:
      v11 = 0;
      if ( v9 )
      {
        if ( *v39 == 39 && (unsigned __int8)(v39[2] - 3) <= 0xF5u && v39[3] > 1u )
        {
          v12 = v39[1];
          if ( (v12 & 7) != 0 )
          {
            v13 = 0;
            if ( (v12 & 0x40) == 0 )
              v13 = v9;
            v9 = v13;
            if ( v13 && v12 < 0 )
              v51 = 1;
          }
          else
          {
            v51 = (unsigned __int8)v12 >> 7;
          }
          v11 = 5;
          if ( v39[4] )
          {
            if ( v39[4] == 1 )
            {
              v11 = 6;
            }
            else if ( v39[4] == 3 )
            {
              v11 = (v39[5] != 0) + 3;
            }
          }
          else
          {
            v11 = (v39[5] != 0) + 1;
          }
        }
        else
        {
          v9 = 0;
        }
      }
      v14 = 0;
      v15 = *(_QWORD *)v7;
      v16 = 0;
      v43 = *(_QWORD *)v7;
      v37 = 0;
      v36 = 0;
      if ( *((int *)v7 + 5) > 0 )
      {
        v17 = v38;
        do
        {
          v18 = *(unsigned __int8 *)(v15 + 1);
          if ( *(_BYTE *)(v15 + 1) )
          {
            v19 = (_BYTE *)((v15 + 4) & -(__int64)((_BYTE)v18 != 0));
            do
            {
              v20 = *v19;
              if ( !*v19 )
                break;
              v21 = (unsigned __int8)v19[2];
              v22 = v21 + 3;
              LODWORD(v39) = v21 + 3;
              v23 = v21 + 3;
              v46 = (unsigned int)(v21 + 3);
              if ( (unsigned int)v18 < 3 || v18 < v22 )
                break;
              if ( v20 == 34 )
              {
                v47 = v19;
                v45 = v21 / 0x14;
                v48 = v21 / 0x14;
                IsValidBlock = DisplayID_Type7Timing_Parser::IsValidBlock((DisplayID_Type7Timing_Parser *)&v47);
                v26 = 0LL;
                if ( IsValidBlock )
                {
                  v27 = 0;
                  if ( v25 )
                  {
                    while ( 1 )
                    {
                      v28 = v38;
                      if ( !(_WORD)v38 )
                        break;
                      LOWORD(v28) = v38 - 1;
                      v38 = v28;
                      if ( v27 < v25 )
                        v26 = (struct _DISPLAYID_DETAILED_TIMING_DESCRIPTOR *)&v19[20 * v27 + 3];
                      v44 = &a3[v16];
                      VideoModeFromType7Desc = DisplayID_GetVideoModeFromType7Desc(v26, v44);
                      v26 = 0LL;
                      if ( VideoModeFromType7Desc >= 0 )
                      {
                        if ( v9 )
                        {
                          AddVideoModesWithStereoCode(v11, v51, v30, (__int64)P, &v36, (__int64)a3);
                          v16 = v36;
                          v26 = 0LL;
                        }
                        else
                        {
                          v44->StereoModeType = 0;
                          v36 = ++v16;
                        }
                      }
                      v25 = v45;
                      if ( ++v27 >= (unsigned __int8)v45 )
                      {
                        v22 = (int)v39;
                        v17 = v38;
                        v23 = v46;
                        goto LABEL_46;
                      }
                    }
                    v17 = 0;
                    break;
                  }
LABEL_46:
                  if ( !v17 )
                    break;
                }
              }
              v18 -= v22;
              v19 += v23;
            }
            while ( v18 > 0 );
            v15 = v43;
            v5 = a4;
            v14 = v37;
            v7 = a1;
          }
          if ( !v14 && v16 )
            *v5 = 0;
          if ( !v17 )
            break;
          v15 += (unsigned __int8)(*(_BYTE *)(v15 + 1) + 5);
          ++v14;
          v43 = v15;
          v37 = v14;
        }
        while ( v14 < *((_DWORD *)v7 + 5) );
      }
      *a2 = v16;
      if ( P )
        ExFreePoolWithTag(P, 0);
      if ( v16 )
      {
        if ( *v5 == 0xFFFF )
        {
          *v5 = 0;
          v31 = 0;
          while ( !(unsigned __int16)_mm_extract_epi16(*(__m128i *)&a3[v31].HorizontalSyncPulseWidth, 2) )
          {
            if ( ++v31 >= v16 )
              goto LABEL_66;
          }
          *v5 = v31;
        }
LABEL_66:
        v32 = v40;
        p_HorizontalImageSize = &a3->HorizontalImageSize;
        v34 = v41;
        v35 = v16;
        do
        {
          *((_BYTE *)p_HorizontalImageSize + 17) = 2;
          *p_HorizontalImageSize = v34;
          p_HorizontalImageSize[1] = v32;
          p_HorizontalImageSize += 28;
          --v35;
        }
        while ( v35 );
        return 0LL;
      }
      else
      {
        return 3221225659LL;
      }
    }
    else
    {
      return 3221225495LL;
    }
  }
  return result;
}
