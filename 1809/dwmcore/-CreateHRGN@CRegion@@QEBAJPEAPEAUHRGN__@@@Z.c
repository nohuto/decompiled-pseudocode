/*
 * XREFs of ?CreateHRGN@CRegion@@QEBAJPEAPEAUHRGN__@@@Z @ 0x1800E9E18
 * Callers:
 *     ?PresentInternal@CDWMOffScreenSwapChain@@UEAAJPEBVCRegion@@IIPEBURenderTargetPresentParameters@@@Z @ 0x1800E9B40 (-PresentInternal@CDWMOffScreenSwapChain@@UEAAJPEBVCRegion@@IIPEBURenderTargetPresentParameters@@.c)
 *     ?RemotingIndirectPresent@CDWMOffScreenSwapChain@@QEAAJPEBVCRegion@@_N1@Z @ 0x1800E9C1C (-RemotingIndirectPresent@CDWMOffScreenSwapChain@@QEAAJPEBVCRegion@@_N1@Z.c)
 * Callees:
 *     ?StepIterator@CRgnData@Internal@FastRegion@@QEBAXPEAVIterator@CRegion@3@@Z @ 0x18005EBC8 (-StepIterator@CRgnData@Internal@FastRegion@@QEBAXPEAVIterator@CRegion@3@@Z.c)
 *     ?BeginIterator@CRgnData@Internal@FastRegion@@QEBAXPEAVIterator@CRegion@3@@Z @ 0x1800AD850 (-BeginIterator@CRgnData@Internal@FastRegion@@QEBAXPEAVIterator@CRegion@3@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x1800EB870 (__security_check_cookie.c)
 *     ?CheckGUIHandleQuota@@YAJKJJ@Z @ 0x1801E8800 (-CheckGUIHandleQuota@@YAJKJJ@Z.c)
 */

__int64 __fastcall CRegion::CreateHRGN(FastRegion::Internal::CRgnData **this, HRGN *a2)
{
  signed int v4; // ebx
  HRGN RectRgn; // rax
  __int64 v6; // rdx
  HRGN v7; // rdi
  FastRegion::Internal::CRgnData *v8; // rcx
  signed int v10; // eax
  int v11; // edx
  __int64 v12; // rcx
  int v13; // r8d
  signed int v14; // eax
  int v15; // edx
  __int64 v16; // rcx
  int v17; // r8d
  signed int LastError; // eax
  int v19; // edx
  __int64 v20; // rcx
  int v21; // r8d
  _BYTE v22[8]; // [rsp+30h] [rbp-58h] BYREF
  unsigned __int64 v23; // [rsp+38h] [rbp-50h]
  LONG *v24; // [rsp+40h] [rbp-48h]
  __int64 v25; // [rsp+48h] [rbp-40h]
  int v26; // [rsp+50h] [rbp-38h]
  RECT rect; // [rsp+60h] [rbp-28h] BYREF

  v4 = 0;
  SetLastError(0);
  RectRgn = CreateRectRgn(0, 0, 0, 0);
  *a2 = RectRgn;
  if ( RectRgn )
  {
    FastRegion::Internal::CRgnData::BeginIterator(*this, (struct FastRegion::CRegion::Iterator *)v22);
    while ( (unsigned __int64)v24 < v23 )
    {
      rect.top = *v24;
      rect.bottom = v24[2];
      v6 = 2 * v26;
      rect.left = *(_DWORD *)(v25 + 4 * v6);
      rect.right = *(_DWORD *)(v25 + 4 * v6 + 4);
      SetLastError(0);
      v7 = CreateRectRgnIndirect(&rect);
      if ( !v7 )
      {
        LastError = GetLastError();
        v4 = LastError;
        if ( LastError > 0 )
          v4 = (unsigned __int16)LastError | 0x80070000;
        if ( v4 >= 0 )
          v4 = CheckGUIHandleQuota(v20, v19, v21);
        MilInstrumentationCheckHR_MaybeFailFast(v20, 0LL, 0, v4, 0x4Bu);
        goto LABEL_24;
      }
      SetLastError(0);
      if ( !CombineRgn(*a2, *a2, v7, 2) )
      {
        v14 = GetLastError();
        v4 = v14;
        if ( v14 > 0 )
          v4 = (unsigned __int16)v14 | 0x80070000;
        if ( v4 >= 0 )
          v4 = CheckGUIHandleQuota(v16, v15, v17);
        MilInstrumentationCheckHR_MaybeFailFast(v16, 0LL, 0, v4, 0x50u);
        DeleteObject(v7);
        goto LABEL_24;
      }
      DeleteObject(v7);
      FastRegion::Internal::CRgnData::StepIterator(v8, (struct FastRegion::CRegion::Iterator *)v22);
    }
  }
  else
  {
    v10 = GetLastError();
    v4 = v10;
    if ( v10 > 0 )
      v4 = (unsigned __int16)v10 | 0x80070000;
    if ( v4 >= 0 )
      v4 = CheckGUIHandleQuota(v12, v11, v13);
    MilInstrumentationCheckHR_MaybeFailFast(v12, 0LL, 0, v4, 0x40u);
LABEL_24:
    if ( v4 < 0 && *a2 )
    {
      DeleteObject(*a2);
      *a2 = 0LL;
    }
  }
  return (unsigned int)v4;
}
