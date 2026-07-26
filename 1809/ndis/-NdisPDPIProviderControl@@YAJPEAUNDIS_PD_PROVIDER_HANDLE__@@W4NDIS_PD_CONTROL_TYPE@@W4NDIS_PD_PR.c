/*
 * XREFs of ?NdisPDPIProviderControl@@YAJPEAUNDIS_PD_PROVIDER_HANDLE__@@W4NDIS_PD_CONTROL_TYPE@@W4NDIS_PD_PROVIDER_CONTROL_CODE@@PEAXK3KPEAK@Z @ 0x1C00FFF80
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0026E30 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_qLLS @ 0x1C007C310 (WPP_SF_qLLS.c)
 *     WPP_SF_qLLd @ 0x1C007C3B8 (WPP_SF_qLLd.c)
 */

__int64 __fastcall NdisPDPIProviderControl(
        struct NDIS_PD_PROVIDER_HANDLE__ *a1,
        __int64 a2,
        enum NDIS_PD_PROVIDER_CONTROL_CODE a3,
        void *a4,
        unsigned int a5,
        void *a6,
        unsigned int a7,
        unsigned int *a8)
{
  int v10; // ebp
  const wchar_t *v12; // r10
  unsigned int v13; // ebx
  __int64 v15; // [rsp+20h] [rbp-38h]
  __int64 v16; // [rsp+28h] [rbp-30h]

  v10 = a2;
  if ( (unsigned __int8)byte_1C00A026C >= 4u )
  {
    v12 = L"PASS_THROUGH";
    if ( !*((_BYTE *)a1 + 88) )
      v12 = L" ";
    WPP_SF_qLLS((__int64)L" ", a2, (__int64)a1, a2, a3, v12);
  }
  if ( a3 == NdisPDPCTLCapabilities )
  {
    a2 = 1LL;
    if ( v10 != 1 || a4 || a5 || !a8 )
      v13 = -1073741811;
    else
      v13 = (*(__int64 (__fastcall **)(_QWORD, __int64, __int64, _QWORD, _DWORD, void *, unsigned int, unsigned int *))(*((_QWORD *)a1 + 10) + 96LL))(
              *((_QWORD *)a1 + 9),
              1LL,
              1LL,
              0LL,
              0,
              a6,
              a7,
              a8);
  }
  else
  {
    v13 = -1073741637;
  }
  if ( (unsigned __int8)byte_1C00A026C >= 4u )
  {
    LODWORD(v16) = v13;
    LODWORD(v15) = a3;
    WPP_SF_qLLd(0x3Cu, a2, (__int64)a1, v10, v15, v16);
  }
  return v13;
}
