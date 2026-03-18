/*
 * XREFs of bInitBRUSHOBJ @ 0x1C01F35BC
 * Callers:
 *     InitializeGre @ 0x1C01F40E8 (InitializeGre.c)
 * Callees:
 *     GreDeleteObject @ 0x1C001E0C0 (GreDeleteObject.c)
 *     GreSetBrushOwner @ 0x1C00277C0 (GreSetBrushOwner.c)
 *     HmgShareLockCheck @ 0x1C002CA80 (HmgShareLockCheck.c)
 *     GreCreateBitmap @ 0x1C003D960 (GreCreateBitmap.c)
 *     GreCreatePatternBrushInternal @ 0x1C0041420 (GreCreatePatternBrushInternal.c)
 *     ??1BRUSHMEMOBJ@@QEAA@XZ @ 0x1C00437D8 (--1BRUSHMEMOBJ@@QEAA@XZ.c)
 *     ??0BRUSHMEMOBJ@@QEAA@KKHH@Z @ 0x1C0043810 (--0BRUSHMEMOBJ@@QEAA@KKHH@Z.c)
 *     HmgMarkUndeletable @ 0x1C00631F0 (HmgMarkUndeletable.c)
 *     HmgModifyHandleType @ 0x1C0065050 (HmgModifyHandleType.c)
 *     ?vGlobal@BRUSHMEMOBJ@@QEAAXXZ @ 0x1C00BFB60 (-vGlobal@BRUSHMEMOBJ@@QEAAXXZ.c)
 *     ?bSetStockObject@@YAHPEAXHH@Z @ 0x1C00C8310 (-bSetStockObject@@YAHPEAXHH@Z.c)
 *     bInitBrush @ 0x1C01F39FC (bInitBrush.c)
 */

