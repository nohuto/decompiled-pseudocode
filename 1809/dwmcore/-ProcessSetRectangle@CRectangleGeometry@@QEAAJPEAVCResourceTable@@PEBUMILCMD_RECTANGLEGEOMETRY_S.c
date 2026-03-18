/*
 * XREFs of ?ProcessSetRectangle@CRectangleGeometry@@QEAAJPEAVCResourceTable@@PEBUMILCMD_RECTANGLEGEOMETRY_SETRECTANGLE@@@Z @ 0x1800675FC
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z @ 0x1800D0FD0 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 *     ?terminate@details@gsl@@YAXXZ @ 0x180152C70 (-terminate@details@gsl@@YAXXZ.c)
 */

__int64 __fastcall CRectangleGeometry::ProcessSetRectangle(
        CRectangleGeometry *this,
        struct CResourceTable *a2,
        const struct MILCMD_RECTANGLEGEOMETRY_SETRECTANGLE *a3)
{
  __int64 v5; // rsi
  int v6; // eax
  unsigned int v7; // ecx
  unsigned int v8; // ebx
  int v10; // eax
  unsigned int v11; // ecx

  if ( *((_DWORD *)a3 + 11) )
  {
    v10 = ((__int64 (__fastcall *)(char *, void *, char *))xmmword_180305B48)(
            (char *)this + SDWORD2(xmmword_180305B48),
            &CRectangleGeometry::sc_CornerRadius,
            (char *)a3 + 8);
    v8 = v10;
    if ( v10 >= 0 )
    {
LABEL_5:
      *((_BYTE *)this + 184) = *((_DWORD *)a3 + 11) != 0;
      *((_BYTE *)this + 128) = *((_DWORD *)a3 + 10) != 0;
    }
    else
    {
      MilInstrumentationCheckHR_MaybeFailFast(v11, 0LL, 0, v10, 0x117u);
    }
  }
  else
  {
    v5 = 0LL;
    while ( 1 )
    {
      _mm_lfence();
      v6 = (*((__int64 (__fastcall **)(char *, _QWORD, char *))*(&off_180240100 + v5) + 3))(
             (char *)this + *((int *)*(&off_180240100 + v5) + 8),
             *(&off_180240100 + v5),
             (char *)a3 + qword_1802B1D80[v5]);
      v8 = v6;
      if ( v6 < 0 )
        break;
      v5 = (unsigned int)(v5 + 1);
      if ( (unsigned int)v5 >= 8 )
        goto LABEL_5;
    }
    MilInstrumentationCheckHR_MaybeFailFast(v7, 0LL, 0, v6, 0x122u);
  }
  return v8;
}
