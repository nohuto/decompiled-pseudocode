/*
 * XREFs of Register_ParseCapabilityRegister @ 0x1C0067778
 * Callers:
 *     Register_PrepareHardware @ 0x1C0068064 (Register_PrepareHardware.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0001FE0 (WPP_RECORDER_SF_.c)
 *     __security_check_cookie @ 0x1C00021E0 (__security_check_cookie.c)
 *     WPP_RECORDER_SF_i @ 0x1C0002D84 (WPP_RECORDER_SF_i.c)
 *     WPP_RECORDER_SF_d @ 0x1C000B24C (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_dd @ 0x1C000B350 (WPP_RECORDER_SF_dd.c)
 *     WPP_RECORDER_SF_ddL @ 0x1C000B478 (WPP_RECORDER_SF_ddL.c)
 *     Controller_IsSecureDevice @ 0x1C000F418 (Controller_IsSecureDevice.c)
 *     WPP_RECORDER_SF_dddd @ 0x1C0014BD8 (WPP_RECORDER_SF_dddd.c)
 *     WPP_RECORDER_SF_qD @ 0x1C001FCE8 (WPP_RECORDER_SF_qD.c)
 *     Register_FindFirstExtendedCapability @ 0x1C00206F8 (Register_FindFirstExtendedCapability.c)
 *     XilRegister_ReadUlong @ 0x1C0020D1C (XilRegister_ReadUlong.c)
 *     Etw_ControllerFirmareVersionUpdate @ 0x1C003E55C (Etw_ControllerFirmareVersionUpdate.c)
 */

