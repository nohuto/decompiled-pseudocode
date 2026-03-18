/*
 * XREFs of ?bCompute@DC@@QEAAHXZ @ 0x1C0025890
 * Callers:
 *     ?bLock@DEVLOCKOBJ@@QEAAHAEAVXDCOBJ@@H@Z @ 0x1C0024770 (-bLock@DEVLOCKOBJ@@QEAAHAEAVXDCOBJ@@H@Z.c)
 * Callees:
 *     ?vUpdateScaledRegions@DC@@QEAAXXZ @ 0x1C0013860 (-vUpdateScaledRegions@DC@@QEAAXXZ.c)
 *     ?bDpiScaledSurface@DC@@QEBAHXZ @ 0x1C00138DC (-bDpiScaledSurface@DC@@QEBAHXZ.c)
 *     ?vDeleteRGNOBJ@RGNOBJ@@QEAAXXZ @ 0x1C001D720 (-vDeleteRGNOBJ@RGNOBJ@@QEAAXXZ.c)
 *     ?bCopy@RGNOBJ@@QEAAHAEAV1@@Z @ 0x1C001F9D0 (-bCopy@RGNOBJ@@QEAAHAEAV1@@Z.c)
 *     ?bContain@RGNOBJ@@QEAAHAEAV1@@Z @ 0x1C0020004 (-bContain@RGNOBJ@@QEAAHAEAV1@@Z.c)
 *     ?iCombine@RGNOBJ@@QEAAJAEAV1@0J@Z @ 0x1C00202F0 (-iCombine@RGNOBJ@@QEAAJAEAV1@0J@Z.c)
 *     ?vUpdate_VisRect@DC@@QEAAXPEAVREGION@@@Z @ 0x1C0021520 (-vUpdate_VisRect@DC@@QEAAXPEAVREGION@@@Z.c)
 *     ??1RGNMEMOBJTMP@@QEAA@XZ @ 0x1C0023FE8 (--1RGNMEMOBJTMP@@QEAA@XZ.c)
 *     ??1RGNMEMOBJ@@QEAA@XZ @ 0x1C00240D0 (--1RGNMEMOBJ@@QEAA@XZ.c)
 *     ??0RGNMEMOBJ@@QEAA@XZ @ 0x1C0025520 (--0RGNMEMOBJ@@QEAA@XZ.c)
 *     ?bOffset@RGNOBJ@@QEAAHPEAU_POINTL@@@Z @ 0x1C0029690 (-bOffset@RGNOBJ@@QEAAHPEAU_POINTL@@@Z.c)
 *     ?ReleaseLock@CPushLock@@QEBAXXZ @ 0x1C0034194 (-ReleaseLock@CPushLock@@QEBAXXZ.c)
 *     ?AcquireLockShared@CPushLock@@QEBAJXZ @ 0x1C0034260 (-AcquireLockShared@CPushLock@@QEBAJXZ.c)
 *     ?vGetSubRect@RGNOBJ@@QEBAXPEAU_RECTL@@@Z @ 0x1C00695D0 (-vGetSubRect@RGNOBJ@@QEBAXPEAU_RECTL@@@Z.c)
 *     ??0RGNMEMOBJTMP@@QEAA@XZ @ 0x1C007D424 (--0RGNMEMOBJTMP@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1C00A63D0 (__security_check_cookie.c)
 */

