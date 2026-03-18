/*
 * XREFs of ?vSpComputeNoPresentRegion@@YAXPEAU_SPRITESTATE@@H@Z @ 0x1C00FE214
 * Callers:
 *     ?vSpUpdateSpriteVisRgn@@YAXPEAUHDEV__@@K@Z @ 0x1C00345A8 (-vSpUpdateSpriteVisRgn@@YAXPEAUHDEV__@@K@Z.c)
 *     GreDeleteSpriteOverlapPresent @ 0x1C0035E6C (GreDeleteSpriteOverlapPresent.c)
 *     ?vSpRemoveAllSpriteOverlapPresents@@YAXPEAUHDEV__@@@Z @ 0x1C00FE1C0 (-vSpRemoveAllSpriteOverlapPresents@@YAXPEAUHDEV__@@@Z.c)
 *     ?GreAddSpriteOverlapPresent@@YAHPEAUHDEV__@@PEAUHWND__@@@Z @ 0x1C024B5CC (-GreAddSpriteOverlapPresent@@YAHPEAUHDEV__@@PEAUHWND__@@@Z.c)
 * Callees:
 *     ?iComplexity@RGNOBJ@@QEBAJXZ @ 0x1C0078C9C (-iComplexity@RGNOBJ@@QEBAJXZ.c)
 *     ??1RGNOBJAPI@@QEAA@XZ @ 0x1C0079BB4 (--1RGNOBJAPI@@QEAA@XZ.c)
 *     ??1RGNMEMOBJTMP@@QEAA@XZ @ 0x1C007A080 (--1RGNMEMOBJTMP@@QEAA@XZ.c)
 *     ?vDeleteREGION@REGION@@QEAAXXZ @ 0x1C00C7FE4 (-vDeleteREGION@REGION@@QEAAXXZ.c)
 *     ?vSpComputeUnlockedRegion@@YAXPEAU_SPRITESTATE@@@Z @ 0x1C00FE2C8 (-vSpComputeUnlockedRegion@@YAXPEAU_SPRITESTATE@@@Z.c)
 *     __security_check_cookie @ 0x1C0139660 (__security_check_cookie.c)
 *     UserGetClientRgn @ 0x1C01B2428 (UserGetClientRgn.c)
 *     ?sizl@PDEVOBJ@@QEAA?AUtagSIZE@@XZ @ 0x1C0242750 (-sizl@PDEVOBJ@@QEAA-AUtagSIZE@@XZ.c)
 */

void __fastcall vSpComputeNoPresentRegion(struct _SPRITESTATE *a1, int a2)
{
  __int64 v2; // rbx
  REGION *v4; // rcx
  REGION *v6; // rcx
  _QWORD *v7; // rsi
  HRGN ClientRgn; // rax
  int v9; // eax
  struct RGNOBJ *v10; // r8
  __int64 v11; // rdx
  struct _POINTL v12; // [rsp+28h] [rbp-59h] BYREF
  __int64 v13; // [rsp+30h] [rbp-51h] BYREF
  int v14; // [rsp+38h] [rbp-49h]
  __int64 v15; // [rsp+40h] [rbp-41h] BYREF
  __int64 v16; // [rsp+48h] [rbp-39h] BYREF
  _QWORD v17[2]; // [rsp+50h] [rbp-31h] BYREF
  _QWORD v18[3]; // [rsp+60h] [rbp-21h] BYREF
  _QWORD v19[2]; // [rsp+78h] [rbp-9h] BYREF
  struct _RECTL v20; // [rsp+98h] [rbp+17h] BYREF
  struct _RECTL v21; // [rsp+A8h] [rbp+27h] BYREF

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
    v6 = (REGION *)*((_QWORD *)a1 + 130);
    if ( v6 )
    {
      REGION::vDeleteREGION(v6);
      *((_QWORD *)a1 + 130) = 0LL;
    }
  }
  SURFOBJ_TO_SURFACE_NOT_NULL(*((_QWORD *)a1 + 4));
  v7 = (_QWORD *)*((_QWORD *)a1 + 10);
  if ( v7 )
  {
    RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)&v13, 0, 1);
    RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)v19, 0, 1);
    RGNMEMOBJ::vPushThreadGuardedObject((RGNMEMOBJ *)v19);
    if ( v13 && v19[0] )
    {
      v20.left = 0;
      v20.top = 0;
      v20.right = *(_DWORD *)PDEVOBJ::sizl((PDEVOBJ *)&v16).cx;
      v20.bottom = *(_DWORD *)(*(_QWORD *)&PDEVOBJ::sizl((PDEVOBJ *)&v16) + 4LL);
      RGNOBJ::vSet((RGNOBJ *)&v13, &v20);
      RGNOBJ::vSet((RGNOBJ *)v19, &v20);
      RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)v17, 0, 1);
      RGNMEMOBJ::vPushThreadGuardedObject((RGNMEMOBJ *)v17);
      if ( v17[0] )
      {
        do
        {
          ClientRgn = (HRGN)UserGetClientRgn(*v7, &v21, 0LL);
          RGNOBJAPI::RGNOBJAPI((RGNOBJAPI *)v18, ClientRgn, 0);
          if ( v18[0] )
          {
            v12.x = -*(_DWORD *)(v2 + 2576);
            v12.y = -*(_DWORD *)(v2 + 2580);
            RGNOBJ::bOffset((RGNOBJ *)v18, &v12);
            v15 = *((_QWORD *)a1 + 88);
            RGNOBJ::vSet((RGNOBJ *)&v15, &v21);
            v12.x = -*(_DWORD *)(v2 + 2576);
            v12.y = -*(_DWORD *)(v2 + 2580);
            RGNOBJ::bOffset((RGNOBJ *)v18, &v12);
            RGNOBJ::bOffset((RGNOBJ *)&v15, &v12);
            v9 = RGNOBJ::iComplexity((RGNOBJ *)v18);
            v10 = (struct RGNOBJ *)&v15;
            if ( v9 != 1 )
              v10 = (struct RGNOBJ *)v18;
            if ( RGNOBJ::bMerge((RGNOBJ *)v17, (struct RGNOBJ *)&v13, v10, BYTE4(gafjRgnOp)) )
              RGNOBJ::vSwap((RGNOBJ *)v17, (struct RGNOBJ *)&v13);
            RGNOBJAPI::bDeleteRGNOBJAPI((RGNOBJAPI *)v18);
          }
          v7 = (_QWORD *)v7[1];
          RGNOBJAPI::~RGNOBJAPI((RGNOBJAPI *)v18);
        }
        while ( v7 );
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
    RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)v19);
    if ( v14 == 1 )
      RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v13);
  }
  if ( !a2 )
    vSpComputeUnlockedRegion(a1);
}
