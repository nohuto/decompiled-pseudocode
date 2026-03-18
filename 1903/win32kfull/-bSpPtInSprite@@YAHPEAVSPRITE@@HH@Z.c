/*
 * XREFs of ?bSpPtInSprite@@YAHPEAVSPRITE@@HH@Z @ 0x1C027E080
 * Callers:
 *     ?GdiPtInSprite@@YAHPEAUHDEV__@@PEAUHWND__@@HH@Z @ 0x1C027BE70 (-GdiPtInSprite@@YAHPEAUHDEV__@@PEAUHWND__@@HH@Z.c)
 * Callees:
 *     ??0SPRITEDDIACCESS@@QEAA@AEAVPDEVOBJ@@@Z @ 0x1C0042DBC (--0SPRITEDDIACCESS@@QEAA@AEAVPDEVOBJ@@@Z.c)
 *     ??1SPRITEDDIACCESS@@QEAA@XZ @ 0x1C0043194 (--1SPRITEDDIACCESS@@QEAA@XZ.c)
 *     ?vSpComposite@@YAXPEAVSPRITE@@PEAU_POINTL@@PEAU_SURFOBJ@@PEAU_RECTL@@@Z @ 0x1C0161660 (-vSpComposite@@YAXPEAVSPRITE@@PEAU_POINTL@@PEAU_SURFOBJ@@PEAU_RECTL@@@Z.c)
 *     __security_check_cookie @ 0x1C0162AB0 (__security_check_cookie.c)
 */

__int64 __fastcall bSpPtInSprite(struct SPRITE *a1, LONG a2, __int64 a3, __int64 a4)
{
  unsigned int v4; // edi
  LONG v5; // r15d
  __int64 *v9; // rbx
  struct _SURFOBJ *v10; // r13
  __int64 v11; // rcx
  __int64 v12; // rax
  __int64 v13; // r8
  int v14; // ebx
  __int64 v15; // rdx
  __int64 v16; // r8
  __int64 v17; // r9
  _DWORD *pvScan0; // r14
  struct _POINTL v19; // [rsp+20h] [rbp-E0h] BYREF
  __int64 v20; // [rsp+28h] [rbp-D8h] BYREF
  __int64 *v21[24]; // [rsp+30h] [rbp-D0h] BYREF
  struct _RECTL v22; // [rsp+F0h] [rbp-10h] BYREF

  v4 = 0;
  v5 = a3;
  if ( !a1 )
    return 0LL;
  v9 = (__int64 *)*((_QWORD *)a1 + 2);
  v20 = *v9;
  SPRITEDDIACCESS::SPRITEDDIACCESS((SPRITEDDIACCESS *)v21, (struct PDEVOBJ *)&v20, a3, a4);
  v10 = (struct _SURFOBJ *)v9[128];
  v11 = *((_QWORD *)a1 + 2);
  v22.right = a2 + 1;
  v22.bottom = v5 + 1;
  v22.left = a2;
  v22.top = v5;
  v12 = *(_QWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(*(_QWORD *)(v11 + 32)) + 128);
  if ( (*(_DWORD *)(v12 + 24) & 2) != 0 )
    v14 = **(_DWORD **)(v12 + 112) | *(_DWORD *)(*(_QWORD *)(v12 + 112) + 4LL) | *(_DWORD *)(*(_QWORD *)(v12 + 112) + 8LL);
  else
    v14 = -1;
  if ( (unsigned int)bIntersect((char *)a1 + 80, &v22, v13) )
  {
    v19.x = -a2;
    pvScan0 = v10->pvScan0;
    v19.y = -v5;
    *pvScan0 = 0;
    vSpComposite(a1, &v19, v10, &v22);
    if ( (v14 & *pvScan0) != 0 )
    {
      v4 = 1;
    }
    else
    {
      *pvScan0 = -1;
      vSpComposite(a1, &v19, v10, &v22);
      LOBYTE(v4) = (*pvScan0 & v14) != v14;
    }
  }
  SPRITEDDIACCESS::~SPRITEDDIACCESS(v21, v15, v16, v17);
  return v4;
}
