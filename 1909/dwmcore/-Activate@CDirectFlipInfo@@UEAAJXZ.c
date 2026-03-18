/*
 * XREFs of ?Activate@CDirectFlipInfo@@UEAAJXZ @ 0x180192630
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800738CC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?GetSourceRect@CBitmapRealization@@QEBA_NPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18007F854 (-GetSourceRect@CBitmapRealization@@QEBA_NPEAV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeed.c)
 *     __security_check_cookie @ 0x1800E7E60 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0230 (_guard_dispatch_icall_nop.c)
 *     ?CheckIndependentFlipSupport@CDirectFlipInfo@@IEAAJPEA_N@Z @ 0x180192B1C (-CheckIndependentFlipSupport@CDirectFlipInfo@@IEAAJPEA_N@Z.c)
 *     ?EnsureIndependentFlipState@CDirectFlipInfo@@IEAAJ_N0@Z @ 0x180192E78 (-EnsureIndependentFlipState@CDirectFlipInfo@@IEAAJ_N0@Z.c)
 *     ?GetCurrentDXGIResource@CDirectFlipInfo@@IEAAJU_LUID@@PEAPEAUIDXGIResource@@@Z @ 0x180193044 (-GetCurrentDXGIResource@CDirectFlipInfo@@IEAAJU_LUID@@PEAPEAUIDXGIResource@@@Z.c)
 *     ?UpdateHDRMetaData@CDirectFlipInfo@@IEAA_NPEAPEBX@Z @ 0x1801935EC (-UpdateHDRMetaData@CDirectFlipInfo@@IEAA_NPEAPEBX@Z.c)
 */

