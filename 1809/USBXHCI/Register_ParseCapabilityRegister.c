/*
 * XREFs of Register_ParseCapabilityRegister @ 0x1C005F990
 * Callers:
 *     Register_PrepareHardware @ 0x1C006014C (Register_PrepareHardware.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0001E30 (WPP_RECORDER_SF_.c)
 *     __security_check_cookie @ 0x1C0002030 (__security_check_cookie.c)
 *     WPP_RECORDER_SF_i @ 0x1C00028DC (WPP_RECORDER_SF_i.c)
 *     WPP_RECORDER_SF_d @ 0x1C00091C4 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_dd @ 0x1C00092C8 (WPP_RECORDER_SF_dd.c)
 *     WPP_RECORDER_SF_ddL @ 0x1C00093F0 (WPP_RECORDER_SF_ddL.c)
 *     Controller_IsSecureDevice @ 0x1C000CF68 (Controller_IsSecureDevice.c)
 *     WPP_RECORDER_SF_dddd @ 0x1C00121D8 (WPP_RECORDER_SF_dddd.c)
 *     WPP_RECORDER_SF_qD @ 0x1C001C480 (WPP_RECORDER_SF_qD.c)
 *     Register_FindFirstExtendedCapability @ 0x1C001CD80 (Register_FindFirstExtendedCapability.c)
 *     XilRegister_ReadUlong @ 0x1C001D374 (XilRegister_ReadUlong.c)
 *     Etw_ControllerFirmareVersionUpdate @ 0x1C00391FC (Etw_ControllerFirmareVersionUpdate.c)
 */

