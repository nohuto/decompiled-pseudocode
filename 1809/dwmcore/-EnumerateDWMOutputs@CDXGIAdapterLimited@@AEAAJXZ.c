/*
 * XREFs of ?EnumerateDWMOutputs@CDXGIAdapterLimited@@AEAAJXZ @ 0x180080B4C
 * Callers:
 *     ?Initialize@CDXGIAdapterLimited@@AEAAJXZ @ 0x180080750 (-Initialize@CDXGIAdapterLimited@@AEAAJXZ.c)
 * Callees:
 *     ?AddMultipleAndSet@?$DynArray@UDXGIOutputInfo@@$0A@@@QEAAJPEFBUDXGIOutputInfo@@I@Z @ 0x180022290 (-AddMultipleAndSet@-$DynArray@UDXGIOutputInfo@@$0A@@@QEAAJPEFBUDXGIOutputInfo@@I@Z.c)
 *     ?UpdateDesc@DXGIOutputInfo@@QEAAJXZ @ 0x180080C88 (-UpdateDesc@DXGIOutputInfo@@QEAAJXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x1800EB870 (__security_check_cookie.c)
 *     memset_0 @ 0x1800EC516 (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CDXGIAdapterLimited::EnumerateDWMOutputs(CDXGIAdapterLimited *this)
{
  __int64 v2; // rcx
  unsigned int v3; // esi
  __int64 i; // rdx
  int v5; // ebx
  __int64 (__fastcall ***v6)(_QWORD, GUID *, __int64 *); // rbx
  int v7; // eax
  unsigned int v8; // ecx
  int updated; // eax
  unsigned int v10; // ecx
  int v11; // eax
  unsigned int v12; // ecx
  __int64 (__fastcall ***v14)(_QWORD, GUID *, __int64 *); // [rsp+30h] [rbp-D0h] BYREF
  __int64 v15; // [rsp+38h] [rbp-C8h] BYREF
  _OWORD v16[18]; // [rsp+40h] [rbp-C0h] BYREF

  v2 = *((_QWORD *)this + 4);
  v3 = 0;
  for ( i = 0LL; ; i = v3 )
  {
    v14 = 0LL;
    v15 = 0LL;
    v5 = (*(__int64 (__fastcall **)(__int64, __int64, __int64, __int64 (__fastcall ****)(_QWORD, GUID *, __int64 *)))(*(_QWORD *)v2 + 40LL))(
           v2,
           i,
           0xFFFFFFFFLL,
           &v14);
    if ( v5 < 0 )
      break;
    v6 = v14;
    *(_QWORD *)&v16[0] = v14;
    memset_0((char *)v16 + 8, 0, 0x118uLL);
    v7 = (**v6)(v6, &GUID_6f66a9a0_bece_4ee8_b11b_990eb38ed976, &v15);
    v5 = v7;
    if ( v7 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v8, 0LL, 0, v7, 0xB6u);
      goto LABEL_9;
    }
    *((_QWORD *)&v16[0] + 1) = v15;
    updated = DXGIOutputInfo::UpdateDesc((DXGIOutputInfo *)v16);
    v5 = updated;
    if ( updated < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v10, 0LL, 0, updated, 0xB9u);
      goto LABEL_9;
    }
    v11 = DynArray<DXGIOutputInfo,0>::AddMultipleAndSet((__int64)this + 368, v16);
    v5 = v11;
    if ( v11 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v12, 0LL, 0, v11, 0xBBu);
      goto LABEL_9;
    }
    v2 = *((_QWORD *)this + 4);
    ++v3;
  }
  if ( v5 == -2005270526 )
    v5 = 0;
LABEL_9:
  if ( v15 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 16LL))(v15);
  if ( v14 )
    ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *)))(*v14)[2])(v14);
  return (unsigned int)v5;
}
