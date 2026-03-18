/*
 * XREFs of bGeneratePath @ 0x1C021D344
 * Callers:
 *     ttfdQueryGlyphOutline @ 0x1C021DE2C (ttfdQueryGlyphOutline.c)
 *     ttfdQueryTrueTypeOutline @ 0x1C021E074 (ttfdQueryTrueTypeOutline.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0139660 (__security_check_cookie.c)
 *     memmove @ 0x1C013D380 (memmove.c)
 *     vQsplineToPolyBezier @ 0x1C021E184 (vQsplineToPolyBezier.c)
 */

__int64 __fastcall bGeneratePath(
        PATHOBJ *ppo,
        unsigned int *a2,
        unsigned int a3,
        _DWORD *a4,
        __int64 a5,
        unsigned int a6)
{
  __int64 v6; // r15
  _DWORD *v7; // r13
  unsigned int *v8; // rbx
  unsigned __int64 v10; // r12
  __int64 v11; // rdi
  POINTFIX *v12; // rax
  _WORD *v13; // rsi
  char *v14; // rcx
  unsigned int v15; // r8d
  ULONG v16; // r13d
  size_t v17; // rdx
  unsigned int v18; // r13d
  POINTFIX *v19; // rax
  unsigned int v21; // edx
  POINTFIX *v22; // rax
  int v23; // [rsp+20h] [rbp-118h]
  POINTFIX *v24; // [rsp+28h] [rbp-110h]
  BOOL v25; // [rsp+28h] [rbp-110h]
  unsigned int v26; // [rsp+30h] [rbp-108h]
  char *v27; // [rsp+38h] [rbp-100h]
  POINTFIX *pptfx; // [rsp+40h] [rbp-F8h]
  size_t v29; // [rsp+48h] [rbp-F0h]
  unsigned __int64 v30; // [rsp+50h] [rbp-E8h]
  _BYTE v32[144]; // [rsp+60h] [rbp-D8h] BYREF

  v6 = 0LL;
  v7 = a4;
  v8 = a2;
  if ( a4 )
    *a4 = 0;
  if ( a5 )
    v6 = a5 + a6;
  v10 = (unsigned __int64)a2 + a3;
  if ( (unsigned __int64)a2 >= v10 )
    return 1LL;
  v11 = a5 & -(__int64)(a5 != 0);
  while ( v10 - (unsigned __int64)v8 >= 0x10 && (!a5 || (unsigned __int64)(v6 - v11) >= 0x10) )
  {
    v12 = (POINTFIX *)(v8 + 2);
    if ( ppo )
    {
      if ( !PATHOBJ_bMoveTo(ppo, *v12) )
        return 0LL;
      v12 = (POINTFIX *)(v8 + 2);
    }
    v13 = v8 + 4;
    v24 = v12;
    v30 = (unsigned __int64)v8 + *v8;
    v14 = (char *)(v11 + 16);
    v27 = (char *)(v11 + 16);
    v15 = 16;
    v23 = 16;
    if ( (unsigned __int64)(v8 + 4) < v30 )
    {
      while ( 1 )
      {
        if ( v10 - (unsigned __int64)v13 < 4 )
          return 0LL;
        v16 = (unsigned __int16)v13[1];
        v17 = 8 * v16 + 4;
        v26 = 8 * v16 + 4;
        v29 = v17;
        if ( v10 - (unsigned __int64)v13 < v17 )
          return 0LL;
        if ( *v13 == 1 )
        {
          if ( ppo )
          {
            if ( !PATHOBJ_bPolyLineTo(ppo, (POINTFIX *)(v13 + 2), v16) )
              return 0LL;
            v14 = v27;
            v15 = v23;
            v17 = v29;
          }
          if ( !a5 )
            goto LABEL_38;
          if ( v6 - (__int64)v14 < v17 )
            return 0LL;
          memmove(v14, v13, v17);
        }
        else
        {
          v18 = v16 - 1;
          if ( v18 <= 6 )
          {
            v19 = (POINTFIX *)v32;
            pptfx = (POINTFIX *)v32;
          }
          else
          {
            v19 = (POINTFIX *)EngAllocMem(0, 24 * v18, 0x64667454u);
            pptfx = v19;
            if ( !v19 )
              return 0LL;
          }
          vQsplineToPolyBezier(v18, v24, v13 + 2, v19);
          v25 = !ppo || PATHOBJ_bPolyBezierTo(ppo, pptfx, 3 * v18);
          v21 = 3 * v18;
          v26 = 24 * v18 + 4;
          if ( a5 )
          {
            if ( v6 - (__int64)v27 < (unsigned __int64)(24 * v18 + 4) )
              return 0LL;
            *((_WORD *)v27 + 1) = v21;
            *(_WORD *)v27 = 3;
            memmove(v27 + 4, pptfx, 8LL * v21);
          }
          if ( v18 > 6 )
            EngFreeMem(pptfx);
          if ( !v25 )
            return 0LL;
        }
        v15 = v23;
        v14 = v27;
LABEL_38:
        v14 += v26;
        v15 += v26;
        v27 = v14;
        v23 = v15;
        v22 = (POINTFIX *)&v13[4 * (unsigned __int16)v13[1] - 2];
        v13 = (_WORD *)((char *)v13 + v29);
        v24 = v22;
        if ( (unsigned __int64)v13 >= v30 )
        {
          v7 = a4;
          v12 = (POINTFIX *)(v8 + 2);
          break;
        }
      }
    }
    if ( ppo )
    {
      if ( !PATHOBJ_bPolyLineTo(ppo, v12, 1u) || !PATHOBJ_bCloseFigure(ppo) )
        return 0LL;
      v15 = v23;
    }
    if ( v7 )
      *v7 += v15;
    if ( a5 )
    {
      if ( (unsigned __int64)(v6 - v11) < 0x10 )
        return 0LL;
      *(_DWORD *)(v11 + 4) = 24;
      *(_DWORD *)v11 = v15;
      *(_QWORD *)(v11 + 8) = *((_QWORD *)v8 + 1);
    }
    v8 = (unsigned int *)((char *)v8 + *v8);
    v11 += v15;
    if ( (unsigned __int64)v8 >= v10 )
      return 1LL;
  }
  return 0LL;
}
