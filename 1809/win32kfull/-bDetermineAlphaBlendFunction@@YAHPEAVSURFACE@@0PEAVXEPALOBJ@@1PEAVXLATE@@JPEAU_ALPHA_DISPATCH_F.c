/*
 * XREFs of ?bDetermineAlphaBlendFunction@@YAHPEAVSURFACE@@0PEAVXEPALOBJ@@1PEAVXLATE@@JPEAU_ALPHA_DISPATCH_FORMAT@@H@Z @ 0x1C0050508
 * Callers:
 *     EngAlphaBlend @ 0x1C004FC70 (EngAlphaBlend.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall bDetermineAlphaBlendFunction(
        struct SURFACE *a1,
        struct SURFACE *a2,
        struct XEPALOBJ *a3,
        struct XEPALOBJ *a4,
        struct XLATE *a5,
        int a6,
        struct _ALPHA_DISPATCH_FORMAT *a7)
{
  unsigned int v8; // ebp
  __int64 (__fastcall *v10)(); // rax
  int v11; // ecx
  void (__fastcall *v12)(unsigned int *, unsigned __int8 *, int, int, XLATEOBJ *); // r9
  void (__fastcall *v13)(unsigned int *, unsigned __int8 *, int, int, struct _XLATEOBJ *); // rdi
  void (__fastcall *v14)(unsigned int *, unsigned __int8 *, int, int, XLATEOBJ *); // r11
  int v15; // ecx
  int v16; // ecx
  int v17; // ecx
  int v18; // ecx
  int v19; // ecx
  int v20; // edx
  void *v21; // rax
  void (__fastcall *v22)(unsigned int *, unsigned __int8 *, int, int, XLATEOBJ *); // rcx
  int v23; // ecx
  _DWORD *v25; // rax
  void (__fastcall *v26)(unsigned int *, unsigned __int8 *, int, int, struct _XLATEOBJ *); // rax
  __int64 v27; // rax
  int v28; // eax
  __int64 v29; // rax
  void *v30; // rax
  void (__fastcall *v31)(unsigned int *, unsigned __int8 *, int, int, struct _XLATEOBJ *); // rcx
  _DWORD *v32; // rcx
  void *v33; // rax
  void (__fastcall *v34)(unsigned int *, unsigned __int8 *, int, int, XLATEOBJ *); // rcx
  void *v35; // rax
  int v36; // eax
  _DWORD *v37; // rax
  _DWORD *v38; // rcx
  __int64 (__fastcall *v39)(); // rax

  v8 = 1;
  *((_DWORD *)a7 + 11) = 0;
  *((_QWORD *)a7 + 4) = vAlphaPerPixelOnly;
  if ( (*((_BYTE *)a7 + 43) & 1) != 0 )
  {
    v10 = vAlphaPerPixelAndConst;
    if ( *((_BYTE *)a7 + 42) == 0xFF )
      v10 = vAlphaPerPixelOnly;
  }
  else
  {
    v10 = vAlphaConstOnly;
  }
  v11 = *((_DWORD *)a1 + 24);
  v12 = vLoadAndConvert32BitfieldsToBGRA;
  *((_QWORD *)a7 + 4) = v10;
  v13 = vLoadAndConvertBGR24ToBGRA;
  v14 = vLoadAndConvert16BitfieldsToBGRA;
  v15 = v11 - 1;
  if ( !v15 )
  {
    *((_QWORD *)a7 + 2) = vLoadAndConvert1ToBGRA;
    v35 = &vConvertAndSaveBGRATo1;
    *(_DWORD *)a7 = 1;
    goto LABEL_67;
  }
  v16 = v15 - 1;
  if ( !v16 )
  {
    *((_QWORD *)a7 + 2) = vLoadAndConvert4ToBGRA;
    v35 = &vConvertAndSaveBGRATo4;
    *(_DWORD *)a7 = 4;
LABEL_67:
    *((_QWORD *)a7 + 3) = v35;
    goto LABEL_13;
  }
  v17 = v16 - 1;
  if ( v17 )
  {
    v18 = v17 - 1;
    if ( v18 )
    {
      v19 = v18 - 1;
      if ( v19 )
      {
        if ( v19 == 1 )
        {
          v20 = *(_DWORD *)(*(_QWORD *)a3 + 24LL);
          if ( (v20 & 8) != 0
            || (v20 & 2) != 0
            && ((v27 = *(_QWORD *)(*(_QWORD *)a3 + 112LL), *(_QWORD *)v27 == 0xFF0000FF0000LL)
             && *(_DWORD *)(v27 + 8) == 255
             || !*(_DWORD *)v27 && !*(_DWORD *)(v27 + 4) && !*(_DWORD *)(v27 + 8)) )
          {
            v21 = 0LL;
            v22 = 0LL;
          }
          else if ( (v20 & 4) != 0 )
          {
            v21 = &vConvertAndSaveBGRAToRGB32;
            v22 = vLoadAndConvertRGB32ToBGRA;
          }
          else
          {
            v21 = &vConvertAndSaveBGRATo32Bitfields;
            v22 = vLoadAndConvert32BitfieldsToBGRA;
          }
          *((_QWORD *)a7 + 2) = v22;
          *((_QWORD *)a7 + 3) = v21;
          *(_DWORD *)a7 = 32;
        }
        else
        {
          v8 = 0;
        }
      }
      else
      {
        v28 = *(_DWORD *)(*(_QWORD *)a3 + 24LL);
        if ( (v28 & 8) != 0
          || (v28 & 2) != 0
          && ((v29 = *(_QWORD *)(*(_QWORD *)a3 + 112LL), *(_QWORD *)v29 == 0xFF0000FF0000LL)
           && *(_DWORD *)(v29 + 8) == 255
           || !*(_DWORD *)v29 && !*(_DWORD *)(v29 + 4) && !*(_DWORD *)(v29 + 8)) )
        {
          v30 = &vConvertAndSaveBGRAToBGR24;
          v31 = vLoadAndConvertBGR24ToBGRA;
        }
        else
        {
          v30 = &vConvertAndSaveBGRAToRGB24;
          v31 = vLoadAndConvertRGB24ToBGRA;
        }
        *((_QWORD *)a7 + 2) = v31;
        *((_QWORD *)a7 + 3) = v30;
        *(_DWORD *)a7 = 24;
      }
    }
    else
    {
      v32 = *(_DWORD **)(*(_QWORD *)a3 + 112LL);
      if ( *(_QWORD *)v32 == 0x7E00000F800LL && v32[2] == 31 )
      {
        v33 = &vConvertAndSaveBGRAToRGB16_565;
        v34 = vLoadAndConvertRGB16_565ToBGRA;
      }
      else if ( *v32 == 31744 && v32[1] == 992 && v32[2] == 31 )
      {
        v33 = &vConvertAndSaveBGRAToRGB16_555;
        v34 = vLoadAndConvertRGB16_555ToBGRA;
      }
      else
      {
        v33 = &vConvertAndSaveBGRAToRGB16Bitfields;
        v34 = vLoadAndConvert16BitfieldsToBGRA;
      }
      *((_QWORD *)a7 + 2) = v34;
      *((_QWORD *)a7 + 3) = v33;
      *(_DWORD *)a7 = 16;
    }
  }
  else
  {
    *(_DWORD *)a7 = 8;
    *((_QWORD *)a7 + 2) = vLoadAndConvert8ToBGRA;
    *((_QWORD *)a7 + 3) = &vConvertAndSaveBGRATo8;
  }
LABEL_13:
  switch ( *((_DWORD *)a2 + 24) )
  {
    case 1:
      *((_QWORD *)a7 + 1) = vLoadAndConvert1ToBGRA;
      *((_DWORD *)a7 + 1) = 1;
      break;
    case 2:
      *((_DWORD *)a7 + 1) = 4;
      *((_QWORD *)a7 + 1) = vLoadAndConvert4ToBGRA;
      break;
    case 3:
      *((_QWORD *)a7 + 1) = vLoadAndConvert8ToBGRA;
      *((_DWORD *)a7 + 1) = 8;
      break;
    case 4:
      v38 = *(_DWORD **)(*(_QWORD *)a4 + 112LL);
      if ( *v38 == 63488 && v38[1] == 2016 && v38[2] == 31 )
      {
        v14 = vLoadAndConvertRGB16_565ToBGRA;
      }
      else if ( *v38 == 31744 && v38[1] == 992 && v38[2] == 31 )
      {
        v14 = vLoadAndConvertRGB16_555ToBGRA;
      }
      *((_QWORD *)a7 + 1) = v14;
      *((_DWORD *)a7 + 1) = 16;
      break;
    case 5:
      v36 = *(_DWORD *)(*(_QWORD *)a4 + 24LL);
      if ( (v36 & 8) == 0 )
      {
        if ( (v36 & 2) == 0
          || ((v37 = *(_DWORD **)(*(_QWORD *)a4 + 112LL), *v37 != 16711680) || v37[1] != 65280 || v37[2] != 255)
          && (*v37 || v37[1] || v37[2]) )
        {
          v13 = vLoadAndConvertRGB24ToBGRA;
        }
      }
      *((_QWORD *)a7 + 1) = v13;
      *((_DWORD *)a7 + 1) = 24;
      break;
    case 6:
      if ( !a5
        || (v23 = *(_DWORD *)(*(_QWORD *)a4 + 24LL), (v23 & 8) != 0)
        || (v23 & 2) != 0
        && ((v25 = *(_DWORD **)(*(_QWORD *)a4 + 112LL), *v25 == 16711680) && v25[1] == 65280 && v25[2] == 255
         || !*v25 && !v25[1] && !v25[2]) )
      {
        v12 = 0LL;
      }
      else if ( (v23 & 4) != 0 )
      {
        v12 = vLoadAndConvertRGB32ToBGRA;
      }
      *((_QWORD *)a7 + 1) = v12;
      *((_DWORD *)a7 + 1) = 32;
      break;
    default:
      v8 = 0;
      break;
  }
  if ( *((__int64 (__fastcall **)())a7 + 4) == vAlphaConstOnly )
  {
    v26 = (void (__fastcall *)(unsigned int *, unsigned __int8 *, int, int, struct _XLATEOBJ *))*((_QWORD *)a7 + 1);
    if ( *(_OWORD *)((char *)a7 + 8) == __PAIR128__(vLoadAndConvertRGB16_555ToBGRA, vLoadAndConvertRGB16_555ToBGRA) )
    {
      v39 = vAlphaConstOnly16_555;
    }
    else
    {
      if ( v26 != vLoadAndConvertRGB16_565ToBGRA
        || *((void (__fastcall **)(unsigned int *, unsigned __int8 *, int, int, struct _XLATEOBJ *))a7 + 2) != vLoadAndConvertRGB16_565ToBGRA )
      {
        if ( v26 != vLoadAndConvertRGB24ToBGRA
          || *((void (__fastcall **)(unsigned int *, unsigned __int8 *, int, int, struct _XLATEOBJ *))a7 + 2) != vLoadAndConvertRGB24ToBGRA )
        {
          return v8;
        }
        *((_QWORD *)a7 + 4) = vAlphaConstOnly24;
LABEL_103:
        *((_QWORD *)a7 + 1) = 0LL;
        *((_QWORD *)a7 + 2) = 0LL;
        *((_QWORD *)a7 + 3) = 0LL;
        return v8;
      }
      v39 = vAlphaConstOnly16_565;
    }
    *((_QWORD *)a7 + 4) = v39;
    *((_BYTE *)a7 + 42) = (31 * (unsigned int)*((unsigned __int8 *)a7 + 42) + 128) / 0xFF;
    goto LABEL_103;
  }
  return v8;
}