__int64 __fastcall DC::bCompute(DC *this)
{
  CPushLock *v1; // r12
  unsigned int v3; // esi
  REGION *v4; // rbx
  int v5; // r15d
  __int64 v6; // rcx
  __int64 v7; // rdx
  __int64 v8; // r8
  __int16 *v9; // rbx
  _BOOL8 v10; // rcx
  _BOOL8 v11; // rax
  int v12; // r15d
  int v13; // eax
  __int16 *v15; // [rsp+20h] [rbp-79h] BYREF
  REGION *v16; // [rsp+28h] [rbp-71h] BYREF
  _QWORD v17[2]; // [rsp+30h] [rbp-69h] BYREF
  _QWORD v18[2]; // [rsp+40h] [rbp-59h] BYREF
  __int64 v19; // [rsp+50h] [rbp-49h] BYREF
  __int16 *v20; // [rsp+58h] [rbp-41h] BYREF
  __int64 v21; // [rsp+60h] [rbp-39h] BYREF
  __int64 v22; // [rsp+68h] [rbp-31h] BYREF
  __int64 v23; // [rsp+70h] [rbp-29h] BYREF
  __int64 v24; // [rsp+78h] [rbp-21h] BYREF
  __int64 v25; // [rsp+80h] [rbp-19h] BYREF
  __int64 v26; // [rsp+88h] [rbp-11h] BYREF
  REGION *v27[2]; // [rsp+90h] [rbp-9h] BYREF
  REGION *v28[2]; // [rsp+A0h] [rbp+7h] BYREF
  __int64 v29; // [rsp+B0h] [rbp+17h]
  __int64 v30; // [rsp+B8h] [rbp+1Fh]
  __int64 v31; // [rsp+C0h] [rbp+27h]

  v1 = (DC *)((char *)this + 1112);
  CPushLock::AcquireLockShared((DC *)((char *)this + 1112));
  *((_DWORD *)this + 250) = 0x7FFFFFFF;
  v3 = 0;
  *((_DWORD *)this + 251) = 0x7FFFFFFF;
  *((_DWORD *)this + 252) = 0x80000000;
  *((_DWORD *)this + 253) = 0x80000000;
  if ( !*((_QWORD *)this + 143) )
    goto LABEL_58;
  v4 = (REGION *)*((_QWORD *)this + 144);
  v5 = 0;
  v19 = *((_QWORD *)this + 143);
  v3 = 1;
  v16 = v4;
  if ( !v4 )
  {
    RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)v27);
    if ( v27[0] )
    {
      v4 = v27[0];
      v16 = v27[0];
      v5 = 1;
    }
    RGNMEMOBJ::~RGNMEMOBJ(v27);
    if ( !v4 )
      goto LABEL_57;
  }
  if ( !v5 && (*((_DWORD *)this + 9) & 0x10) == 0 )
  {
    if ( (unsigned int)DC::bDpiScaledSurface(this) && !*((_QWORD *)this + 146) )
      *((_DWORD *)this + 130) |= 0x10u;
    goto LABEL_15;
  }
  if ( !(unsigned int)RGNOBJ::bCopy((RGNOBJ *)&v16, (struct RGNOBJ *)&v19) )
  {
LABEL_57:
    v3 = 0;
    goto LABEL_58;
  }
  if ( (unsigned int)DC::bDpiScaledSurface(this) )
    *((_DWORD *)this + 130) |= 0x10u;
  *((_QWORD *)this + 144) = v16;
