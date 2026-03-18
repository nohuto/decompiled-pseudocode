/*
 * XREFs of ?bMakeInactiveHelper@RFONTOBJ@@QEAAHPEAPEAVRFONT@@@Z @ 0x1C0086C60
 * Callers:
 *     ?vInitEUDC@RFONTOBJ@@QEAAXAEAVXDCOBJ@@@Z @ 0x1C000399C (-vInitEUDC@RFONTOBJ@@QEAAXAEAVXDCOBJ@@@Z.c)
 *     RFONTOBJ_vConstructPRFONTWrap @ 0x1C00832B0 (RFONTOBJ_vConstructPRFONTWrap.c)
 *     ?bInit@RFONTOBJ@@QEAAHAEAVXDCOBJ@@HK@Z @ 0x1C00877F0 (-bInit@RFONTOBJ@@QEAAHAEAVXDCOBJ@@HK@Z.c)
 *     ?vMakeInactive@RFONTOBJ@@QEAAXXZ @ 0x1C0197244 (-vMakeInactive@RFONTOBJ@@QEAAXXZ.c)
 *     vMakeInactiveHelper @ 0x1C026891C (vMakeInactiveHelper.c)
 * Callees:
 *     ??1RFONTOBJ@@QEAA@XZ @ 0x1C0088BE8 (--1RFONTOBJ@@QEAA@XZ.c)
 *     ?vRemove@RFONTOBJ@@QEAAXPEAPEAVRFONT@@W4_RFL_TYPE@@@Z @ 0x1C0088CB4 (-vRemove@RFONTOBJ@@QEAAXPEAPEAVRFONT@@W4_RFL_TYPE@@@Z.c)
 *     ?vDeleteRFONT@RFONTOBJ@@QEAAXPEAVPDEVOBJ@@PEAVPFFOBJ@@H@Z @ 0x1C0088DC8 (-vDeleteRFONT@RFONTOBJ@@QEAAXPEAVPDEVOBJ@@PEAVPFFOBJ@@H@Z.c)
 *     ?prfntInactive@PDEVOBJ@@QEAAPEAVRFONT@@PEAV2@@Z @ 0x1C00CE3B0 (-prfntInactive@PDEVOBJ@@QEAAPEAVRFONT@@PEAV2@@Z.c)
 *     ?prfntInactive@PDEVOBJ@@QEAAPEAVRFONT@@XZ @ 0x1C00CEF40 (-prfntInactive@PDEVOBJ@@QEAAPEAVRFONT@@XZ.c)
 *     memset @ 0x1C013D6C0 (memset.c)
 */