__int64 __fastcall Register_ParseCapabilityRegister(__int64 a1)
{
  unsigned int v1; // esi
  __int64 v3; // rcx
  __int16 v4; // ax
  __int64 v5; // rcx
  __int64 Ulong; // rbx
  unsigned __int64 v7; // rax
  unsigned __int64 v8; // rdx
  unsigned __int16 v9; // r9
  unsigned int v10; // eax
  unsigned __int8 v11; // bl
  unsigned int v12; // r14d
  unsigned int v13; // ebp
  __int64 v14; // rax
  __int64 v15; // rax
  unsigned __int8 v16; // cl
  _QWORD *v17; // rcx
  __int64 v18; // r8
  __int64 v19; // rdx
  unsigned int v20; // r10d
  unsigned __int16 v21; // r9
  int v22; // r10d
  unsigned int v23; // eax
  unsigned int v24; // edx
  int v25; // eax
  int v26; // r8d
  int v27; // eax
  unsigned __int16 v28; // r9
  unsigned int v29; // eax
  unsigned int v30; // r10d
  unsigned int v31; // eax
  unsigned int v32; // r8d
  unsigned int v33; // r8d
  unsigned int v34; // ecx
  int v35; // ecx
  int v36; // eax
  unsigned __int16 v37; // cx
  unsigned __int64 v38; // r8
  unsigned __int64 v39; // r10
  unsigned __int64 FirstExtendedCapability; // rax
  __int64 v41; // rcx
  unsigned int v42; // eax
  __int64 v43; // rdx
  __int64 v44; // rax
  unsigned int v45; // eax
  __int64 v46; // rdx
  __int64 v47; // rax
  int v48; // eax
  __int64 v50; // [rsp+28h] [rbp-70h]
  __int64 v51; // [rsp+30h] [rbp-68h]
  __int64 v52; // [rsp+38h] [rbp-60h]
  __int64 v53; // [rsp+38h] [rbp-60h]
  __int64 v54; // [rsp+38h] [rbp-60h]
  __int64 v55; // [rsp+40h] [rbp-58h]
  __int128 v56; // [rsp+50h] [rbp-48h] BYREF

  v1 = 0;
  v3 = *(_QWORD *)(a1 + 8);
  if ( *(_QWORD *)(v3 + 328) == -1LL )
  {
    v4 = *(_WORD *)(v3 + 248);
    if ( v4 == 7023 )
    {
      Ulong = (unsigned int)XilRegister_ReadUlong(a1, (unsigned int *)(*(_QWORD *)(a1 + 24) + 0x4000LL));
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LODWORD(v7) = (unsigned __int16)Ulong;
        v8 = (unsigned __int64)(unsigned int)Ulong >> 16;
        v9 = 21;
LABEL_9:
        WPP_RECORDER_SF_dd(
          *(_QWORD *)(*(_QWORD *)(a1 + 8) + 72LL),
          4u,
          6u,
          v9,
          (__int64)&WPP_9d05267a3ed0340255d9e56cf9248aa3_Traceguids,
          v7,
          v8);
        goto LABEL_10;
      }
      goto LABEL_10;
    }
    if ( v4 == 4172 || !_stricmp((const char *)(v3 + 304), "QCOM") )
    {
      Ulong = (unsigned __int16)XilRegister_ReadUlong(a1, (unsigned int *)(*(_QWORD *)(a1 + 24) + 49440LL));
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LODWORD(v8) = Ulong & 0xFFF;
        v9 = 22;
        v7 = (unsigned __int64)(unsigned int)Ulong >> 12;
        goto LABEL_9;
      }
LABEL_10:
      *(_QWORD *)(*(_QWORD *)(a1 + 8) + 328LL) = Ulong;
      Etw_ControllerFirmareVersionUpdate(v5, *(_QWORD *)(a1 + 8));
    }
  }
  v10 = XilRegister_ReadUlong(a1, *(unsigned int **)(a1 + 24));
  v11 = v10;
  v12 = HIBYTE(v10);
  v13 = HIWORD(v10);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LODWORD(v51) = BYTE2(v10);
    LODWORD(v50) = HIBYTE(v10);
    WPP_RECORDER_SF_ddL(
      *(_QWORD *)(*(_QWORD *)(a1 + 8) + 72LL),
      4u,
      6u,
      0x17u,
      (__int64)&WPP_9d05267a3ed0340255d9e56cf9248aa3_Traceguids,
      v50,
      v51,
      (unsigned __int8)v10);
  }
  v14 = *(_QWORD *)(a1 + 8);
  *(_BYTE *)(v14 + 320) = v12;
  *(_BYTE *)(v14 + 321) = v13;
  v15 = *(_QWORD *)(a1 + 8);
  v16 = *(_BYTE *)(v15 + 320);
  if ( v16 )
  {
    if ( *(_BYTE *)(v15 + 321) >= 0x10u || v16 > 1u )
      *(_BYTE *)(v15 + 319) = 1;
  }
  else
  {
    v56 = 0x1000uLL;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      WPP_RECORDER_SF_(*(_QWORD *)(v15 + 72), 4u, 6u, 0x18u, (__int64)&WPP_9d05267a3ed0340255d9e56cf9248aa3_Traceguids);
      v15 = *(_QWORD *)(a1 + 8);
    }
    v17 = (_QWORD *)(v15 + 336);
    v18 = 2LL;
    do
    {
      *v17 |= *(_QWORD *)((char *)v17 + (_QWORD)&v56 - v15 - 336);
      ++v17;
      --v18;
    }
    while ( v18 );
  }
  v19 = *(_QWORD *)(a1 + 24);
  *(_QWORD *)(a1 + 32) = v19 + v11;
  v20 = XilRegister_ReadUlong(a1, (unsigned int *)(v19 + 4));
  *(_DWORD *)(a1 + 80) = v20;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LODWORD(v52) = *(unsigned __int8 *)(a1 + 83);
    LODWORD(v51) = (v20 >> 8) & 0x7FF;
    LODWORD(v50) = (unsigned __int8)v20;
    WPP_RECORDER_SF_ddL(
      *(_QWORD *)(*(_QWORD *)(a1 + 8) + 72LL),
      4u,
      6u,
      0x19u,
      (__int64)&WPP_9d05267a3ed0340255d9e56cf9248aa3_Traceguids,
      v50,
      v51,
      v52);
    v20 = *(_DWORD *)(a1 + 80);
  }
  if ( !(_BYTE)v20 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v21 = 26;
LABEL_27:
      LODWORD(v50) = 0;
LABEL_89:
      WPP_RECORDER_SF_d(
        *(_QWORD *)(*(_QWORD *)(a1 + 8) + 72LL),
        2u,
        6u,
        v21,
        (__int64)&WPP_9d05267a3ed0340255d9e56cf9248aa3_Traceguids,
        v50);
      return (unsigned int)-1073741811;
    }
    return (unsigned int)-1073741811;
  }
  v22 = (v20 >> 8) & 0x7FF;
  if ( (unsigned int)(v22 - 1) > 0x3FF )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v21 = 27;
      LODWORD(v50) = v22;
      goto LABEL_89;
    }
    return (unsigned int)-1073741811;
  }
  if ( !*(_BYTE *)(a1 + 83) )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v21 = 28;
      goto LABEL_27;
    }
    return (unsigned int)-1073741811;
  }
  v23 = XilRegister_ReadUlong(a1, (unsigned int *)(*(_QWORD *)(a1 + 24) + 8LL));
  *(_DWORD *)(a1 + 84) = v23;
  v24 = v23;
  v25 = 1 << ((unsigned __int8)v23 >> 4);
  *(_DWORD *)(a1 + 88) = v25;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LODWORD(v51) = v25;
    LODWORD(v50) = v24 & 0xF;
    WPP_RECORDER_SF_dd(
      *(_QWORD *)(*(_QWORD *)(a1 + 8) + 72LL),
      4u,
      6u,
      0x1Du,
      (__int64)&WPP_9d05267a3ed0340255d9e56cf9248aa3_Traceguids,
      v50,
      v51);
    v24 = *(_DWORD *)(a1 + 84);
  }
  v26 = (v24 >> 27) | *(_WORD *)(a1 + 86) & 0x3E0;
  *(_DWORD *)(a1 + 92) = v26;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LODWORD(v51) = v26;
    LODWORD(v50) = (v24 >> 26) & 1;
    WPP_RECORDER_SF_dd(
      *(_QWORD *)(*(_QWORD *)(a1 + 8) + 72LL),
      4u,
      6u,
      0x1Eu,
      (__int64)&WPP_9d05267a3ed0340255d9e56cf9248aa3_Traceguids,
      v50,
      v51);
  }
  v27 = XilRegister_ReadUlong(a1, (unsigned int *)(*(_QWORD *)(a1 + 24) + 12LL));
  *(_DWORD *)(a1 + 96) = v27;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LODWORD(v51) = *(unsigned __int16 *)(a1 + 98);
    LODWORD(v50) = (unsigned __int8)v27;
    WPP_RECORDER_SF_dd(
      *(_QWORD *)(*(_QWORD *)(a1 + 8) + 72LL),
      4u,
      6u,
      0x1Fu,
      (__int64)&WPP_9d05267a3ed0340255d9e56cf9248aa3_Traceguids,
      v50,
      v51);
    v27 = *(_DWORD *)(a1 + 96);
  }
  if ( (unsigned __int8)v27 > 0xAu )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      return (unsigned int)-1073741811;
    v28 = 32;
