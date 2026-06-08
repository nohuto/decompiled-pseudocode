/*
 * XREFs of AcpiParseLpiObject @ 0x1C002EA30
 * Callers:
 *     InitAcpiLpiStates @ 0x1C0020D10 (InitAcpiLpiStates.c)
 *     AcpiParseProcessorContainer @ 0x1C002F150 (AcpiParseProcessorContainer.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0003F30 (__security_check_cookie.c)
 *     memmove @ 0x1C0004C80 (memmove.c)
 *     memset @ 0x1C0004FC0 (memset.c)
 *     WPP_RECORDER_SF_S @ 0x1C000B9CC (WPP_RECORDER_SF_S.c)
 *     WPP_RECORDER_SF_SD @ 0x1C000BB30 (WPP_RECORDER_SF_SD.c)
 *     WPP_RECORDER_SF_Sd @ 0x1C000BC84 (WPP_RECORDER_SF_Sd.c)
 *     AcpiParseCore @ 0x1C0021E04 (AcpiParseCore.c)
 *     AcpiTranslateAccessSize @ 0x1C00221EC (AcpiTranslateAccessSize.c)
 */

__int64 __fastcall AcpiParseLpiObject(__int64 a1, const wchar_t *a2, char a3, _QWORD *a4)
{
  unsigned int v6; // ebx
  unsigned __int16 v7; // r9
  __int64 v8; // rax
  int v9; // r12d
  __int64 v10; // r15
  _WORD *v11; // rdi
  unsigned __int16 v12; // r14
  __int64 v13; // rax
  char *v14; // r14
  int v15; // r13d
  _QWORD *PoolWithTag; // rax
  _QWORD *v17; // rdi
  __int64 v18; // r9
  __int64 v19; // rax
  char *v20; // r15
  unsigned int v21; // r14d
  unsigned __int8 *v22; // rcx
  __int64 v23; // r12
  __int64 v24; // rdx
  __int64 v25; // r8
  _BYTE *v26; // rcx
  _BYTE *v27; // rcx
  _BYTE *v28; // rcx
  __int64 v29; // rax
  unsigned __int16 v30; // r9
  unsigned int v31; // esi
  __int64 v32; // rcx
  int v34; // [rsp+20h] [rbp-E0h]
  __int64 v35; // [rsp+30h] [rbp-D0h]
  __int64 v37; // [rsp+48h] [rbp-B8h] BYREF
  _QWORD *v38; // [rsp+50h] [rbp-B0h]
  char v39; // [rsp+60h] [rbp-A0h] BYREF
  int v40; // [rsp+62h] [rbp-9Eh]
  const char *v41; // [rsp+68h] [rbp-98h]
  __int64 (__fastcall *v42)(__int64, _DWORD *, unsigned int); // [rsp+70h] [rbp-90h]
  char v43; // [rsp+78h] [rbp-88h]
  int v44; // [rsp+7Ah] [rbp-86h]
  const char *v45; // [rsp+80h] [rbp-80h]
  __int64 (__fastcall *v46)(__int64, _DWORD *, unsigned int); // [rsp+88h] [rbp-78h]
  char v47; // [rsp+90h] [rbp-70h]
  int v48; // [rsp+92h] [rbp-6Eh]
  const char *v49; // [rsp+98h] [rbp-68h]
  __int64 (__fastcall *v50)(__int64, _DWORD *, unsigned int); // [rsp+A0h] [rbp-60h]
  char v51; // [rsp+A8h] [rbp-58h]
  int v52; // [rsp+AAh] [rbp-56h]
  const char *v53; // [rsp+B0h] [rbp-50h]
  __int64 (__fastcall *v54)(__int64, _DWORD *, unsigned int); // [rsp+B8h] [rbp-48h]
  char v55; // [rsp+C0h] [rbp-40h]
  int v56; // [rsp+C2h] [rbp-3Eh]
  const char *v57; // [rsp+C8h] [rbp-38h]
  __int64 (__fastcall *v58)(__int64, _DWORD *, unsigned int); // [rsp+D0h] [rbp-30h]
  char v59; // [rsp+D8h] [rbp-28h]
  int v60; // [rsp+DAh] [rbp-26h]
  const char *v61; // [rsp+E0h] [rbp-20h]
  __int64 (__fastcall *v62)(__int64, _DWORD *, unsigned int); // [rsp+E8h] [rbp-18h]
  char v63; // [rsp+F0h] [rbp-10h]
  int v64; // [rsp+F2h] [rbp-Eh]
  const char *v65; // [rsp+F8h] [rbp-8h]
  __int64 (__fastcall *v66)(__int64, __int64, unsigned int); // [rsp+100h] [rbp+0h]
  char v67; // [rsp+108h] [rbp+8h]
  int v68; // [rsp+10Ah] [rbp+Ah]
  const char *v69; // [rsp+110h] [rbp+10h]
  __int64 (__fastcall *v70)(__int64, __int64, unsigned int); // [rsp+118h] [rbp+18h]
  char v71; // [rsp+120h] [rbp+20h]
  int v72; // [rsp+122h] [rbp+22h]
  const char *v73; // [rsp+128h] [rbp+28h]
  __int64 (__fastcall *v74)(__int64, __int64, unsigned int); // [rsp+130h] [rbp+30h]
  char v75; // [rsp+138h] [rbp+38h]
  int v76; // [rsp+13Ah] [rbp+3Ah]
  const char *v77; // [rsp+140h] [rbp+40h]
  NTSTATUS (__fastcall *v78)(__int64, struct _UNICODE_STRING *, unsigned int); // [rsp+148h] [rbp+48h]
  char v79; // [rsp+150h] [rbp+50h] BYREF
  int v80; // [rsp+152h] [rbp+52h]
  const char *v81; // [rsp+158h] [rbp+58h]
  __int64 (__fastcall *v82)(__int64, _DWORD *, unsigned int); // [rsp+160h] [rbp+60h]
  char v83; // [rsp+168h] [rbp+68h]
  int v84; // [rsp+16Ah] [rbp+6Ah]
  const char *v85; // [rsp+170h] [rbp+70h]
  __int64 (__fastcall *v86)(__int64, _DWORD *, unsigned int); // [rsp+178h] [rbp+78h]
  char v87; // [rsp+180h] [rbp+80h]
  int v88; // [rsp+182h] [rbp+82h]
  const char *v89; // [rsp+188h] [rbp+88h]
  __int64 (__fastcall *v90)(__int64, _DWORD *, unsigned int); // [rsp+190h] [rbp+90h]
  char v91; // [rsp+198h] [rbp+98h]
  int v92; // [rsp+19Ah] [rbp+9Ah]
  const char *v93; // [rsp+1A0h] [rbp+A0h]
  __int64 (__fastcall *v94)(__int64, _DWORD *, unsigned int); // [rsp+1A8h] [rbp+A8h]
  char v95; // [rsp+1B0h] [rbp+B0h]
  int v96; // [rsp+1B2h] [rbp+B2h]
  const char *v97; // [rsp+1B8h] [rbp+B8h]
  __int64 (__fastcall *v98)(__int64, _DWORD *, unsigned int); // [rsp+1C0h] [rbp+C0h]
  char v99; // [rsp+1C8h] [rbp+C8h]
  int v100; // [rsp+1CAh] [rbp+CAh]
  const char *v101; // [rsp+1D0h] [rbp+D0h]
  __int64 (__fastcall *v102)(__int64, _DWORD *, unsigned int); // [rsp+1D8h] [rbp+D8h]
  char v103; // [rsp+1E0h] [rbp+E0h]
  int v104; // [rsp+1E2h] [rbp+E2h]
  const char *v105; // [rsp+1E8h] [rbp+E8h]
  __int64 (__fastcall *v106)(); // [rsp+1F0h] [rbp+F0h]
  char v107; // [rsp+1F8h] [rbp+F8h]
  int v108; // [rsp+1FAh] [rbp+FAh]
  const char *v109; // [rsp+200h] [rbp+100h]
  __int64 (__fastcall *v110)(); // [rsp+208h] [rbp+108h]
  char v111; // [rsp+210h] [rbp+110h]
  int v112; // [rsp+212h] [rbp+112h]
  const char *v113; // [rsp+218h] [rbp+118h]
  __int64 (__fastcall *v114)(__int64, __int64, unsigned int); // [rsp+220h] [rbp+120h]
  char v115; // [rsp+228h] [rbp+128h]
  int v116; // [rsp+22Ah] [rbp+12Ah]
  const char *v117; // [rsp+230h] [rbp+130h]
  __int64 (__fastcall *v118)(__int64, __int64, unsigned int); // [rsp+238h] [rbp+138h]
  char v119; // [rsp+240h] [rbp+140h]
  int v120; // [rsp+242h] [rbp+142h]
  const char *v121; // [rsp+248h] [rbp+148h]
  NTSTATUS (__fastcall *v122)(__int64, struct _UNICODE_STRING *, unsigned int); // [rsp+250h] [rbp+150h]

  v38 = a4;
  v42 = AcpiParseULong;
  v46 = AcpiParseULong;
  v50 = AcpiParseULong;
  v53 = "ArchitectureFlags";
  v41 = "MinimumResidency";
  v79 = 0;
  v80 = 0;
  v54 = AcpiParseULong;
  v58 = AcpiParseULong;
  v81 = "MinimumResidency";
  v45 = "WakeupLatency";
  v82 = AcpiParseULong;
  v62 = AcpiParseULong;
  v85 = "WakeupLatency";
  v39 = 0;
  v86 = AcpiParseULong;
  v40 = 0;
  v89 = "Flags";
  v43 = 1;
  v49 = "Flags";
  v55 = 4;
  v66 = AcpiParseRegister;
  v70 = AcpiParseRegister;
  v74 = AcpiParseRegister;
  v90 = AcpiParseULong;
  v44 = 0x40000;
  v47 = 2;
  v48 = 0x80000;
  v51 = 3;
  v52 = 786432;
  v56 = 0x100000;
  v57 = "ResidencyCounterFrequency";
  v59 = 5;
  v60 = 1310720;
  v61 = "EnabledParentState";
  v63 = 6;
  v64 = 1572866;
  v65 = "EntryMethod";
  v67 = 7;
  v68 = 2359298;
  v69 = "ResidencyCounter";
  v71 = 8;
  v72 = 3145730;
  v73 = "UsageCounter";
  v75 = 9;
  v76 = 4194305;
  v77 = "StateName";
  v78 = AcpiParseAnsiString;
  v83 = 1;
  v84 = 0x40000;
  v87 = 2;
  v88 = 0x80000;
  v101 = "EnabledParentState";
  v93 = "ArchitectureFlags";
  v106 = AcpiParseRegisterOrQword;
  v97 = "ResidencyCounterFrequency";
  v110 = AcpiParseStaticRegister;
  v94 = AcpiParseULong;
  v113 = "ResidencyCounter";
  v98 = AcpiParseULong;
  v102 = AcpiParseULong;
  v105 = "EntryMethod";
  v109 = "EntryMethod";
  v117 = "UsageCounter";
  v114 = AcpiParseRegister;
  v118 = AcpiParseRegister;
  v91 = 3;
  v92 = 786432;
  v95 = 4;
  v96 = 0x100000;
  v99 = 5;
  v100 = 1310720;
  v103 = 6;
  v104 = 1572866;
  v107 = 6;
  v108 = 1572864;
  v111 = 7;
  v112 = 2359298;
  v115 = 8;
  v116 = 3145730;
  v119 = 9;
  v120 = 4194305;
  v121 = "StateName";
  v122 = AcpiParseAnsiString;
  if ( !*(_DWORD *)(a1 + 8) )
  {
    WPP_RECORDER_SF_S(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      2u,
      1u,
      0x33u,
      (__int64)&WPP_eb7b501de93c334997b4c3503e72e86c_Traceguids,
      a2);
    return (unsigned int)-1073741275;
  }
  if ( *(_WORD *)(a1 + 12) )
  {
    v7 = 52;
LABEL_5:
    WPP_RECORDER_SF_S(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      2u,
      1u,
      v7,
      (__int64)&WPP_eb7b501de93c334997b4c3503e72e86c_Traceguids,
      a2);
    return (unsigned int)-1072431096;
  }
  LOWORD(v8) = *(_WORD *)(a1 + 14);
  v9 = *(_DWORD *)(a1 + 16);
  if ( (unsigned __int16)v8 >= 4u )
    v8 = (unsigned __int16)v8;
  else
    v8 = 4LL;
  v10 = *(unsigned int *)(a1 + 4);
  v11 = (_WORD *)(v8 + a1 + 16);
  if ( (unsigned __int64)v11 >= a1 + v10 )
  {
    v7 = 53;
    goto LABEL_5;
  }
  if ( *v11 )
  {
    if ( *v11 != 2 )
    {
      v7 = 54;
      goto LABEL_5;
    }
    v12 = v11[1];
    if ( v12 > 8u )
    {
      v7 = 55;
      goto LABEL_5;
    }
    v37 = 0LL;
    memmove(&v37, v11 + 2, v12);
  }
  else
  {
    v12 = v11[1];
    v37 = *((unsigned int *)v11 + 1);
  }
  if ( v12 >= 4u )
  {
    _mm_lfence();
    v13 = (unsigned __int16)v11[1];
    LODWORD(v10) = *(_DWORD *)(a1 + 4);
  }
  else
  {
    v13 = 4LL;
  }
  v14 = (char *)v11 + v13 + 4;
  if ( (unsigned __int64)v14 >= a1 + (unsigned __int64)(unsigned int)v10 )
  {
    v7 = 56;
    goto LABEL_5;
  }
  if ( *(_WORD *)v14 )
  {
    v7 = 57;
    goto LABEL_5;
  }
  _mm_lfence();
  v15 = *((_DWORD *)v14 + 1);
  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, (unsigned int)(80 * v15 + 24), 0x72637250u);
  v17 = PoolWithTag;
  if ( !PoolWithTag )
    return (unsigned int)-1073741670;
  memset(PoolWithTag, 0, (unsigned int)(80 * v15 + 24));
  v17[1] = v37;
  *(_DWORD *)v17 = v9;
  *((_DWORD *)v17 + 4) = v15;
  if ( *((_WORD *)v14 + 1) >= 4u )
  {
    _mm_lfence();
    v19 = *((unsigned __int16 *)v14 + 1);
  }
  else
  {
    v19 = 4LL;
  }
  v20 = &v14[v19 + 4];
  v21 = 0;
  if ( (unsigned __int64)v20 < a1 + (unsigned __int64)*(unsigned int *)(a1 + 4) )
  {
    while ( v21 != v15 )
    {
      if ( *(_WORD *)v20 != 3 )
      {
        WPP_RECORDER_SF_SD((__int64)WPP_GLOBAL_Control->DeviceExtension, 1LL, 4LL, v18, v34, a2);
        goto LABEL_50;
      }
      v22 = (unsigned __int8 *)&v79;
      v23 = 10LL * v21;
      if ( !a3 )
        v22 = (unsigned __int8 *)&v39;
      if ( (int)AcpiParseCore(
                  v22,
                  (unsigned int)(a3 != 0) + 10,
                  (unsigned __int64)(v20 + 4),
                  *((unsigned __int16 *)v20 + 1),
                  (__int64)&v17[v23 + 3],
                  80,
                  "_LPI",
                  1) < 0 )
      {
        LODWORD(v35) = v21 + 3;
        WPP_RECORDER_SF_Sd(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          v24,
          v25,
          0x3Cu,
          (__int64)&WPP_eb7b501de93c334997b4c3503e72e86c_Traceguids,
          a2,
          v35);
        v6 = -1072431089;
        goto LABEL_56;
      }
      v26 = &v17[v23 + 6];
      if ( *v26 != 127 )
        AcpiTranslateAccessSize(v26);
      v27 = (char *)&v17[v23 + 7] + 4;
      if ( *v27 != 127 )
        AcpiTranslateAccessSize(v27);
      v28 = &v17[v23 + 9];
      if ( *v28 != 127 )
        AcpiTranslateAccessSize(v28);
      LOWORD(v29) = *((_WORD *)v20 + 1);
      if ( (unsigned __int16)v29 >= 4u )
        v29 = (unsigned __int16)v29;
      else
        v29 = 4LL;
      v20 += v29 + 4;
      ++v21;
      if ( (unsigned __int64)v20 >= a1 + (unsigned __int64)*(unsigned int *)(a1 + 4) )
        goto LABEL_46;
    }
    v30 = 58;
    goto LABEL_52;
  }
LABEL_46:
  if ( v21 != v15 )
  {
    v30 = 61;
    goto LABEL_52;
  }
  if ( !v21 )
  {
    v30 = 62;
LABEL_52:
    WPP_RECORDER_SF_S(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      2u,
      1u,
      v30,
      (__int64)&WPP_eb7b501de93c334997b4c3503e72e86c_Traceguids,
      a2);
LABEL_50:
    v6 = -1072431096;
    goto LABEL_56;
  }
  v6 = 0;
  *v38 = v17;
  v17 = 0LL;
LABEL_56:
  LODWORD(v37) = v6;
  if ( v17 )
  {
    v31 = 0;
    if ( *((_DWORD *)v17 + 4) )
    {
      do
      {
        v32 = 10LL * v31;
        if ( v17[v32 + 12] )
          RtlFreeUnicodeString((PUNICODE_STRING)&v17[v32 + 11]);
        ++v31;
      }
      while ( v31 < *((_DWORD *)v17 + 4) );
      v6 = v37;
    }
    ExFreePoolWithTag(v17, 0);
  }
  return v6;
}
