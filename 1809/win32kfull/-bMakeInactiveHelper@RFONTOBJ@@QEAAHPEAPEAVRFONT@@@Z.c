/*
 * XREFs of ?bMakeInactiveHelper@RFONTOBJ@@QEAAHPEAPEAVRFONT@@@Z @ 0x1C0081840
 * Callers:
 *     ?bInit@RFONTOBJ@@QEAAHAEAVXDCOBJ@@HK@Z @ 0x1C005FD30 (-bInit@RFONTOBJ@@QEAAHAEAVXDCOBJ@@HK@Z.c)
 *     ?vMakeInactive@RFONTOBJ@@QEAAXXZ @ 0x1C00816A8 (-vMakeInactive@RFONTOBJ@@QEAAXXZ.c)
 *     ?vInitEUDC@RFONTOBJ@@QEAAXAEAVXDCOBJ@@@Z @ 0x1C00C3E78 (-vInitEUDC@RFONTOBJ@@QEAAXAEAVXDCOBJ@@@Z.c)
 *     vMakeInactiveHelper @ 0x1C027C874 (vMakeInactiveHelper.c)
 * Callees:
 *     ?bValid@RFONTOBJ@@QEBAHXZ @ 0x1C0057D8C (-bValid@RFONTOBJ@@QEBAHXZ.c)
 *     ?prfntInactive@PDEVOBJ@@QEAAPEAVRFONT@@PEAV2@@Z @ 0x1C0080A24 (-prfntInactive@PDEVOBJ@@QEAAPEAVRFONT@@PEAV2@@Z.c)
 *     ??1RFONTOBJ@@QEAA@XZ @ 0x1C008471C (--1RFONTOBJ@@QEAA@XZ.c)
 *     ?prfntInactive@PDEVOBJ@@QEAAPEAVRFONT@@XZ @ 0x1C00855AC (-prfntInactive@PDEVOBJ@@QEAAPEAVRFONT@@XZ.c)
 *     ?vDeleteRFONT@RFONTOBJ@@QEAAXPEAVPDEVOBJ@@PEAVPFFOBJ@@H@Z @ 0x1C00869C0 (-vDeleteRFONT@RFONTOBJ@@QEAAXPEAVPDEVOBJ@@PEAVPFFOBJ@@H@Z.c)
 *     ?vRemove@RFONTOBJ@@QEAAXPEAPEAVRFONT@@W4_RFL_TYPE@@@Z @ 0x1C0086C2C (-vRemove@RFONTOBJ@@QEAAXPEAPEAVRFONT@@W4_RFL_TYPE@@@Z.c)
 *     TraceGreReleaseSemaphore @ 0x1C015EB04 (TraceGreReleaseSemaphore.c)
 *     ?bActive@RFONTOBJ@@QEBA_NAEBVSEMOBJSHARED@@@Z @ 0x1C015F19C (-bActive@RFONTOBJ@@QEBA_NAEBVSEMOBJSHARED@@@Z.c)
 *     ??1SEMOBJ@@QEAA@XZ @ 0x1C01B8390 (--1SEMOBJ@@QEAA@XZ.c)
 */

