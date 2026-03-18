/*
 * XREFs of ?GdiUpdateSpriteDevLockEnd@@YAHAEAVXDCOBJ@@@Z @ 0x1C024B22C
 * Callers:
 *     ?GreUpdateSpriteDevLockEnd@@YAHAEAVXDCOBJ@@H@Z @ 0x1C008A810 (-GreUpdateSpriteDevLockEnd@@YAHAEAVXDCOBJ@@H@Z.c)
 * Callees:
 *     ?iComplexity@RGNOBJ@@QEBAJXZ @ 0x1C0078C9C (-iComplexity@RGNOBJ@@QEBAJXZ.c)
 *     ?bEnum@XCLIPOBJ@@QEAAHKPEAXPEAK@Z @ 0x1C0090AA4 (-bEnum@XCLIPOBJ@@QEAAHKPEAXPEAK@Z.c)
 *     ?cEnumStart@XCLIPOBJ@@QEAAKHKKK@Z @ 0x1C0090CA0 (-cEnumStart@XCLIPOBJ@@QEAAKHKKK@Z.c)
 *     ?vDeleteREGION@REGION@@QEAAXXZ @ 0x1C00C7FE4 (-vDeleteREGION@REGION@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C0139660 (__security_check_cookie.c)
 *     ??0UNDOENGUPDATEDEVICESURFACE@@QEAA@XZ @ 0x1C024988C (--0UNDOENGUPDATEDEVICESURFACE@@QEAA@XZ.c)
 *     ?bSpUpdateSpriteDevLockEnd@@YAHPEAUHDEV__@@AEAVXDCOBJ@@PEAU_RECTL@@@Z @ 0x1C024FC50 (-bSpUpdateSpriteDevLockEnd@@YAHPEAUHDEV__@@AEAVXDCOBJ@@PEAU_RECTL@@@Z.c)
 */

__int64 __fastcall GdiUpdateSpriteDevLockEnd(struct XDCOBJ *a1)
{
  HDEV HDEV; // r14
  __int64 v3; // rdx
  __int64 v4; // r8
  int v5; // ebx
  struct _RECTL v6; // xmm0
  unsigned int i; // esi
  struct _RECTL *v8; // r8
  struct REGION *v10; // [rsp+30h] [rbp-D0h] BYREF
  HDEV v11; // [rsp+38h] [rbp-C8h] BYREF
  _BYTE v12[8]; // [rsp+40h] [rbp-C0h] BYREF
  _BYTE v13[8]; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v14; // [rsp+50h] [rbp-B0h]
  struct _RECTL v15; // [rsp+58h] [rbp-A8h] BYREF
  _BYTE v16[4]; // [rsp+70h] [rbp-90h] BYREF
  struct _RECTL v17; // [rsp+74h] [rbp-8Ch]
  char v18; // [rsp+84h] [rbp-7Ch]
  __int64 v19; // [rsp+A8h] [rbp-58h]
  __int64 v20; // [rsp+C0h] [rbp-40h]
  int v21; // [rsp+C8h] [rbp-38h]
  int v22; // [rsp+F0h] [rbp-10h]
  __int64 v23; // [rsp+100h] [rbp+0h]
  unsigned int v24; // [rsp+110h] [rbp+10h] BYREF
  _OWORD v25[20]; // [rsp+114h] [rbp+14h] BYREF

  HDEV = (HDEV)UserGetHDEV();
  if ( !(unsigned int)GreGetBounds(**(_QWORD **)a1, &v15, 4LL) )
  {
LABEL_28:
    REGION::vDeleteREGION(*(REGION **)(*(_QWORD *)a1 + 1576LL));
    *(_QWORD *)(*(_QWORD *)a1 + 1576LL) = 0LL;
    return 0LL;
  }
  v11 = HDEV;
  if ( ((_DWORD)HDEV[10] & 0x400) == 0 )
  {
    PDEVOBJ::bAllowShareAccess((PDEVOBJ *)&v11);
    UNDOENGUPDATEDEVICESURFACE::UNDOENGUPDATEDEVICESURFACE((UNDOENGUPDATEDEVICESURFACE *)v13, v3);
    SPRITELOCK::SPRITELOCK((SPRITELOCK *)v12, (struct PDEVOBJ *)&v11);
    v10 = *(struct REGION **)(*(_QWORD *)a1 + 1576LL);
    if ( !v10 )
    {
      bSpUpdateSpriteDevLockEnd(HDEV, a1, &v15);
      goto LABEL_26;
    }
    if ( (unsigned int)RGNOBJ::iComplexity((RGNOBJ *)&v10) == 1 )
      goto LABEL_26;
    RGNOBJ::bOffset((RGNOBJ *)&v10, (struct _POINTL *)(v4 + 8 * ((*(_DWORD *)(v4 + 40) & 1) + 178LL)));
    v20 = 0LL;
    v21 = 0;
    v23 = 0LL;
    v19 = 0LL;
    v22 = 1;
    XCLIPOBJ::vSetup((XCLIPOBJ *)v16, v10, (struct ERECTL *)&v15, 1);
    if ( v18 )
    {
      if ( v18 != 1 )
      {
        if ( v18 == 3 )
        {
          v5 = 1;
          XCLIPOBJ::cEnumStart((XCLIPOBJ *)v16, 0, 0, 4u, 0x14u);
LABEL_13:
          if ( !v5 )
            goto LABEL_15;
          do
          {
            v5 = XCLIPOBJ::bEnum((XCLIPOBJ *)v16, 0x144u, (char *)&v24, 0LL);
LABEL_15:
            for ( i = 0; i < v24; ++i )
            {
              v8 = (struct _RECTL *)&v25[i];
              if ( v8->left < v15.left )
                v8->left = v15.left;
              if ( v8->right > v15.right )
                v8->right = v15.right;
              if ( v8->top < v15.top )
                v8->top = v15.top;
              if ( v8->bottom > v15.bottom )
                v8->bottom = v15.bottom;
              bSpUpdateSpriteDevLockEnd(HDEV, a1, v8);
            }
          }
          while ( v5 );
        }
LABEL_26:
        SPRITELOCK::~SPRITELOCK((SPRITELOCK *)v12);
        if ( v14 )
          *(_BYTE *)(v14 + 328) = v13[0];
        goto LABEL_28;
      }
      v6 = v17;
    }
    else
    {
      v6 = v15;
    }
    v25[0] = v6;
    v24 = 1;
    v5 = 0;
    goto LABEL_13;
  }
  return 0LL;
}
