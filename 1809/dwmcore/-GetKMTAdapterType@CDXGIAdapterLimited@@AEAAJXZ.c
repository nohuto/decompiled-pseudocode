/*
 * XREFs of ?GetKMTAdapterType@CDXGIAdapterLimited@@AEAAJXZ @ 0x180080964
 * Callers:
 *     ?Initialize@CDXGIAdapterLimited@@AEAAJXZ @ 0x180080750 (-Initialize@CDXGIAdapterLimited@@AEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CDXGIAdapterLimited::GetKMTAdapterType(CDXGIAdapterLimited *this)
{
  __int64 (__fastcall ***v2)(_QWORD, GUID *, __int64 *); // rcx
  int v3; // eax
  unsigned int v4; // ecx
  unsigned int v5; // ebx
  int v6; // eax
  unsigned int v7; // ecx
  unsigned int v9; // [rsp+20h] [rbp-30h]
  __int64 v10; // [rsp+30h] [rbp-20h] BYREF
  int *v11; // [rsp+38h] [rbp-18h]
  __int64 v12; // [rsp+40h] [rbp-10h]
  int v13; // [rsp+70h] [rbp+20h] BYREF
  __int64 v14; // [rsp+78h] [rbp+28h] BYREF
  __int64 v15; // [rsp+80h] [rbp+30h] BYREF

  v14 = 0LL;
  v15 = 0LL;
  v2 = (__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *))*((_QWORD *)this + 3);
  v10 = 0LL;
  v11 = 0LL;
  v12 = 0LL;
  v13 = 0;
  v3 = (**v2)(v2, &GUID_712bd56d_86ff_4b71_91e1_c13b274ff2a2, &v14);
  v5 = v3;
  if ( v3 < 0 )
  {
    v9 = 228;
    goto LABEL_15;
  }
  v3 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v14 + 24LL))(v14, &v15);
  v5 = v3;
  if ( v3 < 0 )
  {
    v9 = 230;
LABEL_15:
    MilInstrumentationCheckHR_MaybeFailFast(v4, 0LL, 0, v3, v9);
    goto LABEL_5;
  }
  v10 = (unsigned int)v15 | 0xF00000000LL;
  v11 = &v13;
  LODWORD(v12) = 4;
  v6 = D3DKMTQueryAdapterInfo(&v10);
  if ( v6 < 0 )
  {
    v5 = v6 | 0x10000000;
    MilInstrumentationCheckHR_MaybeFailFast(v7, 0LL, 0, v6 | 0x10000000, 0xEDu);
  }
  else
  {
    *((_DWORD *)this + 90) = v13;
  }
LABEL_5:
  if ( v15 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 32LL))(v14);
  if ( v14 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
  if ( v5 == -805305674 )
    return (unsigned int)-2003304291;
  return v5;
}