__int64 __fastcall RFONTOBJ::bMakeInactiveHelper(RFONTOBJ *this, struct RFONT **a2)
{
  unsigned int v3; // r15d
  __int64 result; // rax
  struct RFONT *v6; // r14
  const struct SEMOBJSHARED *v7; // rdx
  const struct SEMOBJSHARED *v8; // rdx
  RFONTOBJ *v9; // rcx
  __int64 v10; // rcx
  __int64 v11; // r8
  struct RFONT *v12; // rax
  struct RFONT *v13; // rax
  struct RFONT *v14; // rax
  unsigned int i; // edx
  __int64 v16; // r9
  __int64 v17; // rax
  struct RFONT *v18; // r10
  __int64 v19; // rdx
  __int64 v20; // r8
  __int64 v21; // r8
  __int64 v22; // rbx
  __int64 v23; // rdx
  __int64 v24; // rax
  __int64 v25; // r9
  __int64 v26; // r10
  _QWORD *v27; // rcx
  __int64 v28; // rax
  int v29; // ecx
  unsigned int v30; // edx
  struct RFONT *v31; // rax
  struct RFONT *j; // rcx
  int v33; // edx
  int v34; // edx
  int v35; // edx
  __int64 v36; // rcx
  _QWORD *v37; // r8
  _QWORD *v38; // rax
  _QWORD v39[2]; // [rsp+20h] [rbp-40h] BYREF
  struct RFONT *v40; // [rsp+30h] [rbp-30h] BYREF
  int v41; // [rsp+38h] [rbp-28h]
  _QWORD v42[4]; // [rsp+40h] [rbp-20h] BYREF
  struct RFONT *v43; // [rsp+A0h] [rbp+40h] BYREF
  __int64 v44; // [rsp+A8h] [rbp+48h] BYREF

  v3 = 0;
  result = RFONTOBJ::bValid(this);
  if ( (_DWORD)result )
  {
    v6 = 0LL;
    if ( a2 )
    {
      GreAcquireSemaphore(ghsemEUDC1);
      ++gcEUDCCount;
      TraceGreReleaseSemaphore(L"ghsemEUDC1", ghsemEUDC1);
      GreReleaseSemaphoreInternal(ghsemEUDC1);
    }
    v39[0] = ghsemRFONTList;
    GreAcquireSemaphore(ghsemRFONTList);
    if ( RFONTOBJ::bActive(this, v7) )
    {
      --*(_DWORD *)(*(_QWORD *)this + 660LL);
      if ( !RFONTOBJ::bActive(v9, v8) )
      {
        if ( a2 )
        {
          v10 = *(_QWORD *)this;
          v11 = *(_QWORD *)this;
          v12 = *(struct RFONT **)(*(_QWORD *)this + 720LL);
          if ( v12 )
          {
            *a2++ = v12;
            *(_QWORD *)(*(_QWORD *)this + 720LL) = 0LL;
            v10 = *(_QWORD *)this;
            v11 = *(_QWORD *)this;
          }
          v13 = *(struct RFONT **)(v10 + 728);
          v3 = 1;
          if ( v13 )
          {
            *a2++ = v13;
            *(_QWORD *)(*(_QWORD *)this + 728LL) = 0LL;
            v10 = *(_QWORD *)this;
            v11 = *(_QWORD *)this;
          }
          v14 = *(struct RFONT **)(v10 + 736);
          if ( v14 )
          {
            *a2++ = v14;
            *(_QWORD *)(*(_QWORD *)this + 736LL) = 0LL;
            v10 = *(_QWORD *)this;
            v11 = *(_QWORD *)this;
          }
          for ( i = 0; i < *(_DWORD *)(v10 + 840); v11 = v10 )
          {
            v16 = 8LL * i;
            v17 = *(_QWORD *)(v10 + 744);
            v10 = v11;
            v18 = *(struct RFONT **)(v16 + v17);
            if ( v18 )
            {
              *a2++ = v18;
              *(_QWORD *)(v16 + *(_QWORD *)(*(_QWORD *)this + 744LL)) = 0LL;
              v10 = *(_QWORD *)this;
            }
            ++i;
          }
          v19 = *(_QWORD *)(v10 + 744);
          v20 = v10;
          if ( v19 && v19 != v10 + 752 )
          {
            Win32FreePool(*(_QWORD *)(v10 + 744));
            v20 = *(_QWORD *)this;
          }
          *(_QWORD *)(v20 + 744) = 0LL;
          *(_DWORD *)(*(_QWORD *)this + 840LL) = 0;
          *(_DWORD *)(*(_QWORD *)this + 832LL) = 0;
        }
        v21 = *(_QWORD *)this;
        v22 = *(_QWORD *)(*(_QWORD *)this + 104LL);
        v44 = v22;
        if ( (*(_DWORD *)(v22 + 40) & 0x800000) != 0 )
          v23 = *(_QWORD *)(*(_QWORD *)(v22 + 3520) + 1520LL);
        else
          v23 = *(_QWORD *)(v22 + 1520);
        v24 = *(_QWORD *)(v21 + 664);
        v25 = *(_QWORD *)(v21 + 672);
        v26 = v24 + 664;
        if ( !v24 )
          v26 = 0LL;
        v27 = (_QWORD *)(v25 + 664);
        if ( !v25 )
          v27 = 0LL;
        if ( v24 )
        {
          *(_QWORD *)(v26 + 8) = v25;
          if ( v27 )
            *v27 = *(_QWORD *)(v21 + 664);
        }
        else
        {
          v23 = *(_QWORD *)(v21 + 672);
          if ( v27 )
            *v27 = 0LL;
        }
        if ( (*(_DWORD *)(v22 + 40) & 0x800000) != 0 )
          *(_QWORD *)(*(_QWORD *)(v22 + 3520) + 1520LL) = v23;
        else
          *(_QWORD *)(v22 + 1520) = v23;
        v28 = *(_QWORD *)(*(_QWORD *)this + 128LL);
        if ( *(_DWORD *)(v28 + 56) || *(_DWORD *)(v28 + 60) || *(_QWORD *)(v28 + 144) )
        {
          v29 = *(_DWORD *)(v22 + 40) & 0x800000;
          if ( v29 )
            v30 = *(_DWORD *)(*(_QWORD *)(v22 + 3520) + 1536LL);
          else
            v30 = *(_DWORD *)(v22 + 1536);
          if ( v30 < 0x80 )
          {
            if ( v29 )
              v33 = *(_DWORD *)(*(_QWORD *)(v22 + 3520) + 1536LL);
            else
              v33 = *(_DWORD *)(v22 + 1536);
            v34 = v33 + 1;
            if ( v29 )
              *(_DWORD *)(*(_QWORD *)(v22 + 3520) + 1536LL) = v34;
            else
              *(_DWORD *)(v22 + 1536) = v34;
          }
          else
          {
            v31 = PDEVOBJ::prfntInactive((PDEVOBJ *)&v44);
            for ( j = v31; j; j = (struct RFONT *)*((_QWORD *)j + 84) )
              v6 = j;
            v41 = 0;
            v40 = v6;
            v43 = v31;
            RFONTOBJ::vRemove(&v40, &v43, 1LL);
            PDEVOBJ::prfntInactive((PDEVOBJ *)&v44, v43);
            v40 = 0LL;
            RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v40);
          }
          v35 = *(_DWORD *)(v22 + 40);
          if ( (v35 & 0x800000) != 0 )
            v36 = *(_QWORD *)(*(_QWORD *)(v22 + 3520) + 1528LL);
          else
            v36 = *(_QWORD *)(v22 + 1528);
          v37 = (_QWORD *)(v36 + 664);
          if ( !v36 )
            v37 = 0LL;
          v38 = (_QWORD *)(*(_QWORD *)this + 664LL);
          if ( *(_QWORD *)this != -664LL )
          {
            *v38 = 0LL;
            v38[1] = v36;
            if ( v37 )
              *v37 = *(_QWORD *)this;
            v36 = *(_QWORD *)this;
            v35 = *(_DWORD *)(v22 + 40);
          }
          if ( (v35 & 0x800000) != 0 )
            *(_QWORD *)(*(_QWORD *)(v22 + 3520) + 1528LL) = v36;
          else
            *(_QWORD *)(v22 + 1528) = v36;
        }
        else
        {
          v6 = *(struct RFONT **)this;
        }
      }
      SEMOBJ::~SEMOBJ((SEMOBJ *)v39);
      if ( a2 && !v3 )
      {
        GreAcquireSemaphore(ghsemEUDC1);
        --gcEUDCCount;
        TraceGreReleaseSemaphore(L"ghsemEUDC1", ghsemEUDC1);
        GreReleaseSemaphoreInternal(ghsemEUDC1);
      }
      if ( v6 )
      {
        v39[0] = *((_QWORD *)v6 + 16);
        v41 = 0;
        memset(v42, 0, sizeof(v42));
        v40 = v6;
        PushThreadGuardedObject(v42, v6, RestartInactiveHelper);
        RFONTOBJ::vDeleteRFONT((RFONTOBJ *)&v40, 0LL, (struct PFFOBJ *)v39, 1);
        PopThreadGuardedObject(v42);
        v40 = 0LL;
        RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v40);
      }
      *(_QWORD *)this = 0LL;
      return v3;
    }
    else
    {
      GreAcquireSemaphore(ghsemEUDC1);
      --gcEUDCCount;
      TraceGreReleaseSemaphore(L"ghsemEUDC1", ghsemEUDC1);
      GreReleaseSemaphoreInternal(ghsemEUDC1);
      SEMOBJ::~SEMOBJ((SEMOBJ *)v39);
      return 0LL;
    }
  }
  return result;
}
