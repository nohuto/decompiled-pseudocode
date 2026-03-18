/*
 * XREFs of ?Deactivate@CDirectFlipInfo@@MEAAJXZ @ 0x180178EB0
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 *     ?EnsureIndependentFlipState@CDirectFlipInfo@@IEAAJ_N0@Z @ 0x180178FBC (-EnsureIndependentFlipState@CDirectFlipInfo@@IEAAJ_N0@Z.c)
 *     ?RecordDirectFlipState@CCompositionSurfaceInfo@@QEBAJ_K_N@Z @ 0x1801BD080 (-RecordDirectFlipState@CCompositionSurfaceInfo@@QEBAJ_K_N@Z.c)
 */

__int64 __fastcall CDirectFlipInfo::Deactivate(CDirectFlipInfo *this)
{
  int v2; // eax
  __int64 v3; // rcx
  unsigned int v4; // ebx
  int v5; // eax
  __int64 v6; // rcx
  unsigned int v8; // [rsp+20h] [rbp-28h]
  __int64 v9; // [rsp+50h] [rbp+8h] BYREF
  char v10; // [rsp+58h] [rbp+10h] BYREF

  v9 = 0LL;
  v2 = CDirectFlipInfo::EnsureIndependentFlipState(this, 0, 0);
  v4 = v2;
  if ( v2 < 0 )
  {
    v8 = 365;
  }
  else
  {
    v5 = (***((__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))this + 2))(
           *((_QWORD *)this + 2),
           &GUID_d96ea0e9_6207_4781_b3d6_49c499730deb,
           &v9);
    v4 = v5;
    if ( v5 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v6, 0LL, 0, v5, 0x170u);
      goto LABEL_8;
    }
    v2 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, _QWORD, _QWORD, void *))(*(_QWORD *)v9 + 384LL))(
           v9,
           0LL,
           0LL,
           0LL,
           0LL,
           &unk_1802BC578);
    v4 = v2;
    if ( v2 >= 0 )
      goto LABEL_8;
    v8 = 374;
  }
  MilInstrumentationCheckHR_MaybeFailFast(v3, 0LL, 0, v2, v8);
LABEL_8:
  if ( v9 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
  (*(void (__fastcall **)(_QWORD, char *, _QWORD))(**((_QWORD **)this + 2) + 120LL))(*((_QWORD *)this + 2), &v10, 0LL);
  *((_DWORD *)this + 16) = (*(_BYTE *)(*((_QWORD *)this + 4) + 228LL) != 0) + 2;
  CCompositionSurfaceInfo::RecordDirectFlipState(*((CCompositionSurfaceInfo **)this + 4), *((_QWORD *)this + 9), 0);
  return v4;
}
