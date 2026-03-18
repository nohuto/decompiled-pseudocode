/*
 * XREFs of bInitBRUSHOBJ @ 0x1C021AC18
 * Callers:
 *     InitializeGre @ 0x1C021A080 (InitializeGre.c)
 * Callees:
 *     GreDeleteObject @ 0x1C001CBF0 (GreDeleteObject.c)
 *     HmgShareLockCheck @ 0x1C0021790 (HmgShareLockCheck.c)
 *     ?vGlobal@BRUSHMEMOBJ@@QEAAXXZ @ 0x1C0042908 (-vGlobal@BRUSHMEMOBJ@@QEAAXXZ.c)
 *     ?bSetStockObject@@YAHPEAXHH@Z @ 0x1C0042AE0 (-bSetStockObject@@YAHPEAXHH@Z.c)
 *     GreSetBrushOwner @ 0x1C0042FF0 (GreSetBrushOwner.c)
 *     GreCreatePatternBrushInternal @ 0x1C00434E0 (GreCreatePatternBrushInternal.c)
 *     ??1BRUSHMEMOBJ@@QEAA@XZ @ 0x1C0043690 (--1BRUSHMEMOBJ@@QEAA@XZ.c)
 *     ??0BRUSHMEMOBJ@@QEAA@KKHH@Z @ 0x1C00436E0 (--0BRUSHMEMOBJ@@QEAA@KKHH@Z.c)
 *     HmgModifyHandleType @ 0x1C0043D00 (HmgModifyHandleType.c)
 *     GreCreateBitmap @ 0x1C0043DF0 (GreCreateBitmap.c)
 *     HmgMarkUndeletable @ 0x1C0044AD0 (HmgMarkUndeletable.c)
 *     bInitBrush @ 0x1C021AB6C (bInitBrush.c)
 */

