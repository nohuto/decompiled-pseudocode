/*
 * XREFs of ?bMakeInactiveHelper@RFONTOBJ@@QEAAHPEAPEAVRFONT@@@Z @ 0x1C006E370
 * Callers:
 *     ?bInit@RFONTOBJ@@QEAAHAEAVXDCOBJ@@HK@Z @ 0x1C00676B0 (-bInit@RFONTOBJ@@QEAAHAEAVXDCOBJ@@HK@Z.c)
 *     RFONTOBJ_vConstructPRFONTWrap @ 0x1C01005B0 (RFONTOBJ_vConstructPRFONTWrap.c)
 *     ?vInitEUDC@RFONTOBJ@@QEAAXAEAVXDCOBJ@@@Z @ 0x1C0104A14 (-vInitEUDC@RFONTOBJ@@QEAAXAEAVXDCOBJ@@@Z.c)
 *     vMakeInactiveHelper @ 0x1C0292C28 (vMakeInactiveHelper.c)
 *     ?vMakeInactive@RFONTOBJ@@QEAAXXZ @ 0x1C02A1B98 (-vMakeInactive@RFONTOBJ@@QEAAXXZ.c)
 * Callees:
 *     ??1RFONTOBJ@@QEAA@XZ @ 0x1C0052D74 (--1RFONTOBJ@@QEAA@XZ.c)
 *     ?vDeleteRFONT@RFONTOBJ@@QEAAXPEAVPDEVOBJ@@PEAVPFFOBJ@@H@Z @ 0x1C0074EF8 (-vDeleteRFONT@RFONTOBJ@@QEAAXPEAVPDEVOBJ@@PEAVPFFOBJ@@H@Z.c)
 *     ?vRemove@RFONTOBJ@@QEAAXPEAPEAVRFONT@@W4_RFL_TYPE@@@Z @ 0x1C0075168 (-vRemove@RFONTOBJ@@QEAAXPEAPEAVRFONT@@W4_RFL_TYPE@@@Z.c)
 *     ?prfntInactive@PDEVOBJ@@QEAAPEAVRFONT@@XZ @ 0x1C0105594 (-prfntInactive@PDEVOBJ@@QEAAPEAVRFONT@@XZ.c)
 *     ?prfntInactive@PDEVOBJ@@QEAAPEAVRFONT@@PEAV2@@Z @ 0x1C01056EC (-prfntInactive@PDEVOBJ@@QEAAPEAVRFONT@@PEAV2@@Z.c)
 *     memset @ 0x1C0166840 (memset.c)
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
  __int64 v36; // [rsp+20h] [rbp-68h] BYREF
  _BYTE v37[32]; // [rsp+30h] [rbp-58h] BYREF
  struct RFONT *v38; // [rsp+90h] [rbp+8h] BYREF
  struct RFONT *v39; // [rsp+A0h] [rbp+18h] BYREF
  __int64 v40; // [rsp+A8h] [rbp+20h] BYREF

  v2 = a2;
  v4 = 0;
  if ( !*this || !*((_DWORD *)*this + 165) )
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
  --*((_DWORD *)*this + 165);
  v6 = *this;
  if ( !*((_DWORD *)*this + 165) )
  {
    if ( v2 )
    {
      v7 = (struct RFONT *)*((_QWORD *)v6 + 90);
      v8 = *this;
      if ( v7 )
      {
        *v2++ = v7;
        *((_QWORD *)*this + 90) = 0LL;
        v6 = *this;
        v8 = *this;
      }
      v9 = (struct RFONT *)*((_QWORD *)v6 + 91);
      v4 = 1;
      if ( v9 )
      {
        *v2++ = v9;
        *((_QWORD *)*this + 91) = 0LL;
        v6 = *this;
        v8 = *this;
      }
      v10 = (struct RFONT *)*((_QWORD *)v6 + 92);
      if ( v10 )
      {
        *v2++ = v10;
        *((_QWORD *)*this + 92) = 0LL;
        v6 = *this;
        v8 = *this;
      }
      for ( i = 0; i < *((_DWORD *)v6 + 210); v8 = v6 )
      {
        v33 = 8LL * i;
        v34 = *((_QWORD *)v6 + 93);
        v6 = v8;
        v35 = *(struct RFONT **)(v33 + v34);
        if ( v35 )
        {
          *v2++ = v35;
          *(_QWORD *)(v33 + *((_QWORD *)*this + 93)) = 0LL;
          v6 = *this;
        }
        ++i;
      }
      v12 = (struct RFONT *)*((_QWORD *)v6 + 93);
      v13 = v6;
      if ( v12 && v12 != (struct RFONT *)((char *)v6 + 752) )
      {
        Win32FreePool(v12);
        v13 = *this;
      }
      *((_QWORD *)v13 + 93) = 0LL;
      *((_DWORD *)*this + 210) = 0;
      *((_DWORD *)*this + 208) = 0;
      v6 = *this;
    }
    v14 = *((_QWORD *)v6 + 13);
    v40 = v14;
    if ( (*(_DWORD *)(v14 + 40) & 0x800000) != 0 )
      v15 = *(_QWORD *)(*(_QWORD *)(v14 + 3520) + 1520LL);
    else
      v15 = *(_QWORD *)(v14 + 1520);
    v16 = *((_QWORD *)v6 + 83);
    v17 = *((_QWORD *)v6 + 84);
    v18 = v16 + 664;
    if ( !v16 )
      v18 = 0LL;
    v19 = (_QWORD *)(v17 + 664);
    if ( !v17 )
      v19 = 0LL;
    if ( v16 )
    {
      *(_QWORD *)(v18 + 8) = v17;
      if ( v19 )
        *v19 = *((_QWORD *)v6 + 83);
    }
    else
    {
      v15 = *((_QWORD *)v6 + 84);
      if ( v19 )
        *v19 = 0LL;
    }
    if ( (*(_DWORD *)(v14 + 40) & 0x800000) != 0 )
      *(_QWORD *)(*(_QWORD *)(v14 + 3520) + 1520LL) = v15;
    else
      *(_QWORD *)(v14 + 1520) = v15;
    v20 = *((_QWORD *)*this + 16);
    if ( *(_DWORD *)(v20 + 56) || *(_DWORD *)(v20 + 60) || *(_QWORD *)(v20 + 144) )
    {
      v21 = *(_DWORD *)(v14 + 40) & 0x800000;
      if ( v21 )
        v22 = *(_DWORD *)(*(_QWORD *)(v14 + 3520) + 1536LL);
      else
        v22 = *(_DWORD *)(v14 + 1536);
      if ( v22 >= 0x80 )
      {
        v30 = PDEVOBJ::prfntInactive((PDEVOBJ *)&v40);
        for ( j = v30; v30; v30 = (struct RFONT *)*((_QWORD *)v30 + 84) )
          v5 = v30;
        v39 = j;
        v38 = v5;
        RFONTOBJ::vRemove(&v38, &v39, 1LL);
        PDEVOBJ::prfntInactive((PDEVOBJ *)&v40, v39);
        v38 = 0LL;
        RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v38);
      }
      else
      {
        if ( v21 )
          v23 = *(_DWORD *)(*(_QWORD *)(v14 + 3520) + 1536LL);
        else
          v23 = *(_DWORD *)(v14 + 1536);
        v24 = v23 + 1;
        if ( v21 )
          *(_DWORD *)(*(_QWORD *)(v14 + 3520) + 1536LL) = v24;
        else
          *(_DWORD *)(v14 + 1536) = v24;
      }
      v25 = *(_DWORD *)(v14 + 40);
      if ( (v25 & 0x800000) != 0 )
        v26 = *(struct RFONT **)(*(_QWORD *)(v14 + 3520) + 1528LL);
      else
        v26 = *(struct RFONT **)(v14 + 1528);
      v27 = (struct RFONT **)((char *)v26 + 664);
      if ( !v26 )
        v27 = 0LL;
      v28 = (_QWORD *)((char *)*this + 664);
      if ( *this != (struct RFONT *)-664LL )
      {
        *v28 = 0LL;
        v28[1] = v26;
        if ( v27 )
          *v27 = *this;
        v26 = *this;
        v25 = *(_DWORD *)(v14 + 40);
      }
      if ( (v25 & 0x800000) != 0 )
        *(_QWORD *)(*(_QWORD *)(v14 + 3520) + 1528LL) = v26;
      else
        *(_QWORD *)(v14 + 1528) = v26;
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
    v32 = *((_QWORD *)v5 + 16);
    v38 = v5;
    v36 = v32;
    memset(v37, 0, sizeof(v37));
    PushThreadGuardedObject(v37, v5, RestartInactiveHelper);
    RFONTOBJ::vDeleteRFONT((RFONTOBJ *)&v38, 0LL, (struct PFFOBJ *)&v36, 1);
    PopThreadGuardedObject(v37);
    v38 = 0LL;
    RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v38);
  }
  result = v4;
  *this = 0LL;
  return result;
}