LABEL_15:
  v6 = *((_QWORD *)this + 20);
  v7 = *((_QWORD *)this + 21);
  v8 = *((_QWORD *)this + 142);
  v9 = (__int16 *)*((_QWORD *)this + 145);
  if ( !(v8 | v7 | v6) )
  {
    if ( v9 )
    {
      v20 = (__int16 *)*((_QWORD *)this + 145);
      RGNOBJ::vDeleteRGNOBJ(&v20);
      *((_QWORD *)this + 145) = 0LL;
    }
    RGNOBJ::vGetSubRect((RGNOBJ *)&v16, (struct _RECTL *)((char *)this + 1000));
    *((_DWORD *)this + 9) &= ~0x10u;
    goto LABEL_54;
  }
  v29 = *((_QWORD *)this + 20);
  v15 = v9;
  v10 = v6 != 0;
  v11 = v10 + 1;
  *(&v29 + v10) = v7;
  if ( !v7 )
    v11 = v10;
  v12 = v11 + 1;
  *(&v29 + v11) = v8;
  if ( !v8 )
    v12 = v11;
  if ( !v9 )
  {
    RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)v28);
    if ( v28[0] )
      v9 = (__int16 *)v28[0];
    v15 = v9;
    RGNMEMOBJ::~RGNMEMOBJ(v28);
  }
  if ( !v15 )
    goto LABEL_28;
  if ( v12 == 1 )
  {
    v21 = v29;
    v13 = RGNOBJ::bCopy((RGNOBJ *)&v15, (struct RGNOBJ *)&v21);
  }
  else
  {
    if ( v12 != 2 )
    {
      RGNMEMOBJTMP::RGNMEMOBJTMP((RGNMEMOBJTMP *)v17);
      v25 = v29;
      v24 = v30;
      v26 = v31;
      if ( !v17[0]
        || !(unsigned int)RGNOBJ::iCombine((RGNOBJ *)v17, (struct RGNOBJ *)&v25, (struct RGNOBJ *)&v24, 1)
        || !(unsigned int)RGNOBJ::iCombine((RGNOBJ *)&v15, (struct RGNOBJ *)v17, (struct RGNOBJ *)&v26, 1) )
      {
        v3 = 0;
      }
      RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)v17);
      if ( !v3 )
        goto LABEL_52;
      goto LABEL_40;
    }
    v23 = v29;
    v22 = v30;
    v13 = RGNOBJ::iCombine((RGNOBJ *)&v15, (struct RGNOBJ *)&v23, (struct RGNOBJ *)&v22, 1);
  }
  if ( !v13 )
  {
LABEL_28:
    v3 = 0;
    goto LABEL_52;
  }
LABEL_40:
  *((_DWORD *)v15 + 7) = _InterlockedIncrement((volatile signed __int32 *)&REGION::ulUniqueREGION);
  if ( (unsigned int)RGNOBJ::bOffset((RGNOBJ *)&v15, (struct _POINTL *)this + 129) )
  {
    if ( *((_DWORD *)v16 + 20) == 160 && RGNOBJ::bContain((RGNOBJ *)&v16, (struct RGNOBJ *)&v15) )
    {
      *((_QWORD *)this + 145) = v15;
      RGNOBJ::vGetSubRect((RGNOBJ *)&v15, (struct _RECTL *)((char *)this + 1000));
      *((_DWORD *)this + 9) &= ~0x10u;
    }
    else
    {
      RGNMEMOBJTMP::RGNMEMOBJTMP((RGNMEMOBJTMP *)v18);
      if ( v18[0]
        && (unsigned int)RGNOBJ::iCombine((RGNOBJ *)v18, (struct RGNOBJ *)&v16, (struct RGNOBJ *)&v15, 1)
        && (unsigned int)RGNOBJ::bCopy((RGNOBJ *)&v15, (struct RGNOBJ *)v18) )
      {
        *((_QWORD *)this + 145) = v15;
        RGNOBJ::vGetSubRect((RGNOBJ *)&v15, (struct _RECTL *)((char *)this + 1000));
        *((_DWORD *)this + 9) &= ~0x10u;
      }
      else
      {
        v3 = 0;
      }
      RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)v18);
    }
  }
  else
  {
    v3 = 0;
  }
  if ( !v3 )
  {
LABEL_52:
    *((_QWORD *)this + 145) = 0LL;
    if ( v15 )
      RGNOBJ::vDeleteRGNOBJ(&v15);
  }
LABEL_54:
  if ( (unsigned int)DC::bDpiScaledSurface(this) )
    *((_DWORD *)this + 130) |= 8u;
  DC::vUpdateScaledRegions(this);
  DC::vUpdate_VisRect(this, *((struct REGION **)this + 144));
LABEL_58:
  CPushLock::ReleaseLock(v1);
  return v3;
}
