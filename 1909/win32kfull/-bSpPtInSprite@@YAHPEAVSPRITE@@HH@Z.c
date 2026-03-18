/*
 * XREFs of ?bSpPtInSprite@@YAHPEAVSPRITE@@HH@Z @ 0x1C027D9C0
 * Callers:
 *     ?GdiPtInSprite@@YAHPEAUHDEV__@@PEAUHWND__@@HH@Z @ 0x1C027B7B0 (-GdiPtInSprite@@YAHPEAUHDEV__@@PEAUHWND__@@HH@Z.c)
 * Callees:
 *     ??0SPRITEDDIACCESS@@QEAA@AEAVPDEVOBJ@@@Z @ 0x1C0086DC0 (--0SPRITEDDIACCESS@@QEAA@AEAVPDEVOBJ@@@Z.c)
 *     ??1SPRITEDDIACCESS@@QEAA@XZ @ 0x1C0087198 (--1SPRITEDDIACCESS@@QEAA@XZ.c)
 *     ?vSpComposite@@YAXPEAVSPRITE@@PEAU_POINTL@@PEAU_SURFOBJ@@PEAU_RECTL@@@Z @ 0x1C0162630 (-vSpComposite@@YAXPEAVSPRITE@@PEAU_POINTL@@PEAU_SURFOBJ@@PEAU_RECTL@@@Z.c)
 *     __security_check_cookie @ 0x1C0163A80 (__security_check_cookie.c)
 */

__int64 __fastcall bSpPtInSprite(struct SPRITE *a1, LONG a2, __int64 a3)
{
  unsigned int v3; // edi
  LONG v4; // r15d
  __int64 *v8; // rbx
  struct _SURFOBJ *v9; // r13
  __int64 v10; // rcx
  __int64 v11; // rax
  int v12; // ebx
  __int64 v13; // rdx
  __int64 v14; // r8
  _DWORD *pvScan0; // r14
  struct _POINTL v16; // [rsp+20h] [rbp-E0h] BYREF
  __int64 v17; // [rsp+28h] [rbp-D8h] BYREF
  __int64 *v18[24]; // [rsp+30h] [rbp-D0h] BYREF
  struct _RECTL v19; // [rsp+F0h] [rbp-10h] BYREF

  v3 = 0;
  v4 = a3;
  if ( !a1 )
    return 0LL;
  v8 = (__int64 *)*((_QWORD *)a1 + 2);
  v17 = *v8;
  SPRITEDDIACCESS::SPRITEDDIACCESS((SPRITEDDIACCESS *)v18, (struct PDEVOBJ *)&v17, a3);
  v9 = (struct _SURFOBJ *)v8[128];
  v10 = *((_QWORD *)a1 + 2);
  v19.right = a2 + 1;
  v19.bottom = v4 + 1;
  v19.left = a2;
  v19.top = v4;
  v11 = *(_QWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(*(_QWORD *)(v10 + 32)) + 128);
  if ( (*(_DWORD *)(v11 + 24) & 2) != 0 )
    v12 = **(_DWORD **)(v11 + 112) | *(_DWORD *)(*(_QWORD *)(v11 + 112) + 4LL) | *(_DWORD *)(*(_QWORD *)(v11 + 112) + 8LL);
  else
    v12 = -1;
  if ( (unsigned int)bIntersect((char *)a1 + 80, &v19) )
  {
    v16.x = -a2;
    pvScan0 = v9->pvScan0;
    v16.y = -v4;
    *pvScan0 = 0;
    vSpComposite(a1, &v16, v9, &v19);
    if ( (v12 & *pvScan0) != 0 )
    {
      v3 = 1;
    }
    else
    {
      *pvScan0 = -1;
      vSpComposite(a1, &v16, v9, &v19);
      LOBYTE(v3) = (*pvScan0 & v12) != v12;
    }
  }
  SPRITEDDIACCESS::~SPRITEDDIACCESS(v18, v13, v14);
  return v3;
}
