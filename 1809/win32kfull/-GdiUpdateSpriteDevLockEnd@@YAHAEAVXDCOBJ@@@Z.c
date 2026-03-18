/*
 * XREFs of ?GdiUpdateSpriteDevLockEnd@@YAHAEAVXDCOBJ@@@Z @ 0x1C015ABFC
 * Callers:
 *     ?GreUpdateSpriteDevLockEnd@@YAHAEAVXDCOBJ@@H@Z @ 0x1C00591F0 (-GreUpdateSpriteDevLockEnd@@YAHAEAVXDCOBJ@@H@Z.c)
 * Callees:
 *     ?vDeleteREGION@REGION@@QEAAXXZ @ 0x1C000E3D4 (-vDeleteREGION@REGION@@QEAAXXZ.c)
 *     ?iComplexity@RGNOBJ@@QEBAJXZ @ 0x1C0056B74 (-iComplexity@RGNOBJ@@QEBAJXZ.c)
 *     ?bEnum@XCLIPOBJ@@QEAAHKPEAXPEAK@Z @ 0x1C008B104 (-bEnum@XCLIPOBJ@@QEAAHKPEAXPEAK@Z.c)
 *     ?cEnumStart@XCLIPOBJ@@QEAAKHKKK@Z @ 0x1C00F22E4 (-cEnumStart@XCLIPOBJ@@QEAAKHKKK@Z.c)
 *     ?bSpUpdateSpriteDevLockEnd@@YAHPEAUHDEV__@@AEAVXDCOBJ@@PEAU_RECTL@@@Z @ 0x1C015AD40 (-bSpUpdateSpriteDevLockEnd@@YAHPEAUHDEV__@@AEAVXDCOBJ@@PEAU_RECTL@@@Z.c)
 *     ??0UNDOENGUPDATEDEVICESURFACE@@QEAA@XZ @ 0x1C015AE2C (--0UNDOENGUPDATEDEVICESURFACE@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1C015AF60 (__security_check_cookie.c)
 */

__int64 __fastcall GdiUpdateSpriteDevLockEnd(struct XDCOBJ *a1)
{
  HDEV HDEV; // r14
  __int64 v4; // r8
  int v5; // ebx
  struct _RECTL v6; // xmm0
  unsigned int i; // esi
  struct _RECTL *v8; // r8
  struct REGION *v9; // [rsp+30h] [rbp-D0h] BYREF
  HDEV v10; // [rsp+38h] [rbp-C8h] BYREF
  _BYTE v11[8]; // [rsp+40h] [rbp-C0h] BYREF
  _BYTE v12[8]; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v13; // [rsp+50h] [rbp-B0h]
  struct _RECTL v14; // [rsp+58h] [rbp-A8h] BYREF
  _BYTE v15[4]; // [rsp+70h] [rbp-90h] BYREF
  struct _RECTL v16; // [rsp+74h] [rbp-8Ch]
  char v17; // [rsp+84h] [rbp-7Ch]
  __int64 v18; // [rsp+A8h] [rbp-58h]
  __int64 v19; // [rsp+C0h] [rbp-40h]
  int v20; // [rsp+C8h] [rbp-38h]
  int v21; // [rsp+F0h] [rbp-10h]
  __int64 v22; // [rsp+100h] [rbp+0h]
  unsigned int v23; // [rsp+110h] [rbp+10h] BYREF
  _OWORD v24[20]; // [rsp+114h] [rbp+14h] BYREF

  HDEV = (HDEV)UserGetHDEV();
  if ( !(unsigned int)GreGetBounds(**(_QWORD **)a1, &v14, 4LL) )
  {
LABEL_7:
    REGION::vDeleteREGION(*(REGION **)(*(_QWORD *)a1 + 1192LL));
    *(_QWORD *)(*(_QWORD *)a1 + 1192LL) = 0LL;
    return 0LL;
  }
  v10 = HDEV;
  if ( ((_DWORD)HDEV[10] & 0x400) == 0 )
  {
    PDEVOBJ::bAllowShareAccess((PDEVOBJ *)&v10);
    UNDOENGUPDATEDEVICESURFACE::UNDOENGUPDATEDEVICESURFACE((UNDOENGUPDATEDEVICESURFACE *)v12);
    SPRITELOCK::SPRITELOCK((SPRITELOCK *)v11, (struct PDEVOBJ *)&v10);
    v9 = *(struct REGION **)(*(_QWORD *)a1 + 1192LL);
    if ( !v9 )
    {
      bSpUpdateSpriteDevLockEnd(HDEV, a1, &v14);
      goto LABEL_5;
    }
    if ( (unsigned int)RGNOBJ::iComplexity((RGNOBJ *)&v9) == 1 )
      goto LABEL_5;
    RGNOBJ::bOffset((RGNOBJ *)&v9, (struct _POINTL *)(v4 + 8 * ((*(_DWORD *)(v4 + 40) & 1) + 127LL)));
    v19 = 0LL;
    v20 = 0;
    v22 = 0LL;
    v18 = 0LL;
    v21 = 1;
    XCLIPOBJ::vSetup((XCLIPOBJ *)v15, v9, (struct ERECTL *)&v14, 1);
    if ( v17 )
    {
      if ( v17 != 1 )
      {
        if ( v17 == 3 )
        {
          v5 = 1;
          XCLIPOBJ::cEnumStart((XCLIPOBJ *)v15, 0, 0, 4u, 0x14u);
LABEL_17:
          if ( !v5 )
            goto LABEL_19;
          do
          {
            v5 = XCLIPOBJ::bEnum((XCLIPOBJ *)v15, 0x144u, (char *)&v23, 0LL);
LABEL_19:
            for ( i = 0; i < v23; ++i )
            {
              v8 = (struct _RECTL *)&v24[i];
              if ( v8->left < v14.left )
                v8->left = v14.left;
              if ( v8->right > v14.right )
                v8->right = v14.right;
              if ( v8->top < v14.top )
                v8->top = v14.top;
              if ( v8->bottom > v14.bottom )
                v8->bottom = v14.bottom;
              bSpUpdateSpriteDevLockEnd(HDEV, a1, v8);
            }
          }
          while ( v5 );
        }
LABEL_5:
        SPRITELOCK::~SPRITELOCK((SPRITELOCK *)v11);
        if ( v13 )
          *(_BYTE *)(v13 + 328) = v12[0];
        goto LABEL_7;
      }
      v6 = v16;
    }
    else
    {
      v6 = v14;
    }
    v24[0] = v6;
    v23 = 1;
    v5 = 0;
    goto LABEL_17;
  }
  return 0LL;
}
