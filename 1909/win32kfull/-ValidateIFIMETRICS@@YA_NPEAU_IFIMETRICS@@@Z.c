/*
 * XREFs of ?ValidateIFIMETRICS@@YA_NPEAU_IFIMETRICS@@@Z @ 0x1C011EB74
 * Callers:
 *     ?CaptureUsermodeParameters@QueryFontRequest@@UEAAXPEAX@Z @ 0x1C011E260 (-CaptureUsermodeParameters@QueryFontRequest@@UEAAXPEAX@Z.c)
 * Callees:
 *     _lambda_3eb24279fbdd178c4d8527d8e8f1e39f_::operator() @ 0x1C011ED68 (_lambda_3eb24279fbdd178c4d8527d8e8f1e39f_--operator().c)
 *     _lambda_6205c396a1390c774bd95fcbb0cc7414_::operator() @ 0x1C011ED90 (_lambda_6205c396a1390c774bd95fcbb0cc7414_--operator().c)
 *     _lambda_070e29bc377876d11c9c205fcaeb93d1_::operator() @ 0x1C011EDC0 (_lambda_070e29bc377876d11c9c205fcaeb93d1_--operator().c)
 */

char __fastcall ValidateIFIMETRICS(struct _IFIMETRICS *a1)
{
  __int64 dpwszFamilyName; // rdx
  __int64 v2; // r10
  __int64 v3; // r10
  __int64 v4; // r10
  _DWORD *v5; // r10
  unsigned int v6; // r9d
  __int64 v7; // rdx
  int v8; // r11d
  __int64 v9; // rdx
  __int64 v10; // rdx
  __int64 v11; // r10
  unsigned int v12; // r11d
  __int64 v13; // r8
  __int64 v14; // rdx
  __int64 v15; // rdx
  __int64 v16; // r8
  __int64 v17; // r9
  __int64 v18; // rdx
  __int64 v19; // rdx
  __int64 v20; // rdx
  __int64 v21; // rdx
  __int64 v23; // rdx
  __int64 v24; // rdx
  int v25; // r11d
  struct _IFIMETRICS *v26; // [rsp+30h] [rbp+10h] BYREF
  struct _IFIMETRICS **v27; // [rsp+38h] [rbp+18h] BYREF
  struct _IFIMETRICS **v28; // [rsp+40h] [rbp+20h] BYREF

  v26 = a1;
  dpwszFamilyName = (unsigned int)a1->dpwszFamilyName;
  v27 = &v26;
  if ( !(unsigned __int8)lambda_070e29bc377876d11c9c205fcaeb93d1_::operator()(&v27, dpwszFamilyName)
    || !(unsigned __int8)lambda_070e29bc377876d11c9c205fcaeb93d1_::operator()(&v27, *(unsigned int *)(v2 + 12))
    || !(unsigned __int8)lambda_070e29bc377876d11c9c205fcaeb93d1_::operator()(&v27, *(unsigned int *)(v3 + 16))
    || !(unsigned __int8)lambda_070e29bc377876d11c9c205fcaeb93d1_::operator()(&v27, *(unsigned int *)(v4 + 20)) )
  {
    return 0;
  }
  v6 = v5[1];
  v27 = &v26;
  if ( v6 )
  {
    if ( v6 < 8 )
      return 0;
    v7 = (unsigned int)v5[49];
    if ( (_DWORD)v7 )
    {
      if ( !(unsigned __int8)lambda_3eb24279fbdd178c4d8527d8e8f1e39f_::operator()(&v27, v7, 24LL) )
        return 0;
    }
    v8 = 0;
    if ( v6 >= 0x10 )
    {
      v9 = (int)v5[51];
      if ( (_DWORD)v9 )
      {
        if ( !(unsigned __int8)lambda_3eb24279fbdd178c4d8527d8e8f1e39f_::operator()(&v27, v9, 8LL) )
          return 0;
        v12 = *(_DWORD *)(v11 + v10 + 4);
        if ( v12 > 0x10 )
          return 0;
        v13 = *(_DWORD *)(v11 + v10) == 134248052 ? 140LL : 4 * v12 + 8;
        if ( !(unsigned __int8)lambda_3eb24279fbdd178c4d8527d8e8f1e39f_::operator()(&v27, v10, v13) )
          return 0;
      }
    }
    if ( v6 >= 0x14 )
    {
      v23 = (int)v5[52];
      if ( (_DWORD)v23 )
      {
        if ( !(unsigned __int8)lambda_3eb24279fbdd178c4d8527d8e8f1e39f_::operator()(
                                 &v27,
                                 v23,
                                 (unsigned int)(40 * v8 + 8))
          || *(_DWORD *)((char *)v5 + v24 + 4) != v25 )
        {
          return 0;
        }
      }
    }
  }
  if ( ((v14 = (int)v5[6], !(_DWORD)v14)
     || (unsigned __int8)lambda_3eb24279fbdd178c4d8527d8e8f1e39f_::operator()(&v27, v14, 12LL)
     && ((v17 = v15, v18 = *(unsigned int *)((char *)v5 + v15), v28 = &v26, !(_DWORD)v18)
      || (unsigned __int8)lambda_6205c396a1390c774bd95fcbb0cc7414_::operator()(&v28, v18, v16, v17))
     && ((v19 = *(unsigned int *)((char *)v5 + v17 + 4), !(_DWORD)v19)
      || (unsigned __int8)lambda_6205c396a1390c774bd95fcbb0cc7414_::operator()(&v28, v19, v16, v17))
     && ((v20 = *(unsigned int *)((char *)v5 + v17 + 8), !(_DWORD)v20)
      || (unsigned __int8)lambda_6205c396a1390c774bd95fcbb0cc7414_::operator()(&v28, v20, v16, v17)))
    && ((v21 = (unsigned int)v5[10], !(_DWORD)v21)
     || (unsigned __int8)lambda_3eb24279fbdd178c4d8527d8e8f1e39f_::operator()(&v27, v21, 16LL)) )
  {
    return 1;
  }
  else
  {
    return 0;
  }
}
