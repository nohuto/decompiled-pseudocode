/*
 * XREFs of ??$AppendRects@V?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@CRegion@@QEAAJPEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@I@Z @ 0x1800BAAD8
 * Callers:
 *     ?TryOptimizedCombinePaths@CShape@@CAJPEAV1@PEBVCMILMatrix@@01W4Enum@MilCombineMode@@PEAPEAV1@@Z @ 0x18004D4E0 (-TryOptimizedCombinePaths@CShape@@CAJPEAV1@PEBVCMILMatrix@@01W4Enum@MilCombineMode@@PEAPEAV1@@Z.c)
 *     ?PostSubgraph@COcclusionContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x180088CE0 (-PostSubgraph@COcclusionContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ?GetContentRegion@CPrimitiveGroupDrawListGenerator@@QEAAPEBVCRegion@@XZ @ 0x180256C00 (-GetContentRegion@CPrimitiveGroupDrawListGenerator@@QEAAPEBVCRegion@@XZ.c)
 * Callees:
 *     ??0CRegion@FastRegion@@QEAA@AEBUtagRECT@@@Z @ 0x1800518E4 (--0CRegion@FastRegion@@QEAA@AEBUtagRECT@@@Z.c)
 *     ?SaveResult@CRegion@FastRegion@@IEAAJPEAVCWorkBuffer@Internal@2@@Z @ 0x18006B6F0 (-SaveResult@CRegion@FastRegion@@IEAAJPEAVCWorkBuffer@Internal@2@@Z.c)
 *     ?Union@CRgnData@Internal@FastRegion@@QEAAXAEBV123@0@Z @ 0x18006D570 (-Union@CRgnData@Internal@FastRegion@@QEAAXAEBV123@0@Z.c)
 *     ?EstimateSizeUnion@CRgnData@Internal@FastRegion@@SAHAEBV123@0@Z @ 0x18006DFB0 (-EstimateSizeUnion@CRgnData@Internal@FastRegion@@SAHAEBV123@0@Z.c)
 *     ?Copy@CRegion@FastRegion@@QEAAJAEBV12@@Z @ 0x18006E3F8 (-Copy@CRegion@FastRegion@@QEAAJAEBV12@@Z.c)
 *     ??3@YAXPEAX@Z @ 0x18007004C (--3@YAXPEAX@Z.c)
 *     ?FreeMemory@CRegion@FastRegion@@IEAAXXZ @ 0x1800BA758 (-FreeMemory@CRegion@FastRegion@@IEAAXXZ.c)
 *     ?Union@CRegion@FastRegion@@QEAAJAEBV12@@Z @ 0x1800BA8B4 (-Union@CRegion@FastRegion@@QEAAJAEBV12@@Z.c)
 *     ?SetupBuffer@CWorkBuffer@Internal@FastRegion@@QEAAJH@Z @ 0x1800BAE2C (-SetupBuffer@CWorkBuffer@Internal@FastRegion@@QEAAJH@Z.c)
 *     __security_check_cookie @ 0x1800E7E60 (__security_check_cookie.c)
 *     ??1CWorkBuffer@Internal@FastRegion@@QEAA@XZ @ 0x18015E2F4 (--1CWorkBuffer@Internal@FastRegion@@QEAA@XZ.c)
 */

