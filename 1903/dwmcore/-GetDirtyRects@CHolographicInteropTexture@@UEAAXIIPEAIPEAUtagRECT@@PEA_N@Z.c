/*
 * XREFs of ?GetDirtyRects@CHolographicInteropTexture@@UEAAXIIPEAIPEAUtagRECT@@PEA_N@Z @ 0x1802470D0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetRectangleCount@CRegion@FastRegion@@QEBAIXZ @ 0x18008EBF8 (-GetRectangleCount@CRegion@FastRegion@@QEBAIXZ.c)
 *     ?BeginIterator@CRgnData@Internal@FastRegion@@QEBAXPEAVIterator@CRegion@3@@Z @ 0x18008F2B4 (-BeginIterator@CRgnData@Internal@FastRegion@@QEBAXPEAVIterator@CRegion@3@@Z.c)
 *     ?StepIterator@CRgnData@Internal@FastRegion@@QEBAXPEAVIterator@CRegion@3@@Z @ 0x1800BDFD4 (-StepIterator@CRgnData@Internal@FastRegion@@QEBAXPEAVIterator@CRegion@3@@Z.c)
 *     ?_Xlength_error@std@@YAXPEBD@Z @ 0x18015B1EC (-_Xlength_error@std@@YAXPEBD@Z.c)
 */

void __fastcall CHolographicInteropTexture::GetDirtyRects(
        RTL_SRWLOCK *this,
        unsigned int a2,
        unsigned int a3,
        unsigned int *a4,
        struct tagRECT *a5,
        bool *a6)
{
  RTL_SRWLOCK *v6; // rbx
  unsigned __int64 v7; // rbp
  __int64 v9; // r14
  const char *v11; // rcx
  __int64 v12; // rcx
  __int64 v13; // rbp
  LONG *v14; // rcx
  unsigned int RectangleCount; // r10d
  unsigned __int64 v16; // r11
  __int64 v17; // r10
  struct tagRECT *v18; // rsi
  LONG *p_bottom; // r14
  LONG v20; // eax
  FastRegion::Internal::CRgnData *v21; // rcx
  __int64 v22; // rdx
  char v23; // cl
  char v24[8]; // [rsp+20h] [rbp-38h] BYREF
  unsigned __int64 v25; // [rsp+28h] [rbp-30h]
  LONG *v26; // [rsp+30h] [rbp-28h]
  FastRegion::Internal::CRgnData *v27; // [rsp+38h] [rbp-20h]
  int v28; // [rsp+40h] [rbp-18h]

  v6 = this + 30;
  v7 = a3;
  v9 = a2;
  AcquireSRWLockShared(this + 30);
  if ( (unsigned int)v9 >= LODWORD(this[9].Ptr) || (unsigned int)v7 >= HIDWORD(this[9].Ptr) )
  {
    *a4 = 0;
    v23 = 1;
  }
  else
  {
    if ( v7 >= 2 )
      std::_Xlength_error(v11);
    v12 = (__int64)this[(unsigned int)v7 + 5].Ptr + 16;
    v13 = 96 * v9;
    RectangleCount = FastRegion::CRegion::GetRectangleCount((int **)(96 * v9 + v12));
    if ( RectangleCount <= *a4 )
    {
      *a4 = RectangleCount;
      if ( v16 >= 2 )
        std::_Xlength_error((const char *)v14);
      _mm_lfence();
      FastRegion::Internal::CRgnData::BeginIterator(
        *(FastRegion::Internal::CRgnData **)((char *)this[v16 + 5].Ptr + v13 + 16),
        (struct FastRegion::CRegion::Iterator *)v24);
      v18 = &a5[v17];
      if ( a5 < v18 )
      {
        p_bottom = &a5->bottom;
        do
        {
          v14 = v26;
          if ( (unsigned __int64)v26 >= v25 )
            break;
          *(p_bottom - 2) = *v26;
          v20 = v14[2];
          v21 = v27;
          *p_bottom = v20;
          v22 = 2 * v28;
          *(p_bottom - 3) = *((_DWORD *)v21 + v22);
          *(p_bottom - 1) = *((_DWORD *)v21 + v22 + 1);
          p_bottom += 4;
          FastRegion::Internal::CRgnData::StepIterator(v21, (struct FastRegion::CRegion::Iterator *)v24);
        }
        while ( p_bottom - 3 < (LONG *)v18 );
      }
    }
    if ( v16 >= 2 )
      std::_Xlength_error((const char *)v14);
    _mm_lfence();
    v23 = *((_BYTE *)this[v16 + 5].Ptr + v13 + 88);
  }
  *a6 = v23;
  ReleaseSRWLockShared(v6);
}
