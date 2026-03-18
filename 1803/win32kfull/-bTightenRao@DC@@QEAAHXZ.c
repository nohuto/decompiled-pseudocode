/*
 * XREFs of ?bTightenRao@DC@@QEAAHXZ @ 0x1C008B6A0
 * Callers:
 *     ?GreExtSelectClipRgnLocked@@YAHAEAVXDCOBJ@@PEAU_RECTL@@H@Z @ 0x1C0078610 (-GreExtSelectClipRgnLocked@@YAHAEAVXDCOBJ@@PEAU_RECTL@@H@Z.c)
 *     ?GreExtTextOutWLocked@@YAHAEAVXDCOBJ@@HHIPEAUtagRECT@@PEAGHPEAHKPEAXK@Z @ 0x1C00922E0 (-GreExtTextOutWLocked@@YAHAEAVXDCOBJ@@HHIPEAUtagRECT@@PEAGHPEAHKPEAXK@Z.c)
 *     ?bBitBlt@BLTRECORD@@QEAAHAEAVDCOBJ@@0K@Z @ 0x1C009C984 (-bBitBlt@BLTRECORD@@QEAAHAEAVDCOBJ@@0K@Z.c)
 *     NtGdiFrameRgn @ 0x1C01182C0 (NtGdiFrameRgn.c)
 *     ?NtGdiInvertRgnInternal@@YAHPEAUHDC__@@PEAUHRGN__@@@Z @ 0x1C011B210 (-NtGdiInvertRgnInternal@@YAHPEAUHDC__@@PEAUHRGN__@@@Z.c)
 *     NtGdiFillRgn @ 0x1C011C820 (NtGdiFillRgn.c)
 *     NtGdiOffsetClipRgn @ 0x1C012E870 (NtGdiOffsetClipRgn.c)
 * Callees:
 *     ??1RGNMEMOBJTMP@@QEAA@XZ @ 0x1C007A080 (--1RGNMEMOBJTMP@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1C0139660 (__security_check_cookie.c)
 */

