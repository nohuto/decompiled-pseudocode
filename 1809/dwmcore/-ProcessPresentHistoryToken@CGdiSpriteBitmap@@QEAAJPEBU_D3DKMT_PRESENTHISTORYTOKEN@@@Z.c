/*
 * XREFs of ?ProcessPresentHistoryToken@CGdiSpriteBitmap@@QEAAJPEBU_D3DKMT_PRESENTHISTORYTOKEN@@@Z @ 0x1800A6014
 * Callers:
 *     ?ProcessToken@CLegacySurfaceManager@@IEAAJPEBU_D3DKMT_PRESENTHISTORYTOKEN@@PEAIPEA_N@Z @ 0x1800A5EF0 (-ProcessToken@CLegacySurfaceManager@@IEAAJPEBU_D3DKMT_PRESENTHISTORYTOKEN@@PEAIPEA_N@Z.c)
 * Callees:
 *     ??$AppendRects@UtagRECT@@@CRegion@@QEAAJPEBUtagRECT@@I@Z @ 0x1800A7240 (--$AppendRects@UtagRECT@@@CRegion@@QEAAJPEBUtagRECT@@I@Z.c)
 *     ?AddDirtyRegion@CGdiSpriteBitmap@@IEAAJAEAVCRegion@@@Z @ 0x1800A9970 (-AddDirtyRegion@CGdiSpriteBitmap@@IEAAJAEAVCRegion@@@Z.c)
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x1800BAE7C (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x1800EB870 (__security_check_cookie.c)
 *     ?AddIntervalOneDxBltEventId@CLegacySurfaceManager@@QEAAJ_K@Z @ 0x180160E58 (-AddIntervalOneDxBltEventId@CLegacySurfaceManager@@QEAAJ_K@Z.c)
 */

__int64 __fastcall CGdiSpriteBitmap::ProcessPresentHistoryToken(
        CGdiSpriteBitmap *this,
        const struct _D3DKMT_PRESENTHISTORYTOKEN *a2)
{
  int appended; // eax
  unsigned int v5; // ecx
  unsigned int v6; // ebx
  int v7; // eax
  unsigned int v8; // ecx
  signed __int64 v10; // rdx
  __int64 v11; // rax
  int v12; // eax
  unsigned int v13; // ecx
  void *v14; // [rsp+30h] [rbp-68h] BYREF
  _DWORD v15[18]; // [rsp+38h] [rbp-60h] BYREF

  v14 = v15;
  v15[0] = 0;
  appended = CRegion::AppendRects<tagRECT>((FastRegion::CRegion *)&v14);
  v6 = appended;
  if ( appended < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v5, 0LL, 0, appended, 0x2AAu);
  }
  else
  {
    v7 = CGdiSpriteBitmap::AddDirtyRegion(this, (struct CRegion *)&v14);
    v6 = v7;
    if ( v7 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v8, 0LL, 0, v7, 0x2ACu);
    }
    else if ( *(_DWORD *)a2 == 3 )
    {
      v10 = *((_QWORD *)a2 + 4);
      if ( v10 >= 0 )
      {
        if ( v10 )
        {
          v12 = CLegacySurfaceManager::AddIntervalOneDxBltEventId(
                  (CLegacySurfaceManager *)(*(_QWORD *)(*((_QWORD *)this + 2) + 72LL) + 96LL),
                  v10);
          v6 = v12;
          if ( v12 < 0 )
            MilInstrumentationCheckHR_MaybeFailFast(v13, 0LL, 0, v12, 0x2BBu);
        }
      }
      else
      {
        v11 = *((_QWORD *)this + 9);
        *((_BYTE *)this + 116) |= 4u;
        *((_QWORD *)this + 15) = v11;
        *((_QWORD *)this + 16) = *((_QWORD *)a2 + 4);
      }
    }
  }
  if ( v15 != v14 )
    WPF::ProcessHeapImpl::Free(v14);
  return v6;
}
