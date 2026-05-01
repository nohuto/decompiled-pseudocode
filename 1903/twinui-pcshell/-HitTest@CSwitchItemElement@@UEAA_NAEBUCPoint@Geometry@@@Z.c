/*
 * XREFs of ?HitTest@CSwitchItemElement@@UEAA_NAEBUCPoint@Geometry@@@Z @ 0x180362A60
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 *     ?Contains@CRect@Geometry@@QEBA_NAEBUtagPOINT@@@Z @ 0x180362678 (-Contains@CRect@Geometry@@QEBA_NAEBUtagPOINT@@@Z.c)
 *     ?_GetLayoutRects@CSwitchItemElement@@IEAAXPEAUCRect@Geometry@@00@Z @ 0x180363580 (-_GetLayoutRects@CSwitchItemElement@@IEAAXPEAUCRect@Geometry@@00@Z.c)
 */

bool __fastcall CSwitchItemElement::HitTest(CSwitchItemElement *this, struct tagPOINT *a2)
{
  int v4; // r8d
  int v5; // r10d
  int v6; // r9d
  int v7; // r8d
  int v8; // ecx
  int v9; // ecx
  int v10; // edx
  int v11; // eax
  __int64 v12; // rax
  _DWORD *v13; // rax
  __int128 v15; // [rsp+20h] [rbp-30h] BYREF
  __int128 v16; // [rsp+30h] [rbp-20h] BYREF
  __int128 v17; // [rsp+40h] [rbp-10h] BYREF
  struct tagPOINT v18; // [rsp+60h] [rbp+10h] BYREF
  char v19; // [rsp+68h] [rbp+18h] BYREF

  v16 = 0LL;
  v15 = 0LL;
  v17 = 0LL;
  CSwitchItemElement::_GetLayoutRects(
    this,
    (struct Geometry::CRect *)&v16,
    (struct Geometry::CRect *)&v15,
    (struct Geometry::CRect *)&v17);
  v4 = HIDWORD(v15);
  v5 = DWORD2(v15);
  v6 = v15;
  if ( SHIDWORD(v17) > SHIDWORD(v15) )
    v4 = HIDWORD(v17);
  HIDWORD(v15) = v4;
  v7 = HIDWORD(v16);
  if ( SDWORD2(v17) > SDWORD2(v15) )
    v5 = DWORD2(v17);
  v8 = DWORD1(v15);
  DWORD2(v15) = v5;
  if ( SDWORD1(v17) < SDWORD1(v15) )
    v8 = DWORD1(v17);
  DWORD1(v15) = v8;
  v9 = DWORD1(v16);
  if ( (int)v17 < (int)v15 )
    v6 = v17;
  v10 = DWORD2(v16);
  LODWORD(v15) = v6;
  if ( SHIDWORD(v15) > SHIDWORD(v16) )
    v7 = HIDWORD(v15);
  HIDWORD(v16) = v7;
  if ( v5 > SDWORD2(v16) )
    v10 = v5;
  DWORD2(v16) = v10;
  if ( SDWORD1(v15) < SDWORD1(v16) )
    v9 = DWORD1(v15);
  v11 = v16;
  DWORD1(v16) = v9;
  if ( v6 < (int)v16 )
    v11 = v6;
  LODWORD(v16) = v11;
  v12 = *(_QWORD *)this;
  v17 = v16;
  v13 = (_DWORD *)(*(__int64 (__fastcall **)(CSwitchItemElement *, char *))(v12 + 120))(this, &v19);
  v18 = *a2;
  v18.x += *v13;
  v18.y += v13[1];
  return Geometry::CRect::Contains((Geometry::CRect *)&v17, &v18);
}
