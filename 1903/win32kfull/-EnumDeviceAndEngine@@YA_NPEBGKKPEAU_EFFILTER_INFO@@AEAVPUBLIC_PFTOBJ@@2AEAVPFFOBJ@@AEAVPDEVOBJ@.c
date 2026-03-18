/*
 * XREFs of ?EnumDeviceAndEngine@@YA_NPEBGKKPEAU_EFFILTER_INFO@@AEAVPUBLIC_PFTOBJ@@2AEAVPFFOBJ@@AEAVPDEVOBJ@@PEAVDCOBJ@@PEAKPEAX@Z @ 0x1C02B1198
 * Callers:
 *     GreEnumFonts @ 0x1C0077AE8 (GreEnumFonts.c)
 * Callees:
 *     ?pfsubAlternateFacename@@YAPEAU_FONTSUB@@PEBG@Z @ 0x1C004ADA0 (-pfsubAlternateFacename@@YAPEAU_FONTSUB@@PEBG@Z.c)
 *     ?bScanFamilyAndFace@@YAHPEAVFHOBJ@@000PEAVEFSOBJ@@KPEAU_EFFILTER_INFO@@PEBG@Z @ 0x1C004C068 (-bScanFamilyAndFace@@YAHPEAVFHOBJ@@000PEAVEFSOBJ@@KPEAU_EFFILTER_INFO@@PEBG@Z.c)
 *     ?bScanFamily@@YAHPEAVFHOBJ@@K0K0KPEAVEFSOBJ@@KPEAU_EFFILTER_INFO@@PEBG@Z @ 0x1C004C148 (-bScanFamily@@YAHPEAVFHOBJ@@K0K0KPEAVEFSOBJ@@KPEAU_EFFILTER_INFO@@PEBG@Z.c)
 *     ?bValid@FHOBJ@@QEBAHXZ @ 0x1C0078168 (-bValid@FHOBJ@@QEBAHXZ.c)
 *     ??1EFSMEMOBJ@@QEAA@XZ @ 0x1C0078184 (--1EFSMEMOBJ@@QEAA@XZ.c)
 *     ??0EFSMEMOBJ@@QEAA@PEAVDCOBJ@@KKPEAXPEAK@Z @ 0x1C00781C8 (--0EFSMEMOBJ@@QEAA@PEAVDCOBJ@@KKPEAXPEAK@Z.c)
 */

