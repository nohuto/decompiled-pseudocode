/*
 * XREFs of ?ndisIfCreateNetwork@@YAJPEAU_GUID@@I@Z @ 0x1C0113C64
 * Callers:
 *     ?ndisInitializeNsiHelper@@YAJXZ @ 0x1C0035FB0 (-ndisInitializeNsiHelper@@YAJXZ.c)
 *     ?ndisIfCreateCompartment@@YAJPEAU_NM_REQUEST_SET_ALL_PARAMETERS@@PEAPEAU_NDIS_IF_COMPARTMENT_BLOCK@@@Z @ 0x1C0062F30 (-ndisIfCreateCompartment@@YAJPEAU_NM_REQUEST_SET_ALL_PARAMETERS@@PEAPEAU_NDIS_IF_COMPARTMENT_BLO.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0040770 (__security_check_cookie.c)
 *     memset @ 0x1C0041440 (memset.c)
 *     WPP_RECORDER_SF__guid_L @ 0x1C0066DBC (WPP_RECORDER_SF__guid_L.c)
 *     WPP_RECORDER_SF__guid_LL @ 0x1C0066E90 (WPP_RECORDER_SF__guid_LL.c)
 */

__int64 __fastcall ndisIfCreateNetwork(struct _GUID *a1, int a2, int a3)
{
  int v3; // edi
  __int64 v5; // rdx
  unsigned int v6; // esi
  __int64 v7; // r8
  __int64 v8; // r9
  int v10; // [rsp+20h] [rbp-E0h]
  __int64 v11; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v12; // [rsp+48h] [rbp-B8h]
  const NPI_MODULEID *v13; // [rsp+50h] [rbp-B0h]
  __int64 v14; // [rsp+58h] [rbp-A8h]
  int v15; // [rsp+60h] [rbp-A0h]
  int v16; // [rsp+64h] [rbp-9Ch]
  struct _GUID *v17; // [rsp+68h] [rbp-98h]
  __int64 v18; // [rsp+70h] [rbp-90h]
  _DWORD *v19; // [rsp+78h] [rbp-88h]
  __int64 v20; // [rsp+80h] [rbp-80h]
  _DWORD v21[132]; // [rsp+90h] [rbp-70h] BYREF

  v3 = a2;
  HIDWORD(v12) = 0;
  HIDWORD(v14) = 0;
  HIDWORD(v18) = 0;
  HIDWORD(v20) = 0;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(a2) = 4;
    WPP_RECORDER_SF__guid_L(*((_QWORD *)WPP_GLOBAL_Control + 8), a2, a3, 124);
  }
  v12 = 0LL;
  v14 = 6LL;
  v18 = 16LL;
  v20 = 528LL;
  memset(&v21[2], 0, 0x208uLL);
  v11 = 0LL;
  v13 = &NPI_MS_NDIS_MODULEID;
  v15 = 2;
  v19 = v21;
  v16 = 1;
  v17 = a1;
  v21[0] = 34603436;
  v21[1] = v3;
  v6 = NsiSetAllParametersEx(&v11);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF__guid_LL(*((_QWORD *)WPP_GLOBAL_Control + 8), v5, v7, v8, v10, (__int64)a1);
  return v6;
}
