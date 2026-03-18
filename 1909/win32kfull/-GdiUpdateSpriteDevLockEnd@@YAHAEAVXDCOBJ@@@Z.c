/*
 * XREFs of ?GdiUpdateSpriteDevLockEnd@@YAHAEAVXDCOBJ@@@Z @ 0x1C0163758
 * Callers:
 *     ?GreUpdateSpriteDevLockEnd@@YAHAEAVXDCOBJ@@H@Z @ 0x1C00AED20 (-GreUpdateSpriteDevLockEnd@@YAHAEAVXDCOBJ@@H@Z.c)
 * Callees:
 *     ?vDeleteREGION@REGION@@QEAAXXZ @ 0x1C008C9BC (-vDeleteREGION@REGION@@QEAAXXZ.c)
 *     ?iComplexity@RGNOBJ@@QEBAJXZ @ 0x1C00AAE4C (-iComplexity@RGNOBJ@@QEBAJXZ.c)
 *     ?bEnum@XCLIPOBJ@@QEAAHKPEAXPEAK@Z @ 0x1C00D5518 (-bEnum@XCLIPOBJ@@QEAAHKPEAXPEAK@Z.c)
 *     ?cEnumStart@XCLIPOBJ@@QEAAKHKKK@Z @ 0x1C00D5CE8 (-cEnumStart@XCLIPOBJ@@QEAAKHKKK@Z.c)
 *     ?bSpUpdateSpriteDevLockEnd@@YAHPEAUHDEV__@@AEAVXDCOBJ@@PEAU_RECTL@@@Z @ 0x1C01638B4 (-bSpUpdateSpriteDevLockEnd@@YAHPEAUHDEV__@@AEAVXDCOBJ@@PEAU_RECTL@@@Z.c)
 *     ??0UNDOENGUPDATEDEVICESURFACE@@QEAA@XZ @ 0x1C0163984 (--0UNDOENGUPDATEDEVICESURFACE@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1C0163A80 (__security_check_cookie.c)
 *     memset @ 0x1C0168440 (memset.c)
 */

__int64 __fastcall GdiUpdateSpriteDevLockEnd(struct XDCOBJ *a1)
{
  HDEV HDEV; // r14
  __int64 v4; // r8
  int v5; // ebx
  struct _RECTL v6; // xmm0
  unsigned int i; // esi
  struct _RECTL *v8; // r8
  struct REGION *v9; // [rsp+38h] [rbp-D0h] BYREF
  HDEV v10; // [rsp+40h] [rbp-C8h] BYREF
  _BYTE v11[8]; // [rsp+48h] [rbp-C0h] BYREF
  __int64 v12; // [rsp+50h] [rbp-B8h] BYREF
  __int64 v13; // [rsp+58h] [rbp-B0h]
  struct _RECTL v14; // [rsp+60h] [rbp-A8h] BYREF
  _BYTE v15[20]; // [rsp+78h] [rbp-90h] BYREF
  char v16; // [rsp+8Ch] [rbp-7Ch]
  __int64 v17; // [rsp+B0h] [rbp-58h]
  __int64 v18; // [rsp+C8h] [rbp-40h]
  int v19; // [rsp+D0h] [rbp-38h]
  int v20; // [rsp+F8h] [rbp-10h]
  __int64 v21; // [rsp+108h] [rbp+0h]
  _DWORD v22[84]; // [rsp+118h] [rbp+10h] BYREF

  HDEV = (HDEV)UserGetHDEV();
  if ( !(unsigned int)GreGetBounds(**(_QWORD **)a1, &v14, 4LL) )
  {
LABEL_7:
    REGION::vDeleteREGION(*(REGION **)(*(_QWORD *)a1 + 1168LL));
    *(_QWORD *)(*(_QWORD *)a1 + 1168LL) = 0LL;
    return 0LL;
  }
  v10 = HDEV;
  if ( ((_DWORD)HDEV[10] & 0x400) == 0 )
  {
    PDEVOBJ::bAllowShareAccess((PDEVOBJ *)&v10);
    UNDOENGUPDATEDEVICESURFACE::UNDOENGUPDATEDEVICESURFACE((UNDOENGUPDATEDEVICESURFACE *)&v12);
    SPRITELOCK::SPRITELOCK((SPRITELOCK *)v11, (struct PDEVOBJ *)&v10);
    v9 = *(struct REGION **)(*(_QWORD *)a1 + 1168LL);
    if ( !v9 )
    {
      bSpUpdateSpriteDevLockEnd(HDEV, a1, &v14);
      goto LABEL_5;
    }
    if ( (unsigned int)RGNOBJ::iComplexity((RGNOBJ *)&v9) == 1 )
      goto LABEL_5;
    RGNOBJ::bOffset((RGNOBJ *)&v9, (struct _POINTL *)(v4 + 1016 + 8LL * (*(_DWORD *)(v4 + 40) & 1)));
    v18 = 0LL;
    v19 = 0;
    v21 = 0LL;
    v17 = 0LL;
    v20 = 1;
    XCLIPOBJ::vSetup((XCLIPOBJ *)v15, v9, (struct ERECTL *)&v14, 1);
    memset(v22, 0, 0x144uLL);
    if ( v16 )
    {
      if ( v16 != 1 )
      {
        if ( v16 == 3 )
        {
          v5 = 1;
          XCLIPOBJ::cEnumStart((XCLIPOBJ *)v15, 0, 0, 4u, 0x14u);
LABEL_17:
          if ( !v5 )
            goto LABEL_19;
          do
          {
            v5 = XCLIPOBJ::bEnum((XCLIPOBJ *)v15, 0x144u, (char *)v22, 0LL);
LABEL_19:
            for ( i = 0; i < v22[0]; ++i )
            {
              v8 = (struct _RECTL *)&v22[4 * i + 1];
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
          *(_DWORD *)(v13 + 328) ^= (*(_DWORD *)(v13 + 328) ^ (unsigned __int8)v12) & 1;
        goto LABEL_7;
      }
      v6 = *(struct _RECTL *)&v15[4];
    }
    else
    {
      v6 = v14;
    }
    *(struct _RECTL *)&v22[1] = v6;
    v22[0] = 1;
    v5 = 0;
    goto LABEL_17;
  }
  return 0LL;
}