__int64 __fastcall CDirectFlipInfo::Activate(CDirectFlipInfo *this)
{
  void *v1; // r14
  bool v3; // zf
  int v4; // r15d
  signed int v5; // eax
  __int64 v6; // rcx
  unsigned int v7; // ebx
  signed int v8; // eax
  __int64 v9; // rcx
  bool v10; // bl
  signed int v11; // eax
  __int64 v12; // rcx
  signed int CurrentDXGIResource; // eax
  __int64 v14; // rcx
  __int64 v15; // r13
  signed int v16; // eax
  __int64 v17; // rcx
  __int64 v18; // rdx
  __int64 v19; // r9
  char v20; // si
  float v21; // xmm0_4
  float v22; // xmm0_4
  float v23; // xmm0_4
  bool v24; // r8
  unsigned int v25; // r10d
  signed int v26; // eax
  __int64 v27; // rcx
  __int64 v28; // r8
  __int64 v29; // r9
  __int64 (__fastcall *v30)(__int64, struct IDXGIResource *, _QWORD, _QWORD, void *, _DWORD *); // rbx
  __int64 v31; // rax
  signed int v32; // eax
  __int64 v33; // rcx
  __int64 v35; // [rsp+40h] [rbp-19h] BYREF
  struct IDXGIResource *v36; // [rsp+48h] [rbp-11h] BYREF
  struct _LUID v37; // [rsp+50h] [rbp-9h] BYREF
  void *v38[2]; // [rsp+58h] [rbp-1h] BYREF
  __int128 v39; // [rsp+68h] [rbp+Fh] BYREF
  _DWORD v40[4]; // [rsp+78h] [rbp+1Fh] BYREF

  v35 = 0LL;
  v1 = 0LL;
  v36 = 0LL;
  v3 = *((_DWORD *)this + 17) == 1;
  v4 = *((_DWORD *)this + 16);
  v38[0] = 0LL;
  if ( !v3 )
  {
    v5 = (*(__int64 (__fastcall **)(_QWORD, struct _LUID *, _QWORD))(**((_QWORD **)this + 2) + 120LL))(
           *((_QWORD *)this + 2),
           &v37,
           0LL);
    v7 = v5;
    if ( v5 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v6, 0LL, 0, v5, 0x136u, 0LL);
      goto LABEL_32;
    }
    if ( v4 != 4 )
    {
      v8 = CDirectFlipInfo::CheckIndependentFlipSupport(this, (bool *)this + 98);
      v7 = v8;
      if ( v8 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v9, 0LL, 0, v8, 0x13Au, 0LL);
        goto LABEL_32;
      }
    }
    v10 = *((int *)this + 17) < 3
       && (*(unsigned int (__fastcall **)(_QWORD))(**((_QWORD **)this + 4) + 232LL))(*((_QWORD *)this + 4)) != -1;
    CDirectFlipInfo::UpdateHDRMetaData(this, (const void **)v38);
    v11 = CDirectFlipInfo::EnsureIndependentFlipState(this, v10, 0);
    v7 = v11;
    if ( v11 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v12, 0LL, 0, v11, 0x149u, 0LL);
      goto LABEL_32;
    }
    CurrentDXGIResource = CDirectFlipInfo::GetCurrentDXGIResource(this, v37, &v36);
    v7 = CurrentDXGIResource;
    if ( CurrentDXGIResource < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v14, 0LL, 0, CurrentDXGIResource, 0x14Bu, 0LL);
      goto LABEL_32;
    }
    v1 = v38[0];
  }
  v15 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 4) + 40LL))(*((_QWORD *)this + 4));
  v16 = (***((__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))this + 2))(
          *((_QWORD *)this + 2),
          &GUID_d96ea0e9_6207_4781_b3d6_49c499730deb,
          &v35);
  v7 = v16;
  if ( v16 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v17, 0LL, 0, v16, 0x153u, 0LL);
  }
  else
  {
    CBitmapRealization::GetSourceRect(v15, &v39);
    v20 = 1;
    v21 = *(float *)&v39 + 6291456.25;
    v40[0] = (int)(LODWORD(v21) << 10) >> 11;
    v22 = *((float *)&v39 + 1) + 6291456.25;
    v40[1] = (int)(LODWORD(v22) << 10) >> 11;
    v23 = *((float *)&v39 + 2) + 6291456.25;
    v40[2] = (int)(LODWORD(v23) << 10) >> 11;
    *(float *)v38 = *((float *)&v39 + 3) + 6291456.25;
    v40[3] = (int)(LODWORD(v38[0]) << 10) >> 11;
    if ( *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 1) + 13456LL) + 64LL) + 96LL) != 1
      || *((_DWORD *)this + 17) == 3 )
    {
      v20 = 0;
    }
    v24 = 0;
    v25 = 1;
    if ( v20 )
    {
      v25 = *(_DWORD *)(v15 + 156);
      v24 = (*(_DWORD *)(v15 + 268) & 0x1000) != 0;
      if ( v25 > 1 )
      {
        v25 = 1;
        v24 = 0;
      }
    }
    LOBYTE(v19) = v24;
    LOBYTE(v18) = 1;
    v26 = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD, __int64, bool))(*(_QWORD *)v35 + 392LL))(
            v35,
            v18,
            v25,
            v19,
            v4 != 4);
    v7 = v26;
    if ( v26 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v27, 0LL, 0, v26, 0x187u, 0LL);
    }
    else if ( *((_DWORD *)this + 17) == 1
           || (v30 = *(__int64 (__fastcall **)(__int64, struct IDXGIResource *, _QWORD, _QWORD, void *, _DWORD *))(*(_QWORD *)v35 + 384LL),
               v31 = (*(__int64 (__fastcall **)(__int64, void **))(*(_QWORD *)(v15 + 144) + 24LL))(v15 + 144, v38),
               v32 = v30(v35, v36, *(unsigned int *)(v31 + 8), *((unsigned int *)this + 30), v1, v40),
               v7 = v32,
               v32 >= 0) )
    {
      *((_DWORD *)this + 16) = 4;
      if ( v4 != 4 || v20 != *((_BYTE *)this + 101) )
      {
        LOBYTE(v29) = v20;
        LOBYTE(v28) = 1;
        (*(void (__fastcall **)(_QWORD, _QWORD, __int64, __int64))(**((_QWORD **)this + 4) + 176LL))(
          *((_QWORD *)this + 4),
          *((_QWORD *)this + 9),
          v28,
          v29);
        *((_BYTE *)this + 101) = v20;
      }
    }
    else
    {
      MilInstrumentationCheckHR_MaybeFailFast(v33, 0LL, 0, v32, 0x18Fu, 0LL);
    }
  }
LABEL_32:
  if ( v35 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v35 + 16LL))(v35);
  if ( v36 )
    ((void (__fastcall *)(struct IDXGIResource *))v36->lpVtbl->Release)(v36);
  return v7;
}
