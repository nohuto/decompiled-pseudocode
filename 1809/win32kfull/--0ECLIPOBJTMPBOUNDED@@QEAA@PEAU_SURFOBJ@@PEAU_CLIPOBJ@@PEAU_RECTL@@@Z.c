/*
 * XREFs of ??0ECLIPOBJTMPBOUNDED@@QEAA@PEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@@Z @ 0x1C015EC68
 * Callers:
 *     NtGdiEngTextOut @ 0x1C008E9B0 (NtGdiEngTextOut.c)
 *     NtGdiEngStretchBlt @ 0x1C008ED60 (NtGdiEngStretchBlt.c)
 *     NtGdiEngStretchBltROP @ 0x1C0147ED0 (NtGdiEngStretchBltROP.c)
 *     NtGdiEngGradientFill @ 0x1C0296A50 (NtGdiEngGradientFill.c)
 *     NtGdiEngLineTo @ 0x1C0296EB0 (NtGdiEngLineTo.c)
 *     NtGdiEngStrokeAndFillPath @ 0x1C02976F0 (NtGdiEngStrokeAndFillPath.c)
 *     NtGdiEngStrokePath @ 0x1C0297A80 (NtGdiEngStrokePath.c)
 * Callees:
 *     ??XERECTL@@QEAAAEAV0@AEBU_RECTL@@@Z @ 0x1C00539F4 (--XERECTL@@QEAAAEAV0@AEBU_RECTL@@@Z.c)
 *     ??1RGNMEMOBJTMP@@QEAA@XZ @ 0x1C009EB00 (--1RGNMEMOBJTMP@@QEAA@XZ.c)
 *     ?bContain@ERECTL@@QEBAHAEBU_RECTL@@@Z @ 0x1C013BE74 (-bContain@ERECTL@@QEBAHAEBU_RECTL@@@Z.c)
 *     __security_check_cookie @ 0x1C015AF60 (__security_check_cookie.c)
 *     ??0RGNMEMOBJTMP@@QEAA@XZ @ 0x1C015EEA8 (--0RGNMEMOBJTMP@@QEAA@XZ.c)
 *     ?TraceLoggingWriteUnsupportedGdiUsage@@YAXAEAIW4UnsupportedReason@@_K222@Z @ 0x1C015EEF4 (-TraceLoggingWriteUnsupportedGdiUsage@@YAXAEAIW4UnsupportedReason@@_K222@Z.c)
 */

ECLIPOBJTMPBOUNDED *__fastcall ECLIPOBJTMPBOUNDED::ECLIPOBJTMPBOUNDED(
        ECLIPOBJTMPBOUNDED *this,
        struct _SURFOBJ *a2,
        struct _CLIPOBJ *a3,
        struct _RECTL *a4)
{
  struct REGION **v4; // rdi
  SURFACE *v9; // rax
  LONG cx; // r8d
  LONG v11; // ecx
  LONG cy; // edx
  LONG v13; // eax
  struct _RECTL v15; // [rsp+30h] [rbp-30h] BYREF
  struct _RECTL v16; // [rsp+40h] [rbp-20h] BYREF

  v4 = (struct REGION **)((char *)this + 152);
  *((_QWORD *)this + 7) = 0LL;
  *((_QWORD *)this + 10) = 0LL;
  *((_DWORD *)this + 22) = 0;
  *((_DWORD *)this + 32) = 1;
  *((_QWORD *)this + 18) = 0LL;
  RGNMEMOBJTMP::RGNMEMOBJTMP((ECLIPOBJTMPBOUNDED *)((char *)this + 152));
  *((_QWORD *)this + 21) = 0LL;
  *((_BYTE *)this + 176) = 0;
  v9 = (SURFACE *)SURFOBJ_TO_SURFACE_NOT_NULL(a2);
  if ( !SURFACE::bClipEngRenderingsToSurfaceBounds(v9) )
    goto LABEL_21;
  cx = a2->sizlBitmap.cx;
  v11 = 0x7FFFFFF;
  cy = a2->sizlBitmap.cy;
  v13 = 0x7FFFFFF;
  *(_QWORD *)&v15.left = 0LL;
  if ( cy < 0x7FFFFFF )
    v13 = cy;
  v15.bottom = v13;
  if ( cx < 0x7FFFFFF )
    v11 = cx;
  v15.right = v11;
  if ( (((cx & 0xF8000000) + 0x8000000) & 0xF7FFFFFF) != 0 || (((cy & 0xF8000000) + 0x8000000) & 0xF7FFFFFF) != 0 )
    TraceLoggingWriteUnsupportedGdiUsage(&LongToFixIntegerOverflowCount, 27LL, 0LL);
  if ( a3 && a3->iDComplexity )
  {
    v16 = *(struct _RECTL *)(*(_QWORD *)((unsigned __int64)&a3[2].rclBounds.top & -(__int64)(a3 != 0LL)) + 88LL);
    if ( !ERECTL::bContain((ERECTL *)&v15, &v16) )
    {
      RGNMEMOBJTMP::RGNMEMOBJTMP((RGNMEMOBJTMP *)&v16);
      if ( *v4 )
      {
        if ( *(_QWORD *)&v16.left )
        {
          RGNOBJ::vSet((RGNOBJ *)&v16, &v15);
          if ( RGNOBJ::bMerge(
                 (RGNOBJ *)v4,
                 (struct RGNOBJ *)((unsigned __int64)&a3[2].rclBounds.top & -(__int64)(a3 != 0LL)),
                 (struct RGNOBJ *)&v16,
                 BYTE1(gafjRgnOp)) )
          {
            XCLIPOBJ::vSetup(this, *v4, (struct ERECTL *)&v15, 1);
            *((_QWORD *)this + 21) = this;
          }
        }
      }
      RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)&v16);
      return this;
    }
LABEL_21:
    *((_QWORD *)this + 21) = a3;
    *((_BYTE *)this + 176) = 1;
    return this;
  }
  if ( *v4 )
  {
    if ( a4 )
      ERECTL::operator*=(&v15.left, &a4->left);
    RGNOBJ::vSet((RGNOBJ *)v4, &v15);
    XCLIPOBJ::vSetup(this, *v4, (struct ERECTL *)&v15, 1);
    *((_QWORD *)this + 21) = this;
  }
  return this;
}
