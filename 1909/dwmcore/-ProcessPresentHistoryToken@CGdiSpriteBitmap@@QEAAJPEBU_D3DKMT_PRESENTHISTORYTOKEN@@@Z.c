/*
 * XREFs of ?ProcessPresentHistoryToken@CGdiSpriteBitmap@@QEAAJPEBU_D3DKMT_PRESENTHISTORYTOKEN@@@Z @ 0x18006CF00
 * Callers:
 *     ?ProcessToken@CLegacySurfaceManager@@IEAAJPEBU_D3DKMT_PRESENTHISTORYTOKEN@@PEAIPEA_N@Z @ 0x18006B0BC (-ProcessToken@CLegacySurfaceManager@@IEAAJPEBU_D3DKMT_PRESENTHISTORYTOKEN@@PEAIPEA_N@Z.c)
 * Callees:
 *     ?AddDirtyRegion@CGdiSpriteBitmap@@AEAAJAEAVCRegion@@_N@Z @ 0x18006B304 (-AddDirtyRegion@CGdiSpriteBitmap@@AEAAJAEAVCRegion@@_N@Z.c)
 *     ?Union@CRgnData@Internal@FastRegion@@QEAAXAEBV123@0@Z @ 0x18006D570 (-Union@CRgnData@Internal@FastRegion@@QEAAXAEBV123@0@Z.c)
 *     ?EstimateSizeUnion@CRgnData@Internal@FastRegion@@SAHAEBV123@0@Z @ 0x18006DFB0 (-EstimateSizeUnion@CRgnData@Internal@FastRegion@@SAHAEBV123@0@Z.c)
 *     ?Copy@CRegion@FastRegion@@QEAAJAEBV12@@Z @ 0x18006E3F8 (-Copy@CRegion@FastRegion@@QEAAJAEBV12@@Z.c)
 *     ??3@YAXPEAX@Z @ 0x18007004C (--3@YAXPEAX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800738CC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Alloc@DefaultHeap@@SAPEAX_K@Z @ 0x18007BD70 (-Alloc@DefaultHeap@@SAPEAX_K@Z.c)
 *     ?FreeMemory@CRegion@FastRegion@@IEAAXXZ @ 0x1800BA758 (-FreeMemory@CRegion@FastRegion@@IEAAXXZ.c)
 *     __security_check_cookie @ 0x1800E7E60 (__security_check_cookie.c)
 *     ??1CWorkBuffer@Internal@FastRegion@@QEAA@XZ @ 0x18015E2F4 (--1CWorkBuffer@Internal@FastRegion@@QEAA@XZ.c)
 *     ?AddIntervalOneDxBltEventId@CLegacySurfaceManager@@QEAAJ_K@Z @ 0x1801A25D0 (-AddIntervalOneDxBltEventId@CLegacySurfaceManager@@QEAAJ_K@Z.c)
 */

