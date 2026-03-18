/*
 * XREFs of ?PresentInternal@CDWMOffScreenSwapChain@@UEAAJPEBVCRegion@@IIPEBURenderTargetPresentParameters@@@Z @ 0x1800DC600
 * Callers:
 *     <none>
 * Callees:
 *     ?GetBoundingRect@CRegion@FastRegion@@QEBA_NAEAUtagRECT@@@Z @ 0x1800622F8 (-GetBoundingRect@CRegion@FastRegion@@QEBA_NAEAUtagRECT@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800738CC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Flush@CD3DDeviceLevel1@@QEAAXXZ @ 0x1800D6F30 (-Flush@CD3DDeviceLevel1@@QEAAXXZ.c)
 *     ?RemotingIndirectPresent@CDWMOffScreenSwapChain@@QEAAJPEBVCRegion@@_N1@Z @ 0x1800DC6D8 (-RemotingIndirectPresent@CDWMOffScreenSwapChain@@QEAAJPEBVCRegion@@_N1@Z.c)
 *     ?CreateHRGN@CRegion@@QEBAJPEAPEAUHRGN__@@@Z @ 0x1800DC8D8 (-CreateHRGN@CRegion@@QEBAJPEAPEAUHRGN__@@@Z.c)
 *     memset_0 @ 0x1800E8D0E (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0230 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CDWMOffScreenSwapChain::PresentInternal(
        CD3DDeviceLevel1 **this,
        LONG **a2,
        __int64 a3,
        char a4,
        const struct RenderTargetPresentParameters *a5)
{
  HRGN v5; // rsi
  bool v9; // r13
  HGDIOBJ v11; // r12
  int v12; // ebx
  CD3DDeviceLevel1 *v13; // rax
  __int64 (__fastcall *v14)(CD3DDeviceLevel1 **, __int128 *); // rax
  signed int v15; // eax
  unsigned int i; // ebx
  CD3DDeviceLevel1 *v17; // rax
  __int64 v18; // rcx
  signed int v19; // eax
  __int64 v20; // rcx
  signed int LastError; // eax
  __int64 v22; // rcx
  CD3DDeviceLevel1 *v23; // rax
  __int64 (__fastcall *v24)(CD3DDeviceLevel1 **, __int128 *); // rax
  signed int v25; // eax
  __int64 v26; // rcx
  HRGN hrgn; // [rsp+38h] [rbp-81h] BYREF
  struct tagRECT v28; // [rsp+40h] [rbp-79h] BYREF
  __int128 v29; // [rsp+50h] [rbp-69h] BYREF
  __int128 v30; // [rsp+60h] [rbp-59h]
  __int128 v31; // [rsp+70h] [rbp-49h]
  __int128 v32; // [rsp+80h] [rbp-39h] BYREF
  HGDIOBJ ho[2]; // [rsp+90h] [rbp-29h]
  __int128 v34; // [rsp+A0h] [rbp-19h]
  __int128 v35; // [rsp+B8h] [rbp-1h] BYREF
  __int128 v36; // [rsp+C8h] [rbp+Fh]
  __int128 v37; // [rsp+D8h] [rbp+1Fh]

  v5 = 0LL;
  hrgn = 0LL;
  v9 = 1;
  memset_0(&v29, 0, 0x30uLL);
  memset_0(&v32, 0, 0x30uLL);
  if ( (a4 & 1) != 0 )
    return (unsigned int)DwmGetRemoteSessionOcclusionState() != 0 ? 0x87A0001 : 0;
  CD3DDeviceLevel1::Flush(this[54]);
  if ( !*((_BYTE *)a5 + 33) )
  {
    v11 = ho[1];
    goto LABEL_5;
  }
  v11 = (HGDIOBJ)*((_QWORD *)a5 + 3);
  *((_QWORD *)&v32 + 1) = *(_QWORD *)a5;
  v9 = 0;
  LODWORD(ho[0]) = *((_DWORD *)a5 + 4) - *((_DWORD *)a5 + 2);
  HIDWORD(ho[0]) = *((_DWORD *)a5 + 5) - *((_DWORD *)a5 + 3);
  v13 = *this;
  v35 = v32;
  ho[1] = v11;
  v14 = (__int64 (__fastcall *)(CD3DDeviceLevel1 **, __int128 *))*((_QWORD *)v13 + 11);
  v37 = v34;
  v36 = *(_OWORD *)ho;
  v15 = v14(this, &v35);
  v12 = v15;
  if ( v15 >= 0 )
  {
    if ( a2 && **a2 )
    {
      for ( i = 0; i < *((_DWORD *)this + 92); ++i )
      {
        v17 = this[43];
        v18 = 48LL * i;
        if ( *(_DWORD *)((char *)v17 + v18) == 1 )
          OffsetRect((LPRECT)((char *)v17 + v18 + 16), -*((_DWORD *)a5 + 2), -*((_DWORD *)a5 + 3));
      }
      FastRegion::CRegion::GetBoundingRect(a2, &v28);
      v19 = CRegion::CreateHRGN((CRegion *)a2, &hrgn);
      v12 = v19;
      if ( v19 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v20, 0LL, 0, v19, 0x2C2u, 0LL);
        v5 = hrgn;
      }
      else
      {
        SetLastError(0);
        v5 = hrgn;
        if ( !OffsetRgn(hrgn, -*((_DWORD *)a5 + 2), -*((_DWORD *)a5 + 3)) )
        {
          LastError = GetLastError();
          v12 = LastError;
          if ( LastError > 0 )
            v12 = (unsigned __int16)LastError | 0x80070000;
          if ( v12 >= 0 )
            v12 = -2003304445;
          MilInstrumentationCheckHR_MaybeFailFast(v22, 0LL, 0, v12, 0x2C6u, 0LL);
          goto LABEL_6;
        }
        *((_QWORD *)&v29 + 1) = *(_QWORD *)a5;
        *(_QWORD *)&v31 = *(_QWORD *)&v28.left;
        v23 = *this;
        LODWORD(v29) = 2;
        *(_QWORD *)&v30 = v5;
        v24 = (__int64 (__fastcall *)(CD3DDeviceLevel1 **, __int128 *))*((_QWORD *)v23 + 11);
        v35 = v29;
        v36 = v30;
        v37 = v31;
        v25 = v24(this, &v35);
        v12 = v25;
        if ( v25 >= 0 )
          goto LABEL_5;
        MilInstrumentationCheckHR_MaybeFailFast(v26, 0LL, 0, v25, 0x2D0u, 0LL);
      }
LABEL_6:
      if ( v5 )
        DeleteObject(v5);
      goto LABEL_8;
    }
LABEL_5:
    v12 = CDWMOffScreenSwapChain::RemotingIndirectPresent(
            (CDWMOffScreenSwapChain *)this,
            (const struct CRegion *)a2,
            v9,
            *((_BYTE *)a5 + 32));
    goto LABEL_6;
  }
  MilInstrumentationCheckHR_MaybeFailFast(0LL, 0LL, 0, v15, 0x2ADu, 0LL);
LABEL_8:
  if ( v11 )
    DeleteObject(v11);
  return (unsigned int)v12;
}
