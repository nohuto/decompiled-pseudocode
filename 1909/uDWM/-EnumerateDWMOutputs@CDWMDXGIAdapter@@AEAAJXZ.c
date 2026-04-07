/*
 * XREFs of ?EnumerateDWMOutputs@CDWMDXGIAdapter@@AEAAJXZ @ 0x18002BD9C
 * Callers:
 *     ?Initialize@CDWMDXGIAdapter@@AEAAJXZ @ 0x18002B940 (-Initialize@CDWMDXGIAdapter@@AEAAJXZ.c)
 * Callees:
 *     ?UpdateDesc@DXGIOutputInfo@@QEAAJXZ @ 0x18002BED8 (-UpdateDesc@DXGIOutputInfo@@QEAAJXZ.c)
 *     ?AddMultipleAndSet@?$DynArray@UDXGIOutputInfo@@$0A@@@QEAAJPEFBUDXGIOutputInfo@@I@Z @ 0x18003ABC4 (-AddMultipleAndSet@-$DynArray@UDXGIOutputInfo@@$0A@@@QEAAJPEFBUDXGIOutputInfo@@I@Z.c)
 *     __security_check_cookie @ 0x18004E0C0 (__security_check_cookie.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18004F8B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     memset_0 @ 0x18004FB12 (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x18004FB50 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CDWMDXGIAdapter::EnumerateDWMOutputs(CDWMDXGIAdapter *this)
{
  __int64 v2; // rcx
  unsigned int v3; // esi
  __int64 i; // rdx
  int v5; // ebx
  __int64 (__fastcall ***v6)(_QWORD, GUID *, __int64 *); // rbx
  int v7; // eax
  int updated; // eax
  int v9; // eax
  void *v11; // [rsp+28h] [rbp-D8h]
  __int64 (__fastcall ***v12)(_QWORD, GUID *, __int64 *); // [rsp+30h] [rbp-D0h] BYREF
  __int64 v13; // [rsp+38h] [rbp-C8h] BYREF
  __int64 (__fastcall ***v14)(_QWORD, GUID *, _QWORD *); // [rsp+40h] [rbp-C0h] BYREF
  __int64 v15[35]; // [rsp+48h] [rbp-B8h] BYREF

  v2 = *((_QWORD *)this + 4);
  v3 = 0;
  for ( i = 0LL; ; i = v3 )
  {
    v12 = 0LL;
    v13 = 0LL;
    v5 = (*(__int64 (__fastcall **)(__int64, __int64, __int64, __int64 (__fastcall ****)(_QWORD, GUID *, __int64 *)))(*(_QWORD *)v2 + 40LL))(
           v2,
           i,
           0xFFFFFFFFLL,
           &v12);
    if ( v5 < 0 )
      break;
    v6 = v12;
    v14 = v12;
    memset_0(v15, 0, sizeof(v15));
    v7 = (**v6)(v6, &GUID_6f66a9a0_bece_4ee8_b11b_990eb38ed976, &v13);
    v5 = v7;
    if ( v7 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v7, 0x99u, v11);
      goto LABEL_9;
    }
    v15[0] = v13;
    updated = DXGIOutputInfo::UpdateDesc((DXGIOutputInfo *)&v14);
    v5 = updated;
    if ( updated < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, updated, 0x9Cu, v11);
      goto LABEL_9;
    }
    v9 = DynArray<DXGIOutputInfo,0>::AddMultipleAndSet((char *)this + 352, &v14);
    v5 = v9;
    if ( v9 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v9, 0x9Eu, v11);
      goto LABEL_9;
    }
    v2 = *((_QWORD *)this + 4);
    ++v3;
  }
  if ( v5 == -2005270526 )
    v5 = 0;
LABEL_9:
  if ( v13 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
  if ( v12 )
    ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *)))(*v12)[2])(v12);
  return (unsigned int)v5;
}
