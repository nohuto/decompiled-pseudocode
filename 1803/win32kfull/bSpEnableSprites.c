/*
 * XREFs of bSpEnableSprites @ 0x1C00FD8B0
 * Callers:
 *     <none>
 * Callees:
 *     PALLOCMEM2 @ 0x1C00CB03C (PALLOCMEM2.c)
 *     ?vSpHook@@YAXPEAU_SPRITESTATE@@@Z @ 0x1C00FDC0C (-vSpHook@@YAXPEAU_SPRITESTATE@@@Z.c)
 *     ?psoSpCreateSurface@@YAPEAU_SURFOBJ@@PEAU_SPRITESTATE@@KJJH@Z @ 0x1C00FE72C (-psoSpCreateSurface@@YAPEAU_SURFOBJ@@PEAU_SPRITESTATE@@KJJH@Z.c)
 */

__int64 __fastcall bSpEnableSprites(__int64 a1)
{
  __int64 v2; // rax
  unsigned int v3; // edi
  __int64 v4; // r8
  __int64 v5; // rax
  int v6; // ecx
  int v7; // eax
  _DWORD *v8; // r14
  struct _SURFOBJ *Surface; // rdx
  struct REGION *v10; // rdx
  __int64 v11; // rdx
  __int64 v13; // rcx
  __int64 v14; // rcx
  int v15; // [rsp+20h] [rbp-40h]
  struct REGION *v16; // [rsp+30h] [rbp-30h] BYREF
  int v17; // [rsp+38h] [rbp-28h]
  __int64 v18; // [rsp+40h] [rbp-20h] BYREF
  int v19; // [rsp+48h] [rbp-18h]
  __int64 v20; // [rsp+50h] [rbp-10h] BYREF
  int v21; // [rsp+58h] [rbp-8h]

  if ( (*(_DWORD *)(a1 + 40) & 1) == 0 )
    return 1;
  v2 = SURFOBJ_TO_SURFACE_NOT_NULL((*(_QWORD *)(a1 + 2544) + 24LL) & -(__int64)(*(_QWORD *)(a1 + 2544) != 0LL));
  v3 = 0;
  *(_QWORD *)(a1 + 80) = a1;
  v4 = v2;
  if ( v2 )
    v5 = v2 + 24;
  else
    v5 = 0LL;
  *(_QWORD *)(a1 + 112) = v5;
  *(_DWORD *)(a1 + 188) = *(_DWORD *)(v4 + 96);
  v6 = *(unsigned __int16 *)(v4 + 100);
  *(_DWORD *)(a1 + 176) = v6;
  v7 = *(_DWORD *)(v4 + 112);
  *(_DWORD *)(a1 + 172) = v7;
  *(_DWORD *)(a1 + 184) = v6;
  *(_DWORD *)(a1 + 180) = v7;
  *(_DWORD *)(a1 + 192) = **(_DWORD **)(*(_QWORD *)(v4 + 128) + 112LL) | *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v4 + 128)
                                                                                               + 112LL)
                                                                                   + 8LL);
  *(_DWORD *)(a1 + 120) = 0;
  *(_DWORD *)(a1 + 128) = *(_DWORD *)(v4 + 56);
  *(_DWORD *)(a1 + 124) = 0;
  *(_DWORD *)(a1 + 132) = *(_DWORD *)(v4 + 60);
  *(_QWORD *)(a1 + 200) = GreCreateSemaphore();
  *(_QWORD *)(a1 + 208) = GreCreateSemaphore();
  RtlInitializeBitMap((PRTL_BITMAP)(a1 + 744), (PULONG)(a1 + 760), 0x40u);
  GreInitializePushLock(a1 + 768);
  RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)&v20);
  RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)&v18);
  RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)&v16);
  if ( !*(_QWORD *)(a1 + 200) )
    goto LABEL_24;
  if ( !*(_QWORD *)(a1 + 208) )
    goto LABEL_24;
  if ( !v20 )
    goto LABEL_24;
  if ( !v18 )
    goto LABEL_24;
  if ( !v16 )
    goto LABEL_24;
  v8 = PALLOCMEM2(0x28uLL, 1919972167LL, 1);
  if ( !v8 )
    goto LABEL_24;
  Surface = psoSpCreateSurface((struct _SPRITESTATE *)(a1 + 80), 0, 1, 1, v15);
  if ( !Surface )
  {
    Win32FreePool(v8);
LABEL_24:
    v13 = *(_QWORD *)(a1 + 200);
    if ( v13 )
      GreDeleteSemaphore(v13);
    v14 = *(_QWORD *)(a1 + 208);
    if ( v14 )
      GreDeleteSemaphore(v14);
    *(_QWORD *)(a1 + 200) = 0LL;
    *(_QWORD *)(a1 + 208) = 0LL;
    RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v20);
    RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v18);
    RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v16);
    goto LABEL_14;
  }
  *v8 = *(_DWORD *)(a1 + 124);
  v8[1] = *(_DWORD *)(a1 + 132);
  *((_QWORD *)v8 + 1) = 40LL;
  *((_QWORD *)v8 + 2) = 0LL;
  v8[6] = *(_DWORD *)(a1 + 120);
  v8[7] = *(_DWORD *)(a1 + 128);
  *((_QWORD *)v8 + 4) = 0LL;
  *(_QWORD *)(a1 + 1104) = Surface;
  *(_QWORD *)(a1 + 216) = v8;
  *(_QWORD *)(a1 + 224) = v8 + 10;
  RGNOBJ::vSet((RGNOBJ *)&v16, (struct _RECTL *)(a1 + 120));
  v10 = v16;
  *(_QWORD *)(a1 + 944) = v16;
  XCLIPOBJ::vSetup((XCLIPOBJ *)(a1 + 952), v10, (struct ERECTL *)(a1 + 120), 1);
  v11 = v20;
  *(_QWORD *)(a1 + 776) = v20;
  *(_DWORD *)(v11 + 28) = _InterlockedIncrement(*(volatile signed __int32 **)&REGION::ulUniqueREGION);
  *(_QWORD *)(a1 + 784) = v18;
  *(_QWORD *)(a1 + 1136) = GreCreateRectRgn(0LL, 0LL, 0LL, 0LL);
  *(_QWORD *)(a1 + 1272) = *(_QWORD *)(a1 + 2808);
  *(_QWORD *)(a1 + 1280) = *(_QWORD *)(a1 + 2792);
  *(_QWORD *)(a1 + 1288) = *(_QWORD *)(a1 + 2800);
  *(_QWORD *)(a1 + 1304) = *(_QWORD *)(a1 + 2824);
  *(_QWORD *)(a1 + 1312) = *(_QWORD *)(a1 + 2832);
  *(_QWORD *)(a1 + 1320) = *(_QWORD *)(a1 + 2840);
  *(_QWORD *)(a1 + 1328) = *(_QWORD *)(a1 + 2864);
  *(_QWORD *)(a1 + 1336) = *(_QWORD *)(a1 + 2928);
  *(_QWORD *)(a1 + 1344) = *(_QWORD *)(a1 + 3272);
  *(_QWORD *)(a1 + 1352) = *(_QWORD *)(a1 + 3248);
  *(_QWORD *)(a1 + 1360) = *(_QWORD *)(a1 + 3240);
  *(_QWORD *)(a1 + 1368) = *(_QWORD *)(a1 + 3224);
  *(_QWORD *)(a1 + 1384) = *(_QWORD *)(a1 + 3232);
  *(_QWORD *)(a1 + 1376) = *(_QWORD *)(a1 + 3000);
  *(_QWORD *)(a1 + 1392) = *(_QWORD *)(a1 + 3400);
  if ( (*(_DWORD *)(a1 + 40) & 0x20000) == 0 )
    vSpHook((struct _SPRITESTATE *)(a1 + 80));
  v3 = 1;
LABEL_14:
  if ( v17 == 1 )
    RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v16);
  if ( v19 == 1 )
    RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v18);
  if ( v21 == 1 )
    RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v20);
  return v3;
}
