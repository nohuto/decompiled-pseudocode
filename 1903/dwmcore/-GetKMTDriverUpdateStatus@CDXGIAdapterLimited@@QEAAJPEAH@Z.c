/*
 * XREFs of ?GetKMTDriverUpdateStatus@CDXGIAdapterLimited@@QEAAJPEAH@Z @ 0x1800A7994
 * Callers:
 *     ?UpdateDisplaySet@CComposition@@IEAAXXZ @ 0x180098790 (-UpdateDisplaySet@CComposition@@IEAAXXZ.c)
 *     ?Init@CDisplaySet@@AEAAJPEBVCDXGIEnumeration@@@Z @ 0x1800A46DC (-Init@CDisplaySet@@AEAAJPEBVCDXGIEnumeration@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800969E0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800EC570 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CDXGIAdapterLimited::GetKMTDriverUpdateStatus(CDXGIAdapterLimited *this, int *a2)
{
  __int64 (__fastcall ***v2)(_QWORD, GUID *, __int64 *); // rcx
  signed int v4; // eax
  __int64 v5; // rcx
  unsigned int v6; // ebx
  int v7; // eax
  __int64 v8; // rcx
  unsigned int v10; // [rsp+20h] [rbp-30h]
  __int64 v11; // [rsp+30h] [rbp-20h] BYREF
  int *v12; // [rsp+38h] [rbp-18h]
  __int64 v13; // [rsp+40h] [rbp-10h]
  int v14; // [rsp+70h] [rbp+20h] BYREF
  __int64 v15; // [rsp+80h] [rbp+30h] BYREF
  __int64 v16; // [rsp+88h] [rbp+38h] BYREF

  v2 = (__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *))*((_QWORD *)this + 3);
  v15 = 0LL;
  v14 = 0;
  v16 = 0LL;
  v11 = 0LL;
  v12 = 0LL;
  v13 = 0LL;
  v4 = (**v2)(v2, &GUID_712bd56d_86ff_4b71_91e1_c13b274ff2a2, &v15);
  v6 = v4;
  if ( v4 < 0 )
  {
    v10 = 323;
    goto LABEL_15;
  }
  v4 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v15 + 24LL))(v15, &v16);
  v6 = v4;
  if ( v4 < 0 )
  {
    v10 = 325;
LABEL_15:
    MilInstrumentationCheckHR_MaybeFailFast(v5, 0LL, 0, v4, v10, 0LL);
    goto LABEL_5;
  }
  v11 = (unsigned int)v16 | 0xB00000000LL;
  v12 = &v14;
  LODWORD(v13) = 4;
  v7 = D3DKMTQueryAdapterInfo(&v11);
  if ( v7 < 0 )
  {
    v6 = v7 | 0x10000000;
    MilInstrumentationCheckHR_MaybeFailFast(v8, 0LL, 0, v7 | 0x10000000, 0x14Cu, 0LL);
  }
  else
  {
    *a2 = v14;
  }
LABEL_5:
  if ( v16 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 32LL))(v15);
  if ( v15 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 16LL))(v15);
  if ( v6 == -805305674 )
    return (unsigned int)-2003304291;
  return v6;
}