LABEL_41:
    WPP_RECORDER_SF_(
      *(_QWORD *)(*(_QWORD *)(a1 + 8) + 72LL),
      2u,
      6u,
      v28,
      (__int64)&WPP_9d05267a3ed0340255d9e56cf9248aa3_Traceguids);
    return (unsigned int)-1073741811;
  }
  if ( *(_WORD *)(a1 + 98) > 0x7FFu )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      return (unsigned int)-1073741811;
    v28 = 33;
    goto LABEL_41;
  }
  v29 = XilRegister_ReadUlong(a1, (unsigned int *)(*(_QWORD *)(a1 + 24) + 16LL));
  *(_DWORD *)(a1 + 100) = v29;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LODWORD(v52) = (v29 >> 2) & 1;
    LODWORD(v51) = (v29 >> 1) & 1;
    LODWORD(v50) = v29 & 1;
    WPP_RECORDER_SF_dddd(
      *(_QWORD *)(*(_QWORD *)(a1 + 8) + 72LL),
      4u,
      6u,
      0x22u,
      (__int64)&WPP_9d05267a3ed0340255d9e56cf9248aa3_Traceguids,
      v50,
      v51,
      v52,
      (v29 >> 3) & 1);
    v30 = *(_DWORD *)(a1 + 100);
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LODWORD(v55) = (v30 >> 7) & 1;
      LODWORD(v52) = (v30 >> 6) & 1;
      LODWORD(v51) = (v30 >> 5) & 1;
      LODWORD(v50) = (v30 >> 4) & 1;
      WPP_RECORDER_SF_dddd(
        *(_QWORD *)(*(_QWORD *)(a1 + 8) + 72LL),
        4u,
        6u,
        0x23u,
        (__int64)&WPP_9d05267a3ed0340255d9e56cf9248aa3_Traceguids,
        v50,
        v51,
        v52,
        v55);
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LODWORD(v51) = *(unsigned __int16 *)(a1 + 102);
        LODWORD(v50) = (unsigned __int16)*(_DWORD *)(a1 + 100) >> 12;
        WPP_RECORDER_SF_dd(
          *(_QWORD *)(*(_QWORD *)(a1 + 8) + 72LL),
          4u,
          6u,
          0x24u,
          (__int64)&WPP_9d05267a3ed0340255d9e56cf9248aa3_Traceguids,
          v50,
          v51);
      }
    }
  }
  *(_DWORD *)(a1 + 104) = 0;
  if ( v11 >= 0x20u )
  {
    v31 = XilRegister_ReadUlong(a1, (unsigned int *)(*(_QWORD *)(a1 + 24) + 28LL));
    *(_DWORD *)(a1 + 104) = v31;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LODWORD(v52) = (v31 >> 2) & 1;
      LODWORD(v51) = (v31 >> 1) & 1;
      LODWORD(v50) = v31 & 1;
      WPP_RECORDER_SF_ddL(
        *(_QWORD *)(*(_QWORD *)(a1 + 8) + 72LL),
        4u,
        6u,
        0x25u,
        (__int64)&WPP_9d05267a3ed0340255d9e56cf9248aa3_Traceguids,
        v50,
        v51,
        v52);
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v32 = *(_DWORD *)(a1 + 104);
        LODWORD(v53) = (v32 >> 5) & 1;
        LODWORD(v51) = (v32 >> 4) & 1;
        LODWORD(v50) = (v32 >> 3) & 1;
        WPP_RECORDER_SF_ddL(
          *(_QWORD *)(*(_QWORD *)(a1 + 8) + 72LL),
          4u,
          6u,
          0x26u,
          (__int64)&WPP_9d05267a3ed0340255d9e56cf9248aa3_Traceguids,
          v50,
          v51,
          v53);
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          v33 = *(_DWORD *)(a1 + 104);
          LODWORD(v54) = v33 >> 9;
          LODWORD(v51) = (v33 >> 8) & 1;
          LODWORD(v50) = (v33 >> 6) & 1;
          WPP_RECORDER_SF_ddL(
            *(_QWORD *)(*(_QWORD *)(a1 + 8) + 72LL),
            4u,
            6u,
            0x27u,
            (__int64)&WPP_9d05267a3ed0340255d9e56cf9248aa3_Traceguids,
            v50,
            v51,
            v54);
        }
      }
    }
  }
  v34 = *(_DWORD *)(a1 + 100);
  if ( (unsigned __int8)((unsigned __int8)HIBYTE(*(_WORD *)(a1 + 100)) >> 4) > 7u )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LODWORD(v50) = (unsigned __int8)HIBYTE(*(_WORD *)(a1 + 100)) >> 4;
      WPP_RECORDER_SF_d(
        *(_QWORD *)(*(_QWORD *)(a1 + 8) + 72LL),
        4u,
        6u,
        0x28u,
        (__int64)&WPP_9d05267a3ed0340255d9e56cf9248aa3_Traceguids,
        v50);
      v34 = *(_DWORD *)(a1 + 100);
    }
    v34 = v34 & 0xFFFF0FFF | 0x7000;
    *(_DWORD *)(a1 + 100) = v34;
  }
  v35 = (unsigned __int16)v34 >> 12;
  if ( !v35 || (*(_QWORD *)(*(_QWORD *)(a1 + 8) + 336LL) & 0x40000LL) != 0 )
    v36 = 0;
  else
    v36 = (2 << v35) - 1;
  *(_DWORD *)(a1 + 112) = v36;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LODWORD(v50) = v36;
    WPP_RECORDER_SF_d(
      *(_QWORD *)(*(_QWORD *)(a1 + 8) + 72LL),
      4u,
      6u,
      0x29u,
      (__int64)&WPP_9d05267a3ed0340255d9e56cf9248aa3_Traceguids,
      v50);
  }
  v37 = *(_WORD *)(a1 + 102);
  if ( !v37 || (v38 = 4LL * v37, v38 >= *(unsigned int *)(a1 + 20)) )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v21 = 42;
      LODWORD(v50) = v37;
      goto LABEL_89;
    }
    return (unsigned int)-1073741811;
  }
  v39 = v38 + *(_QWORD *)(a1 + 24);
  *(_QWORD *)(a1 + 56) = v39;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_i(
      *(_QWORD *)(*(_QWORD *)(a1 + 8) + 72LL),
      4u,
      6u,
      0x2Bu,
      (__int64)&WPP_9d05267a3ed0340255d9e56cf9248aa3_Traceguids,
      v39);
  *(_QWORD *)(a1 + 64) = Register_FindFirstExtendedCapability(a1, 1u);
  FirstExtendedCapability = Register_FindFirstExtendedCapability(a1, 0xAu);
  v41 = *(_QWORD *)(a1 + 8);
  *(_QWORD *)(a1 + 72) = FirstExtendedCapability;
  if ( !Controller_IsSecureDevice(v41) || *(_BYTE *)(a1 + 128) )
  {
    v42 = XilRegister_ReadUlong(a1, (unsigned int *)(*(_QWORD *)(a1 + 24) + 20LL));
    v43 = v42;
    if ( !v42 )
    {
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        return (unsigned int)-1073741811;
      v21 = 44;
LABEL_74:
      LODWORD(v50) = 0;
      goto LABEL_89;
    }
    v44 = *(_QWORD *)(a1 + 24) + v42;
    *(_QWORD *)(a1 + 48) = v44;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LODWORD(v51) = v43;
      WPP_RECORDER_SF_qD(
        *(_QWORD *)(*(_QWORD *)(a1 + 8) + 72LL),
        v43,
        6u,
        0x2Du,
        (__int64)&WPP_9d05267a3ed0340255d9e56cf9248aa3_Traceguids,
        v44,
        v51);
    }
  }
  else
  {
    *(_QWORD *)(a1 + 48) = 0LL;
  }
  v45 = XilRegister_ReadUlong(a1, (unsigned int *)(*(_QWORD *)(a1 + 24) + 24LL));
  v46 = v45;
  if ( !v45 )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      return (unsigned int)-1073741811;
    v21 = 46;
    goto LABEL_74;
  }
  v47 = *(_QWORD *)(a1 + 24) + v45;
  *(_QWORD *)(a1 + 40) = v47;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LODWORD(v51) = v46;
    WPP_RECORDER_SF_qD(
      *(_QWORD *)(*(_QWORD *)(a1 + 8) + 72LL),
      v46,
      6u,
      0x2Fu,
      (__int64)&WPP_9d05267a3ed0340255d9e56cf9248aa3_Traceguids,
      v47,
      v51);
  }
  v48 = XilRegister_ReadUlong(a1, (unsigned int *)(*(_QWORD *)(a1 + 32) + 8LL));
  if ( v48 != 1 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v21 = 48;
      LODWORD(v50) = v48;
      goto LABEL_89;
    }
    return (unsigned int)-1073741811;
  }
  return v1;
}
