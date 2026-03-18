/*
 * XREFs of ?CreateCandidate@CDirectFlipInfo@@SAJAEBV1@PEAPEAV1@@Z @ 0x180194374
 * Callers:
 *     ?ApplyOverlayOrDirectFlipConfiguration@COverlayContext@@QEAAJPEA_N0@Z @ 0x18004B230 (-ApplyOverlayOrDirectFlipConfiguration@COverlayContext@@QEAAJPEA_N0@Z.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x1800881C4 (--2@YAPEAX_K@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800969E0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800EC570 (_guard_dispatch_icall_nop.c)
 *     ??0CDirectFlipInfo@@QEAA@AEBV0@@Z @ 0x180193C64 (--0CDirectFlipInfo@@QEAA@AEBV0@@Z.c)
 */

__int64 __fastcall CDirectFlipInfo::CreateCandidate(const struct CDirectFlipInfo *a1, struct CDirectFlipInfo **a2)
{
  signed int v4; // eax
  __int64 v5; // rcx
  unsigned int v6; // ebx
  CDirectFlipInfo *v7; // rax
  __int64 v8; // rcx
  __int64 v10; // [rsp+40h] [rbp+8h] BYREF

  *a2 = 0LL;
  v10 = 0LL;
  v4 = (***((__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))a1 + 2))(
         *((_QWORD *)a1 + 2),
         &GUID_d96ea0e9_6207_4781_b3d6_49c499730deb,
         &v10);
  v6 = v4;
  if ( v4 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v5, 0LL, 0, v4, 0x11u, 0LL);
  }
  else
  {
    v7 = (CDirectFlipInfo *)operator new(0x98uLL);
    if ( v7 )
      v7 = CDirectFlipInfo::CDirectFlipInfo(v7, a1);
    if ( v7 )
    {
      *((_DWORD *)v7 + 16) = 2;
      *a2 = v7;
    }
    else
    {
      v6 = -2147024882;
      MilInstrumentationCheckHR_MaybeFailFast(v8, 0LL, 0, 0x8007000E, 0x14u, 0LL);
    }
  }
  if ( v10 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
  return v6;
}
