/*
 * XREFs of ?bTightenRao@DC@@QEAAHXZ @ 0x1C00A417C
 * Callers:
 *     ?bBitBlt@BLTRECORD@@QEAAHAEAVDCOBJ@@0K@Z @ 0x1C00A2320 (-bBitBlt@BLTRECORD@@QEAAHAEAVDCOBJ@@0K@Z.c)
 *     ?GreExtSelectClipRgnLocked@@YAHAEAVXDCOBJ@@PEAU_RECTL@@H@Z @ 0x1C00A3F38 (-GreExtSelectClipRgnLocked@@YAHAEAVXDCOBJ@@PEAU_RECTL@@H@Z.c)
 *     ?GreExtTextOutWLocked@@YAHAEAVXDCOBJ@@HHIPEAUtagRECT@@PEAGHPEAHKPEAXK@Z @ 0x1C00AF610 (-GreExtTextOutWLocked@@YAHAEAVXDCOBJ@@HHIPEAUtagRECT@@PEAGHPEAHKPEAXK@Z.c)
 *     NtGdiOffsetClipRgn @ 0x1C00FEF70 (NtGdiOffsetClipRgn.c)
 *     NtGdiFrameRgn @ 0x1C01467C0 (NtGdiFrameRgn.c)
 *     ?NtGdiInvertRgnInternal@@YAHPEAUHDC__@@PEAUHRGN__@@@Z @ 0x1C0147B70 (-NtGdiInvertRgnInternal@@YAHPEAUHDC__@@PEAUHRGN__@@@Z.c)
 *     NtGdiFillRgn @ 0x1C0148050 (NtGdiFillRgn.c)
 * Callees:
 *     ??1RGNMEMOBJTMP@@QEAA@XZ @ 0x1C00CF1C8 (--1RGNMEMOBJTMP@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1C0163A80 (__security_check_cookie.c)
 */