char __fastcall EnumDeviceAndEngine(
        unsigned __int16 *a1,
        __int64 a2,
        unsigned int a3,
        struct _EFFILTER_INFO *a4,
        struct PUBLIC_PFTOBJ *a5,
        __int64 **a6,
        struct PFFOBJ *a7,
        struct PDEVOBJ *a8,
        struct DCOBJ *a9,
        unsigned int *a10,
        void *a11)
{
  __int64 *v14; // rax
  char v15; // bl
  __int64 v16; // r10
  __int64 v17; // r8
  __int64 v18; // r9
  __int64 v19; // r11
  __int64 *v20; // rax
  unsigned int v21; // r9d
  unsigned int v22; // edx
  int v23; // eax
  __int64 *v25; // rax
  __int64 *v26; // rcx
  __int64 v27; // rax
  struct _FONTSUB *v28; // rax
  unsigned __int16 *v29; // rsi
  __int64 *v30; // rcx
  __int64 v31; // rax
  _QWORD v32[2]; // [rsp+58h] [rbp-61h] BYREF
  _QWORD v33[2]; // [rsp+68h] [rbp-51h] BYREF
  __int64 *v34; // [rsp+78h] [rbp-41h] BYREF
  __int64 v35; // [rsp+80h] [rbp-39h]
  _QWORD v36[2]; // [rsp+88h] [rbp-31h] BYREF
  _QWORD v37[2]; // [rsp+98h] [rbp-21h] BYREF
  __int64 *v38; // [rsp+A8h] [rbp-11h] BYREF
  __int64 v39; // [rsp+B0h] [rbp-9h]
  __int64 *v40; // [rsp+B8h] [rbp-1h] BYREF
  __int64 v41; // [rsp+C0h] [rbp+7h]

  v14 = (__int64 *)(*(_QWORD *)a7 + 112LL);
  v35 = *v14;
  v34 = v14;
  v15 = 0;
  if ( FHOBJ::bValid((FHOBJ *)&v34) )
  {
    v32[0] = *(_QWORD *)a5;
    v32[1] = *(_QWORD *)v32[0];
    if ( FHOBJ::bValid((FHOBJ *)v32) )
    {
      v36[0] = v16 + 104;
      v36[1] = *(_QWORD *)(v16 + 104);
      if ( FHOBJ::bValid((FHOBJ *)v36) )
      {
        v37[0] = v17 + 8;
        v37[1] = *(_QWORD *)(v17 + 8);
        if ( FHOBJ::bValid((FHOBJ *)v37) )
        {
          if ( a1 )
          {
            EFSMEMOBJ::EFSMEMOBJ((EFSMEMOBJ *)v33, a9, 0x20u, a3, a11, a10);
            if ( !v33[0] )
              goto LABEL_16;
            if ( !(unsigned int)bScanFamilyAndFace(
                                  (struct FHOBJ *)v32,
                                  (struct FHOBJ *)v37,
                                  (struct FHOBJ *)&v34,
                                  (struct FHOBJ *)v36,
                                  (struct EFSOBJ *)v33,
                                  a3,
                                  a4,
                                  a1) )
              goto LABEL_16;
            v26 = *a6;
            if ( *a6 )
            {
              v41 = *v26;
              v38 = v26 + 1;
              v27 = v26[1];
              v40 = v26;
              v39 = v27;
              if ( !FHOBJ::bValid((FHOBJ *)&v40)
                || !FHOBJ::bValid((FHOBJ *)&v38)
                || !(unsigned int)bScanFamilyAndFace(
                                    (struct FHOBJ *)&v40,
                                    (struct FHOBJ *)&v38,
                                    0LL,
                                    0LL,
                                    (struct EFSOBJ *)v33,
                                    a3,
                                    a4,
                                    a1) )
              {
                goto LABEL_16;
              }
            }
            v28 = pfsubAlternateFacename(a1);
            v29 = (unsigned __int16 *)((char *)v28 + 130);
            if ( !v28 )
              v29 = 0LL;
            if ( !v29 )
              goto LABEL_14;
            *(_QWORD *)v33[0] = v28;
            if ( !(unsigned int)bScanFamilyAndFace(
                                  (struct FHOBJ *)v32,
                                  (struct FHOBJ *)v37,
                                  (struct FHOBJ *)&v34,
                                  (struct FHOBJ *)v36,
                                  (struct EFSOBJ *)v33,
                                  a3,
                                  a4,
                                  v29) )
              goto LABEL_16;
            v30 = *a6;
            if ( *a6 )
            {
              v39 = *v30;
              v40 = v30 + 1;
              v31 = v30[1];
              v38 = v30;
              v41 = v31;
              if ( !FHOBJ::bValid((FHOBJ *)&v38) || !FHOBJ::bValid((FHOBJ *)&v40) )
                goto LABEL_16;
              v23 = bScanFamilyAndFace(
                      (struct FHOBJ *)&v38,
                      (struct FHOBJ *)&v40,
                      0LL,
                      0LL,
                      (struct EFSOBJ *)v33,
                      a3,
                      a4,
                      v29);
              goto LABEL_13;
            }
          }
          else
          {
            EFSMEMOBJ::EFSMEMOBJ((EFSMEMOBJ *)v33, a9, *(_DWORD *)(v19 + 12) + *(_DWORD *)(v18 + 12), a3, a11, a10);
            if ( !v33[0] )
              goto LABEL_16;
            if ( (*(_DWORD *)(*(_QWORD *)a8 + 2184LL) & 0x2000) != 0 )
            {
              if ( !(unsigned int)bScanFamily(
                                    (struct FHOBJ *)&v34,
                                    0,
                                    (struct FHOBJ *)v32,
                                    2u,
                                    (struct FHOBJ *)v32,
                                    1u,
                                    (struct EFSOBJ *)v33,
                                    a3,
                                    a4,
                                    0LL) )
                goto LABEL_16;
              v20 = *a6;
              if ( !*a6 )
                goto LABEL_14;
              v34 = *a6;
              v35 = *v20;
              if ( !FHOBJ::bValid((FHOBJ *)&v34) )
                goto LABEL_16;
              v21 = 1;
              v22 = 2;
              goto LABEL_12;
            }
            if ( !(unsigned int)bScanFamily(
                                  (struct FHOBJ *)&v34,
                                  0,
                                  (struct FHOBJ *)v32,
                                  1u,
                                  (struct FHOBJ *)v32,
                                  2u,
                                  (struct EFSOBJ *)v33,
                                  a3,
                                  a4,
                                  0LL) )
              goto LABEL_16;
            v25 = *a6;
            if ( *a6 )
            {
              v34 = *a6;
              v35 = *v25;
              if ( !FHOBJ::bValid((FHOBJ *)&v34) )
                goto LABEL_16;
              v21 = 2;
              v22 = 1;
LABEL_12:
              v23 = bScanFamily(
                      (struct FHOBJ *)&v34,
                      v22,
                      (struct FHOBJ *)&v34,
                      v21,
                      0LL,
                      0,
                      (struct EFSOBJ *)v33,
                      a3,
                      a4,
                      0LL);
LABEL_13:
              if ( v23 )
                goto LABEL_14;
LABEL_16:
              EFSMEMOBJ::~EFSMEMOBJ((EFSMEMOBJ *)v33);
              return v15;
            }
          }
LABEL_14:
          if ( !*(_DWORD *)(v33[0] + 28LL) )
            v15 = 1;
          goto LABEL_16;
        }
      }
    }
  }
  return v15;
}
