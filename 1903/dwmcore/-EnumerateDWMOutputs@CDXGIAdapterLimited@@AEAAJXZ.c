/*
 * XREFs of ?EnumerateDWMOutputs@CDXGIAdapterLimited@@AEAAJXZ @ 0x1800A8458
 * Callers:
 *     ?Initialize@CDXGIAdapterLimited@@AEAAJXZ @ 0x1800A805C (-Initialize@CDXGIAdapterLimited@@AEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800969E0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?UpdateDesc@DXGIOutputInfo@@QEAAJXZ @ 0x1800A8604 (-UpdateDesc@DXGIOutputInfo@@QEAAJXZ.c)
 *     ?AddMultipleAndSet@?$DynArray@UDXGIOutputInfo@@$0A@@@QEAAJPEFBUDXGIOutputInfo@@I@Z @ 0x1800D5DA0 (-AddMultipleAndSet@-$DynArray@UDXGIOutputInfo@@$0A@@@QEAAJPEFBUDXGIOutputInfo@@I@Z.c)
 *     __security_check_cookie @ 0x1800E6FB0 (__security_check_cookie.c)
 *     memset_0 @ 0x1800E7E5E (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800EC570 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CDXGIAdapterLimited::EnumerateDWMOutputs(CDXGIAdapterLimited *this)
{
  __int64 v2; // rcx
  unsigned int v3; // esi
  __int64 i; // rdx
  int v5; // eax
  unsigned int v6; // ebx
  __int64 (__fastcall ***v8)(_QWORD, GUID *, __int64 *); // rbx
  signed int v9; // eax
  __int64 v10; // rcx
  signed int updated; // eax
  __int64 v12; // rcx
  signed int v13; // eax
  __int64 v14; // rcx
  __int64 (__fastcall ***v15)(_QWORD, GUID *, __int64 *); // [rsp+30h] [rbp-D0h] BYREF
  __int64 v16; // [rsp+38h] [rbp-C8h] BYREF
  __int64 (__fastcall ***v17)(_QWORD, GUID *, _QWORD *); // [rsp+40h] [rbp-C0h] BYREF
  __int64 v18[35]; // [rsp+48h] [rbp-B8h] BYREF

  v2 = *((_QWORD *)this + 4);
  v3 = 0;
  for ( i = 0LL; ; i = v3 )
  {
    v15 = 0LL;
    v16 = 0LL;
    v5 = (*(__int64 (__fastcall **)(__int64, __int64, __int64, __int64 (__fastcall ****)(_QWORD, GUID *, __int64 *)))(*(_QWORD *)v2 + 40LL))(
           v2,
           i,
           0xFFFFFFFFLL,
           &v15);
    v6 = v5;
    if ( v5 < 0 )
      break;
    v8 = v15;
    v17 = v15;
    memset_0(v18, 0, sizeof(v18));
    v9 = (**v8)(v8, &GUID_6f66a9a0_bece_4ee8_b11b_990eb38ed976, &v16);
    v6 = v9;
    if ( v9 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v10, 0LL, 0, v9, 0xB3u, 0LL);
      goto LABEL_5;
    }
    v18[0] = v16;
    updated = DXGIOutputInfo::UpdateDesc((DXGIOutputInfo *)&v17);
    v6 = updated;
    if ( updated < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v12, 0LL, 0, updated, 0xB6u, 0LL);
      goto LABEL_5;
    }
    v13 = DynArray<DXGIOutputInfo,0>::AddMultipleAndSet((char *)this + 368, &v17);
    v6 = v13;
    if ( v13 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v14, 0LL, 0, v13, 0xB8u, 0LL);
      goto LABEL_5;
    }
    v2 = *((_QWORD *)this + 4);
    ++v3;
  }
  if ( v5 == -2005270526 )
    v6 = 0;
LABEL_5:
  if ( v16 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 16LL))(v16);
  if ( v15 )
    ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *)))(*v15)[2])(v15);
  return v6;
}
