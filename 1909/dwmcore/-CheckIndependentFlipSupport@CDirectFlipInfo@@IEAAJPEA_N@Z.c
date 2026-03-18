/*
 * XREFs of ?CheckIndependentFlipSupport@CDirectFlipInfo@@IEAAJPEA_N@Z @ 0x180192B1C
 * Callers:
 *     ?Activate@CDirectFlipInfo@@UEAAJXZ @ 0x180192630 (-Activate@CDirectFlipInfo@@UEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800738CC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0230 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CDirectFlipInfo::CheckIndependentFlipSupport(CDirectFlipInfo *this, bool *a2)
{
  unsigned int v2; // ebx
  bool v3; // al
  signed int v6; // eax
  __int64 v7; // rcx
  __int64 v8; // rax
  __int64 v9; // rcx
  unsigned int v11; // [rsp+20h] [rbp-18h]
  bool v12; // [rsp+50h] [rbp+18h] BYREF
  __int64 v13; // [rsp+58h] [rbp+20h] BYREF

  v2 = 0;
  v3 = 0;
  v13 = 0LL;
  v12 = 0;
  if ( CCommonRegistryData::m_fDisableIndependentFlip || !*((_QWORD *)this + 1) )
    goto LABEL_8;
  v6 = (***((__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))this + 2))(
         *((_QWORD *)this + 2),
         &GUID_d96ea0e9_6207_4781_b3d6_49c499730deb,
         &v13);
  v2 = v6;
  if ( v6 < 0 )
  {
    v11 = 732;
    goto LABEL_15;
  }
  v6 = (*(__int64 (__fastcall **)(__int64, bool *))(*(_QWORD *)v13 + 480LL))(v13, &v12);
  v2 = v6;
  if ( v6 < 0 )
  {
    v11 = 734;
LABEL_15:
    MilInstrumentationCheckHR_MaybeFailFast(v7, 0LL, 0, v6, v11, 0LL);
    goto LABEL_9;
  }
  v3 = v12;
  if ( !v12 )
  {
LABEL_8:
    *a2 = v3;
    goto LABEL_9;
  }
  v8 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 4) + 40LL))(*((_QWORD *)this + 4));
  if ( v8 )
  {
    v3 = *(_DWORD *)(v8 + 272) != 3;
    v12 = v3;
    goto LABEL_8;
  }
  v2 = -2147467259;
  MilInstrumentationCheckHR_MaybeFailFast(v9, 0LL, 0, 0x80004005, 0x2EAu, 0LL);
LABEL_9:
  if ( v13 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
  return v2;
}