__int64 __fastcall CRegion::AppendRects<TMilRect_<float,MilRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>>(
        const struct FastRegion::Internal::CRgnData **this,
        __int64 a2)
{
  struct FastRegion::Internal::CRgnData *v2; // r8
  unsigned int v3; // ebx
  unsigned int v6; // r14d
  float *v7; // rax
  int v8; // r11d
  int v9; // edi
  int v10; // r9d
  int v11; // r10d
  int v12; // edi
  int v14; // eax
  float *v15; // rsi
  struct tagRECT v16; // [rsp+20h] [rbp-E0h]
  struct tagRECT v17; // [rsp+30h] [rbp-D0h] BYREF
  struct FastRegion::Internal::CRgnData *v18; // [rsp+40h] [rbp-C0h] BYREF
  _DWORD v19[18]; // [rsp+48h] [rbp-B8h] BYREF
  void *v20[10]; // [rsp+90h] [rbp-70h] BYREF
  int v21; // [rsp+E0h] [rbp-20h] BYREF
  void *lpMem; // [rsp+E8h] [rbp-18h]
  _BYTE v23[256]; // [rsp+F0h] [rbp-10h] BYREF

  v19[0] = 0;
  v2 = (struct FastRegion::Internal::CRgnData *)v19;
  v3 = 0;
  v18 = (struct FastRegion::Internal::CRgnData *)v19;
  while ( 1 )
  {
    v6 = v3 + 5;
    if ( v3 + 5 > 1 )
      v6 = 1;
    v7 = (float *)(a2 + 16LL * v3);
    v8 = (int)*v7;
    v9 = (int)v7[2];
    v10 = (int)v7[1];
    v11 = (int)v7[3];
    if ( v8 >= v9 || v10 >= v11 )
    {
      *(_DWORD *)v2 = 0;
    }
    else
    {
      *(_DWORD *)v2 = 2;
      *((_DWORD *)v2 + 1) = v8;
      *((_DWORD *)v2 + 2) = v9;
      *((_DWORD *)v2 + 3) = v10;
      *((_DWORD *)v2 + 4) = 16;
      *((_DWORD *)v2 + 7) = v8;
      *((_DWORD *)v2 + 8) = v9;
      *((_DWORD *)v2 + 5) = v11;
      *((_DWORD *)v2 + 6) = 16;
    }
    if ( ++v3 < v6 )
      break;
LABEL_8:
    v2 = v18;
    if ( *(_DWORD *)v18 )
    {
      if ( *(_DWORD *)*this )
      {
        v14 = FastRegion::Internal::CRgnData::EstimateSizeUnion(*this, v18);
        v21 = 0;
        lpMem = v23;
        v12 = FastRegion::Internal::CWorkBuffer::SetupBuffer((FastRegion::Internal::CWorkBuffer *)&v21, v14);
        if ( v12 < 0 )
        {
          FastRegion::Internal::CWorkBuffer::~CWorkBuffer((FastRegion::Internal::CWorkBuffer *)&v21);
        }
        else
        {
          FastRegion::Internal::CRgnData::Union((FastRegion::Internal::CRgnData *)lpMem, *this, v18);
          v12 = FastRegion::CRegion::SaveResult(
                  (FastRegion::CRegion *)this,
                  (struct FastRegion::Internal::CWorkBuffer *)&v21);
          if ( v23 != lpMem )
            operator delete(lpMem);
        }
      }
      else
      {
        v12 = FastRegion::CRegion::Copy((int **)this, (int **)&v18);
      }
      if ( v12 < 0 )
        goto LABEL_27;
      v2 = v18;
    }
    if ( v3 )
    {
      v12 = 0;
      goto LABEL_15;
    }
  }
  v15 = (float *)(16LL * v3 + a2 + 8);
  while ( 1 )
  {
    v16.left = (int)*(v15 - 2);
    v16.top = (int)*(v15 - 1);
    v16.right = (int)*v15;
    v16.bottom = (int)v15[1];
    v17 = v16;
    FastRegion::CRegion::CRegion((FastRegion::CRegion *)v20, &v17);
    v12 = FastRegion::CRegion::Union((void **)&v18, (const struct FastRegion::Internal::CRgnData **)v20);
    FastRegion::CRegion::FreeMemory(v20);
    if ( v12 < 0 )
      break;
    ++v3;
    v15 += 4;
    if ( v3 >= v6 )
      goto LABEL_8;
  }
LABEL_27:
  v2 = v18;
LABEL_15:
  if ( v19 != (_DWORD *)v2 )
    operator delete(v2);
  return (unsigned int)v12;
}