__int64 __fastcall Register_ParseCapabilityRegister(__int64 a1)
{
  __int64 v2; // rcx
  unsigned int v3; // r14d
  __int16 v4; // ax
  __int64 v5; // rbx
  unsigned __int16 v6; // r9
  unsigned __int64 v7; // rdx
  unsigned __int64 v8; // rax
  unsigned __int16 Ulong; // ax
  __int64 v10; // rcx
  unsigned int v11; // eax
  unsigned __int8 v12; // bl
  unsigned int v13; // r15d
  unsigned int v14; // esi
  unsigned int v15; // edi
  __int64 v16; // rax
  __int64 v17; // rax
  unsigned __int8 v18; // cl
  __int64 v19; // rax
  __int64 v20; // r8
  _QWORD *v21; // rcx
  __int64 v22; // rdx
  unsigned int v23; // eax
  unsigned int v24; // ecx
  unsigned __int16 v25; // r9
  unsigned int v26; // eax
  unsigned int v27; // ecx
  unsigned int v28; // eax
  unsigned int v29; // r8d
  int v30; // edx
  unsigned int v31; // eax
  int v32; // ecx
  unsigned __int16 v33; // r9
  unsigned int v34; // eax
  unsigned int v35; // r10d
  unsigned int v36; // eax
  unsigned int v37; // r8d
  unsigned int v38; // r8d
  unsigned int v39; // ecx
  int v40; // ecx
  int v41; // eax
  unsigned __int16 v42; // cx
  unsigned __int64 v43; // r8
  unsigned __int64 v44; // r8
  unsigned __int64 FirstExtendedCapability; // rax
  __int64 v46; // rcx
  unsigned int v47; // eax
  __int64 v48; // r10
  unsigned __int16 v49; // r9
  __int64 v50; // rcx
  __int64 v51; // rdx
  unsigned int v52; // eax
  __int64 v53; // rdx
  int v54; // eax
  __int64 v56; // [rsp+28h] [rbp-70h]
  __int64 v57; // [rsp+28h] [rbp-70h]
  __int64 v58; // [rsp+28h] [rbp-70h]
  __int64 v59; // [rsp+28h] [rbp-70h]
  __int64 v60; // [rsp+28h] [rbp-70h]
  __int64 v61; // [rsp+28h] [rbp-70h]
  __int64 v62; // [rsp+28h] [rbp-70h]
  __int64 v63; // [rsp+28h] [rbp-70h]
  __int64 v64; // [rsp+28h] [rbp-70h]
  __int64 v65; // [rsp+28h] [rbp-70h]
  __int64 v66; // [rsp+28h] [rbp-70h]
  __int64 v67; // [rsp+28h] [rbp-70h]
  __int64 v68; // [rsp+30h] [rbp-68h]
  __int64 v69; // [rsp+30h] [rbp-68h]
  __int64 v70; // [rsp+30h] [rbp-68h]
  __int64 v71; // [rsp+30h] [rbp-68h]
  __int64 v72; // [rsp+30h] [rbp-68h]
  __int64 v73; // [rsp+30h] [rbp-68h]
  __int64 v74; // [rsp+30h] [rbp-68h]
  __int64 v75; // [rsp+30h] [rbp-68h]
  __int64 v76; // [rsp+30h] [rbp-68h]
  __int64 v77; // [rsp+30h] [rbp-68h]
  __int64 v78; // [rsp+30h] [rbp-68h]
  __int64 v79; // [rsp+38h] [rbp-60h]
  __int64 v80; // [rsp+38h] [rbp-60h]
  __int64 v81; // [rsp+38h] [rbp-60h]
  __int64 v82; // [rsp+38h] [rbp-60h]
  __int64 v83; // [rsp+38h] [rbp-60h]
  __int64 v84; // [rsp+38h] [rbp-60h]
  __int64 v85; // [rsp+40h] [rbp-58h]
  __int128 v86; // [rsp+50h] [rbp-48h] BYREF

  v2 = *(_QWORD *)(a1 + 8);
  v3 = 0;
  if ( *(_QWORD *)(v2 + 264) == -1LL )
  {
    v4 = *(_WORD *)(v2 + 184);
    if ( v4 == 7023 )
    {
      LODWORD(v8) = XilRegister_ReadUlong(a1, (unsigned int *)(*(_QWORD *)(a1 + 24) + 0x4000LL));
      v5 = (unsigned int)v8;
      v6 = 21;
      v7 = (unsigned __int64)(unsigned int)v8 >> 16;
      LODWORD(v8) = (unsigned __int16)v8;
LABEL_7:
      WPP_RECORDER_SF_dd(
        *(_QWORD *)(*(_QWORD *)(a1 + 8) + 72LL),
        4u,
        6u,
        v6,
        (__int64)&WPP_292538a6e9223cc5bca970ef2a3b6db4_Traceguids,
        v8,
        v7);
      *(_QWORD *)(*(_QWORD *)(a1 + 8) + 264LL) = v5;
      Etw_ControllerFirmareVersionUpdate(v10, *(_QWORD *)(a1 + 8));
      goto LABEL_8;
    }
    if ( v4 == 4172 || !_stricmp((const char *)(v2 + 240), "QCOM") )
    {
      Ulong = XilRegister_ReadUlong(a1, (unsigned int *)(*(_QWORD *)(a1 + 24) + 49440LL));
      v5 = Ulong;
      LODWORD(v7) = Ulong & 0xFFF;
      v6 = 22;
      v8 = (unsigned __int64)Ulong >> 12;
      goto LABEL_7;
    }
  }
LABEL_8:
  v11 = XilRegister_ReadUlong(a1, *(unsigned int **)(a1 + 24));
  v12 = v11;
  v13 = (unsigned __int8)v11;
  v14 = HIWORD(v11);
  LODWORD(v68) = BYTE2(v11);
  v15 = HIBYTE(v11);
  LODWORD(v56) = HIBYTE(v11);
  WPP_RECORDER_SF_ddL(
    *(_QWORD *)(*(_QWORD *)(a1 + 8) + 72LL),
    4u,
    6u,
    0x17u,
    (__int64)&WPP_292538a6e9223cc5bca970ef2a3b6db4_Traceguids,
    v56,
    v68,
    (unsigned __int8)v11);
  v16 = *(_QWORD *)(a1 + 8);
  *(_BYTE *)(v16 + 256) = v15;
  *(_BYTE *)(v16 + 257) = v14;
  v17 = *(_QWORD *)(a1 + 8);
  v18 = *(_BYTE *)(v17 + 256);
  if ( v18 )
  {
    if ( *(_BYTE *)(v17 + 257) >= 0x10u || v18 > 1u )
      *(_BYTE *)(v17 + 255) = 1;
  }
  else
  {
    v86 = 0x1000uLL;
    WPP_RECORDER_SF_(*(_QWORD *)(v17 + 72), 4u, 6u, 0x18u, (__int64)&WPP_292538a6e9223cc5bca970ef2a3b6db4_Traceguids);
    v19 = *(_QWORD *)(a1 + 8);
    v20 = 2LL;
    v21 = (_QWORD *)(v19 + 272);
    do
    {
      *v21 |= *(_QWORD *)((char *)v21 + (_QWORD)&v86 - v19 - 272);
      ++v21;
      --v20;
    }
    while ( v20 );
  }
  v22 = *(_QWORD *)(a1 + 24);
  *(_QWORD *)(a1 + 32) = v22 + v12;
  v23 = XilRegister_ReadUlong(a1, (unsigned int *)(v22 + 4));
  *(_DWORD *)(a1 + 80) = v23;
  LODWORD(v79) = HIBYTE(v23);
  LODWORD(v69) = (v23 >> 8) & 0x7FF;
  LODWORD(v57) = (unsigned __int8)v23;
  WPP_RECORDER_SF_ddL(
    *(_QWORD *)(*(_QWORD *)(a1 + 8) + 72LL),
    4u,
    6u,
    0x19u,
    (__int64)&WPP_292538a6e9223cc5bca970ef2a3b6db4_Traceguids,
    v57,
    v69,
    v79);
  v24 = *(_DWORD *)(a1 + 80);
  if ( !(_BYTE)v24 )
  {
    v25 = 26;
LABEL_17:
    LODWORD(v58) = 0;
LABEL_52:
    WPP_RECORDER_SF_d(
      *(_QWORD *)(*(_QWORD *)(a1 + 8) + 72LL),
      2u,
      6u,
      v25,
      (__int64)&WPP_292538a6e9223cc5bca970ef2a3b6db4_Traceguids,
      v58);
    return (unsigned int)-1073741811;
  }
  v26 = (v24 >> 8) & 0x7FF;
  if ( (v24 & 0x7FF00) == 0 || (v27 = HIBYTE(v24), v26 > 0x400) )
  {
    v25 = 27;
    goto LABEL_51;
  }
  if ( !(_BYTE)v27 )
  {
    v25 = 28;
    goto LABEL_17;
  }
  v28 = XilRegister_ReadUlong(a1, (unsigned int *)(*(_QWORD *)(a1 + 24) + 8LL));
  *(_DWORD *)(a1 + 84) = v28;
  *(_DWORD *)(a1 + 88) = 1 << ((v28 >> 4) & 0xF);
  LODWORD(v70) = 1 << ((v28 >> 4) & 0xF);
  LODWORD(v58) = v28 & 0xF;
  WPP_RECORDER_SF_dd(
    *(_QWORD *)(*(_QWORD *)(a1 + 8) + 72LL),
    4u,
    6u,
    0x1Du,
    (__int64)&WPP_292538a6e9223cc5bca970ef2a3b6db4_Traceguids,
    v58,
    v70);
  v29 = *(_DWORD *)(a1 + 84);
  v30 = (v29 >> 27) | *(_WORD *)(a1 + 86) & 0x3E0;
  *(_DWORD *)(a1 + 92) = v30;
  LODWORD(v71) = v30;
  LODWORD(v59) = (v29 >> 26) & 1;
  WPP_RECORDER_SF_dd(
    *(_QWORD *)(*(_QWORD *)(a1 + 8) + 72LL),
    4u,
    6u,
    0x1Eu,
    (__int64)&WPP_292538a6e9223cc5bca970ef2a3b6db4_Traceguids,
    v59,
    v71);
  v31 = XilRegister_ReadUlong(a1, (unsigned int *)(*(_QWORD *)(a1 + 24) + 12LL));
  *(_DWORD *)(a1 + 96) = v31;
  LODWORD(v72) = HIWORD(v31);
  LODWORD(v60) = (unsigned __int8)v31;
  WPP_RECORDER_SF_dd(
    *(_QWORD *)(*(_QWORD *)(a1 + 8) + 72LL),
    4u,
    6u,
    0x1Fu,
    (__int64)&WPP_292538a6e9223cc5bca970ef2a3b6db4_Traceguids,
    v60,
    v72);
  v32 = *(_DWORD *)(a1 + 96);
  if ( (unsigned __int8)v32 > 0xAu )
  {
    v33 = 32;
LABEL_24:
    WPP_RECORDER_SF_(
      *(_QWORD *)(*(_QWORD *)(a1 + 8) + 72LL),
      2u,
      6u,
      v33,
      (__int64)&WPP_292538a6e9223cc5bca970ef2a3b6db4_Traceguids);
    return (unsigned int)-1073741811;
  }
  if ( HIWORD(v32) > 0x7FFu )
  {
    v33 = 33;
    goto LABEL_24;
  }
  v34 = XilRegister_ReadUlong(a1, (unsigned int *)(*(_QWORD *)(a1 + 24) + 16LL));
  *(_DWORD *)(a1 + 100) = v34;
  LODWORD(v80) = (v34 >> 2) & 1;
  LODWORD(v73) = (v34 >> 1) & 1;
  LODWORD(v61) = v34 & 1;
  WPP_RECORDER_SF_dddd(
    *(_QWORD *)(*(_QWORD *)(a1 + 8) + 72LL),
    4u,
    6u,
    0x22u,
    (__int64)&WPP_292538a6e9223cc5bca970ef2a3b6db4_Traceguids,
    v61,
    v73,
    v80,
    (v34 >> 3) & 1);
  v35 = *(_DWORD *)(a1 + 100);
  LODWORD(v85) = (v35 >> 7) & 1;
  LODWORD(v81) = (v35 >> 6) & 1;
  LODWORD(v74) = (v35 >> 5) & 1;
  LODWORD(v62) = (v35 >> 4) & 1;
  WPP_RECORDER_SF_dddd(
    *(_QWORD *)(*(_QWORD *)(a1 + 8) + 72LL),
    4u,
    6u,
    0x23u,
    (__int64)&WPP_292538a6e9223cc5bca970ef2a3b6db4_Traceguids,
    v62,
    v74,
    v81,
    v85);
  LODWORD(v75) = *(unsigned __int16 *)(a1 + 102);
  LODWORD(v63) = (unsigned __int8)HIBYTE(*(_WORD *)(a1 + 100)) >> 4;
  WPP_RECORDER_SF_dd(
    *(_QWORD *)(*(_QWORD *)(a1 + 8) + 72LL),
    4u,
    6u,
    0x24u,
    (__int64)&WPP_292538a6e9223cc5bca970ef2a3b6db4_Traceguids,
    v63,
    v75);
  *(_DWORD *)(a1 + 104) = 0;
  if ( v13 >= 0x20 )
  {
    v36 = XilRegister_ReadUlong(a1, (unsigned int *)(*(_QWORD *)(a1 + 24) + 28LL));
    *(_DWORD *)(a1 + 104) = v36;
    LODWORD(v82) = (v36 >> 2) & 1;
    LODWORD(v76) = (v36 >> 1) & 1;
    LODWORD(v64) = v36 & 1;
    WPP_RECORDER_SF_ddL(
      *(_QWORD *)(*(_QWORD *)(a1 + 8) + 72LL),
      4u,
      6u,
      0x25u,
      (__int64)&WPP_292538a6e9223cc5bca970ef2a3b6db4_Traceguids,
      v64,
      v76,
      v82);
    v37 = *(_DWORD *)(a1 + 104);
    LODWORD(v83) = (v37 >> 5) & 1;
    LODWORD(v77) = (v37 >> 4) & 1;
    LODWORD(v65) = (v37 >> 3) & 1;
    WPP_RECORDER_SF_ddL(
      *(_QWORD *)(*(_QWORD *)(a1 + 8) + 72LL),
      4u,
      6u,
      0x26u,
      (__int64)&WPP_292538a6e9223cc5bca970ef2a3b6db4_Traceguids,
      v65,
      v77,
      v83);
    v38 = *(_DWORD *)(a1 + 104);
    LODWORD(v84) = v38 >> 9;
    LODWORD(v78) = (v38 >> 8) & 1;
    LODWORD(v66) = (v38 >> 6) & 1;
    WPP_RECORDER_SF_ddL(
      *(_QWORD *)(*(_QWORD *)(a1 + 8) + 72LL),
      4u,
      6u,
      0x27u,
      (__int64)&WPP_292538a6e9223cc5bca970ef2a3b6db4_Traceguids,
      v66,
      v78,
      v84);
  }
  v39 = *(_DWORD *)(a1 + 100);
  if ( (unsigned __int8)((unsigned __int8)HIBYTE(*(_WORD *)(a1 + 100)) >> 4) > 7u )
  {
    LODWORD(v64) = (unsigned __int8)HIBYTE(*(_WORD *)(a1 + 100)) >> 4;
    WPP_RECORDER_SF_d(
      *(_QWORD *)(*(_QWORD *)(a1 + 8) + 72LL),
      4u,
      6u,
      0x28u,
      (__int64)&WPP_292538a6e9223cc5bca970ef2a3b6db4_Traceguids,
      v64);
    v39 = *(_DWORD *)(a1 + 100) & 0xFFFF0FFF | 0x7000;
    *(_DWORD *)(a1 + 100) = v39;
  }
  v40 = (unsigned __int16)v39 >> 12;
  if ( !v40 || (*(_QWORD *)(*(_QWORD *)(a1 + 8) + 272LL) & 0x40000LL) != 0 )
    v41 = 0;
  else
    v41 = (2 << v40) - 1;
  *(_DWORD *)(a1 + 112) = v41;
  LODWORD(v64) = v41;
  WPP_RECORDER_SF_d(
    *(_QWORD *)(*(_QWORD *)(a1 + 8) + 72LL),
    4u,
    6u,
    0x29u,
    (__int64)&WPP_292538a6e9223cc5bca970ef2a3b6db4_Traceguids,
    v64);
  v42 = *(_WORD *)(a1 + 102);
  if ( !v42 || (v43 = 4LL * v42, v43 >= *(unsigned int *)(a1 + 20)) )
  {
    v26 = v42;
    v25 = 42;
LABEL_51:
    LODWORD(v58) = v26;
    goto LABEL_52;
  }
  v44 = *(_QWORD *)(a1 + 24) + v43;
  *(_QWORD *)(a1 + 56) = v44;
  WPP_RECORDER_SF_i(
    *(_QWORD *)(*(_QWORD *)(a1 + 8) + 72LL),
    4u,
    6u,
    0x2Bu,
    (__int64)&WPP_292538a6e9223cc5bca970ef2a3b6db4_Traceguids,
    v44);
  *(_QWORD *)(a1 + 64) = Register_FindFirstExtendedCapability(a1, 1u);
  FirstExtendedCapability = Register_FindFirstExtendedCapability(a1, 0xAu);
  v46 = *(_QWORD *)(a1 + 8);
  *(_QWORD *)(a1 + 72) = FirstExtendedCapability;
  if ( !Controller_IsSecureDevice(v46) || *(_BYTE *)(a1 + 128) )
  {
    v47 = XilRegister_ReadUlong(a1, (unsigned int *)(*(_QWORD *)(a1 + 24) + 20LL));
    v48 = *(_QWORD *)(a1 + 8);
    if ( !v47 )
    {
      v49 = 44;
LABEL_42:
      v50 = *(_QWORD *)(v48 + 72);
      LODWORD(v67) = 0;
LABEL_43:
      WPP_RECORDER_SF_d(v50, 2u, 6u, v49, (__int64)&WPP_292538a6e9223cc5bca970ef2a3b6db4_Traceguids, v67);
      return (unsigned int)-1073741811;
    }
    v51 = *(_QWORD *)(a1 + 24) + v47;
    *(_QWORD *)(a1 + 48) = v51;
    LODWORD(v76) = v47;
    WPP_RECORDER_SF_qD(
      *(_QWORD *)(v48 + 72),
      v51,
      6u,
      0x2Du,
      (__int64)&WPP_292538a6e9223cc5bca970ef2a3b6db4_Traceguids,
      v51,
      v76);
  }
  else
  {
    *(_QWORD *)(a1 + 48) = 0LL;
  }
  v52 = XilRegister_ReadUlong(a1, (unsigned int *)(*(_QWORD *)(a1 + 24) + 24LL));
  v48 = *(_QWORD *)(a1 + 8);
  if ( !v52 )
  {
    v49 = 46;
    goto LABEL_42;
  }
  v53 = *(_QWORD *)(a1 + 24) + v52;
  *(_QWORD *)(a1 + 40) = v53;
  LODWORD(v76) = v52;
  WPP_RECORDER_SF_qD(
    *(_QWORD *)(v48 + 72),
    v53,
    6u,
    0x2Fu,
    (__int64)&WPP_292538a6e9223cc5bca970ef2a3b6db4_Traceguids,
    v53,
    v76);
  v54 = XilRegister_ReadUlong(a1, (unsigned int *)(*(_QWORD *)(a1 + 32) + 8LL));
  if ( v54 != 1 )
  {
    v49 = 48;
    LODWORD(v67) = v54;
    v50 = *(_QWORD *)(*(_QWORD *)(a1 + 8) + 72LL);
    goto LABEL_43;
  }
  return v3;
}
