/*
 * XREFs of RtlLoadString @ 0x180054EA0
 * Callers:
 *     <none>
 * Callees:
 *     RtlLocaleNameToLcid @ 0x180016D90 (RtlLocaleNameToLcid.c)
 *     sub_180018D8C @ 0x180018D8C (sub_180018D8C.c)
 *     LdrAccessResource_0 @ 0x18001F250 (LdrAccessResource_0.c)
 *     LdrResSearchResource @ 0x180056760 (LdrResSearchResource.c)
 *     __security_check_cookie @ 0x18008C7B0 (__security_check_cookie.c)
 */

__int64 __fastcall RtlLoadString(
        wchar_t *a1,
        unsigned __int16 a2,
        const WCHAR *a3,
        int a4,
        _QWORD *a5,
        _WORD *a6,
        __int64 a7,
        __int64 a8)
{
  unsigned int v8; // r10d
  bool v11; // di
  int v12; // edx
  unsigned __int16 v13; // cx
  int v14; // ebx
  __int16 v15; // r8
  unsigned __int64 v17; // [rsp+40h] [rbp-78h] BYREF
  unsigned __int64 v18; // [rsp+48h] [rbp-70h] BYREF
  unsigned int *v19; // [rsp+50h] [rbp-68h] BYREF
  _QWORD *v20; // [rsp+58h] [rbp-60h]
  _QWORD v21[4]; // [rsp+60h] [rbp-58h] BYREF

  v8 = (unsigned int)a3;
  v20 = a5;
  v18 = 0LL;
  v11 = (a4 & 1) == 0;
  if ( a1 && a5 && (a4 & 0xFFFFFFFE) == 0 )
  {
    if ( (a4 & 1) != 0 && (a7 || a8) )
      return 3221225659LL;
    if ( (unsigned int)a3 <= 0xFFFF )
      goto LABEL_8;
    if ( *a3 )
    {
      if ( (int)RtlLocaleNameToLcid(a3, (int *)&v17, 3) < 0 )
        return 3221225485LL;
      v8 = (unsigned __int16)v17;
      LODWORD(v17) = (unsigned __int16)v17;
    }
    else
    {
      v8 = 0;
      LODWORD(v17) = 0;
    }
LABEL_8:
    v21[0] = 6LL;
    v21[1] = (a2 >> 4) + 1;
    v21[2] = v8;
    v21[3] = a2;
    v17 = 0LL;
    if ( v11 )
    {
      v12 = LdrResSearchResource(a1, (__int64)&v18, (__int64)&v17, a7, a8);
      if ( v12 >= 0 && v17 > 0xFFFF )
        v12 = -1073741701;
    }
    else
    {
      v12 = sub_180018D8C((__int64)a1, (__int64)v21, 4u, 1u, (unsigned __int64 *)&v19);
      if ( v12 < 0 )
        return (unsigned int)v12;
      v12 = LdrAccessResource_0((unsigned __int64)a1, v19, &v18, 0LL);
    }
    if ( v12 >= 0 && v18 )
    {
      v13 = 0;
      v14 = a2 & 0xF;
      v17 >>= 1;
      do
      {
        v15 = *(_WORD *)(v18 + 2LL * v13);
        v13 += v15 + 1;
        if ( v11 && v13 > v17 )
          return (unsigned int)-1073741701;
        --v14;
      }
      while ( v14 >= 0 );
      if ( v13 && v15 )
        v13 -= v15;
      *v20 = v18 + 2LL * v13;
      if ( a6 )
        *a6 = v15;
    }
    return (unsigned int)v12;
  }
  return 3221225485LL;
}
