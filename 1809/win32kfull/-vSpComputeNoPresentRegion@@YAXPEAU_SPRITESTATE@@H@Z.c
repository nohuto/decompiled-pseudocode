/*
 * XREFs of ?vSpComputeNoPresentRegion@@YAXPEAU_SPRITESTATE@@H@Z @ 0x1C0096CAC
 * Callers:
 *     GreDeleteSpriteOverlapPresent @ 0x1C001D580 (GreDeleteSpriteOverlapPresent.c)
 *     ?vSpUpdateSpriteVisRgn@@YAXPEAUHDEV__@@K@Z @ 0x1C003D974 (-vSpUpdateSpriteVisRgn@@YAXPEAUHDEV__@@K@Z.c)
 *     ?vSpRemoveAllSpriteOverlapPresents@@YAXPEAUHDEV__@@@Z @ 0x1C0096C58 (-vSpRemoveAllSpriteOverlapPresents@@YAXPEAUHDEV__@@@Z.c)
 *     ?GreAddSpriteOverlapPresent@@YAHPEAUHDEV__@@PEAUHWND__@@@Z @ 0x1C0262B10 (-GreAddSpriteOverlapPresent@@YAHPEAUHDEV__@@PEAUHWND__@@@Z.c)
 * Callees:
 *     ?vDeleteREGION@REGION@@QEAAXXZ @ 0x1C000E3D4 (-vDeleteREGION@REGION@@QEAAXXZ.c)
 *     ??1RGNOBJAPI@@QEAA@XZ @ 0x1C0055B68 (--1RGNOBJAPI@@QEAA@XZ.c)
 *     ?iComplexity@RGNOBJ@@QEBAJXZ @ 0x1C0056B74 (-iComplexity@RGNOBJ@@QEBAJXZ.c)
 *     ?vSpComputeUnlockedRegion@@YAXPEAU_SPRITESTATE@@@Z @ 0x1C0096D68 (-vSpComputeUnlockedRegion@@YAXPEAU_SPRITESTATE@@@Z.c)
 *     ??1RGNMEMOBJTMP@@QEAA@XZ @ 0x1C009EB00 (--1RGNMEMOBJTMP@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1C015AF60 (__security_check_cookie.c)
 *     UserGetClientRgn @ 0x1C01D4A28 (UserGetClientRgn.c)
 *     ?sizl@PDEVOBJ@@QEAA?AUtagSIZE@@XZ @ 0x1C025A438 (-sizl@PDEVOBJ@@QEAA-AUtagSIZE@@XZ.c)
 */

void __fastcall vSpComputeNoPresentRegion(struct _SPRITESTATE *a1, int a2)
{
  __int64 v2; // rbx
  REGION *v4; // rcx
  _QWORD *v6; // rsi
  REGION *v7; // rcx
  HRGN ClientRgn; // rax
  int v9; // eax
  struct RGNOBJ *v10; // r8
  __int64 v11; // rdx
  struct _POINTL v12; // [rsp+28h] [rbp-79h] BYREF
  __int64 v13; // [rsp+30h] [rbp-71h] BYREF
  int v14; // [rsp+38h] [rbp-69h]
  __int64 v15; // [rsp+40h] [rbp-61h] BYREF
  __int64 v16; // [rsp+48h] [rbp-59h] BYREF
  _QWORD v17[2]; // [rsp+50h] [rbp-51h] BYREF
  _QWORD v18[2]; // [rsp+60h] [rbp-41h] BYREF
  _QWORD v19[7]; // [rsp+70h] [rbp-31h] BYREF
  struct _RECTL v20; // [rsp+B8h] [rbp+17h] BYREF
  struct _RECTL v21; // [rsp+C8h] [rbp+27h] BYREF

  v2 = *(_QWORD *)a1;
  v4 = (REGION *)*((_QWORD *)a1 + 131);
  v16 = v2;
  if ( v4 )
  {
    REGION::vDeleteREGION(v4);
    *((_QWORD *)a1 + 131) = 0LL;
  }
  if ( !a2 )
  {
    v7 = (REGION *)*((_QWORD *)a1 + 130);
    if ( v7 )
    {
      REGION::vDeleteREGION(v7);
      *((_QWORD *)a1 + 130) = 0LL;
    }
  }
  SURFOBJ_TO_SURFACE_NOT_NULL(*((_QWORD *)a1 + 4));
  v6 = (_QWORD *)*((_QWORD *)a1 + 10);
  if ( v6 )
  {
    RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)&v13, 0, 1);
    RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)v18, 0, 1);
    RGNMEMOBJ::vPushThreadGuardedObject((RGNMEMOBJ *)v18);
    if ( v13 && v18[0] )
    {
      v20.left = 0;
      v20.top = 0;
      v20.right = *(_DWORD *)PDEVOBJ::sizl((PDEVOBJ *)&v16).cx;
      v20.bottom = *(_DWORD *)(*(_QWORD *)&PDEVOBJ::sizl((PDEVOBJ *)&v16) + 4LL);
      RGNOBJ::vSet((RGNOBJ *)&v13, &v20);
      RGNOBJ::vSet((RGNOBJ *)v18, &v20);
      RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)v17, 0, 1);
      RGNMEMOBJ::vPushThreadGuardedObject((RGNMEMOBJ *)v17);
      if ( v17[0] )
      {
        do
        {
          ClientRgn = (HRGN)UserGetClientRgn(*v6, &v21, 0LL);
          RGNOBJAPI::RGNOBJAPI((RGNOBJAPI *)v19, ClientRgn, 0, 0);
          if ( v19[0] )
          {
            v12.x = -*(_DWORD *)(v2 + 2584);
            v12.y = -*(_DWORD *)(v2 + 2588);
            RGNOBJ::bOffset((RGNOBJ *)v19, &v12);
            v15 = *((_QWORD *)a1 + 88);
            RGNOBJ::vSet((RGNOBJ *)&v15, &v21);
            v12.x = -*(_DWORD *)(v2 + 2584);
            v12.y = -*(_DWORD *)(v2 + 2588);
            RGNOBJ::bOffset((RGNOBJ *)v19, &v12);
            RGNOBJ::bOffset((RGNOBJ *)&v15, &v12);
            v9 = RGNOBJ::iComplexity((RGNOBJ *)v19);
            v10 = (struct RGNOBJ *)&v15;
            if ( v9 != 1 )
              v10 = (struct RGNOBJ *)v19;
            if ( RGNOBJ::bMerge((RGNOBJ *)v17, (struct RGNOBJ *)&v13, v10, BYTE4(gafjRgnOp)) )
              RGNOBJ::vSwap((RGNOBJ *)v17, (struct RGNOBJ *)&v13);
            RGNOBJAPI::bDeleteRGNOBJAPI((RGNOBJAPI *)v19);
          }
          v6 = (_QWORD *)v6[1];
          RGNOBJAPI::~RGNOBJAPI((RGNOBJAPI *)v19);
        }
        while ( v6 );
      }
      v11 = v13;
      *(_DWORD *)(v11 + 28) = _InterlockedIncrement(*(volatile signed __int32 **)&REGION::ulUniqueREGION);
      if ( a2 )
        *((_QWORD *)a1 + 131) = v13;
      else
        *((_QWORD *)a1 + 130) = v13;
      RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)v17);
    }
    else
    {
      RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v13);
    }
    RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)v18);
    if ( v14 == 1 )
      RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v13);
  }
  if ( !a2 )
    vSpComputeUnlockedRegion(a1);
}
