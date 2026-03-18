/*
 * XREFs of ?bPartialArc@@YAHW4PARTIALARC@@AEAVEPATHOBJ@@AEAVEBOX@@AEAVEPOINTFL@@JAEAVEFLOAT@@3J4J@Z @ 0x1C02A9148
 * Callers:
 *     GreAngleArc @ 0x1C0269620 (GreAngleArc.c)
 *     NtGdiArcInternal @ 0x1C02A9BF0 (NtGdiArcInternal.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0163A80 (__security_check_cookie.c)
 *     ?bPartialQuadrantArc@@YAHW4PARTIALARC@@AEAVEPATHOBJ@@AEAVEBOX@@AEAVEPOINTFL@@AEAVEFLOAT@@34@Z @ 0x1C02A93EC (-bPartialQuadrantArc@@YAHW4PARTIALARC@@AEAVEPATHOBJ@@AEAVEBOX@@AEAVEPOINTFL@@AEAVEFLOAT@@34@Z.c)
 */

__int64 __fastcall bPartialArc(
        unsigned int a1,
        EPATHOBJ *a2,
        __int64 a3,
        __int64 a4,
        char a5,
        __int64 a6,
        __int64 a7,
        int a8,
        __int64 a9,
        int a10)
{
  int v12; // r13d
  int v13; // edi
  __int64 v14; // rsi
  __int64 v15; // r14
  __int64 v16; // r15
  __int64 v17; // r12
  struct _POINTL v18; // rax
  int v19; // eax
  struct _POINTL v20; // rax
  struct _POINTL v21; // rax
  int v22; // eax
  struct _POINTL v23; // rax
  int v24; // eax
  struct _POINTL v27; // [rsp+68h] [rbp-21h] BYREF
  int v28; // [rsp+70h] [rbp-19h]
  int v29; // [rsp+74h] [rbp-15h]
  struct _POINTL v30; // [rsp+78h] [rbp-11h]

  if ( a10 )
  {
    v12 = (a5 + 1) & 3;
    v13 = bPartialQuadrantArc(a1, a2, a3);
    if ( v12 == a8 )
      return (unsigned int)(bPartialQuadrantArc(0LL, a2, a3) & v13);
    v14 = (1922922357LL * *(int *)(a3 + 48)) >> 32;
    v15 = (1922922357LL * *(int *)(a3 + 52)) >> 32;
    v16 = (1922922357LL * *(int *)(a3 + 56)) >> 32;
    v17 = (1922922357LL * *(int *)(a3 + 60)) >> 32;
    while ( 1 )
    {
      if ( !v12 )
      {
        v27 = *(struct _POINTL *)(a3 + 8);
        v23 = v27;
        v27.x -= v16;
        v27.y -= v17;
        v28 = v23.x - v14;
        v29 = v23.y - v15;
        v30 = v23;
        v30.x = v23.x - *(_DWORD *)(a3 + 48);
        v22 = *(_DWORD *)(a3 + 52);
        goto LABEL_14;
      }
      if ( v12 == 1 )
      {
        v27 = *(struct _POINTL *)(a3 + 16);
        v21 = v27;
        v27.x += v14;
        v27.y += v15;
        v28 = v21.x - v16;
        v29 = v21.y - v17;
        v30 = v21;
        v30.x = v21.x - *(_DWORD *)(a3 + 56);
        v22 = *(_DWORD *)(a3 + 60);
LABEL_14:
        v30.y -= v22;
        goto LABEL_15;
      }
      if ( v12 == 2 )
        break;
      if ( v12 == 3 )
      {
        v27 = *(struct _POINTL *)(a3 + 32);
        v18 = v27;
        v27.x -= v14;
        v27.y -= v15;
        v28 = v16 + v18.x;
        v29 = v17 + v18.y;
        v30 = v18;
        v30.x = *(_DWORD *)(a3 + 56) + v18.x;
        v19 = *(_DWORD *)(a3 + 60);
LABEL_11:
        v30.y += v19;
      }
LABEL_15:
      v13 &= EPATHOBJ::bPolyBezierTo(a2, 0LL, &v27, 3u);
      v24 = ((_BYTE)v12 + 1) & 3;
      v12 = v24;
      if ( v24 == a8 )
        return (unsigned int)(bPartialQuadrantArc(0LL, a2, a3) & v13);
    }
    v27 = *(struct _POINTL *)(a3 + 24);
    v20 = v27;
    v27.x += v16;
    v27.y += v17;
    v28 = v14 + v20.x;
    v29 = v15 + v20.y;
    v30 = v20;
    v30.x = *(_DWORD *)(a3 + 48) + v20.x;
    v19 = *(_DWORD *)(a3 + 52);
    goto LABEL_11;
  }
  return (unsigned int)bPartialQuadrantArc(a1, a2, a3);
}
