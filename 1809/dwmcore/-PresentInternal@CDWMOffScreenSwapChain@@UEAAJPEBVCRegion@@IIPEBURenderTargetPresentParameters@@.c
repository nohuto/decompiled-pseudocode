/*
 * XREFs of ?PresentInternal@CDWMOffScreenSwapChain@@UEAAJPEBVCRegion@@IIPEBURenderTargetPresentParameters@@@Z @ 0x1800E9B40
 * Callers:
 *     <none>
 * Callees:
 *     ?Flush@CD3DDeviceLevel1@@QEAAXXZ @ 0x180077BBC (-Flush@CD3DDeviceLevel1@@QEAAXXZ.c)
 *     ?GetBoundingRect@CRegion@FastRegion@@QEBA_NAEAUtagRECT@@@Z @ 0x1800A396C (-GetBoundingRect@CRegion@FastRegion@@QEBA_NAEAUtagRECT@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?RemotingIndirectPresent@CDWMOffScreenSwapChain@@QEAAJPEBVCRegion@@_N1@Z @ 0x1800E9C1C (-RemotingIndirectPresent@CDWMOffScreenSwapChain@@QEAAJPEBVCRegion@@_N1@Z.c)
 *     ?CreateHRGN@CRegion@@QEBAJPEAPEAUHRGN__@@@Z @ 0x1800E9E18 (-CreateHRGN@CRegion@@QEBAJPEAPEAUHRGN__@@@Z.c)
 *     memset_0 @ 0x1800EC516 (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CDWMOffScreenSwapChain::PresentInternal(
        CD3DDeviceLevel1 **this,
        const struct CRegion *a2,
        __int64 a3,
        char a4,
        const struct RenderTargetPresentParameters *a5)
{
  HRGN v5; // rsi
  bool v9; // r13
  void *v10; // r12
  signed int v11; // ebx
  HRGN v13; // rax
  CD3DDeviceLevel1 *v14; // rax
  __int64 (__fastcall *v15)(CD3DDeviceLevel1 **, __int128 *); // rax
  int v16; // eax
  __int64 v17; // rcx
  __int64 i; // rbx
  CD3DDeviceLevel1 *v19; // rax
  int v20; // eax
  __int64 v21; // rcx
  signed int LastError; // eax
  __int64 v23; // rcx
  int v24; // r9d
  CD3DDeviceLevel1 *v25; // rax
  __int64 (__fastcall *v26)(CD3DDeviceLevel1 **, __int128 *); // rax
  int v27; // eax
  unsigned int v28; // [rsp+28h] [rbp-B1h]
  HRGN hrgn; // [rsp+38h] [rbp-A1h] BYREF
  HRGN hrgn_8[2]; // [rsp+40h] [rbp-99h] BYREF
  __int128 v31; // [rsp+50h] [rbp-89h]
  __int128 v32; // [rsp+60h] [rbp-79h]
  __int64 v33; // [rsp+70h] [rbp-69h]
  struct tagRECT v34; // [rsp+78h] [rbp-61h] BYREF
  __int128 v35; // [rsp+88h] [rbp-51h] BYREF
  __int128 v36; // [rsp+98h] [rbp-41h]
  __int128 v37; // [rsp+A8h] [rbp-31h]
  __int64 v38; // [rsp+B8h] [rbp-21h]
  __int128 v39; // [rsp+C8h] [rbp-11h] BYREF
  __int128 v40; // [rsp+D8h] [rbp-1h]
  __int128 v41; // [rsp+E8h] [rbp+Fh]
  __int64 v42; // [rsp+F8h] [rbp+1Fh]

  v5 = 0LL;
  hrgn = 0LL;
  v9 = 1;
  memset_0(&v35, 0, 0x38uLL);
  memset_0(hrgn_8, 0, 0x38uLL);
  if ( (a4 & 1) != 0 )
    return (unsigned int)DwmGetRemoteSessionOcclusionState() != 0 ? 0x87A0001 : 0;
  CD3DDeviceLevel1::Flush(this[54]);
  if ( !*((_BYTE *)a5 + 33) )
  {
    v10 = (void *)*((_QWORD *)&v31 + 1);
LABEL_4:
    v11 = CDWMOffScreenSwapChain::RemotingIndirectPresent((CDWMOffScreenSwapChain *)this, a2, v9, *((_BYTE *)a5 + 32));
    goto LABEL_5;
  }
  v13 = *(HRGN *)a5;
  v10 = (void *)*((_QWORD *)a5 + 3);
  LODWORD(hrgn_8[0]) = 0;
  v9 = 0;
  hrgn_8[1] = v13;
  LODWORD(v31) = *((_DWORD *)a5 + 4) - *((_DWORD *)a5 + 2);
  DWORD1(v31) = *((_DWORD *)a5 + 5) - *((_DWORD *)a5 + 3);
  v14 = *this;
  v39 = *(_OWORD *)hrgn_8;
  *((_QWORD *)&v31 + 1) = v10;
  v15 = (__int64 (__fastcall *)(CD3DDeviceLevel1 **, __int128 *))*((_QWORD *)v14 + 11);
  v41 = v32;
  v40 = v31;
  v42 = v33;
  v16 = v15(this, &v39);
  v11 = v16;
  if ( v16 >= 0 )
  {
    if ( !a2 || !**(_DWORD **)a2 )
      goto LABEL_4;
    for ( i = 0LL; (unsigned int)i < *((_DWORD *)this + 92); i = (unsigned int)(i + 1) )
    {
      v19 = this[43];
      if ( *((_DWORD *)v19 + 12 * i) == 1 )
        OffsetRect((LPRECT)v19 + 3 * i + 1, -*((_DWORD *)a5 + 2), -*((_DWORD *)a5 + 3));
    }
    FastRegion::CRegion::GetBoundingRect((LONG **)a2, &v34);
    v20 = CRegion::CreateHRGN(a2, &hrgn);
    v11 = v20;
    if ( v20 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v21, 0LL, 0, v20, 0x2EDu);
      v5 = hrgn;
    }
    else
    {
      SetLastError(0);
      v5 = hrgn;
      if ( OffsetRgn(hrgn, -*((_DWORD *)a5 + 2), -*((_DWORD *)a5 + 3)) )
      {
        *((_QWORD *)&v35 + 1) = *(_QWORD *)a5;
        *(_QWORD *)&v37 = *(_QWORD *)&v34.left;
        v25 = *this;
        LODWORD(v35) = 2;
        *(_QWORD *)&v36 = v5;
        v26 = (__int64 (__fastcall *)(CD3DDeviceLevel1 **, __int128 *))*((_QWORD *)v25 + 11);
        v39 = v35;
        v40 = v36;
        v41 = v37;
        v42 = v38;
        v27 = v26(this, &v39);
        v11 = v27;
        if ( v27 >= 0 )
          goto LABEL_4;
        v28 = 763;
        v24 = v27;
      }
      else
      {
        LastError = GetLastError();
        v11 = LastError;
        if ( LastError > 0 )
          v11 = (unsigned __int16)LastError | 0x80070000;
        v28 = 753;
        if ( v11 >= 0 )
          v11 = -2003304445;
        v24 = v11;
      }
      MilInstrumentationCheckHR_MaybeFailFast(v23, 0LL, 0, v24, v28);
    }
LABEL_5:
    if ( v5 )
      DeleteObject(v5);
    goto LABEL_7;
  }
  MilInstrumentationCheckHR_MaybeFailFast(v17, 0LL, 0, v16, 0x2D8u);
LABEL_7:
  if ( v10 )
    DeleteObject(v10);
  return (unsigned int)v11;
}
