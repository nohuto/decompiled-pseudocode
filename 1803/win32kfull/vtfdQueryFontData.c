/*
 * XREFs of vtfdQueryFontData @ 0x1C022A290
 * Callers:
 *     vtfdQueryFontDataTE @ 0x1C0228B20 (vtfdQueryFontDataTE.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0139660 (__security_check_cookie.c)
 *     bCreatePath @ 0x1C0229A3C (bCreatePath.c)
 *     bReconnectVtfdFont @ 0x1C0229E74 (bReconnectVtfdFont.c)
 *     cjVtfdDeviceMetrics @ 0x1C0229EE8 (cjVtfdDeviceMetrics.c)
 *     vFill_GlyphData @ 0x1C022A0C0 (vFill_GlyphData.c)
 *     vtfdOpenFontContext @ 0x1C022A940 (vtfdOpenFontContext.c)
 */

__int64 __fastcall vtfdQueryFontData(__int64 a1, int a2, unsigned int a3, char *a4, PATHOBJ *a5)
{
  __int64 v6; // rcx
  __int64 v11; // rbx
  __int64 v12; // rax
  unsigned __int8 **v13; // rax
  unsigned __int8 *v14; // rsi
  unsigned __int8 *v15; // r15
  int v16; // edi
  int v17; // edi
  char *v18; // r14
  int v19; // edx
  __int64 v20; // rdi
  __int64 v21; // rdx
  __int64 v22; // rdx
  char v23; // [rsp+30h] [rbp-88h] BYREF

  v6 = *(_QWORD *)(a1 + 24);
  if ( (*(_DWORD *)(v6 + 28) & 1) != 0 && !(unsigned int)bReconnectVtfdFont(v6) )
    return 0xFFFFFFFFLL;
  v11 = *(_QWORD *)(a1 + 56);
  if ( !v11 )
  {
    v12 = vtfdOpenFontContext(a1);
    *(_QWORD *)(a1 + 56) = v12;
    v11 = v12;
    if ( !v12 )
      return 0xFFFFFFFFLL;
  }
  v13 = *(unsigned __int8 ***)(v11 + 112);
  v14 = *v13;
  v15 = &(*v13)[*(unsigned int *)(v11 + 124)];
  v16 = a2 - 2;
  if ( !v16 )
  {
    if ( a3 <= v14[96] - (unsigned int)v14[95] )
      v17 = a3;
    else
      v17 = v14[97];
    v18 = &v23;
    if ( a4 )
      v18 = a4;
    vFill_GlyphData(v11, (__int64)v18, v17);
    *((_DWORD *)v18 + 2) = a3;
    if ( !a5 )
      return 0LL;
    v19 = v17 + 1;
    if ( (*(_DWORD *)(*(_QWORD *)(v11 + 8) + 48LL) & 0x1000) != 0 )
    {
      v20 = (unsigned int)(2 * v17);
      v21 = (unsigned int)(2 * v19);
    }
    else
    {
      v20 = (unsigned int)(4 * v17);
      v21 = (unsigned int)(4 * v19);
    }
    v22 = v14[(unsigned int)v21 + 117] | (v14[v21 + 118] << 8);
    if ( (unsigned int)v22 >= *(unsigned __int16 *)&v14[v20 + 117]
      && (unsigned int)(v22 + *(_DWORD *)(v11 + 124)) <= *(_DWORD *)(*(_QWORD *)(v11 + 112) + 12LL)
      && (unsigned int)bCreatePath(
                         (char *)&v15[*(unsigned __int16 *)&v14[v20 + 117]],
                         (char *)&v15[v22],
                         v11,
                         a5,
                         *((_DWORD *)v18 + 5)) )
    {
      return 0LL;
    }
    return 0xFFFFFFFFLL;
  }
  if ( v16 != 1 )
    return 0xFFFFFFFFLL;
  if ( a5 )
    return cjVtfdDeviceMetrics(v11, (__int64)a5);
  else
    return 124LL;
}
