/*
 * XREFs of NtGdiPolyPolyDraw @ 0x1C0072440
 * Callers:
 *     <none>
 * Callees:
 *     PALLOCMEM2 @ 0x1C001CAB4 (PALLOCMEM2.c)
 *     Win32FreePool @ 0x1C001CC50 (Win32FreePool.c)
 *     AllocFreeTmpBuffer @ 0x1C001F470 (AllocFreeTmpBuffer.c)
 *     FreeTmpBuffer @ 0x1C0043E70 (FreeTmpBuffer.c)
 *     EngSetLastError @ 0x1C00689B0 (EngSetLastError.c)
 *     GreCreatePolyPolygonRgnInternal @ 0x1C0072744 (GreCreatePolyPolygonRgnInternal.c)
 *     __security_check_cookie @ 0x1C0073C90 (__security_check_cookie.c)
 *     memmove @ 0x1C0079B80 (memmove.c)
 */

__int64 __fastcall NtGdiPolyPolyDraw(__int64 a1, void *a2, const void *a3, unsigned int a4, int a5)
{
  __int64 v5; // r12
  __int64 PolyPolygonRgnInternal; // rbx
  unsigned int *v10; // r14
  struct _POINTL *v11; // rsi
  ULONG64 v12; // rcx
  unsigned int v13; // r15d
  __int64 i; // rcx
  size_t v15; // r8
  void *v16; // rdx
  int v17; // eax
  unsigned int v19; // [rsp+30h] [rbp-D8h] BYREF
  unsigned int v20; // [rsp+34h] [rbp-D4h]
  int v21; // [rsp+38h] [rbp-D0h]
  unsigned int v22; // [rsp+40h] [rbp-C8h]
  __int64 v23; // [rsp+48h] [rbp-C0h]
  unsigned int *v24; // [rsp+50h] [rbp-B8h]
  struct _POINTL *v25; // [rsp+58h] [rbp-B0h]
  void *Src; // [rsp+60h] [rbp-A8h]
  __int64 v27; // [rsp+68h] [rbp-A0h]
  struct _POINTL v28; // [rsp+70h] [rbp-98h] BYREF

  v5 = a4;
  Src = a2;
  v27 = a1;
  v22 = a4;
  PolyPolygonRgnInternal = 1LL;
  v23 = 1LL;
  if ( !a4 )
    return 0LL;
  if ( a5 == 2
    && ((int)IsNtGdiFastPolyPolylineSupported() < 0 || (unsigned int)NtGdiFastPolyPolyline(a1, a2, a3, (unsigned int)v5)) )
  {
    return PolyPolygonRgnInternal;
  }
  if ( (unsigned int)v5 <= 1 )
  {
    v10 = &v19;
    goto LABEL_5;
  }
  if ( (unsigned int)(a5 - 3) > 2 )
  {
    if ( (unsigned int)v5 > 0x9C4000 )
    {
      EngSetLastError(0x57u);
      v10 = 0LL;
    }
    else
    {
      v10 = (unsigned int *)PALLOCMEM2((unsigned int)(4 * v5), 0x706D7447u, 0);
    }
LABEL_5:
    v24 = v10;
    if ( v10 )
    {
      v11 = &v28;
      v25 = &v28;
      v12 = (ULONG64)a3 + 4 * v5;
      if ( v12 < (unsigned __int64)a3 || v12 > MmUserProbeAddress )
        *(_BYTE *)MmUserProbeAddress = 0;
      memmove(v10, a3, 4 * v5);
      v13 = 0;
      v20 = 0;
      for ( i = 0LL; ; i = (unsigned int)(i + 1) )
      {
        v21 = i;
        if ( (unsigned int)i >= (unsigned int)v5 )
          break;
        v13 += v10[i];
        v20 = v13;
      }
      if ( v13 > 0x4E2000 )
        goto LABEL_20;
      if ( v13 > 0xA )
      {
        v11 = (struct _POINTL *)AllocFreeTmpBuffer(8 * v13);
        v25 = v11;
      }
      if ( v11 )
      {
        v15 = 8LL * v13;
        v16 = Src;
        if ( (char *)Src + v15 < Src || (unsigned __int64)Src + v15 > MmUserProbeAddress )
          *(_BYTE *)MmUserProbeAddress = 0;
        memmove(v11, v16, v15);
      }
      else
      {
LABEL_20:
        PolyPolygonRgnInternal = 0LL;
        v23 = 0LL;
      }
      if ( !PolyPolygonRgnInternal )
        goto LABEL_26;
      switch ( a5 )
      {
        case 1:
          if ( (int)IsGrePolyPolygonSupported() >= 0 )
          {
            v17 = GrePolyPolygon(a1, v11, v10, (unsigned int)v5, v13);
LABEL_25:
            PolyPolygonRgnInternal = v17;
            goto LABEL_26;
          }
          break;
        case 2:
          if ( (int)IsGrePolyPolylineSupported() >= 0 )
          {
            v17 = GrePolyPolyline(a1, v11, v10, (unsigned int)v5, v13);
            goto LABEL_25;
          }
          break;
        case 3:
          if ( (int)IsGrePolyBezierSupported() >= 0 )
          {
            v17 = GrePolyBezier(a1, v11, v19);
            goto LABEL_25;
          }
          break;
        case 4:
          if ( (int)IsGrePolylineToSupported() >= 0 )
          {
            v17 = GrePolylineTo(a1, v11, v19);
            goto LABEL_25;
          }
          break;
        case 5:
          if ( (int)IsGrePolyBezierToSupported() >= 0 )
          {
            v17 = GrePolyBezierTo(a1, v11, v19);
            goto LABEL_25;
          }
          break;
        case 6:
          PolyPolygonRgnInternal = GreCreatePolyPolygonRgnInternal(v11, v13);
          goto LABEL_26;
      }
      PolyPolygonRgnInternal = 0LL;
LABEL_26:
      if ( v11 && v11 != &v28 )
        FreeTmpBuffer((char *)v11);
      if ( v10 != &v19 )
        Win32FreePool((__int64)v10);
      return PolyPolygonRgnInternal;
    }
    return 0LL;
  }
  return 0LL;
}