__int64 bInitBRUSHOBJ()
{
  __int64 v0; // rax
  HBITMAP Bitmap; // rax
  HRGN v2; // rbx
  __int64 v3; // rax
  unsigned int v4; // ecx
  __int64 *v6[6]; // [rsp+30h] [rbp-40h] BYREF
  int v7; // [rsp+60h] [rbp-10h]

  if ( !(unsigned int)bInitBrush(0, 0xFFFFFF, 7u, &qword_1C01C81B8, 0)
    || !(unsigned int)bInitBrush(4, 0, 7u, 0LL, 0)
    || !(unsigned int)bInitBrush(2, 8421504, 7u, 0LL, 1)
    || !(unsigned int)bInitBrush(3, 4210752, 7u, 0LL, 1)
    || !(unsigned int)bInitBrush(1, 12632256, 7u, 0LL, 1)
    || !(unsigned int)bInitBrush(5, 0, 0xCu, &gpbrNull, 0) )
  {
    return 0LL;
  }
  BRUSHMEMOBJ::BRUSHMEMOBJ((BRUSHMEMOBJ *)v6, 0, 0xCu, 1, 0);
  if ( v6[0] )
  {
    v7 = 1;
    BRUSHMEMOBJ::vGlobal(v6);
    *((_DWORD *)v6[0] + 10) |= 0xC00u;
    *((_DWORD *)v6[0] + 44) = 5;
    *((_DWORD *)v6[0] + 42) = 1;
    HmgModifyHandleType(*v6[0] | 0x300000);
    bSetStockObject(*v6[0], 8, 0);
    gpPenNull = (struct PEN *)v6[0];
    BRUSHMEMOBJ::~BRUSHMEMOBJ((HBRUSH **)v6);
    BRUSHMEMOBJ::BRUSHMEMOBJ((BRUSHMEMOBJ *)v6, 0, 7u, 1, 0);
    if ( v6[0] )
    {
      v7 = 1;
      BRUSHMEMOBJ::vGlobal(v6);
      *((_DWORD *)v6[0] + 10) |= 0xC00u;
      *((_DWORD *)v6[0] + 44) = 0;
      *((_DWORD *)v6[0] + 42) = 0;
      *((_DWORD *)v6[0] + 43) = 0;
      *((_BYTE *)v6[0] + 184) = 0;
      *((_BYTE *)v6[0] + 185) = 0;
      v6[0][19] = 0LL;
      HmgModifyHandleType(*v6[0] | 0x300000);
      bSetStockObject(*v6[0], 7, 0);
      v0 = *v6[0];
      qword_1C01C81C0 = (__int64)v6[0];
      qword_1C01CCC28 = v0;
      BRUSHMEMOBJ::~BRUSHMEMOBJ((HBRUSH **)v6);
      BRUSHMEMOBJ::BRUSHMEMOBJ((BRUSHMEMOBJ *)v6, 0xFFFFFF, 7u, 1, 0);
      if ( v6[0] )
      {
        v7 = 1;
        BRUSHMEMOBJ::vGlobal(v6);
        *((_DWORD *)v6[0] + 10) |= 0xC00u;
        *((_DWORD *)v6[0] + 44) = 0;
        *((_DWORD *)v6[0] + 42) = 0;
        *((_DWORD *)v6[0] + 43) = 0;
        *((_BYTE *)v6[0] + 184) = 0;
        *((_BYTE *)v6[0] + 185) = 0;
        v6[0][19] = 0LL;
        HmgModifyHandleType(*v6[0] | 0x300000);
        bSetStockObject(*v6[0], 6, 0);
        BRUSHMEMOBJ::~BRUSHMEMOBJ((HBRUSH **)v6);
        BRUSHMEMOBJ::BRUSHMEMOBJ((BRUSHMEMOBJ *)v6, 0, 7u, 1, 0);
        if ( v6[0] )
        {
          v7 = 1;
          BRUSHMEMOBJ::vGlobal(v6);
          *((_DWORD *)v6[0] + 10) |= 0xC00u;
          *((_DWORD *)v6[0] + 44) = 0;
          *((_DWORD *)v6[0] + 42) = 0;
          *((_DWORD *)v6[0] + 43) = 0;
          *((_BYTE *)v6[0] + 184) = 0;
          *((_BYTE *)v6[0] + 185) = 0;
          v6[0][19] = 0LL;
          HmgModifyHandleType(*v6[0] | 0x300000);
          bSetStockObject(*v6[0], 19, 0);
          gpbrDCPen = (struct BRUSH *)v6[0];
          BRUSHMEMOBJ::~BRUSHMEMOBJ((HBRUSH **)v6);
          BRUSHMEMOBJ::BRUSHMEMOBJ((BRUSHMEMOBJ *)v6, 0, 9u, 0, 0);
          if ( v6[0] )
          {
            v7 = 1;
            BRUSHMEMOBJ::vGlobal(v6);
            gpbrText = (struct BRUSH *)v6[0];
            BRUSHMEMOBJ::~BRUSHMEMOBJ((HBRUSH **)v6);
            BRUSHMEMOBJ::BRUSHMEMOBJ((BRUSHMEMOBJ *)v6, 0xFFFFFF, 0xBu, 0, 0);
            if ( v6[0] )
            {
              v7 = 1;
              BRUSHMEMOBJ::vGlobal(v6);
              gpbrBackground = (struct BRUSH *)v6[0];
              BRUSHMEMOBJ::~BRUSHMEMOBJ((HBRUSH **)v6);
              Bitmap = (HBITMAP)GreCreateBitmap(8, 8, 1u, 1u, (__int64)&unk_1C01C8798);
              v2 = (HRGN)Bitmap;
              if ( !Bitmap )
                return 0LL;
              ghbrGrayPattern = (HBRUSH)GreCreatePatternBrushInternal(Bitmap, 0, 0);
              if ( !ghbrGrayPattern )
                return 0LL;
              GreDeleteObject(v2);
              GreSetBrushOwner(ghbrGrayPattern, 0);
              v3 = HmgShareLockCheck((unsigned int)ghbrGrayPattern, 16);
              if ( !v3 )
                return 0LL;
              v4 = (unsigned int)ghbrGrayPattern;
              *(_DWORD *)(v3 + 40) |= 0x200u;
              HmgMarkUndeletable(v4, 16);
              BRUSHMEMOBJ::BRUSHMEMOBJ((BRUSHMEMOBJ *)v6, 0xFFFFFF, 7u, 0, 0);
              if ( v6[0] )
              {
                v7 = 1;
                BRUSHMEMOBJ::vGlobal(v6);
                bSetStockObject(*v6[0], 18, 0);
                gpbrDCBrush = (struct BRUSH *)v6[0];
                BRUSHMEMOBJ::~BRUSHMEMOBJ((HBRUSH **)v6);
                return 1LL;
              }
            }
          }
        }
      }
    }
  }
  BRUSHMEMOBJ::~BRUSHMEMOBJ((HBRUSH **)v6);
  return 0LL;
}
