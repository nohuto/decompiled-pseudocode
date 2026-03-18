/*
 * XREFs of ?bSpPtInSprite@@YAHPEAVSPRITE@@HH@Z @ 0x1C0264E68
 * Callers:
 *     ?GdiPtInSprite@@YAHPEAUHDEV__@@PEAUHWND__@@HH@Z @ 0x1C02627F4 (-GdiPtInSprite@@YAHPEAUHDEV__@@PEAUHWND__@@HH@Z.c)
 * Callees:
 *     ??0SPRITEDDIACCESS@@QEAA@AEAVPDEVOBJ@@@Z @ 0x1C0044A20 (--0SPRITEDDIACCESS@@QEAA@AEAVPDEVOBJ@@@Z.c)
 *     ??1SPRITEDDIACCESS@@QEAA@XZ @ 0x1C0044DF8 (--1SPRITEDDIACCESS@@QEAA@XZ.c)
 *     ?vSpComposite@@YAXPEAVSPRITE@@PEAU_POINTL@@PEAU_SURFOBJ@@PEAU_RECTL@@@Z @ 0x1C0159BC0 (-vSpComposite@@YAXPEAVSPRITE@@PEAU_POINTL@@PEAU_SURFOBJ@@PEAU_RECTL@@@Z.c)
 *     __security_check_cookie @ 0x1C015AF60 (__security_check_cookie.c)
 */

__int64 __fastcall bSpPtInSprite(struct SPRITE *a1, LONG a2, LONG a3)
{
  unsigned int v3; // edi
  __int64 *v8; // rbx
  struct _SURFOBJ *v9; // r13
  __int64 v10; // rcx
  __int64 v11; // rax
  __int64 v12; // r8
  __int64 v13; // r9
  int v14; // ebx
  __int64 v15; // rdx
  _DWORD *pvScan0; // r14
  struct _POINTL v17; // [rsp+20h] [rbp-E0h] BYREF
  __int64 v18; // [rsp+28h] [rbp-D8h] BYREF
  __int64 *v19[24]; // [rsp+30h] [rbp-D0h] BYREF
  struct _RECTL v20; // [rsp+F0h] [rbp-10h] BYREF

  v3 = 0;
  if ( !a1 )
    return 0LL;
  v8 = (__int64 *)*((_QWORD *)a1 + 2);
  v18 = *v8;
  SPRITEDDIACCESS::SPRITEDDIACCESS((SPRITEDDIACCESS *)v19, (struct PDEVOBJ *)&v18);
  v9 = (struct _SURFOBJ *)v8[128];
  v10 = *((_QWORD *)a1 + 2);
  v20.right = a2 + 1;
  v20.bottom = a3 + 1;
  v20.left = a2;
  v20.top = a3;
  v11 = *(_QWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(*(_QWORD *)(v10 + 32)) + 128);
  if ( (*(_DWORD *)(v11 + 24) & 2) != 0 )
    v14 = **(_DWORD **)(v11 + 112) | *(_DWORD *)(*(_QWORD *)(v11 + 112) + 4LL) | *(_DWORD *)(*(_QWORD *)(v11 + 112) + 8LL);
  else
    v14 = -1;
  if ( (unsigned int)bIntersect((char *)a1 + 80, &v20, v12, v13) )
  {
    v17.x = -a2;
    pvScan0 = v9->pvScan0;
    v17.y = -a3;
    *pvScan0 = 0;
    vSpComposite(a1, &v17, v9, &v20);
    if ( (v14 & *pvScan0) != 0 )
    {
      v3 = 1;
    }
    else
    {
      *pvScan0 = -1;
      vSpComposite(a1, &v17, v9, &v20);
      LOBYTE(v3) = (*pvScan0 & v14) != v14;
    }
  }
  SPRITEDDIACCESS::~SPRITEDDIACCESS(v19, v15);
  return v3;
}