__int64 __fastcall DC::bTightenRao(DC *this)
{
  unsigned int v1; // edi
  __int64 v3; // rcx
  __int64 v4; // r8
  __int64 v5; // r9
  _DWORD *v6; // rdx
  __int64 v7; // rax
  _BOOL8 v9; // rcx
  _BOOL8 v10; // rax
  int v11; // r14d
  int v12; // eax
  _DWORD *v13; // rdx
  _DWORD *v14; // rcx
  _DWORD *v15; // [rsp+28h] [rbp-59h] BYREF
  _DWORD *v16; // [rsp+30h] [rbp-51h] BYREF
  _QWORD v17[2]; // [rsp+38h] [rbp-49h] BYREF
  _QWORD v18[2]; // [rsp+48h] [rbp-39h] BYREF
  _DWORD *v19; // [rsp+58h] [rbp-29h] BYREF
  __int64 v20; // [rsp+60h] [rbp-21h] BYREF
  __int64 v21; // [rsp+68h] [rbp-19h] BYREF
  __int64 v22; // [rsp+70h] [rbp-11h] BYREF
  __int64 v23; // [rsp+78h] [rbp-9h] BYREF
  __int64 v24; // [rsp+80h] [rbp-1h] BYREF
  __int64 v25; // [rsp+88h] [rbp+7h] BYREF
  _DWORD *v26; // [rsp+90h] [rbp+Fh] BYREF
  int v27; // [rsp+98h] [rbp+17h]
  __int64 v28; // [rsp+A0h] [rbp+1Fh]
  __int64 v29; // [rsp+A8h] [rbp+27h]
  __int64 v30; // [rsp+B0h] [rbp+2Fh]

  v1 = 0;
  if ( !*((_QWORD *)this + 192) )
    return v1;
  v1 = 1;
  *((_DWORD *)this + 352) = rclEmpty.left;
  *((_DWORD *)this + 353) = rclEmpty.top;
  *((_DWORD *)this + 354) = rclEmpty.right;
  *((_DWORD *)this + 355) = rclEmpty.bottom;
  v3 = *((_QWORD *)this + 21);
  v4 = *((_QWORD *)this + 22);
  v5 = *((_QWORD *)this + 190);
  v6 = (_DWORD *)*((_QWORD *)this + 193);
  v16 = (_DWORD *)*((_QWORD *)this + 192);
  if ( !(v5 | v4 | v3) )
  {
    if ( v6 )
    {
      v19 = v6;
      RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v19);
      *((_QWORD *)this + 193) = 0LL;
    }
    RGNOBJ::vGetSubRect((RGNOBJ *)&v16, (struct _RECTL *)this + 88);
    goto LABEL_6;
  }
  v28 = v3;
  v15 = v6;
  v9 = v3 != 0;
  v10 = v9 + 1;
  *(&v28 + v9) = v4;
  if ( !v4 )
    v10 = v9;
  v11 = v10 + 1;
  *(&v28 + v10) = v5;
  if ( !v5 )
    v11 = v10;
  if ( !v6 )
  {
    RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)&v26);
    v14 = v15;
    if ( v26 )
      v14 = v26;
    v15 = v14;
    if ( v27 == 1 )
      RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v26);
  }
  if ( !v15 )
    goto LABEL_41;
  if ( v11 == 1 )
  {
    v20 = v28;
    v12 = RGNOBJ::bCopy((RGNOBJ *)&v15, (struct RGNOBJ *)&v20);
    goto LABEL_19;
  }
  if ( v11 == 2 )
  {
    v22 = v28;
    v21 = v29;
    v12 = RGNOBJ::iCombine((RGNOBJ *)&v15, (struct RGNOBJ *)&v22, (struct RGNOBJ *)&v21, 1);
LABEL_19:
    if ( v12 )
      goto LABEL_20;
LABEL_41:
    v1 = 0;
    goto LABEL_42;
  }
  RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)v17);
  RGNMEMOBJ::vPushThreadGuardedObject((RGNMEMOBJ *)v17);
  v24 = v28;
  v23 = v29;
  v25 = v30;
  if ( !v17[0]
    || !RGNOBJ::iCombine((RGNOBJ *)v17, (struct RGNOBJ *)&v24, (struct RGNOBJ *)&v23, 1)
    || !RGNOBJ::iCombine((RGNOBJ *)&v15, (struct RGNOBJ *)v17, (struct RGNOBJ *)&v25, 1) )
  {
    v1 = 0;
  }
  RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)v17);
  if ( !v1 )
    goto LABEL_42;
LABEL_20:
  v13 = v15;
  v13[7] = _InterlockedIncrement(*(volatile signed __int32 **)&REGION::ulUniqueREGION);
  if ( RGNOBJ::bOffset((RGNOBJ *)&v15, (struct _POINTL *)this + 180) )
  {
    if ( v16[20] == 160 && v16[22] <= v15[22] && v16[24] >= v15[24] && v16[23] <= v15[23] && v16[25] >= v15[25] )
    {
      *((_QWORD *)this + 193) = v15;
      RGNOBJ::vGetSubRect((RGNOBJ *)&v15, (struct _RECTL *)this + 88);
    }
    else
    {
      RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)v18);
      RGNMEMOBJ::vPushThreadGuardedObject((RGNMEMOBJ *)v18);
      if ( v18[0]
        && RGNOBJ::iCombine((RGNOBJ *)v18, (struct RGNOBJ *)&v16, (struct RGNOBJ *)&v15, 1)
        && RGNOBJ::bCopy((RGNOBJ *)&v15, (struct RGNOBJ *)v18) )
      {
        *((_QWORD *)this + 193) = v15;
        RGNOBJ::vGetSubRect((RGNOBJ *)&v15, (struct _RECTL *)this + 88);
      }
      else
      {
        v1 = 0;
      }
      RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)v18);
    }
  }
  else
  {
    v1 = 0;
  }
  if ( !v1 )
  {
LABEL_42:
    *((_QWORD *)this + 193) = 0LL;
    if ( v15 )
      RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v15);
  }
LABEL_6:
  DC::vUpdate_VisRect(this, *((struct REGION **)this + 192));
  v7 = *((_QWORD *)this + 63);
  if ( v7 && (*(_DWORD *)(v7 + 116) & 0x800) != 0 )
    *((_DWORD *)this + 132) |= 8u;
  DC::vUpdateScaledRegions(this);
  return v1;
}
