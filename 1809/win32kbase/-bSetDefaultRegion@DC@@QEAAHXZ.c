/*
 * XREFs of ?bSetDefaultRegion@DC@@QEAAHXZ @ 0x1C00F68F0
 * Callers:
 *     ?bMakeInfoDC@DC@@QEAAHH@Z @ 0x1C0013700 (-bMakeInfoDC@DC@@QEAAHH@Z.c)
 *     GreCreateDisplayDC @ 0x1C001D950 (GreCreateDisplayDC.c)
 *     ?GreSelectVisRgnInternal@@YAHAEAVDCOBJA@@PEAUHRGN__@@W4_VIS_REGION_SELECT@@@Z @ 0x1C0028F5C (-GreSelectVisRgnInternal@@YAHAEAVDCOBJA@@PEAUHRGN__@@W4_VIS_REGION_SELECT@@@Z.c)
 *     ?hbmSelectBitmapInternal@@YAPEAUHBITMAP__@@AEAVXDCOBJ@@PEAU1@HHH@Z @ 0x1C00AB4F0 (-hbmSelectBitmapInternal@@YAPEAUHBITMAP__@@AEAVXDCOBJ@@PEAU1@HHH@Z.c)
 *     GreRestoreDCInternal @ 0x1C00ACC60 (GreRestoreDCInternal.c)
 * Callees:
 *     ?vGet_sizlWindow@DC@@QEBAXPEAUtagSIZE@@@Z @ 0x1C00138AC (-vGet_sizlWindow@DC@@QEBAXPEAUtagSIZE@@@Z.c)
 *     ??XERECTL@@QEAAAEAV0@AEBU_RECTL@@@Z @ 0x1C001A09C (--XERECTL@@QEAAAEAV0@AEBU_RECTL@@@Z.c)
 *     ?vSet@RGNOBJ@@QEAAXPEAU_RECTL@@@Z @ 0x1C001F830 (-vSet@RGNOBJ@@QEAAXPEAU_RECTL@@@Z.c)
 *     ?vReleaseRao@DC@@QEAAXXZ @ 0x1C0020F60 (-vReleaseRao@DC@@QEAAXXZ.c)
 *     ??1RGNMEMOBJ@@QEAA@XZ @ 0x1C00240D0 (--1RGNMEMOBJ@@QEAA@XZ.c)
 *     ??0RGNMEMOBJ@@QEAA@XZ @ 0x1C0025520 (--0RGNMEMOBJ@@QEAA@XZ.c)
 *     ??1DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C0029C14 (--1DYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     ??0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C0029C48 (--0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     ?ReleaseLock@CPushLock@@QEBAXXZ @ 0x1C0034194 (-ReleaseLock@CPushLock@@QEBAXXZ.c)
 *     ?AcquireLockExclusive@CPushLock@@QEAAJXZ @ 0x1C0034DF0 (-AcquireLockExclusive@CPushLock@@QEAAJXZ.c)
 *     __security_check_cookie @ 0x1C00A63D0 (__security_check_cookie.c)
 */

__int64 __fastcall DC::bSetDefaultRegion(struct REGION **this)
{
  LONG cx; // edi
  unsigned int v3; // r14d
  LONG cy; // r12d
  struct REGION *v5; // rbx
  DYNAMICMODECHANGESHARELOCK *v6; // rcx
  int v7; // r15d
  struct REGION *v8; // rax
  int v9; // eax
  int v10; // eax
  int v11; // eax
  struct REGION *v12; // rax
  REGION *v13; // rdi
  struct REGION *v14; // rcx
  LONG v15; // eax
  LONG left; // eax
  __int64 v17; // rax
  int v18; // ecx
  char v20[8]; // [rsp+20h] [rbp-60h] BYREF
  struct tagSIZE v21; // [rsp+28h] [rbp-58h] BYREF
  __int64 v22; // [rsp+30h] [rbp-50h] BYREF
  int v23; // [rsp+38h] [rbp-48h]
  int v24; // [rsp+3Ch] [rbp-44h]
  REGION *v25[2]; // [rsp+40h] [rbp-40h] BYREF
  struct REGION *v26; // [rsp+50h] [rbp-30h] BYREF
  struct _RECTL v27; // [rsp+60h] [rbp-20h] BYREF

  DC::vReleaseRao((DC *)this);
  DC::vGet_sizlWindow((DC *)this, &v21);
  cx = v21.cx;
  v3 = 0;
  cy = v21.cy;
  v5 = this[6];
  *(_QWORD *)&v27.left = 0LL;
  *(struct tagSIZE *)&v27.right = v21;
  if ( this[62] )
  {
    DYNAMICMODECHANGESHARELOCK::DYNAMICMODECHANGESHARELOCK((DYNAMICMODECHANGESHARELOCK *)v20);
    v7 = *((_DWORD *)v5 + 10);
    if ( (v7 & 0x8000) != 0 )
    {
      v8 = this[62];
      v6 = (DYNAMICMODECHANGESHARELOCK *)*((unsigned int *)v8 + 14);
      if ( (int)v6 < cx || *((_DWORD *)v8 + 15) < cy )
      {
        v9 = *((_DWORD *)v8 + 15);
        v23 = (int)v6;
        v22 = 0LL;
        v24 = v9;
        ERECTL::operator*=(&v27.left, (int *)&v22);
      }
    }
    if ( (v7 & 0x20000) != 0 && *((int *)this[62] + 28) < 0 )
    {
      v10 = *((_DWORD *)v5 + 646);
      v27.left += v10;
      v27.right += v10;
      v11 = *((_DWORD *)v5 + 647);
      v27.top += v11;
      v27.bottom += v11;
    }
    DYNAMICMODECHANGESHARELOCK::~DYNAMICMODECHANGESHARELOCK(v6);
  }
  CPushLock::AcquireLockExclusive((CPushLock *)(this + 139));
  v12 = this[143];
  if ( v12 && v12 != prgnDefault )
  {
    v26 = this[143];
    RGNOBJ::vSet((RGNOBJ *)&v26, &v27);
LABEL_16:
    v14 = this[143];
    *((_DWORD *)v14 + 7) = _InterlockedIncrement((volatile signed __int32 *)&REGION::ulUniqueREGION);
    CPushLock::ReleaseLock((CPushLock *)(this + 139));
    v15 = v21.cx;
    this[127] = 0LL;
    *((_DWORD *)this + 260) = v15;
    *((_DWORD *)this + 261) = v21.cy;
    left = v27.left;
    this[129] = 0LL;
    v3 = 1;
    *((_DWORD *)this + 250) = left;
    *((_DWORD *)this + 251) = v27.top;
    *((_DWORD *)this + 252) = v27.right;
    *((_DWORD *)this + 253) = v27.bottom;
    v17 = (_DWORD)this[5] & 1;
    v18 = HIDWORD(this[v17 + 127]);
    *((_DWORD *)this + 300) = this[v17 + 127];
    *((_DWORD *)this + 301) = v18;
    return v3;
  }
  RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)v25);
  v13 = v25[0];
  if ( v25[0] )
  {
    RGNOBJ::vSet((RGNOBJ *)v25, &v27);
    this[143] = v13;
    RGNMEMOBJ::~RGNMEMOBJ(v25);
    goto LABEL_16;
  }
  this[143] = prgnDefault;
  RGNMEMOBJ::~RGNMEMOBJ(v25);
  CPushLock::ReleaseLock((CPushLock *)(this + 139));
  return v3;
}