__int64 __fastcall RFONTOBJ::bMakeInactiveHelper(struct RFONT **this, struct RFONT **a2)
{
  struct RFONT **v2; // r15
  unsigned int v4; // r14d
  struct RFONT *v5; // rbp
  struct RFONT *v6; // rax
  struct RFONT *v7; // rcx
  struct RFONT *v8; // r8
  struct RFONT *v9; // rcx
  struct RFONT *v10; // rcx
  unsigned int i; // edx
  struct RFONT *v12; // rcx
  struct RFONT *v13; // rdx
  __int64 v14; // rbx
  __int64 v15; // r8
  __int64 v16; // rcx
  __int64 v17; // r9
  __int64 v18; // r10
  _QWORD *v19; // rdx
  __int64 v20; // rax
  int v21; // ecx
  unsigned int v22; // edx
  int v23; // edx
  int v24; // edx
  int v25; // edx
  struct RFONT *v26; // rcx
  struct RFONT **v27; // r8
  _QWORD *v28; // rax
  __int64 result; // rax
  struct RFONT *v30; // rax
  struct RFONT *j; // rcx
  __int64 v32; // rax
  __int64 v33; // r9
  __int64 v34; // rcx
  struct RFONT *v35; // r10
  struct RFONT *v36; // [rsp+20h] [rbp-68h] BYREF
  int v37; // [rsp+28h] [rbp-60h]
  __int64 v38; // [rsp+30h] [rbp-58h] BYREF
  _BYTE v39[32]; // [rsp+40h] [rbp-48h] BYREF
  struct RFONT *v40; // [rsp+90h] [rbp+8h] BYREF
  __int64 v41; // [rsp+A0h] [rbp+18h] BYREF

  v2 = a2;
  v4 = 0;
  if ( !*this || !*((_DWORD *)*this + 161) )
    return 0LL;
  v5 = 0LL;
  if ( a2 )
  {
    GreAcquireSemaphore(ghsemEUDC1);
    ++gcEUDCCount;
    EtwTraceGreLockReleaseSemaphore(L"ghsemEUDC1", ghsemEUDC1);
    GreReleaseSemaphoreInternal(ghsemEUDC1);
  }
  GreAcquireSemaphore(ghsemRFONTList);
  --*((_DWORD *)*this + 161);
  v6 = *this;
  if ( !*((_DWORD *)*this + 161) )
  {
    if ( v2 )
    {
      v7 = (struct RFONT *)*((_QWORD *)v6 + 88);
      v8 = *this;
      if ( v7 )
      {
        *v2++ = v7;
        *((_QWORD *)*this + 88) = 0LL;
        v6 = *this;
        v8 = *this;
      }
      v9 = (struct RFONT *)*((_QWORD *)v6 + 89);
      v4 = 1;
      if ( v9 )
      {
        *v2++ = v9;
        *((_QWORD *)*this + 89) = 0LL;
        v6 = *this;
        v8 = *this;
      }
      v10 = (struct RFONT *)*((_QWORD *)v6 + 90);
      if ( v10 )
      {
        *v2++ = v10;
        *((_QWORD *)*this + 90) = 0LL;
        v6 = *this;
        v8 = *this;
      }
      for ( i = 0; i < *((_DWORD *)v6 + 206); v8 = v6 )
      {
        v33 = 8LL * i;
        v34 = *((_QWORD *)v6 + 91);
        v6 = v8;
        v35 = *(struct RFONT **)(v33 + v34);
        if ( v35 )
        {
          *v2++ = v35;
          *(_QWORD *)(v33 + *((_QWORD *)*this + 91)) = 0LL;
          v6 = *this;
        }
        ++i;
      }
      v12 = (struct RFONT *)*((_QWORD *)v6 + 91);
      v13 = v6;
      if ( v12 && v12 != (struct RFONT *)((char *)v6 + 736) )
      {
        Win32FreePool(v12);
        v13 = *this;
      }
      *((_QWORD *)v13 + 91) = 0LL;
      *((_DWORD *)*this + 206) = 0;
      *((_DWORD *)*this + 204) = 0;
      v6 = *this;
    }
    v14 = *((_QWORD *)v6 + 11);
    v41 = v14;
    if ( (*(_DWORD *)(v14 + 40) & 0x800000) != 0 )
      v15 = *(_QWORD *)(*(_QWORD *)(v14 + 3512) + 1512LL);
    else
      v15 = *(_QWORD *)(v14 + 1512);
    v16 = *((_QWORD *)v6 + 81);
    v17 = *((_QWORD *)v6 + 82);
    v18 = v16 + 648;
    if ( !v16 )
      v18 = 0LL;
    v19 = (_QWORD *)(v17 + 648);
    if ( !v17 )
      v19 = 0LL;
    if ( v16 )
    {
      *(_QWORD *)(v18 + 8) = v17;
      if ( v19 )
        *v19 = *((_QWORD *)v6 + 81);
    }
    else
    {
      v15 = *((_QWORD *)v6 + 82);
      if ( v19 )
        *v19 = 0LL;
    }
    if ( (*(_DWORD *)(v14 + 40) & 0x800000) != 0 )
      *(_QWORD *)(*(_QWORD *)(v14 + 3512) + 1512LL) = v15;
    else
      *(_QWORD *)(v14 + 1512) = v15;
    v20 = *((_QWORD *)*this + 14);
    if ( *(_DWORD *)(v20 + 56) || *(_DWORD *)(v20 + 60) || *(_QWORD *)(v20 + 144) )
    {
      v21 = *(_DWORD *)(v14 + 40) & 0x800000;
      if ( v21 )
        v22 = *(_DWORD *)(*(_QWORD *)(v14 + 3512) + 1528LL);
      else
        v22 = *(_DWORD *)(v14 + 1528);
      if ( v22 >= 0x80 )
      {
        v30 = PDEVOBJ::prfntInactive((PDEVOBJ *)&v41);
        for ( j = v30; v30; v30 = (struct RFONT *)*((_QWORD *)v30 + 82) )
          v5 = v30;
        v40 = j;
        v37 = 0;
        v36 = v5;
        RFONTOBJ::vRemove(&v36, &v40, 1LL);
        PDEVOBJ::prfntInactive((PDEVOBJ *)&v41, v40);
        v36 = 0LL;
        RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v36);
      }
      else
      {
        if ( v21 )
          v23 = *(_DWORD *)(*(_QWORD *)(v14 + 3512) + 1528LL);
        else
          v23 = *(_DWORD *)(v14 + 1528);
        v24 = v23 + 1;
        if ( v21 )
          *(_DWORD *)(*(_QWORD *)(v14 + 3512) + 1528LL) = v24;
        else
          *(_DWORD *)(v14 + 1528) = v24;
      }
      v25 = *(_DWORD *)(v14 + 40);
      if ( (v25 & 0x800000) != 0 )
        v26 = *(struct RFONT **)(*(_QWORD *)(v14 + 3512) + 1520LL);
      else
        v26 = *(struct RFONT **)(v14 + 1520);
      v27 = (struct RFONT **)((char *)v26 + 648);
      if ( !v26 )
        v27 = 0LL;
      v28 = (_QWORD *)((char *)*this + 648);
      if ( *this != (struct RFONT *)-648LL )
      {
        *v28 = 0LL;
        v28[1] = v26;
        if ( v27 )
          *v27 = *this;
        v26 = *this;
        v25 = *(_DWORD *)(v14 + 40);
      }
      if ( (v25 & 0x800000) != 0 )
        *(_QWORD *)(*(_QWORD *)(v14 + 3512) + 1520LL) = v26;
      else
        *(_QWORD *)(v14 + 1520) = v26;
    }
    else
    {
      v5 = *this;
    }
  }
  if ( ghsemRFONTList )
  {
    EtwTraceGreLockReleaseSemaphore(L"hsem", ghsemRFONTList);
    GreReleaseSemaphoreInternal(ghsemRFONTList);
  }
  if ( v2 && !v4 )
  {
    GreAcquireSemaphore(ghsemEUDC1);
    --gcEUDCCount;
    EtwTraceGreLockReleaseSemaphore(L"ghsemEUDC1", ghsemEUDC1);
    GreReleaseSemaphoreInternal(ghsemEUDC1);
  }
  if ( v5 )
  {
    v32 = *((_QWORD *)v5 + 14);
    v37 = 0;
    v36 = v5;
    v38 = v32;
    memset(v39, 0, sizeof(v39));
    PushThreadGuardedObject(v39, v5, RestartInactiveHelper);
    RFONTOBJ::vDeleteRFONT((RFONTOBJ *)&v36, 0LL, (struct PFFOBJ *)&v38, 1);
    PopThreadGuardedObject(v39);
    v36 = 0LL;
    RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v36);
  }
  result = v4;
  *this = 0LL;
  return result;
}
