/*
 * XREFs of RtlLoadString @ 0x1408CF720
 * Callers:
 *     <none>
 * Callees:
 *     DownLevelLanguageNameToLangID @ 0x14018F064 (DownLevelLanguageNameToLangID.c)
 *     __security_check_cookie @ 0x14019EE20 (__security_check_cookie.c)
 *     LdrpAccessResourceData @ 0x14067540C (LdrpAccessResourceData.c)
 *     LdrpSearchResourceSection_U @ 0x140675740 (LdrpSearchResourceSection_U.c)
 *     LdrResSearchResource @ 0x1406764C0 (LdrResSearchResource.c)
 */

__int64 __fastcall RtlLoadString(
        char *a1,
        unsigned __int16 a2,
        _WORD *a3,
        int a4,
        _QWORD *a5,
        _WORD *a6,
        void *a7,
        __int64 a8)
{
  bool v10; // di
  unsigned __int16 v12; // ax
  int v13; // edx
  unsigned __int16 v14; // cx
  int v15; // ebx
  __int16 v16; // r8
  ULONGLONG v17; // [rsp+40h] [rbp-78h] BYREF
  int v18; // [rsp+48h] [rbp-70h]
  unsigned int *v19; // [rsp+50h] [rbp-68h] BYREF
  unsigned int *v20; // [rsp+58h] [rbp-60h] BYREF
  _QWORD *v21; // [rsp+60h] [rbp-58h]
  __int64 v22[4]; // [rsp+68h] [rbp-50h] BYREF

  v21 = a5;
  v19 = 0LL;
  v10 = (a4 & 1) == 0;
  if ( a1 && a5 && (a4 & 0xFFFFFFFE) == 0 )
  {
    if ( (a4 & 1) != 0 && (a7 || a8) )
      return 3221225659LL;
    if ( (unsigned int)a3 > 0xFFFF )
    {
      if ( *a3 )
      {
        v12 = DownLevelLanguageNameToLangID(a3, 2);
        LODWORD(a3) = v12;
        v18 = v12;
        if ( !v12 )
          return 3221225485LL;
      }
      else
      {
        LODWORD(a3) = 0;
        v18 = 0;
      }
    }
    v22[0] = 6LL;
    v22[1] = (a2 >> 4) + 1;
    v22[2] = (unsigned int)a3;
    v22[3] = a2;
    v17 = 0LL;
    if ( v10 )
    {
      v13 = LdrResSearchResource((unsigned __int64)a1, v22, 4u, 1, &v19, &v17, a7, a8);
      if ( v13 >= 0 && v17 > 0xFFFF )
        v13 = -1073741701;
    }
    else
    {
      v13 = LdrpSearchResourceSection_U(a1, v22, 4u, 1, &v20);
      if ( v13 < 0 )
        return (unsigned int)v13;
      v13 = LdrpAccessResourceData((unsigned __int64)a1, (unsigned __int64)v20);
    }
    if ( v13 >= 0 && v19 )
    {
      v14 = 0;
      v15 = a2 & 0xF;
      v17 >>= 1;
      do
      {
        v16 = *((_WORD *)v19 + v14);
        v14 += v16 + 1;
        if ( v10 && v14 > v17 )
          return (unsigned int)-1073741701;
        --v15;
      }
      while ( v15 >= 0 );
      if ( v14 && v16 )
        v14 -= v16;
      *v21 = (char *)v19 + 2 * v14;
      if ( a6 )
        *a6 = v16;
    }
    return (unsigned int)v13;
  }
  return 3221225485LL;
}
