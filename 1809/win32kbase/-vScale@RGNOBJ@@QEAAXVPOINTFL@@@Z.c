/*
 * XREFs of ?vScale@RGNOBJ@@QEAAXVPOINTFL@@@Z @ 0x1C00F83B0
 * Callers:
 *     ?vDuplicateAndScaleRegion@@YAXPEAVREGION@@PEAPEAV1@VPOINTFL@@@Z @ 0x1C00FACBC (-vDuplicateAndScaleRegion@@YAXPEAVREGION@@PEAPEAV1@VPOINTFL@@@Z.c)
 * Callees:
 *     bFToL @ 0x1C0068BEC (bFToL.c)
 *     __security_check_cookie @ 0x1C00A63D0 (__security_check_cookie.c)
 *     ?vScale@ERECTL@@QEAAXAEBVPOINTFL@@@Z @ 0x1C00F82D4 (-vScale@ERECTL@@QEAAXAEBVPOINTFL@@@Z.c)
 */

void __fastcall RGNOBJ::vScale(__int64 *a1, __int64 a2)
{
  __int64 v2; // rbx
  unsigned int v4; // esi
  _DWORD *v5; // rbx
  unsigned int v6; // r8d
  __int64 i; // rdi
  int v8; // eax
  int v9; // eax
  __int64 v10; // rbx
  __int64 v11; // [rsp+20h] [rbp-38h] BYREF
  __int128 v12; // [rsp+28h] [rbp-30h] BYREF

  v2 = *a1;
  v11 = a2;
  v4 = *(_DWORD *)(v2 + 84);
  if ( v4 > 1 )
  {
    v5 = (_DWORD *)(v2 + 104);
    v6 = 6;
    do
    {
      for ( i = 0LL; (unsigned int)i < *v5; i = (unsigned int)(i + 1) )
        bFToL((float)(int)v5[i + 3] * *(float *)&v11, &v5[i + 3], v6);
      v8 = v5[1];
      if ( v8 != 0x80000000 )
        bFToL((float)v8 * *((float *)&v11 + 1), v5 + 1, v6);
      v9 = v5[2];
      if ( v9 != 0x7FFFFFFF )
        bFToL((float)v9 * *((float *)&v11 + 1), v5 + 2, v6);
      v5 = (_DWORD *)((char *)v5 + (unsigned int)(4 * *v5 + 16));
      --v4;
    }
    while ( v4 );
    v10 = *a1;
    v12 = *(_OWORD *)(*a1 + 88);
    ERECTL::vScale((ERECTL *)&v12, (const struct POINTFL *)&v11);
    *(_OWORD *)(v10 + 88) = v12;
  }
}
