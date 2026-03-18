/*
 * XREFs of bSpEnableSprites @ 0x1C003CCA0
 * Callers:
 *     <none>
 * Callees:
 *     ?psoSpCreateSurface@@YAPEAU_SURFOBJ@@PEAU_SPRITESTATE@@KJJH@Z @ 0x1C003CC10 (-psoSpCreateSurface@@YAPEAU_SURFOBJ@@PEAU_SPRITESTATE@@KJJH@Z.c)
 *     ?vSpHook@@YAXPEAU_SPRITESTATE@@@Z @ 0x1C003D040 (-vSpHook@@YAXPEAU_SPRITESTATE@@@Z.c)
 *     PALLOCMEM2 @ 0x1C0075884 (PALLOCMEM2.c)
 */

__int64 __fastcall bSpEnableSprites(__int64 a1)
{
  unsigned int v2; // edi
  __int64 v4; // rax
  __int64 v5; // r8
  __int64 v6; // rax
  int v7; // ecx
  int v8; // eax
  __int64 v9; // r14
  struct _SURFOBJ *Surface; // rdx
  struct REGION *v11; // rdx
  __int64 v12; // rdx
  struct REGION *v13; // [rsp+30h] [rbp-30h] BYREF
  int v14; // [rsp+38h] [rbp-28h]
  __int64 v15; // [rsp+40h] [rbp-20h] BYREF
  int v16; // [rsp+48h] [rbp-18h]
  __int64 v17; // [rsp+50h] [rbp-10h] BYREF
  int v18; // [rsp+58h] [rbp-8h]

  if ( (*(_DWORD *)(a1 + 40) & 1) == 0 )
    return 1;
  v4 = SURFOBJ_TO_SURFACE_NOT_NULL((*(_QWORD *)(a1 + 2552) + 24LL) & -(__int64)(*(_QWORD *)(a1 + 2552) != 0LL));
  v2 = 0;
  *(_QWORD *)(a1 + 88) = a1;
  v5 = v4;
  if ( v4 )
    v6 = v4 + 24;
  else
    v6 = 0LL;
  *(_QWORD *)(a1 + 120) = v6;
  *(_DWORD *)(a1 + 196) = *(_DWORD *)(v5 + 96);
  v7 = *(unsigned __int16 *)(v5 + 100);
  *(_DWORD *)(a1 + 184) = v7;
  v8 = *(_DWORD *)(v5 + 112);
  *(_DWORD *)(a1 + 180) = v8;
  *(_DWORD *)(a1 + 192) = v7;
  *(_DWORD *)(a1 + 188) = v8;
  *(_DWORD *)(a1 + 200) = **(_DWORD **)(*(_QWORD *)(v5 + 128) + 112LL) | *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v5 + 128)
                                                                                               + 112LL)
                                                                                   + 8LL);
  *(_DWORD *)(a1 + 128) = 0;
  *(_DWORD *)(a1 + 136) = *(_DWORD *)(v5 + 56);
  *(_DWORD *)(a1 + 132) = 0;
  *(_DWORD *)(a1 + 140) = *(_DWORD *)(v5 + 60);
  *(_QWORD *)(a1 + 208) = GreCreateSemaphore();
  *(_QWORD *)(a1 + 216) = GreCreateSemaphore();
  RtlInitializeBitMap((PRTL_BITMAP)(a1 + 752), (PULONG)(a1 + 768), 0x40u);
  GreInitializePushLock(a1 + 776);
  RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)&v17);
  RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)&v15);
  RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)&v13);
  if ( !*(_QWORD *)(a1 + 208) )
    goto LABEL_24;
  if ( !*(_QWORD *)(a1 + 216) )
    goto LABEL_24;
  if ( !v17 )
    goto LABEL_24;
  if ( !v15 )
    goto LABEL_24;
  if ( !v13 )
    goto LABEL_24;
  v9 = PALLOCMEM2(0x28uLL);
  if ( !v9 )
    goto LABEL_24;
  Surface = psoSpCreateSurface((struct _SPRITESTATE *)(a1 + 88), 0, 1u, 1u);
  if ( !Surface )
  {
    Win32FreePool(v9);
LABEL_24:
    if ( *(_QWORD *)(a1 + 208) )
      GreDeleteSemaphore();
    if ( *(_QWORD *)(a1 + 216) )
      GreDeleteSemaphore();
    *(_QWORD *)(a1 + 208) = 0LL;
    *(_QWORD *)(a1 + 216) = 0LL;
    RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v17);
    RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v15);
    RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v13);
    goto LABEL_16;
  }
  *(_DWORD *)v9 = *(_DWORD *)(a1 + 132);
  *(_DWORD *)(v9 + 4) = *(_DWORD *)(a1 + 140);
  *(_QWORD *)(v9 + 8) = 40LL;
  *(_QWORD *)(v9 + 16) = 0LL;
  *(_DWORD *)(v9 + 24) = *(_DWORD *)(a1 + 128);
  *(_DWORD *)(v9 + 28) = *(_DWORD *)(a1 + 136);
  *(_QWORD *)(v9 + 32) = 0LL;
  *(_QWORD *)(a1 + 1112) = Surface;
  *(_QWORD *)(a1 + 224) = v9;
  *(_QWORD *)(a1 + 232) = v9 + 40;
  RGNOBJ::vSet((RGNOBJ *)&v13, (struct _RECTL *)(a1 + 128));
  v11 = v13;
  *(_QWORD *)(a1 + 952) = v13;
  XCLIPOBJ::vSetup((XCLIPOBJ *)(a1 + 960), v11, (struct ERECTL *)(a1 + 128), 1);
  v12 = v17;
  *(_QWORD *)(a1 + 784) = v17;
  *(_DWORD *)(v12 + 28) = _InterlockedIncrement(*(volatile signed __int32 **)&REGION::ulUniqueREGION);
  *(_QWORD *)(a1 + 792) = v15;
  *(_QWORD *)(a1 + 1144) = GreCreateRectRgn(0LL, 0LL, 0LL, 0LL);
  *(_QWORD *)(a1 + 1280) = *(_QWORD *)(a1 + 2816);
  *(_QWORD *)(a1 + 1288) = *(_QWORD *)(a1 + 2800);
  *(_QWORD *)(a1 + 1296) = *(_QWORD *)(a1 + 2808);
  *(_QWORD *)(a1 + 1312) = *(_QWORD *)(a1 + 2832);
  *(_QWORD *)(a1 + 1320) = *(_QWORD *)(a1 + 2840);
  *(_QWORD *)(a1 + 1328) = *(_QWORD *)(a1 + 2848);
  *(_QWORD *)(a1 + 1336) = *(_QWORD *)(a1 + 2872);
  *(_QWORD *)(a1 + 1344) = *(_QWORD *)(a1 + 2936);
  *(_QWORD *)(a1 + 1352) = *(_QWORD *)(a1 + 3280);
  *(_QWORD *)(a1 + 1360) = *(_QWORD *)(a1 + 3256);
  *(_QWORD *)(a1 + 1368) = *(_QWORD *)(a1 + 3248);
  *(_QWORD *)(a1 + 1376) = *(_QWORD *)(a1 + 3232);
  *(_QWORD *)(a1 + 1392) = *(_QWORD *)(a1 + 3240);
  *(_QWORD *)(a1 + 1384) = *(_QWORD *)(a1 + 3008);
  *(_QWORD *)(a1 + 1400) = *(_QWORD *)(a1 + 3408);
  if ( (*(_DWORD *)(a1 + 40) & 0x20000) == 0 )
    vSpHook((struct _SPRITESTATE *)(a1 + 88));
  v2 = 1;
LABEL_16:
  if ( v14 == 1 )
    RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v13);
  if ( v16 == 1 )
    RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v15);
  if ( v18 == 1 )
    RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v17);
  return v2;
}