__int64 bInitBRUSHOBJ()
{
  struct HOBJ__ **v0; // rbx
  struct HOBJ__ **v1; // rbx
  struct HOBJ__ **v2; // rbx
  struct HOBJ__ **v3; // rbx
  struct BRUSH *v4; // rbx
  struct BRUSH *v5; // rbx
  HBITMAP Bitmap; // rax
  HBRUSH v7; // rbx
  __int64 v8; // rax
  unsigned int v9; // ecx
  unsigned __int64 *v10; // rbx
  struct HOBJ__ **v12[2]; // [rsp+30h] [rbp-20h] BYREF
  int v13; // [rsp+40h] [rbp-10h]

  if ( !(unsigned int)bInitBrush(0, 0)
    || !(unsigned int)bInitBrush(4, 0)
    || !(unsigned int)bInitBrush(2, 1)
    || !(unsigned int)bInitBrush(3, 1)
    || !(unsigned int)bInitBrush(1, 1)
    || !(unsigned int)bInitBrush(5, 0) )
  {
    return 0LL;
  }
  BRUSHMEMOBJ::BRUSHMEMOBJ((BRUSHMEMOBJ *)v12, 0, 0xCu, 1, 0);
  v0 = v12[0];
  if ( v12[0] )
  {
    v13 = 1;
    BRUSHMEMOBJ::vGlobal((BRUSHMEMOBJ *)v12);
    *((_DWORD *)v0 + 10) |= 0xC00u;
    *((_DWORD *)v0 + 44) = 5;
    *((_DWORD *)v0 + 42) = 1;
    HmgModifyHandleType((unsigned __int64)*v0 | 0x300000);
    bSetStockObject((unsigned __int64)*v0, 8, 0);
    gpPenNull = (struct PEN *)v0;
    BRUSHMEMOBJ::~BRUSHMEMOBJ(v12);
    BRUSHMEMOBJ::BRUSHMEMOBJ((BRUSHMEMOBJ *)v12, 0, 7u, 1, 0);
    v1 = v12[0];
    if ( v12[0] )
    {
      v13 = 1;
      BRUSHMEMOBJ::vGlobal((BRUSHMEMOBJ *)v12);
      *((_DWORD *)v1 + 10) |= 0xC00u;
      *(struct HOBJ__ **)((char *)v1 + 172) = 0LL;
      *((_DWORD *)v1 + 42) = 0;
      *((_WORD *)v1 + 92) = 0;
      v1[19] = 0LL;
      HmgModifyHandleType((unsigned __int64)*v1 | 0x300000);
      bSetStockObject((unsigned __int64)*v1, 7, 0);
      qword_1C019F4F8 = (__int64)*v1;
      qword_1C019F350 = (__int64)v1;
      BRUSHMEMOBJ::~BRUSHMEMOBJ(v12);
      BRUSHMEMOBJ::BRUSHMEMOBJ((BRUSHMEMOBJ *)v12, 0xFFFFFF, 7u, 1, 0);
      v2 = v12[0];
      if ( v12[0] )
      {
        v13 = 1;
        BRUSHMEMOBJ::vGlobal((BRUSHMEMOBJ *)v12);
        *((_DWORD *)v2 + 10) |= 0xC00u;
        *(struct HOBJ__ **)((char *)v2 + 172) = 0LL;
        *((_DWORD *)v2 + 42) = 0;
        *((_WORD *)v2 + 92) = 0;
        v2[19] = 0LL;
        HmgModifyHandleType((unsigned __int64)*v2 | 0x300000);
        bSetStockObject((unsigned __int64)*v2, 6, 0);
        BRUSHMEMOBJ::~BRUSHMEMOBJ(v12);
        BRUSHMEMOBJ::BRUSHMEMOBJ((BRUSHMEMOBJ *)v12, 0, 7u, 1, 0);
        v3 = v12[0];
        if ( v12[0] )
        {
          v13 = 1;
          BRUSHMEMOBJ::vGlobal((BRUSHMEMOBJ *)v12);
          *((_DWORD *)v3 + 10) |= 0xC00u;
          *(struct HOBJ__ **)((char *)v3 + 172) = 0LL;
          *((_DWORD *)v3 + 42) = 0;
          *((_WORD *)v3 + 92) = 0;
          v3[19] = 0LL;
          HmgModifyHandleType((unsigned __int64)*v3 | 0x300000);
          bSetStockObject((unsigned __int64)*v3, 19, 0);
          gpbrDCPen = (struct BRUSH *)v3;
          BRUSHMEMOBJ::~BRUSHMEMOBJ(v12);
          BRUSHMEMOBJ::BRUSHMEMOBJ((BRUSHMEMOBJ *)v12, 0, 9u, 0, 0);
          v4 = (struct BRUSH *)v12[0];
          if ( v12[0] )
          {
            v13 = 1;
            BRUSHMEMOBJ::vGlobal((BRUSHMEMOBJ *)v12);
            gpbrText = v4;
            BRUSHMEMOBJ::~BRUSHMEMOBJ(v12);
            BRUSHMEMOBJ::BRUSHMEMOBJ((BRUSHMEMOBJ *)v12, 0xFFFFFF, 0xBu, 0, 0);
            v5 = (struct BRUSH *)v12[0];
            if ( v12[0] )
            {
              v13 = 1;
              BRUSHMEMOBJ::vGlobal((BRUSHMEMOBJ *)v12);
              gpbrBackground = v5;
              BRUSHMEMOBJ::~BRUSHMEMOBJ(v12);
              Bitmap = (HBITMAP)GreCreateBitmap(8, 8, 1u, 1u, (__int64)&unk_1C019F7D0);
              v7 = (HBRUSH)Bitmap;
              if ( !Bitmap )
                return 0LL;
              ghbrGrayPattern = (HBRUSH)GreCreatePatternBrushInternal(Bitmap, 0, 0);
              if ( !ghbrGrayPattern )
                return 0LL;
              GreDeleteObject(v7);
              GreSetBrushOwner(ghbrGrayPattern, 0);
              v8 = HmgShareLockCheck((unsigned int)ghbrGrayPattern, 16);
              if ( !v8 )
                return 0LL;
              v9 = (unsigned int)ghbrGrayPattern;
              *(_DWORD *)(v8 + 40) |= 0x200u;
              HmgMarkUndeletable(v9, 16);
              BRUSHMEMOBJ::BRUSHMEMOBJ((BRUSHMEMOBJ *)v12, 0xFFFFFF, 7u, 0, 0);
              v10 = (unsigned __int64 *)v12[0];
              if ( v12[0] )
              {
                v13 = 1;
                BRUSHMEMOBJ::vGlobal((BRUSHMEMOBJ *)v12);
                bSetStockObject(*v10, 18, 0);
                gpbrDCBrush = (struct BRUSH *)v10;
                BRUSHMEMOBJ::~BRUSHMEMOBJ(v12);
                return 1LL;
              }
            }
          }
        }
      }
    }
  }
  BRUSHMEMOBJ::~BRUSHMEMOBJ(v12);
  return 0LL;
}
