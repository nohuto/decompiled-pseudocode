/*
 * XREFs of ?ValidateIFIMETRICS@@YA_NPEAU_IFIMETRICS@@@Z @ 0x1C0092FCC
 * Callers:
 *     ?CaptureUsermodeParameters@QueryFontRequest@@UEAAXPEAX@Z @ 0x1C0092EB0 (-CaptureUsermodeParameters@QueryFontRequest@@UEAAXPEAX@Z.c)
 * Callees:
 *     _lambda_e49dbbaebc162bc9c33c04d25ae922f3_::operator() @ 0x1C00931C0 (_lambda_e49dbbaebc162bc9c33c04d25ae922f3_--operator().c)
 *     _lambda_84ab05685f94153e8e9dc6470a08d6de_::operator() @ 0x1C00931F0 (_lambda_84ab05685f94153e8e9dc6470a08d6de_--operator().c)
 *     _lambda_62c42852b2d8827a36f77ed1261f23ad_::operator() @ 0x1C00939F8 (_lambda_62c42852b2d8827a36f77ed1261f23ad_--operator().c)
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
  __int64 v16; // r11
  int v17; // edx
  __int64 v18; // rdx
  __int64 v20; // rdx
  __int64 v21; // rdx
  int v22; // r11d
  struct _IFIMETRICS *v23; // [rsp+30h] [rbp+10h] BYREF
  struct _IFIMETRICS **v24; // [rsp+38h] [rbp+18h] BYREF
  struct _IFIMETRICS **v25; // [rsp+40h] [rbp+20h] BYREF

  v23 = a1;
  dpwszFamilyName = (unsigned int)a1->dpwszFamilyName;
  v24 = &v23;
  if ( !(unsigned __int8)lambda_62c42852b2d8827a36f77ed1261f23ad_::operator()(&v24, dpwszFamilyName)
    || !(unsigned __int8)lambda_62c42852b2d8827a36f77ed1261f23ad_::operator()(&v24, *(unsigned int *)(v2 + 12))
    || !(unsigned __int8)lambda_62c42852b2d8827a36f77ed1261f23ad_::operator()(&v24, *(unsigned int *)(v3 + 16))
    || !(unsigned __int8)lambda_62c42852b2d8827a36f77ed1261f23ad_::operator()(&v24, *(unsigned int *)(v4 + 20)) )
  {
    return 0;
  }
  v6 = v5[1];
  v24 = &v23;
  if ( v6 )
  {
    if ( v6 < 8 )
      return 0;
    v7 = (unsigned int)v5[49];
    if ( (_DWORD)v7 )
    {
      if ( !(unsigned __int8)lambda_e49dbbaebc162bc9c33c04d25ae922f3_::operator()(&v24, v7, 24LL) )
        return 0;
    }
    v8 = 0;
    if ( v6 >= 0x10 )
    {
      v9 = (int)v5[51];
      if ( (_DWORD)v9 )
      {
        if ( !(unsigned __int8)lambda_e49dbbaebc162bc9c33c04d25ae922f3_::operator()(&v24, v9, 8LL) )
          return 0;
        v12 = *(_DWORD *)(v11 + v10 + 4);
        if ( v12 > 0x10 )
          return 0;
        v13 = *(_DWORD *)(v11 + v10) == 134248052 ? 140LL : 4 * v12 + 8;
        if ( !(unsigned __int8)lambda_e49dbbaebc162bc9c33c04d25ae922f3_::operator()(&v24, v10, v13) )
          return 0;
      }
    }
    if ( v6 >= 0x14 )
    {
      v20 = (int)v5[52];
      if ( (_DWORD)v20 )
      {
        if ( !(unsigned __int8)lambda_e49dbbaebc162bc9c33c04d25ae922f3_::operator()(
                                 &v24,
                                 v20,
                                 (unsigned int)(40 * v8 + 8))
          || *(_DWORD *)((char *)v5 + v21 + 4) != v22 )
        {
          return 0;
        }
      }
    }
  }
  if ( ((v14 = (int)v5[6], !(_DWORD)v14)
     || (unsigned __int8)lambda_e49dbbaebc162bc9c33c04d25ae922f3_::operator()(&v24, v14, 12LL)
     && ((v16 = v15, v17 = *(_DWORD *)((char *)v5 + v15), v25 = &v23, !v17)
      || (unsigned __int8)lambda_84ab05685f94153e8e9dc6470a08d6de_::operator()(&v25))
     && (!*(_DWORD *)((char *)v5 + v16 + 4)
      || (unsigned __int8)lambda_84ab05685f94153e8e9dc6470a08d6de_::operator()(&v25))
     && (!*(_DWORD *)((char *)v5 + v16 + 8)
      || (unsigned __int8)lambda_84ab05685f94153e8e9dc6470a08d6de_::operator()(&v25)))
    && ((v18 = (unsigned int)v5[10], !(_DWORD)v18)
     || (unsigned __int8)lambda_e49dbbaebc162bc9c33c04d25ae922f3_::operator()(&v24, v18, 16LL)) )
  {
    return 1;
  }
  else
  {
    return 0;
  }
}
