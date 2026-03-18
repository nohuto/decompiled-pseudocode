/*
 * XREFs of ?Initialize@CDXGIAdapterLimited@@AEAAJXZ @ 0x1800A805C
 * Callers:
 *     ?Create@CDXGIAdapterLimited@@SAJPEAUIDXGIAdapter@@IPEAPEAV1@@Z @ 0x1800A7FBC (-Create@CDXGIAdapterLimited@@SAJPEAUIDXGIAdapter@@IPEAPEAV1@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800969E0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?GetKMTAdapterType@CDXGIAdapterLimited@@AEAAJXZ @ 0x1800A8270 (-GetKMTAdapterType@CDXGIAdapterLimited@@AEAAJXZ.c)
 *     ?GetKMTDriverVersion@CDXGIAdapterLimited@@AEAAJXZ @ 0x1800A8364 (-GetKMTDriverVersion@CDXGIAdapterLimited@@AEAAJXZ.c)
 *     ?EnumerateDWMOutputs@CDXGIAdapterLimited@@AEAAJXZ @ 0x1800A8458 (-EnumerateDWMOutputs@CDXGIAdapterLimited@@AEAAJXZ.c)
 *     __security_check_cookie @ 0x1800E6FB0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800EC570 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CDXGIAdapterLimited::Initialize(CDXGIAdapterLimited *this)
{
  signed int v2; // eax
  __int64 v3; // rcx
  unsigned int v4; // ebx
  __int64 v5; // rdx
  _OWORD *v6; // rax
  _OWORD *v7; // rcx
  __int128 v8; // xmm1
  __int128 v9; // xmm0
  __int128 v10; // xmm1
  __int128 v11; // xmm0
  __int128 v12; // xmm1
  __int128 v13; // xmm0
  __int128 v14; // xmm1
  __int128 v15; // xmm1
  __int128 v16; // xmm0
  signed int v17; // eax
  __int64 v18; // rcx
  bool v19; // cl
  signed int KMTDriverVersion; // eax
  __int64 v21; // rcx
  signed int KMTAdapterType; // eax
  __int64 v23; // rcx
  signed int v24; // eax
  __int64 v25; // rcx
  signed int v26; // eax
  __int64 v27; // rcx
  __int64 v28; // rcx
  __int64 v29; // rcx
  signed int v31; // eax
  __int64 v32; // rcx
  __int64 v33; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v34; // [rsp+38h] [rbp-C8h] BYREF
  _BYTE v35[304]; // [rsp+40h] [rbp-C0h] BYREF
  int v36; // [rsp+170h] [rbp+70h]

  v34 = 0LL;
  v33 = 0LL;
  if ( (***((int (__fastcall ****)(_QWORD, GUID *, __int64 *))this + 3))(
         *((_QWORD *)this + 3),
         &GUID_0aa1ae0a_fa0e_4b84_8644_e05ff8e5acb5,
         &v34) < 0 )
  {
    v31 = (*(__int64 (__fastcall **)(_QWORD, char *))(**((_QWORD **)this + 3) + 64LL))(
            *((_QWORD *)this + 3),
            (char *)this + 40);
    v4 = v31;
    if ( v31 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v32, 0LL, 0, v31, 0x84u, 0LL);
      goto LABEL_14;
    }
  }
  else
  {
    v2 = (*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)v34 + 88LL))(v34, v35);
    v4 = v2;
    if ( v2 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v3, 0LL, 0, v2, 0x7Cu, 0LL);
      goto LABEL_14;
    }
    v5 = 2LL;
    v6 = (_OWORD *)((char *)this + 40);
    v7 = v35;
    do
    {
      v8 = v7[1];
      *v6 = *v7;
      v9 = v7[2];
      v6[1] = v8;
      v10 = v7[3];
      v6[2] = v9;
      v11 = v7[4];
      v6[3] = v10;
      v12 = v7[5];
      v6[4] = v11;
      v13 = v7[6];
      v6[5] = v12;
      v14 = v7[7];
      v7 += 8;
      v6[6] = v13;
      v6 += 8;
      *(v6 - 1) = v14;
      --v5;
    }
    while ( v5 );
    v15 = v7[1];
    *v6 = *v7;
    v16 = v7[2];
    v6[1] = v15;
    v6[2] = v16;
  }
  if ( (***((int (__fastcall ****)(_QWORD, GUID *, __int64 *))this + 3))(
         *((_QWORD *)this + 3),
         &GUID_3c8d99d1_4fbf_4181_a82c_af66bf7bd24e,
         &v33) >= 0 )
  {
    v17 = (*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)v33 + 144LL))(v33, v35);
    v4 = v17;
    if ( v17 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v18, 0LL, 0, v17, 0x8Bu, 0LL);
      goto LABEL_14;
    }
    v19 = (v36 & 0x10) != 0;
    *((_BYTE *)this + 344) = (v36 & 8) != 0;
    *((_BYTE *)this + 345) = v19;
  }
  KMTDriverVersion = CDXGIAdapterLimited::GetKMTDriverVersion(this);
  v4 = KMTDriverVersion;
  if ( KMTDriverVersion < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v21, 0LL, 0, KMTDriverVersion, 0x91u, 0LL);
  }
  else
  {
    KMTAdapterType = CDXGIAdapterLimited::GetKMTAdapterType(this);
    v4 = KMTAdapterType;
    if ( KMTAdapterType < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v23, 0LL, 0, KMTAdapterType, 0x92u, 0LL);
    }
    else
    {
      v24 = (***((__int64 (__fastcall ****)(_QWORD, GUID *, char *))this + 3))(
              *((_QWORD *)this + 3),
              &GUID_712bd56d_86ff_4b71_91e1_c13b274ff2a2,
              (char *)this + 32);
      v4 = v24;
      if ( v24 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v25, 0LL, 0, v24, 0x94u, 0LL);
      }
      else
      {
        v26 = CDXGIAdapterLimited::EnumerateDWMOutputs(this);
        v4 = v26;
        if ( v26 < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(v27, 0LL, 0, v26, 0x9Bu, 0LL);
      }
    }
  }
LABEL_14:
  v28 = v33;
  if ( v33 )
  {
    v33 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v28 + 16LL))(v28);
  }
  v29 = v34;
  if ( v34 )
  {
    v34 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v29 + 16LL))(v29);
  }
  return v4;
}