__int64 __fastcall CGdiSpriteBitmap::ProcessPresentHistoryToken(
        CGdiSpriteBitmap *this,
        const struct _D3DKMT_PRESENTHISTORYTOKEN *a2)
{
  bool v2; // zf
  const struct _D3DKMT_PRESENTHISTORYTOKEN *v3; // rbx
  CGdiSpriteBitmap *v4; // rdi
  unsigned int v5; // r13d
  __int64 v6; // rax
  char *v7; // rcx
  unsigned int v8; // r15d
  unsigned int v9; // edi
  char *v10; // rax
  int v11; // r9d
  int v12; // r10d
  int v13; // r11d
  int v14; // ebx
  struct FastRegion::Internal::CRgnData *v15; // r8
  char *v16; // r14
  int v17; // edx
  const struct FastRegion::Internal::CRgnData *v18; // rbx
  int v19; // r8d
  int v20; // eax
  int v21; // r9d
  int v22; // r10d
  int v23; // eax
  FastRegion::Internal::CRgnData *v24; // rcx
  char *v25; // rdi
  int v26; // esi
  struct FastRegion::Internal::CRgnData *v27; // rbx
  int v28; // r12d
  int v29; // esi
  int v30; // eax
  int v31; // ecx
  int v32; // esi
  __int64 v33; // r9
  _DWORD *v34; // rax
  signed __int64 v35; // rcx
  int v36; // r13d
  _DWORD *v37; // r11
  __int64 v38; // rcx
  unsigned __int64 v39; // rcx
  __int64 v40; // rdx
  __int64 v41; // r9
  struct FastRegion::Internal::CRgnData *v42; // rbx
  int v43; // eax
  FastRegion::Internal::CRgnData *v44; // rcx
  int *v45; // rdi
  struct FastRegion::Internal::CRgnData *v46; // rbx
  int v47; // r14d
  int v48; // esi
  int v49; // eax
  int v50; // ecx
  int v51; // esi
  __int64 v52; // r9
  _DWORD *v53; // r8
  int v54; // r12d
  _DWORD *v55; // r11
  __int64 v56; // rax
  unsigned __int64 v57; // rax
  __int64 v58; // rcx
  __int64 v59; // r9
  int v60; // eax
  unsigned int v61; // ecx
  FastRegion::Internal::CRgnData *v63; // rax
  int v64; // ebx
  FastRegion::Internal::CRgnData *v65; // rax
  int v66; // ebx
  signed __int64 v67; // rdx
  __int64 v68; // rcx
  int v69; // eax
  unsigned int v70; // ecx
  unsigned int v71; // [rsp+38h] [rbp-D0h]
  unsigned int v74; // [rsp+50h] [rbp-B8h]
  char *v75; // [rsp+58h] [rbp-B0h]
  struct FastRegion::Internal::CRgnData *v76; // [rsp+68h] [rbp-A0h] BYREF
  _DWORD v77[18]; // [rsp+70h] [rbp-98h] BYREF
  void *v78; // [rsp+B8h] [rbp-50h] BYREF
  _DWORD v79[3]; // [rsp+C0h] [rbp-48h] BYREF
  _DWORD v80[2]; // [rsp+CCh] [rbp-3Ch] BYREF
  _DWORD v81[13]; // [rsp+D4h] [rbp-34h] BYREF
  struct FastRegion::Internal::CRgnData *v82; // [rsp+108h] [rbp+0h] BYREF
  _DWORD v83[18]; // [rsp+110h] [rbp+8h] BYREF
  int v84; // [rsp+158h] [rbp+50h] BYREF
  void *lpMem; // [rsp+160h] [rbp+58h]
  _BYTE v86[256]; // [rsp+168h] [rbp+60h] BYREF
  int v87; // [rsp+268h] [rbp+160h] BYREF
  void *v88; // [rsp+270h] [rbp+168h]
  _BYTE v89[256]; // [rsp+278h] [rbp+170h] BYREF

  v2 = *(_DWORD *)a2 == 1;
  v3 = a2;
  v4 = this;
  v82 = (struct FastRegion::Internal::CRgnData *)v83;
  if ( v2 )
  {
    v5 = *((_DWORD *)a2 + 14);
    v6 = 60LL;
  }
  else
  {
    v5 = *((_DWORD *)a2 + 10);
    v6 = 44LL;
  }
  v7 = (char *)a2 + v6;
  v71 = v5;
  v8 = 0;
  v75 = (char *)a2 + v6;
  v76 = (struct FastRegion::Internal::CRgnData *)v77;
  v83[0] = 0;
  v77[0] = 0;
  if ( !v5 )
  {
LABEL_60:
    v26 = 0;
    goto LABEL_61;
  }
  while ( 1 )
  {
    v9 = v5;
    if ( v5 >= v8 + 5 )
      v9 = v8 + 5;
    v10 = &v7[16 * v8];
    v74 = v9;
    v11 = *(_DWORD *)v10;
    v12 = *((_DWORD *)v10 + 2);
    v13 = *((_DWORD *)v10 + 1);
    v14 = *((_DWORD *)v10 + 3);
    if ( *(_DWORD *)v10 >= v12 || v13 >= v14 )
    {
      *(_DWORD *)v76 = 0;
    }
    else
    {
      v15 = v76;
      *(_DWORD *)v76 = 2;
      *((_DWORD *)v15 + 1) = v11;
      *((_DWORD *)v15 + 2) = v12;
      *((_DWORD *)v15 + 3) = v13;
      *((_DWORD *)v15 + 4) = 16;
      v7 = v75;
      *((_DWORD *)v15 + 7) = v11;
      *((_DWORD *)v15 + 8) = v12;
      *((_DWORD *)v15 + 5) = v14;
      *((_DWORD *)v15 + 6) = 16;
    }
    if ( ++v8 < v9 )
    {
      v16 = &v7[16 * v8];
      while ( 1 )
      {
        v17 = *(_DWORD *)v16;
        v18 = (const struct FastRegion::Internal::CRgnData *)v79;
        v19 = *((_DWORD *)v16 + 2);
        v20 = *((_DWORD *)v16 + 1);
        v21 = *((_DWORD *)v16 + 3);
        v78 = v79;
        if ( v17 >= v19 || v20 >= v21 )
        {
          v22 = 0;
        }
        else
        {
          v80[0] = v20;
          v79[1] = v17;
          v79[2] = v19;
          v81[2] = v17;
          v80[1] = (unsigned int)&v82 - 44 - (unsigned int)v80;
          v22 = 2;
          v81[3] = v19;
          v81[0] = v21;
          LODWORD(v7) = (unsigned int)&v82 - 44 - (unsigned int)v81 + 8;
          v81[1] = (_DWORD)v7;
        }
        v79[0] = v22;
        if ( v22 )
          break;
        v26 = 0;
LABEL_34:
        if ( v26 < 0 )
          goto LABEL_89;
        ++v8;
        v16 += 16;
        if ( v8 >= v9 )
        {
          v5 = v71;
          goto LABEL_37;
        }
      }
      if ( *(_DWORD *)v76 )
      {
        v23 = FastRegion::Internal::CRgnData::EstimateSizeUnion(v76, (const struct FastRegion::Internal::CRgnData *)v79);
        v24 = (FastRegion::Internal::CRgnData *)v86;
        lpMem = v86;
        v84 = v23;
        if ( (unsigned __int64)v23 <= 0x100 )
          goto LABEL_17;
        v65 = (FastRegion::Internal::CRgnData *)DefaultHeap::Alloc(v23);
        v24 = v65;
        if ( v65 )
        {
          v18 = (const struct FastRegion::Internal::CRgnData *)v78;
          lpMem = v65;
LABEL_17:
          FastRegion::Internal::CRgnData::Union(v24, v76, v18);
          v25 = (char *)lpMem;
          v26 = 0;
          if ( *(_DWORD *)lpMem )
          {
            if ( v86 == lpMem )
            {
              v27 = v76;
              v28 = (_DWORD)lpMem + 12;
              v29 = *((_DWORD *)lpMem + 2 * *(_DWORD *)lpMem + 2)
                  + 8 * *(_DWORD *)lpMem
                  - *((_DWORD *)lpMem + 4)
                  - 12
                  + 8 * (*(_DWORD *)lpMem - 1)
                  + 24;
              v30 = v77[0];
              if ( v77 == (_DWORD *)v76 )
                v30 = 60;
              if ( v30 >= v29 )
                goto LABEL_22;
              v27 = (struct FastRegion::Internal::CRgnData *)DefaultHeap::Alloc(v29);
              if ( v27 )
              {
                FastRegion::CRegion::FreeMemory((FastRegion::CRegion *)&v76);
                v76 = v27;
                v77[0] = v29;
LABEL_22:
                v31 = *(_DWORD *)v25;
                v32 = 0;
                *(_DWORD *)v27 = *(_DWORD *)v25;
                *((_DWORD *)v27 + 1) = *((_DWORD *)v25 + 1);
                *((_DWORD *)v27 + 2) = *((_DWORD *)v25 + 2);
                v33 = (__int64)&v25[*((int *)v25 + 4) + 12];
                v34 = (_DWORD *)((char *)v27 + 8 * v31 + 12);
                v35 = ((struct FastRegion::Internal::CRgnData *)((char *)v27 + 8 * v31)
                     - (struct FastRegion::Internal::CRgnData *)&v25[*((int *)v25 + 4)]) >> 2;
                if ( *(int *)v27 > 0 )
                {
                  v36 = 4 * v35;
                  v37 = (_DWORD *)((char *)v27 + 12);
                  do
                  {
                    *v37 = *(_DWORD *)((char *)v37 + v25 - (char *)v27);
                    v37 += 2;
                    v38 = v32++;
                    *((_DWORD *)v27 + 2 * v38 + 4) = v36
                                                   + (_DWORD)v25
                                                   + 8 * v38
                                                   + *(_DWORD *)&v25[8 * v38 + 16]
                                                   - ((_DWORD)v27
                                                    + 8 * v38);
                  }
                  while ( v32 < *(_DWORD *)v27 );
                }
                v39 = (unsigned __int64)((int)v25
                                       + 4
                                       + 8 * *(_DWORD *)v25
                                       + *(_DWORD *)&v25[8 * *(int *)v25 + 8]
                                       - *((_DWORD *)v25 + 4)
                                       - v28) >> 2;
                v40 = (int)v39;
                if ( (int)v39 > 0 )
                {
                  v41 = v33 - (_QWORD)v34;
                  do
                  {
                    *v34 = *(_DWORD *)((char *)v34 + v41);
                    ++v34;
                    --v40;
                  }
                  while ( v40 );
                }
                v26 = 0;
                goto LABEL_29;
              }
              v26 = -2147024882;
            }
            else
            {
              v66 = v84;
              lpMem = v86;
              v84 = 0;
              FastRegion::CRegion::FreeMemory((FastRegion::CRegion *)&v76);
              v76 = (struct FastRegion::Internal::CRgnData *)v25;
              v77[0] = v66;
            }
          }
          else
          {
            *(_DWORD *)v76 = 0;
          }
LABEL_29:
          if ( v86 != lpMem )
            operator delete(lpMem);
          v9 = v74;
          goto LABEL_32;
        }
        FastRegion::Internal::CWorkBuffer::~CWorkBuffer((FastRegion::Internal::CWorkBuffer *)&v84);
        v26 = -2147024882;
      }
      else
      {
        v26 = FastRegion::CRegion::Copy((FastRegion::CRegion *)&v76, (const struct CRegion *)&v78);
      }
LABEL_32:
      LODWORD(v7) = (_DWORD)v78;
      if ( v79 != v78 )
      {
        operator delete(v78);
        v79[0] = 0;
        v78 = v79;
      }
      goto LABEL_34;
    }
LABEL_37:
    if ( *(_DWORD *)v76 )
      break;
LABEL_55:
    if ( v8 >= v5 )
    {
      if ( v77 != (_DWORD *)v76 )
        operator delete(v76);
      v4 = this;
      v3 = a2;
      goto LABEL_60;
    }
    v7 = v75;
  }
  v42 = v82;
  if ( !*(_DWORD *)v82 )
  {
    v26 = FastRegion::CRegion::Copy((FastRegion::CRegion *)&v82, (const struct CRegion *)&v76);
    goto LABEL_54;
  }
  v43 = FastRegion::Internal::CRgnData::EstimateSizeUnion(v82, v76);
  v44 = (FastRegion::Internal::CRgnData *)v89;
  v88 = v89;
  v87 = v43;
  if ( (unsigned __int64)v43 <= 0x100 )
  {
LABEL_40:
    FastRegion::Internal::CRgnData::Union(v44, v42, v76);
    v45 = (int *)v88;
    v26 = 0;
    if ( *(_DWORD *)v88 )
    {
      if ( v89 == v88 )
      {
        v46 = v82;
        v47 = (_DWORD)v88 + 12;
        v48 = *((_DWORD *)v88 + 2 * *(_DWORD *)v88 + 2)
            + 8 * *(_DWORD *)v88
            - *((_DWORD *)v88 + 4)
            - 12
            + 8 * (*(_DWORD *)v88 - 1)
            + 24;
        v49 = v83[0];
        if ( v83 == (_DWORD *)v82 )
          v49 = 60;
        if ( v49 >= v48 )
          goto LABEL_45;
        v46 = (struct FastRegion::Internal::CRgnData *)DefaultHeap::Alloc(v48);
        if ( v46 )
        {
          FastRegion::CRegion::FreeMemory((FastRegion::CRegion *)&v82);
          v82 = v46;
          v83[0] = v48;
LABEL_45:
          v50 = *v45;
          v51 = 0;
          *(_DWORD *)v46 = *v45;
          *((_DWORD *)v46 + 1) = v45[1];
          *((_DWORD *)v46 + 2) = v45[2];
          v52 = (__int64)v45 + v45[4] + 12;
          v53 = (_DWORD *)((char *)v46 + 8 * v50 + 12);
          if ( v50 > 0 )
          {
            v54 = 4
                * (((struct FastRegion::Internal::CRgnData *)((char *)v46 + 8 * v50)
                  - (struct FastRegion::Internal::CRgnData *)((char *)v45 + v45[4])) >> 2);
            v55 = (_DWORD *)((char *)v46 + 12);
            do
            {
              *v55 = *(_DWORD *)((char *)v55 + (char *)v45 - (char *)v46);
              v55 += 2;
              v56 = v51++;
              *((_DWORD *)v46 + 2 * v56 + 4) = (_DWORD)v45 + 8 * v56 + v54 + v45[2 * v56 + 4] - ((_DWORD)v46 + 8 * v56);
            }
            while ( v51 < *(_DWORD *)v46 );
          }
          v57 = (unsigned __int64)((int)v45 + 4 + 8 * *v45 + v45[2 * *v45 + 2] - v45[4] - v47) >> 2;
          v58 = (int)v57;
          if ( (int)v57 > 0 )
          {
            v59 = v52 - (_QWORD)v53;
            do
            {
              *v53 = *(_DWORD *)((char *)v53 + v59);
              ++v53;
              --v58;
            }
            while ( v58 );
          }
          v26 = 0;
          goto LABEL_52;
        }
        v26 = -2147024882;
      }
      else
      {
        v64 = v87;
        v88 = v89;
        v87 = 0;
        FastRegion::CRegion::FreeMemory((FastRegion::CRegion *)&v82);
        v82 = (struct FastRegion::Internal::CRgnData *)v45;
        v83[0] = v64;
      }
    }
    else
    {
      *(_DWORD *)v82 = 0;
    }
LABEL_52:
    LODWORD(v7) = (_DWORD)v88;
    if ( v89 != v88 )
      operator delete(v88);
LABEL_54:
    if ( v26 < 0 )
      goto LABEL_89;
    goto LABEL_55;
  }
  v63 = (FastRegion::Internal::CRgnData *)DefaultHeap::Alloc(v43);
  v44 = v63;
  if ( v63 )
  {
    v42 = v82;
    v88 = v63;
    goto LABEL_40;
  }
  FastRegion::Internal::CWorkBuffer::~CWorkBuffer((FastRegion::Internal::CWorkBuffer *)&v87);
  v26 = -2147024882;
LABEL_89:
  FastRegion::CRegion::FreeMemory((FastRegion::CRegion *)&v76);
  v3 = a2;
  v4 = this;
LABEL_61:
  if ( v26 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast((unsigned int)v7, 0LL, 0, v26, 0x29Eu, 0LL);
  }
  else
  {
    v60 = CGdiSpriteBitmap::AddDirtyRegion(v4, (struct CRegion *)&v82, 1);
    v26 = v60;
    if ( v60 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v61, 0LL, 0, v60, 0x2A0u, 0LL);
    }
    else if ( *(_DWORD *)v3 == 3 )
    {
      v67 = *((_QWORD *)v3 + 4);
      if ( v67 >= 0 )
      {
        if ( v67 )
        {
          v69 = CLegacySurfaceManager::AddIntervalOneDxBltEventId(
                  (CLegacySurfaceManager *)(*(_QWORD *)(*((_QWORD *)v4 + 2) + 72LL) + 104LL),
                  v67);
          v26 = v69;
          if ( v69 < 0 )
            MilInstrumentationCheckHR_MaybeFailFast(v70, 0LL, 0, v69, 0x2AFu, 0LL);
        }
      }
      else
      {
        v68 = *((_QWORD *)v4 + 9);
        *((_BYTE *)v4 + 116) |= 4u;
        *((_QWORD *)v4 + 15) = v68;
        *((_QWORD *)v4 + 16) = *((_QWORD *)v3 + 4);
      }
    }
  }
  if ( v83 != (_DWORD *)v82 )
    operator delete(v82);
  return (unsigned int)v26;
}
