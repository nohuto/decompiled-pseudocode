/*
 * XREFs of UmfdLoadFontFileView @ 0x1C00BEA68
 * Callers:
 *     ?vLoadFontFileView@@YAXPEAGKPEAPEAU_FONTFILEVIEW@@KPEAPEAXPEAKPEAUtagDESIGNVECTOR@@KPEA_KPEAPEAVPDEV@@PEAU_FNTCHECKSUM@@@Z @ 0x1C00BE990 (-vLoadFontFileView@@YAXPEAGKPEAPEAU_FONTFILEVIEW@@KPEAPEAXPEAKPEAUtagDESIGNVECTOR@@KPEA_KPEAPEAV.c)
 * Callees:
 *     ?EnsureUmfdHost@UmfdHostLifeTimeManager@@SA_NXZ @ 0x1C007DA90 (-EnsureUmfdHost@UmfdHostLifeTimeManager@@SA_NXZ.c)
 *     ?PutFntCacheDrv@@YAXKPEAVPDEV@@K@Z @ 0x1C00BC85C (-PutFntCacheDrv@@YAXKPEAVPDEV@@K@Z.c)
 *     _lambda_89bfae273395b2af9988bd05c6831f4c_::operator() @ 0x1C00BECD0 (_lambda_89bfae273395b2af9988bd05c6831f4c_--operator().c)
 *     ?UmfdInsertFontFileViewForLookup@@YAHPEAPEAU_FONTFILEVIEW@@I@Z @ 0x1C00BED68 (-UmfdInsertFontFileViewForLookup@@YAHPEAPEAU_FONTFILEVIEW@@I@Z.c)
 *     ?LookUpFNTCacheTable@@YAHKPEAGPEAK1PEAPEAVPDEV@@1PEAPEAU_FONTFILEVIEW@@KPEAUtagDESIGNVECTOR@@K@Z @ 0x1C00BF124 (-LookUpFNTCacheTable@@YAHKPEAGPEAK1PEAPEAVPDEV@@1PEAPEAU_FONTFILEVIEW@@KPEAUtagDESIGNVECTOR@@K@Z.c)
 */

struct PDEV *__fastcall UmfdLoadFontFileView(
        unsigned __int16 *a1,
        unsigned int a2,
        struct _FONTFILEVIEW **a3,
        unsigned int a4,
        char a5,
        char a6,
        struct tagDESIGNVECTOR *a7,
        unsigned int a8,
        __int64 *a9,
        _QWORD *a10,
        unsigned int *a11)
{
  __int64 *v13; // r13
  struct PDEV *result; // rax
  int *v15; // rsi
  int v16; // eax
  __int16 v17; // bx
  int v18; // r14d
  unsigned int v19; // edx
  unsigned int v20; // r8d
  __int64 v21; // rdx
  __int64 v22; // rdx
  char v23; // r14
  __int64 v24; // rdx
  __int64 v25; // rdi
  unsigned int i; // esi
  const wchar_t *v27; // r12
  size_t v28; // rax
  int v29; // edx
  _QWORD *v30; // rcx
  __int64 v31; // rax
  int v32; // ecx
  int v33; // ecx
  int v34; // ecx
  struct PDEV *v35; // [rsp+58h] [rbp-39h] BYREF
  struct PDEV *v36; // [rsp+60h] [rbp-31h] BYREF
  _QWORD v37[12]; // [rsp+68h] [rbp-29h] BYREF
  struct _FONTFILEVIEW **v38; // [rsp+E8h] [rbp+57h] BYREF
  unsigned int v39; // [rsp+F0h] [rbp+5Fh] BYREF

  v39 = a4;
  v38 = a3;
  LOBYTE(result) = UmfdHostLifeTimeManager::EnsureUmfdHost();
  v13 = a9;
  result = (struct PDEV *)(unsigned __int8)result;
  *a9 = 0LL;
  if ( (_BYTE)result )
  {
    v15 = (int *)a11;
    v16 = LookUpFNTCacheTable(a2, a1, a11, a11 + 1, &v35, (unsigned int *)&a9, v38, v39, a7, a8);
    v17 = 1;
    v18 = v16;
    v19 = v39;
    v20 = 0;
    if ( v35 != qword_1C032FD38 )
      v18 = 0;
    v36 = qword_1C032FD38;
    if ( v39 )
    {
      do
      {
        v21 = v20++;
        *((_DWORD *)v38[v21] + 10) |= 0x20u;
        *((_DWORD *)v38[v21] + 16) = 0;
        v19 = v39;
      }
      while ( v20 < v39 );
    }
    UmfdInsertFontFileViewForLookup(v38, v19);
    v37[0] = &v36;
    v37[1] = &a7;
    v37[2] = &v39;
    v37[3] = &v38;
    v37[4] = &a5;
    v37[5] = &a6;
    if ( v18 )
    {
      if ( (_DWORD)a9 == 1 || (v23 = 1, !a1) )
        v23 = 0;
      LOBYTE(v22) = v23;
      v25 = lambda_89bfae273395b2af9988bd05c6831f4c_::operator()(v37, v22, (unsigned int)*v15);
      if ( v25 )
      {
        for ( i = 0; i < v39; ++i )
        {
          *((_DWORD *)v38[i] + 10) |= 8u;
          if ( !v23 )
          {
            v27 = (const wchar_t *)*((_QWORD *)v38[i] + 10);
            if ( gpwszFontsDirectory
              && (v28 = wcsnlen(gpwszFontsDirectory, 0x104uLL), !wcsncmp(v27, gpwszFontsDirectory, v28)) )
            {
              v29 = 16;
            }
            else
            {
              v29 = 0;
            }
            *((_DWORD *)v38[i] + 10) = v29 | *((_DWORD *)v38[i] + 10) & 0xFFFFFFEF;
          }
        }
      }
      else
      {
        LOBYTE(v24) = v23;
        v25 = lambda_89bfae273395b2af9988bd05c6831f4c_::operator()(v37, v24, 0LL);
      }
    }
    else
    {
      LOBYTE(v22) = a1 != 0LL;
      v31 = lambda_89bfae273395b2af9988bd05c6831f4c_::operator()(v37, v22, (unsigned int)*v15);
      v25 = v31;
      if ( !v31 )
        goto LABEL_21;
      v32 = *(_DWORD *)(v31 + 8);
      if ( v32 )
      {
        v33 = v32 - 1;
        if ( v33 )
        {
          v34 = v33 - 1;
          if ( v34 )
          {
            if ( v34 == 1 )
              v17 = 4;
            else
              v17 = 0;
          }
          else
          {
            v17 = 3;
          }
        }
        else
        {
          v17 = 2;
        }
      }
      PutFntCacheDrv(*v15, qword_1C032FD38, v17);
    }
    if ( v25 )
    {
      v30 = a10;
      result = qword_1C032FD38;
      *v13 = v25;
      *v30 = result;
      return result;
    }
LABEL_21:
    result = (struct PDEV *)a10;
    *a10 = 0LL;
  }
  return result;
}
