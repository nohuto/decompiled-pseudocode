/*
 * XREFs of ?ProcessToken@CLegacySurfaceManager@@IEAAJPEBU_D3DKMT_PRESENTHISTORYTOKEN@@PEAIPEA_N@Z @ 0x1800A5EF0
 * Callers:
 *     ?ProcessLegacyTokens@CSurfaceManager@@QEAAJ_K@Z @ 0x1800CE828 (-ProcessLegacyTokens@CSurfaceManager@@QEAAJ_K@Z.c)
 * Callees:
 *     ?FindBitmapNoRef@CLogicalSurfaceHandleMap@@QEAAJPEAXPEAPEAVCGdiSpriteBitmap@@@Z @ 0x18006F778 (-FindBitmapNoRef@CLogicalSurfaceHandleMap@@QEAAJPEAXPEAPEAVCGdiSpriteBitmap@@@Z.c)
 *     ?ReleaseResponseRef@CResponseItem@@QEAAXXZ @ 0x180071A24 (-ReleaseResponseRef@CResponseItem@@QEAAXXZ.c)
 *     ?NotifyDirty@CGdiSpriteBitmap@@QEAAJ_K@Z @ 0x18009327C (-NotifyDirty@CGdiSpriteBitmap@@QEAAJ_K@Z.c)
 *     ?ProcessPresentHistoryToken@CGdiSpriteBitmap@@QEAAJPEBU_D3DKMT_PRESENTHISTORYTOKEN@@@Z @ 0x1800A6014 (-ProcessPresentHistoryToken@CGdiSpriteBitmap@@QEAAJPEBU_D3DKMT_PRESENTHISTORYTOKEN@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?AddIntervalOneDxBltEventId@CLegacySurfaceManager@@QEAAJ_K@Z @ 0x180160E58 (-AddIntervalOneDxBltEventId@CLegacySurfaceManager@@QEAAJ_K@Z.c)
 *     McTemplateU0ppq @ 0x180161108 (McTemplateU0ppq.c)
 *     McTemplateU0xxqNR2 @ 0x180161190 (McTemplateU0xxqNR2.c)
 *     McTemplateU0xxxqNR3 @ 0x180161238 (McTemplateU0xxxqNR3.c)
 */

__int64 __fastcall CLegacySurfaceManager::ProcessToken(
        CLegacySurfaceManager *this,
        const struct _D3DKMT_PRESENTHISTORYTOKEN *a2,
        struct CGdiSpriteBitmap *a3,
        bool *a4)
{
  bool v4; // di
  int v6; // edx
  unsigned int v9; // esi
  int v10; // edx
  PVOID v11; // rax
  CGdiSpriteBitmap *v12; // rcx
  int v13; // eax
  unsigned int v14; // ecx
  int v16; // edx
  int v17; // edx
  int v18; // edx
  CResponseItem *v19; // rcx
  _QWORD *v20; // rax
  unsigned __int64 v21; // rdx
  int v22; // eax
  unsigned int v23; // ecx
  CGdiSpriteBitmap *v24; // rcx
  int v25; // eax
  unsigned int v26; // ecx
  _QWORD Buffer[4]; // [rsp+40h] [rbp-38h] BYREF
  struct CGdiSpriteBitmap *v28; // [rsp+90h] [rbp+18h] BYREF

  v28 = a3;
  v4 = 0;
  v6 = *(_DWORD *)a2;
  *a4 = 0;
  v9 = 0;
  v10 = v6 - 1;
  if ( !v10 )
  {
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
      McTemplateU0xxqNR2((_DWORD)this, 0, *((_QWORD *)a2 + 2), *((_QWORD *)a2 + 3), *((_DWORD *)a2 + 14));
    Buffer[0] = *((_QWORD *)a2 + 2);
    v11 = RtlLookupElementGenericTable((PRTL_GENERIC_TABLE)((char *)this + 8), Buffer);
    if ( v11 )
    {
      v12 = (CGdiSpriteBitmap *)*((_QWORD *)v11 + 2);
      if ( v12 )
      {
        v13 = CGdiSpriteBitmap::ProcessPresentHistoryToken(v12, a2);
        v9 = v13;
        if ( v13 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(v14, 0LL, 0, v13, 0x86u);
          return v9;
        }
      }
    }
    goto LABEL_7;
  }
  v16 = v10 - 1;
  if ( !v16 )
  {
LABEL_32:
    *a4 = 1;
    return v9;
  }
  v17 = v16 - 1;
  if ( v17 )
  {
    v18 = v17 - 2;
    if ( v18 )
    {
      if ( v18 == 1 )
      {
        if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
          McTemplateU0ppq(
            (_DWORD)this,
            (unsigned int)&EVTDESC_SCHEDULE_PRESENTHISTORYTOKEN_GDISYSMEM,
            *((_QWORD *)a2 + 2),
            *((_QWORD *)a2 + 4),
            *((_DWORD *)a2 + 6));
        CLogicalSurfaceHandleMap::FindBitmapNoRef(this, *((void **)a2 + 2), &v28);
        if ( v28 )
          CGdiSpriteBitmap::NotifyDirty(v28, *((_QWORD *)a2 + 4));
LABEL_7:
        *a4 = 1;
        return v9;
      }
      goto LABEL_32;
    }
    v19 = (CResponseItem *)*((_QWORD *)this + 26);
    if ( v19 && *((_QWORD *)v19 + 7) == *((_QWORD *)a2 + 2) && *((_BYTE *)this + 220) )
    {
      CResponseItem::ReleaseResponseRef(v19);
      *((_BYTE *)this + 220) = 0;
      v4 = 1;
    }
    *a4 = v4;
  }
  else
  {
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
      McTemplateU0xxxqNR3(
        (_DWORD)this,
        0,
        *((_QWORD *)a2 + 2),
        *((_QWORD *)a2 + 3),
        *((_QWORD *)a2 + 4),
        *((_DWORD *)a2 + 10));
    v20 = (_QWORD *)*((_QWORD *)this + 11);
    do
    {
      if ( v20 == (_QWORD *)((char *)this + 80) )
      {
        v21 = *((_QWORD *)a2 + 4);
        if ( v21 )
        {
          v22 = CLegacySurfaceManager::AddIntervalOneDxBltEventId(this, v21);
          v9 = v22;
          if ( v22 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(v23, 0LL, 0, v22, 0xA7u);
            return v9;
          }
        }
        goto LABEL_7;
      }
      v24 = (CGdiSpriteBitmap *)(v20 - 19);
      v20 = (_QWORD *)v20[1];
    }
    while ( *((_QWORD *)v24 + 53) != *((_QWORD *)a2 + 3) );
    v25 = CGdiSpriteBitmap::ProcessPresentHistoryToken(v24, a2);
    v9 = v25;
    if ( v25 >= 0 )
      goto LABEL_7;
    MilInstrumentationCheckHR_MaybeFailFast(v26, 0LL, 0, v25, 0x9Cu);
  }
  return v9;
}
