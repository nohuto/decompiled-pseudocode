/*
 * XREFs of fsg_ExecuteGlyph @ 0x1C02BD004
 * Callers:
 *     fsg_CreateGlyphData @ 0x1C02BCA50 (fsg_CreateGlyphData.c)
 * Callees:
 *     FixMul @ 0x1C02B2F90 (FixMul.c)
 *     mth_MxConcat2x2 @ 0x1C02B38AC (mth_MxConcat2x2.c)
 *     scl_IncrementChildElement @ 0x1C02B4594 (scl_IncrementChildElement.c)
 *     fsg_AllocateGlyphDataMemory @ 0x1C02BBF5C (fsg_AllocateGlyphDataMemory.c)
 *     fsg_CheckOutlineOrientation @ 0x1C02BBFA4 (fsg_CheckOutlineOrientation.c)
 *     fsg_CompositeInnerGridFit @ 0x1C02BC6FC (fsg_CompositeInnerGridFit.c)
 *     fsg_DoScanControl @ 0x1C02BCC54 (fsg_DoScanControl.c)
 *     fsg_InitializeGlyphData @ 0x1C02BDBD0 (fsg_InitializeGlyphData.c)
 *     fsg_LinkChild @ 0x1C02BDCBC (fsg_LinkChild.c)
 *     fsg_MergeGlyphData @ 0x1C02BDD24 (fsg_MergeGlyphData.c)
 *     fsg_SimpleInnerGridFit @ 0x1C02BE488 (fsg_SimpleInnerGridFit.c)
 *     sfac_ReadComponentData @ 0x1C02C0574 (sfac_ReadComponentData.c)
 *     sfac_ReadGlyphHeader @ 0x1C02C0868 (sfac_ReadGlyphHeader.c)
 *     sfac_ReadGlyphMetrics @ 0x1C02C0AE0 (sfac_ReadGlyphMetrics.c)
 *     sfac_ReadOutlineData @ 0x1C02C0CEC (sfac_ReadOutlineData.c)
 *     sfac_ReleaseGlyph @ 0x1C02C10B8 (sfac_ReleaseGlyph.c)
 */

