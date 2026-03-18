/*
 * XREFs of ?bPartialArc@@YAHW4PARTIALARC@@AEAVEPATHOBJ@@AEAVEBOX@@AEAVEPOINTFL@@JAEAVEFLOAT@@3J4J@Z @ 0x1C0280E40
 * Callers:
 *     GreAngleArc @ 0x1C026F194 (GreAngleArc.c)
 *     NtGdiArcInternal @ 0x1C02818C0 (NtGdiArcInternal.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0139660 (__security_check_cookie.c)
 *     ?bPartialQuadrantArc@@YAHW4PARTIALARC@@AEAVEPATHOBJ@@AEAVEBOX@@AEAVEPOINTFL@@AEAVEFLOAT@@34@Z @ 0x1C02810F4 (-bPartialQuadrantArc@@YAHW4PARTIALARC@@AEAVEPATHOBJ@@AEAVEBOX@@AEAVEPOINTFL@@AEAVEFLOAT@@34@Z.c)
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
  int v12; // esi
  int v13; // edi
  __int64 v14; // r14
  __int64 v15; // r15
  __int64 v16; // r12
  __int64 v17; // r13
  __int64 v18; // rcx
  int v19; // eax
  int v20; // ecx
  __int64 v21; // rcx
  __int64 v22; // rcx
  int v23; // eax
  int v24; // eax
  __int64 v25; // rcx
  int v26; // eax
  struct _POINTL v29; // [rsp+68h] [rbp-21h] BYREF
  int v30; // [rsp+70h] [rbp-19h]
  int v31; // [rsp+74h] [rbp-15h]
  __int64 v32; // [rsp+78h] [rbp-11h]

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
    while ( v12 )
    {
      switch ( v12 )
      {
        case 1:
          v22 = *(_QWORD *)(a3 + 16);
          v29.y = v15 + HIDWORD(v22);
          v30 = v22;
          v31 = HIDWORD(v22) - v17;
          v29.x = v22 + v14;
          v23 = v22 - v16;
          v32 = v22;
          v20 = v22 - *(_DWORD *)(a3 + 56);
          v30 = v23;
          v24 = *(_DWORD *)(a3 + 60);
LABEL_14:
          HIDWORD(v32) -= v24;
          goto LABEL_15;
        case 2:
          v21 = *(_QWORD *)(a3 + 24);
          v29.y = v17 + HIDWORD(v21);
          v31 = v15 + HIDWORD(v21);
          v29.x = v21 + v16;
          v30 = v21 + v14;
          v19 = *(_DWORD *)(a3 + 52);
          v32 = v21;
          v20 = *(_DWORD *)(a3 + 48) + v21;
LABEL_10:
          HIDWORD(v32) += v19;
LABEL_15:
          LODWORD(v32) = v20;
          break;
        case 3:
          v18 = *(_QWORD *)(a3 + 32);
          v29.y = HIDWORD(v18) - v15;
          v31 = v17 + HIDWORD(v18);
          v29.x = v18 - v14;
          v30 = v18 + v16;
          v19 = *(_DWORD *)(a3 + 60);
          v32 = v18;
          v20 = *(_DWORD *)(a3 + 56) + v18;
          goto LABEL_10;
      }
      v13 &= EPATHOBJ::bPolyBezierTo(a2, 0LL, &v29, 3u);
      v26 = ((_BYTE)v12 + 1) & 3;
      v12 = v26;
      if ( v26 == a8 )
        return (unsigned int)(bPartialQuadrantArc(0LL, a2, a3) & v13);
    }
    v25 = *(_QWORD *)(a3 + 8);
    v29.y = HIDWORD(v25) - v17;
    v29.x = v25 - v16;
    v31 = HIDWORD(v25) - v15;
    v30 = v25 - v14;
    v24 = *(_DWORD *)(a3 + 52);
    v32 = v25;
    v20 = v25 - *(_DWORD *)(a3 + 48);
    goto LABEL_14;
  }
  return (unsigned int)bPartialQuadrantArc(a1, a2, a3);
}
