/*
 * XREFs of ?Deactivate@CDirectFlipInfo@@MEAAJXZ @ 0x180194440
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800969E0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800EC570 (_guard_dispatch_icall_nop.c)
 *     ?EnsureIndependentFlipState@CDirectFlipInfo@@IEAAJ_N0@Z @ 0x1801945B8 (-EnsureIndependentFlipState@CDirectFlipInfo@@IEAAJ_N0@Z.c)
 */

__int64 __fastcall CDirectFlipInfo::Deactivate(CDirectFlipInfo *this)
{
  signed int v2; // eax
  __int64 v3; // rcx
  unsigned int v4; // ebx
  signed int v5; // eax
  __int64 v6; // rcx
  signed int v7; // eax
  __int64 v8; // rcx
  __int64 result; // rax
  int v10; // [rsp+20h] [rbp-28h]
  unsigned int v11; // [rsp+20h] [rbp-28h]
  __int64 v12; // [rsp+50h] [rbp+8h] BYREF
  __int64 v13; // [rsp+58h] [rbp+10h] BYREF

  v12 = 0LL;
  v2 = CDirectFlipInfo::EnsureIndependentFlipState(this, 0, 0);
  v4 = v2;
  if ( v2 < 0 )
  {
    v11 = 427;
  }
  else
  {
    v5 = (***((__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))this + 2))(
           *((_QWORD *)this + 2),
           &GUID_d96ea0e9_6207_4781_b3d6_49c499730deb,
           &v12);
    v4 = v5;
    if ( v5 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v6, 0LL, 0, v5, 0x1AEu, 0LL);
      goto LABEL_10;
    }
    v7 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, _QWORD, _QWORD, void *))(*(_QWORD *)v12 + 384LL))(
           v12,
           0LL,
           0LL,
           0LL,
           0LL,
           &unk_1802E4170);
    v4 = v7;
    if ( v7 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v8, 0LL, 0, v7, 0x1B4u, 0LL);
      goto LABEL_10;
    }
    LOBYTE(v10) = 0;
    v2 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, _QWORD, int))(*(_QWORD *)v12 + 392LL))(
           v12,
           0LL,
           0LL,
           0LL,
           v10);
    v4 = v2;
    if ( v2 >= 0 )
      goto LABEL_10;
    v11 = 438;
  }
  MilInstrumentationCheckHR_MaybeFailFast(v3, 0LL, 0, v2, v11, 0LL);
LABEL_10:
  if ( v12 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
  (*(void (__fastcall **)(_QWORD, __int64 *, _QWORD))(**((_QWORD **)this + 2) + 120LL))(
    *((_QWORD *)this + 2),
    &v13,
    0LL);
  *((_DWORD *)this + 16) = ((*(unsigned __int8 (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 4) + 104LL))(
                              *((_QWORD *)this + 4),
                              v13) != 0)
                         + 2;
  (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD))(**((_QWORD **)this + 4) + 176LL))(
    *((_QWORD *)this + 4),
    *((_QWORD *)this + 9),
    0LL,
    0LL);
  result = v4;
  *((_BYTE *)this + 101) = 0;
  return result;
}