__int64 __fastcall fsg_ExecuteGlyph(
        __int64 a1,
        __int64 a2,
        unsigned __int16 *a3,
        unsigned int a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        __int64 a9,
        int a10,
        _DWORD *a11,
        __int64 a12,
        __int64 a13,
        int a14)
{
  __int64 v14; // r14
  _DWORD *v15; // r15
  __int64 v18; // r13
  int v19; // eax
  __int64 v20; // rdx
  __int64 v21; // rsi
  __int64 result; // rax
  __int64 v23; // rcx
  __int64 *v24; // rdi
  __int64 v25; // r8
  int v26; // r9d
  __int64 v27; // rdx
  __int128 v28; // xmm0
  __int128 v29; // xmm1
  int fixed; // eax
  __int64 v31; // r11
  int v32; // r10d
  unsigned __int16 i; // dx
  __int64 v34; // r8
  __int128 v35; // xmm0
  __int128 v36; // xmm1
  __int64 v37; // r8
  __int64 v38; // r9
  __int64 v39; // rdx
  unsigned __int16 v40; // r8
  __int16 v41; // r8
  unsigned __int16 v42; // dx
  unsigned int v43; // eax
  unsigned int v44; // ecx
  unsigned __int16 v45; // ax
  unsigned __int16 v46; // r8
  unsigned int v47; // ecx
  __int64 v48; // rdx
  __int64 v49; // r13
  unsigned int ComponentData; // eax
  unsigned int v51; // ebx
  unsigned int v52; // r8d
  int v53; // ecx
  __int16 *v54; // rcx
  __int16 v55; // ax
  unsigned __int64 v56; // rax
  char *v57; // rdx
  __int16 v58; // [rsp+30h] [rbp-B1h]
  __int16 v59; // [rsp+30h] [rbp-B1h]
  __int16 v60; // [rsp+38h] [rbp-A9h]
  unsigned __int16 v61; // [rsp+38h] [rbp-A9h]
  __int16 v62; // [rsp+40h] [rbp-A1h]
  unsigned __int16 v63; // [rsp+40h] [rbp-A1h]
  __int16 v64; // [rsp+48h] [rbp-99h]
  __int16 v65; // [rsp+48h] [rbp-99h]
  __int16 v66; // [rsp+50h] [rbp-91h]
  __int16 v67; // [rsp+50h] [rbp-91h]
  int v68; // [rsp+58h] [rbp-89h]
  unsigned int v69; // [rsp+58h] [rbp-89h]
  __int16 v70; // [rsp+70h] [rbp-71h]
  unsigned __int16 v71; // [rsp+70h] [rbp-71h]
  __int64 v72; // [rsp+78h] [rbp-69h]
  __int64 v73; // [rsp+78h] [rbp-69h]
  int v74; // [rsp+98h] [rbp-49h] BYREF
  int v75; // [rsp+9Ch] [rbp-45h]
  int v76; // [rsp+A0h] [rbp-41h] BYREF
  int v77; // [rsp+A4h] [rbp-3Dh] BYREF
  __int64 v78; // [rsp+A8h] [rbp-39h] BYREF
  __int128 v79; // [rsp+B8h] [rbp-29h] BYREF
  __int128 v80; // [rsp+C8h] [rbp-19h]
  int v81; // [rsp+D8h] [rbp-9h]

  v14 = a6;
  v15 = a11;
  v18 = a2;
  v19 = *(_DWORD *)(a6 + 56);
  *a11 = 0;
  if ( v19 == 3 )
  {
    v20 = *(_QWORD *)(v14 + 24);
    if ( v20 )
    {
      scl_IncrementChildElement(*(_QWORD *)(v14 + 176), *(_QWORD *)(v20 + 176));
    }
    else
    {
      *(_OWORD *)(v14 + 184) = *(_OWORD *)(a3 + 2);
      *(_OWORD *)(v14 + 200) = *(_OWORD *)(a3 + 10);
      *(_DWORD *)(v14 + 216) = *((_DWORD *)a3 + 9);
    }
    v21 = v14 + 32;
    result = sfac_ReadGlyphHeader(
               a1,
               *(unsigned __int16 *)(v14 + 60),
               (int)v14 + 32,
               (unsigned int)&a11,
               (__int64)v15,
               *(_QWORD *)(v14 + 176) + 80LL,
               v14 + 62);
    if ( (_DWORD)result )
      return result;
    result = sfac_ReadGlyphMetrics(
               a1,
               *(unsigned __int16 *)(v14 + 60),
               (int)v14 + 70,
               (int)v14 + 72,
               v14 + 74,
               v14 + 76);
    if ( (_DWORD)result )
      return result;
    if ( (_DWORD)a11 )
    {
      *(_DWORD *)(v14 + 56) = 1;
      goto LABEL_46;
    }
    *(_DWORD *)(v14 + 56) = 0;
    v19 = 0;
  }
  else
  {
    v21 = v14 + 32;
  }
  if ( v19 )
  {
    if ( v19 != 2 )
    {
      if ( v19 == 1 )
      {
LABEL_46:
        v76 = 0;
        v41 = 0;
        v74 = 0;
        v75 = 0;
        *(_DWORD *)(v14 + 56) = 2;
        do
        {
          v42 = *(_WORD *)(v18 + 30);
          v43 = 1;
          if ( v42 > 1u )
            v43 = *(unsigned __int16 *)(v18 + 30);
          if ( v43 >= 0x14 )
          {
            v44 = 20;
          }
          else
          {
            v44 = 1;
            if ( v42 > 1u )
              v44 = *(unsigned __int16 *)(v18 + 30);
          }
          if ( (unsigned int)*(unsigned __int16 *)(v14 + 78) + 1 > v44 )
            return 5131LL;
          v45 = *(_WORD *)(v18 + 28);
          v46 = v41 + 1;
          v47 = 3;
          LOWORD(a11) = v46;
          if ( v45 > 3u )
            v47 = v45;
          if ( v46 > v47 )
            return 5131LL;
          result = fsg_AllocateGlyphDataMemory(a4, a7, &v78);
          if ( (_DWORD)result )
            return result;
          v49 = v78;
          fsg_InitializeGlyphData(v78, v48, 0LL, (unsigned __int16)(*(_WORD *)(v14 + 78) + 1));
          fsg_LinkChild(v14, v49);
          ComponentData = sfac_ReadComponentData(
                            (int)v14 + 32,
                            (int)v49 + 80,
                            (int)v49 + 84,
                            (int)v49 + 136,
                            v49 + 140,
                            (__int64)&v74,
                            v49 + 60,
                            v49 + 88,
                            v49 + 90,
                            v49 + 92,
                            v49 + 94,
                            v49 + 96,
                            (__int64)&v77,
                            (__int64)&v76);
          v14 = a6;
          v51 = ComponentData;
          if ( *(_WORD *)(v49 + 60) >= *(_WORD *)(a2 + 4) )
            return 5136LL;
          if ( v77 )
          {
            mth_MxConcat2x2((int *)(v49 + 96), v49 + 184);
            if ( *(_DWORD *)(v49 + 100)
              || *(_DWORD *)(v49 + 108)
              || (v52 = abs32(*(_DWORD *)(v49 + 96)), v52 != abs32(*(_DWORD *)(v49 + 112)))
              || v52 != 0x10000 )
            {
              *(_DWORD *)(v49 + 220) = 0;
            }
          }
          if ( v51 )
            return v51;
          v53 = v74 | v75;
          v41 = (__int16)a11;
          v18 = a2;
          v75 |= v74;
        }
        while ( !v76 );
        if ( v53 )
        {
          v54 = *(__int16 **)(v14 + 40);
          v55 = *v54++;
          *(_WORD *)(v14 + 162) = __ROR2__(v55, 8);
          *(_QWORD *)(v14 + 168) = v54;
          v56 = *(_QWORD *)(v14 + 48);
          v57 = (char *)v54 + *(unsigned __int16 *)(v14 + 162);
          *(_QWORD *)(v14 + 40) = v57;
          if ( (unsigned __int64)v57 > v56 )
            return v56 < (unsigned __int64)v57 ? 0x140D : 0;
        }
      }
      return 0LL;
    }
    v35 = *(_OWORD *)(v14 + 184);
    v36 = *(_OWORD *)(v14 + 200);
    v37 = *(_QWORD *)(v14 + 176);
    v81 = *(_DWORD *)(v14 + 216);
    v73 = *(_QWORD *)(v14 + 168);
    v71 = *(_WORD *)(v14 + 162);
    v69 = *(_DWORD *)(v14 + 220);
    v67 = *(_WORD *)(v14 + 76);
    v65 = *(_WORD *)(v14 + 74);
    v63 = *(_WORD *)(v14 + 72);
    v61 = *(_WORD *)(v14 + 70);
    v59 = *a3;
    v79 = v35;
    v80 = v36;
    result = fsg_CompositeInnerGridFit(
               a5,
               a8,
               v37,
               a10,
               a9,
               v59,
               v61,
               v63,
               v65,
               v67,
               v69,
               (__int64)&v79,
               (__int16 *)(v14 + 62),
               v71,
               v73,
               &a11,
               &a6,
               &v74);
    if ( !(_DWORD)result )
    {
      if ( *(_DWORD *)(v14 + 132) )
      {
        v38 = *(_QWORD *)(v14 + 176);
        v39 = (unsigned __int16)(*(_WORD *)(*(_QWORD *)(v38 + 64) + 2LL * (*(__int16 *)(v38 + 80) - 1)) + 1);
        v40 = *(_WORD *)(*(_QWORD *)(v38 + 64) + 2LL * (*(__int16 *)(v38 + 80) - 1)) + 2;
        *(_DWORD *)(*(_QWORD *)v38 + 4 * v39) = *(_DWORD *)(v14 + 144);
        *(_DWORD *)(*(_QWORD *)(v38 + 8) + 4 * v39) = *(_DWORD *)(v14 + 148);
        *(_DWORD *)(*(_QWORD *)v38 + 4LL * v40) = *(_DWORD *)(v14 + 152);
        *(_DWORD *)(*(_QWORD *)(v38 + 8) + 4LL * v40) = *(_DWORD *)(v14 + 156);
      }
      if ( v74 )
      {
        if ( fsg_DoScanControl(a6, *((_DWORD *)a3 + 14)) )
          *(_WORD *)(v14 + 160) = (_WORD)a11;
        else
          *(_WORD *)(v14 + 160) = 2;
      }
      if ( !*(_QWORD *)(v14 + 24) || (result = fsg_MergeGlyphData(a5, v14, *a3), !(_DWORD)result) )
      {
        result = sfac_ReleaseGlyph(a1, v21);
        if ( !(_DWORD)result )
        {
          *(_QWORD *)(v14 + 168) = 0LL;
          *(_WORD *)(v14 + 162) = 0;
          return 0LL;
        }
      }
    }
  }
  else
  {
    v23 = *(_QWORD *)(v14 + 176);
    v24 = (__int64 *)(v14 + 168);
    result = sfac_ReadOutlineData(
               *(_QWORD *)(v23 + 48),
               *(_QWORD *)(v23 + 40),
               *(_QWORD *)(v23 + 32),
               v21,
               v18,
               *v15,
               *(_QWORD *)(v14 + 24) != 0LL,
               *(_WORD *)(v23 + 80),
               *(_QWORD *)(v23 + 56),
               *(_QWORD *)(v23 + 64),
               v14 + 162,
               v14 + 168,
               a12,
               a13);
    if ( !(_DWORD)result )
    {
      if ( *((_DWORD *)a3 + 15) || a14 )
      {
        fsg_CheckOutlineOrientation(*(_QWORD *)(v14 + 176));
        v25 = *(_QWORD *)(v14 + 176);
      }
      else
      {
        v25 = *(_QWORD *)(v14 + 176);
        v26 = 0;
        if ( *(__int16 *)(v25 + 80) > 0 )
        {
          v27 = 0LL;
          do
          {
            ++v26;
            *(_BYTE *)(v27 + *(_QWORD *)(*(_QWORD *)(v14 + 176) + 88LL)) = 0;
            ++v27;
            v25 = *(_QWORD *)(v14 + 176);
          }
          while ( v26 < *(__int16 *)(v25 + 80) );
        }
      }
      v28 = *(_OWORD *)(v14 + 184);
      v29 = *(_OWORD *)(v14 + 200);
      v81 = *(_DWORD *)(v14 + 216);
      v72 = *v24;
      v70 = *(_WORD *)(v14 + 162);
      v68 = *(_DWORD *)(v14 + 220);
      v66 = *(_WORD *)(v14 + 76);
      v64 = *(_WORD *)(v14 + 74);
      v62 = *(_WORD *)(v14 + 72);
      v60 = *(_WORD *)(v14 + 70);
      v58 = *a3;
      v79 = v28;
      v80 = v29;
      result = fsg_SimpleInnerGridFit(
                 a5,
                 a8,
                 v25,
                 a10,
                 a9,
                 v58,
                 v60,
                 v62,
                 v64,
                 v66,
                 v68,
                 (__int64)&v79,
                 v14 + 62,
                 v70,
                 v72,
                 (__int64)&a11,
                 (__int64)&a6,
                 (__int64)&v74);
      if ( !(_DWORD)result )
      {
        if ( fsg_DoScanControl(a6, *((_DWORD *)a3 + 14)) )
        {
          *(_WORD *)(v14 + 160) = (_WORD)a11;
        }
        else
        {
          *(_WORD *)(v14 + 160) = 2;
          v24 = (__int64 *)(v14 + 168);
        }
        FixMul(*(_DWORD *)(v14 + 96), *(_DWORD *)(v14 + 112));
        fixed = FixMul(*(_DWORD *)(v14 + 100), *(_DWORD *)(v14 + 108));
        if ( v32 - fixed < 0 )
        {
          for ( i = v31;
                i < *(__int16 *)(*(_QWORD *)(v14 + 176) + 80LL);
                *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v14 + 176) + 88LL) + v34) ^= 1u )
          {
            v34 = i++;
          }
        }
        if ( *(_QWORD *)(v14 + 24) == v31 || (result = fsg_MergeGlyphData(a5, v14, *a3), !(_DWORD)result) )
        {
          result = sfac_ReleaseGlyph(a1, v21);
          if ( !(_DWORD)result )
          {
            *v24 = 0LL;
            *(_WORD *)(v14 + 162) = 0;
            return 0LL;
          }
        }
      }
    }
  }
  return result;
}
