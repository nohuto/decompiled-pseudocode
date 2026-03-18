/*
 * XREFs of ?ProcessToken@CLegacySurfaceManager@@IEAAJPEBU_D3DKMT_PRESENTHISTORYTOKEN@@PEAIPEA_N@Z @ 0x18006B0BC
 * Callers:
 *     ?ProcessSurfaceUpdates@CGlobalSurfaceManager@@UEAAJ_K@Z @ 0x18006ADC0 (-ProcessSurfaceUpdates@CGlobalSurfaceManager@@UEAAJ_K@Z.c)
 * Callees:
 *     ?NotifyDirty@CGdiSpriteBitmap@@QEAAJ_K@Z @ 0x180048E3C (-NotifyDirty@CGdiSpriteBitmap@@QEAAJ_K@Z.c)
 *     ?ProcessPresentHistoryToken@CGdiSpriteBitmap@@QEAAJPEBU_D3DKMT_PRESENTHISTORYTOKEN@@@Z @ 0x18006CF00 (-ProcessPresentHistoryToken@CGdiSpriteBitmap@@QEAAJPEBU_D3DKMT_PRESENTHISTORYTOKEN@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800738CC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?FindBitmapNoRef@CLogicalSurfaceHandleMap@@QEAAJPEAXPEAPEAVCGdiSpriteBitmap@@@Z @ 0x1800CAB18 (-FindBitmapNoRef@CLogicalSurfaceHandleMap@@QEAAJPEAXPEAPEAVCGdiSpriteBitmap@@@Z.c)
 *     ?ProcessScreenCapureFenceToken@CLegacySurfaceManager@@IEAA_NPEBU_D3DKMT_FENCE_PRESENTHISTORYTOKEN@@@Z @ 0x1800D83E4 (-ProcessScreenCapureFenceToken@CLegacySurfaceManager@@IEAA_NPEBU_D3DKMT_FENCE_PRESENTHISTORYTOKE.c)
 *     ?AddIntervalOneDxBltEventId@CLegacySurfaceManager@@QEAAJ_K@Z @ 0x1801A25D0 (-AddIntervalOneDxBltEventId@CLegacySurfaceManager@@QEAAJ_K@Z.c)
 *     McTemplateU0ppq @ 0x1801A288C (McTemplateU0ppq.c)
 *     McTemplateU0xxqNR2 @ 0x1801A2914 (McTemplateU0xxqNR2.c)
 *     McTemplateU0xxxqNR3 @ 0x1801A29BC (McTemplateU0xxxqNR3.c)
 */

__int64 __fastcall CLegacySurfaceManager::ProcessToken(
        CLegacySurfaceManager *this,
        const struct _D3DKMT_PRESENTHISTORYTOKEN *a2,
        struct CGdiSpriteBitmap *a3,
        bool *a4)
{
  unsigned int v5; // edi
  int v6; // edx
  int v9; // edx
  PVOID v10; // rax
  CGdiSpriteBitmap *v11; // rcx
  int v12; // eax
  unsigned int v13; // ecx
  int v15; // edx
  int v16; // edx
  int v17; // edx
  _QWORD *v18; // rax
  unsigned __int64 v19; // rdx
  int v20; // eax
  unsigned int v21; // ecx
  CGdiSpriteBitmap *v22; // rcx
  int v23; // eax
  unsigned int v24; // ecx
  _QWORD Buffer[4]; // [rsp+40h] [rbp-28h] BYREF
  struct CGdiSpriteBitmap *v26; // [rsp+80h] [rbp+18h] BYREF

  v26 = a3;
  v5 = 0;
  v6 = *(_DWORD *)a2;
  *a4 = 0;
  v9 = v6 - 1;
  if ( !v9 )
  {
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
      McTemplateU0xxqNR2((_DWORD)this, 0, *((_QWORD *)a2 + 2), *((_QWORD *)a2 + 3), *((_DWORD *)a2 + 14));
    Buffer[0] = *((_QWORD *)a2 + 2);
    v10 = RtlLookupElementGenericTable((PRTL_GENERIC_TABLE)((char *)this + 8), Buffer);
    if ( v10 )
    {
      v11 = (CGdiSpriteBitmap *)*((_QWORD *)v10 + 2);
      if ( v11 )
      {
        v12 = CGdiSpriteBitmap::ProcessPresentHistoryToken(v11, a2);
        v5 = v12;
        if ( v12 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(v13, 0LL, 0, v12, 0x8Cu, 0LL);
          return v5;
        }
      }
    }
    goto LABEL_7;
  }
  v15 = v9 - 1;
  if ( !v15 )
  {
LABEL_18:
    *a4 = 1;
    return v5;
  }
  v16 = v15 - 1;
  if ( v16 )
  {
    v17 = v16 - 2;
    if ( !v17 )
    {
      *a4 = CLegacySurfaceManager::ProcessScreenCapureFenceToken(
              this,
              (const struct _D3DKMT_PRESENTHISTORYTOKEN *)((char *)a2 + 16));
      return v5;
    }
    if ( v17 == 1 )
    {
      if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
        McTemplateU0ppq(
          (_DWORD)this,
          (unsigned int)&EVTDESC_SCHEDULE_PRESENTHISTORYTOKEN_GDISYSMEM,
          *((_QWORD *)a2 + 2),
          *((_QWORD *)a2 + 4),
          *((_DWORD *)a2 + 6));
      CLogicalSurfaceHandleMap::FindBitmapNoRef(this, *((void **)a2 + 2), &v26);
      if ( v26 )
        CGdiSpriteBitmap::NotifyDirty(v26, *((_QWORD *)a2 + 4));
LABEL_7:
      *a4 = 1;
      return v5;
    }
    goto LABEL_18;
  }
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
    McTemplateU0xxxqNR3(
      (_DWORD)this,
      0,
      *((_QWORD *)a2 + 2),
      *((_QWORD *)a2 + 3),
      *((_QWORD *)a2 + 4),
      *((_DWORD *)a2 + 10));
  v18 = (_QWORD *)*((_QWORD *)this + 11);
  do
  {
    if ( v18 == (_QWORD *)((char *)this + 80) )
    {
      v19 = *((_QWORD *)a2 + 4);
      if ( v19 )
      {
        v20 = CLegacySurfaceManager::AddIntervalOneDxBltEventId(this, v19);
        v5 = v20;
        if ( v20 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(v21, 0LL, 0, v20, 0xADu, 0LL);
          return v5;
        }
      }
      goto LABEL_7;
    }
    v22 = (CGdiSpriteBitmap *)(v18 - 19);
    v18 = (_QWORD *)v18[1];
  }
  while ( *((_QWORD *)v22 + 53) != *((_QWORD *)a2 + 3) );
  v23 = CGdiSpriteBitmap::ProcessPresentHistoryToken(v22, a2);
  v5 = v23;
  if ( v23 >= 0 )
    goto LABEL_7;
  MilInstrumentationCheckHR_MaybeFailFast(v24, 0LL, 0, v23, 0xA2u, 0LL);
  return v5;
}