__int64 __fastcall DC::bTightenRao(DC *this)
{
  unsigned int v1; // edi
  struct _RECTL *v3; // rsi
  _DWORD *v4; // rax
  __int64 v5; // r9
  __int64 v6; // r8
  __int64 v7; // rcx
  _DWORD *v8; // rdx
  __int64 v9; // rax
  _BOOL8 v11; // rcx
  _BOOL8 v12; // rax
  int v13; // r14d
  int v14; // eax
  _DWORD *v15; // rdx
  _DWORD *v16; // rcx
  _DWORD *v17; // [rsp+28h] [rbp-59h] BYREF
  _DWORD *v18; // [rsp+30h] [rbp-51h] BYREF
  _QWORD v19[2]; // [rsp+38h] [rbp-49h] BYREF
  _QWORD v20[2]; // [rsp+48h] [rbp-39h] BYREF
  _DWORD *v21; // [rsp+58h] [rbp-29h] BYREF
  __int64 v22; // [rsp+60h] [rbp-21h] BYREF
  __int64 v23; // [rsp+68h] [rbp-19h] BYREF
  __int64 v24; // [rsp+70h] [rbp-11h] BYREF
  __int64 v25; // [rsp+78h] [rbp-9h] BYREF
  __int64 v26; // [rsp+80h] [rbp-1h] BYREF
  __int64 v27; // [rsp+88h] [rbp+7h] BYREF
  _DWORD *v28; // [rsp+90h] [rbp+Fh] BYREF
  int v29; // [rsp+98h] [rbp+17h]
  __int64 v30; // [rsp+A0h] [rbp+1Fh]
  __int64 v31; // [rsp+A8h] [rbp+27h]
  __int64 v32; // [rsp+B0h] [rbp+2Fh]

  v1 = 0;
  if ( !*((_QWORD *)this + 141) )
    return v1;
  v3 = (struct _RECTL *)((char *)this + 1000);
  *((_DWORD *)this + 250) = 0x7FFFFFFF;
  *((_DWORD *)this + 251) = 0x7FFFFFFF;
  v1 = 1;
  *((_DWORD *)this + 252) = 0x80000000;
  *((_DWORD *)this + 253) = 0x80000000;
  v4 = (_DWORD *)*((_QWORD *)this + 141);
  v5 = *((_QWORD *)this + 139);
  v6 = *((_QWORD *)this + 21);
  v7 = *((_QWORD *)this + 20);
  v8 = (_DWORD *)*((_QWORD *)this + 142);
  v18 = v4;
  if ( !(v5 | v6 | v7) )
  {
    if ( v8 )
    {
      v21 = v8;
      RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v21);
      *((_QWORD *)this + 142) = 0LL;
    }
    RGNOBJ::vGetSubRect((RGNOBJ *)&v18, v3);
    goto LABEL_6;
  }
  v30 = v7;
  v17 = v8;
  v11 = v7 != 0;
  v12 = v11 + 1;
  *(&v30 + v11) = v6;
  if ( !v6 )
    v12 = v11;
  v13 = v12 + 1;
  *(&v30 + v12) = v5;
  if ( !v5 )
    v13 = v12;
  if ( !v8 )
  {
    RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)&v28);
    v16 = v17;
    if ( v28 )
      v16 = v28;
    v17 = v16;
    if ( v29 == 1 )
      RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v28);
  }
  if ( !v17 )
    goto LABEL_41;
  if ( v13 == 1 )
  {
    v22 = v30;
    v14 = RGNOBJ::bCopy((RGNOBJ *)&v17, (struct RGNOBJ *)&v22);
    goto LABEL_19;
  }
  if ( v13 == 2 )
  {
    v24 = v30;
    v23 = v31;
    v14 = RGNOBJ::iCombine((RGNOBJ *)&v17, (struct RGNOBJ *)&v24, (struct RGNOBJ *)&v23, 1);
LABEL_19:
    if ( v14 )
      goto LABEL_20;
LABEL_41:
    v1 = 0;
    goto LABEL_42;
  }
  RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)v19);
  RGNMEMOBJ::vPushThreadGuardedObject((RGNMEMOBJ *)v19);
  v26 = v30;
  v25 = v31;
  v27 = v32;
  if ( !v19[0]
    || !RGNOBJ::iCombine((RGNOBJ *)v19, (struct RGNOBJ *)&v26, (struct RGNOBJ *)&v25, 1)
    || !RGNOBJ::iCombine((RGNOBJ *)&v17, (struct RGNOBJ *)v19, (struct RGNOBJ *)&v27, 1) )
  {
    v1 = 0;
  }
  RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)v19);
  if ( !v1 )
    goto LABEL_42;
LABEL_20:
  v15 = v17;
  v15[7] = _InterlockedIncrement(*(volatile signed __int32 **)&REGION::ulUniqueREGION);
  if ( RGNOBJ::bOffset((RGNOBJ *)&v17, (struct _POINTL *)this + 129) )
  {
    if ( v18[20] == 160 && v18[22] <= v17[22] && v18[24] >= v17[24] && v18[23] <= v17[23] && v18[25] >= v17[25] )
    {
      *((_QWORD *)this + 142) = v17;
      RGNOBJ::vGetSubRect((RGNOBJ *)&v17, v3);
    }
    else
    {
      RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)v20);
      RGNMEMOBJ::vPushThreadGuardedObject((RGNMEMOBJ *)v20);
      if ( v20[0]
        && RGNOBJ::iCombine((RGNOBJ *)v20, (struct RGNOBJ *)&v18, (struct RGNOBJ *)&v17, 1)
        && RGNOBJ::bCopy((RGNOBJ *)&v17, (struct RGNOBJ *)v20) )
      {
        *((_QWORD *)this + 142) = v17;
        RGNOBJ::vGetSubRect((RGNOBJ *)&v17, v3);
      }
      else
      {
        v1 = 0;
      }
      RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)v20);
    }
  }
  else
  {
    v1 = 0;
  }
  if ( !v1 )
  {
LABEL_42:
    *((_QWORD *)this + 142) = 0LL;
    if ( v17 )
      RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v17);
  }
LABEL_6:
  DC::vUpdate_VisRect(this, *((struct REGION **)this + 141));
  v9 = *((_QWORD *)this + 62);
  if ( v9 && (*(_DWORD *)(v9 + 116) & 0x800) != 0 )
    *((_DWORD *)this + 130) |= 8u;
  DC::vUpdateScaledRegions(this);
  return v1;
}
