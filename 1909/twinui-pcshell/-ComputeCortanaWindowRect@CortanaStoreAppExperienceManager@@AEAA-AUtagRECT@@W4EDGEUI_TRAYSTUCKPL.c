/*
 * XREFs of ?ComputeCortanaWindowRect@CortanaStoreAppExperienceManager@@AEAA?AUtagRECT@@W4EDGEUI_TRAYSTUCKPLACE@@HHU2@111UCRect@Geometry@@H@Z @ 0x1801DB19C
 * Callers:
 *     ?PositionCortanaWindow@CortanaStoreAppExperienceManager@@AEAAJXZ @ 0x1801DD820 (-PositionCortanaWindow@CortanaStoreAppExperienceManager@@AEAAJXZ.c)
 * Callees:
 *     __security_check_cookie @ 0x180089590 (__security_check_cookie.c)
 *     ?Intersects@CRect@Geometry@@QEAA_NAEBUtagRECT@@@Z @ 0x1801DC600 (-Intersects@CRect@Geometry@@QEAA_NAEBUtagRECT@@@Z.c)
 */

struct tagRECT *__fastcall CortanaStoreAppExperienceManager::ComputeCortanaWindowRect(
        __int64 a1,
        struct tagRECT *a2,
        int a3,
        int a4,
        int a5,
        LONG *a6,
        RECT *lprcSrc1,
        LONG *a8,
        _DWORD *a9,
        Geometry::CRect *a10,
        int a11)
{
  struct tagRECT v12; // xmm0
  int v13; // r8d
  LONG v14; // eax
  LONG v15; // ecx
  int v16; // r14d
  int v17; // eax
  int v18; // ebx
  __int64 v19; // r11
  struct tagRECT *result; // rax
  struct tagRECT rc; // [rsp+20h] [rbp-30h] BYREF
  struct tagRECT rcDst; // [rsp+30h] [rbp-20h] BYREF

  *(_QWORD *)&rc.left = 0LL;
  *(_QWORD *)&rc.right = 0LL;
  if ( *(_BYTE *)(a1 + 276) )
  {
    rc.left = *a6;
    rc.right = a6[2];
    rc.top = a6[1];
    rc.bottom = a6[3];
    v12 = rc;
    goto LABEL_19;
  }
  if ( a3 )
  {
    v13 = a3 - 1;
    if ( !v13 )
    {
      v14 = *a8;
      v15 = a8[3];
      goto LABEL_13;
    }
    if ( v13 != 1 )
    {
      v14 = (a9[2] - *a9) / 2 - a4 / 2 + *a9;
      if ( v14 < *a8 )
        v14 = *a8;
      v15 = a8[1] - a5;
      goto LABEL_13;
    }
    v14 = *a8 - a4;
  }
  else
  {
    v14 = a8[2];
  }
  v15 = a8[1];
LABEL_13:
  rc.left = v14;
  v16 = v15 + a5;
  rc.top = v15;
  rc.right = a4 + v14;
  v17 = *((_DWORD *)a10 + 2);
  rc.bottom = v15 + a5;
  if ( *(_DWORD *)a10 < v17 )
  {
    v18 = *((_DWORD *)a10 + 1);
    if ( v18 < *((_DWORD *)a10 + 3)
      && Geometry::CRect::Intersects(a10, &rc)
      && *(_DWORD *)(v19 + 12) - *((_DWORD *)a10 + 3) <= a11 )
    {
      OffsetRect(&rc, 0, v18 - v16);
    }
  }
  *(_QWORD *)&rcDst.left = 0LL;
  *(_QWORD *)&rcDst.right = 0LL;
  IntersectRect(&rcDst, lprcSrc1, &rc);
  v12 = rcDst;
LABEL_19:
  result = a2;
  *a2 = v12;
  return result;
}
