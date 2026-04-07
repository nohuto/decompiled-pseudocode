/*
 * XREFs of ?GetKMTDriverVersion@CDWMDXGIAdapter@@AEAAJXZ @ 0x1800299F8
 * Callers:
 *     ?Initialize@CDWMDXGIAdapter@@AEAAJXZ @ 0x180029868 (-Initialize@CDWMDXGIAdapter@@AEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18004E04C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004E2E0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CDWMDXGIAdapter::GetKMTDriverVersion(CDWMDXGIAdapter *this)
{
  __int64 (__fastcall ***v2)(_QWORD, GUID *, __int64 *); // rcx
  int v3; // eax
  unsigned int v4; // ebx
  int v5; // eax
  int v7; // r9d
  unsigned int v8; // [rsp+20h] [rbp-30h]
  __int64 v9; // [rsp+30h] [rbp-20h] BYREF
  int *v10; // [rsp+38h] [rbp-18h]
  __int64 v11; // [rsp+40h] [rbp-10h]
  int v12; // [rsp+70h] [rbp+20h] BYREF
  __int64 v13; // [rsp+78h] [rbp+28h] BYREF
  __int64 v14; // [rsp+80h] [rbp+30h] BYREF

  v13 = 0LL;
  v14 = 0LL;
  v12 = 0;
  v2 = (__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *))*((_QWORD *)this + 3);
  v9 = 0LL;
  v10 = 0LL;
  v11 = 0LL;
  v3 = (**v2)(v2, &GUID_712bd56d_86ff_4b71_91e1_c13b274ff2a2, &v13);
  v4 = v3;
  if ( v3 < 0 )
  {
    v8 = 238;
LABEL_14:
    v7 = v3;
    goto LABEL_16;
  }
  v3 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v13 + 24LL))(v13, &v14);
  v4 = v3;
  if ( v3 < 0 )
  {
    v8 = 240;
    goto LABEL_14;
  }
  v9 = (unsigned int)v14 | 0xD00000000LL;
  v10 = &v12;
  LODWORD(v11) = 4;
  v5 = D3DKMTQueryAdapterInfo(&v9);
  if ( v5 >= 0 )
  {
    *((_DWORD *)this + 86) = v12;
    goto LABEL_5;
  }
  v8 = 247;
  v4 = v5 | 0x10000000;
  v7 = v5 | 0x10000000;
LABEL_16:
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v7, v8);
LABEL_5:
  if ( v14 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 32LL))(v13);
  if ( v13 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
  if ( v4 == -805305674 )
    return (unsigned int)-2003304291;
  return v4;
}
