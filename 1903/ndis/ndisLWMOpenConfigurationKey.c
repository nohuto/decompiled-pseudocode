/*
 * XREFs of ndisLWMOpenConfigurationKey @ 0x1C01186B0
 * Callers:
 *     NdisOpenConfiguration @ 0x1C002B170 (NdisOpenConfiguration.c)
 *     ?ndisLWMCreateMiniport@@YAHPEAU_NDIS_M_DRIVER_BLOCK@@PEBU_GUID@@PEAPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C0117D04 (-ndisLWMCreateMiniport@@YAHPEAU_NDIS_M_DRIVER_BLOCK@@PEBU_GUID@@PEAPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 * Callees:
 *     ?RtlStringCchPrintfW@@YAJPEA_W_KPEB_WZZ @ 0x1C002CE8C (-RtlStringCchPrintfW@@YAJPEA_W_KPEB_WZZ.c)
 *     WPP_RECORDER_SF_D @ 0x1C0032368 (WPP_RECORDER_SF_D.c)
 *     WPP_RECORDER_SF__guid_ @ 0x1C003EE34 (WPP_RECORDER_SF__guid_.c)
 *     __security_check_cookie @ 0x1C0040770 (__security_check_cookie.c)
 *     WPP_RECORDER_SF__guid_d @ 0x1C0067068 (WPP_RECORDER_SF__guid_d.c)
 *     ?Open@KRegKey@@QEAAJKPEB_WPEAX@Z @ 0x1C0100B80 (-Open@KRegKey@@QEAAJKPEB_WPEAX@Z.c)
 */

__int64 __fastcall ndisLWMOpenConfigurationKey(unsigned int *a1, KRegKey *this)
{
  KRegKey *v2; // rbp
  int v4; // eax
  int v5; // edx
  unsigned int v6; // ebx
  int v7; // r9d
  struct _GUID *v9; // [rsp+20h] [rbp-288h]
  char v10[8]; // [rsp+28h] [rbp-280h]
  char v11[4]; // [rsp+30h] [rbp-278h]
  __int64 v12; // [rsp+30h] [rbp-278h]
  int v13; // [rsp+38h] [rbp-270h]
  int v14; // [rsp+40h] [rbp-268h]
  int v15; // [rsp+48h] [rbp-260h]
  int v16; // [rsp+50h] [rbp-258h]
  int v17; // [rsp+58h] [rbp-250h]
  int v18; // [rsp+60h] [rbp-248h]
  int v19; // [rsp+68h] [rbp-240h]
  wchar_t Dest[256]; // [rsp+70h] [rbp-238h] BYREF

  v2 = this;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(this) = 4;
    WPP_RECORDER_SF__guid_(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      (int)this,
      1,
      133,
      (struct _GUID *)&WPP_3bdda7144e74370204adec44604355d7_Traceguids,
      (__int64)a1);
  }
  v19 = *((unsigned __int8 *)a1 + 15);
  v18 = *((unsigned __int8 *)a1 + 14);
  v17 = *((unsigned __int8 *)a1 + 13);
  v16 = *((unsigned __int8 *)a1 + 12);
  v15 = *((unsigned __int8 *)a1 + 11);
  v14 = *((unsigned __int8 *)a1 + 10);
  v13 = *((unsigned __int8 *)a1 + 9);
  *(_DWORD *)v11 = *((unsigned __int8 *)a1 + 8);
  *(_DWORD *)v10 = *((unsigned __int16 *)a1 + 3);
  LODWORD(v9) = *((unsigned __int16 *)a1 + 2);
  v4 = RtlStringCchPrintfW(
         Dest,
         256LL,
         L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\Network\\Interfaces\\{%08x-%04x-%04x-%02x%02x-%02x%02x"
          "%02x%02x%02x%02x}\\Configuration",
         *a1,
         v9,
         *(_QWORD *)v10,
         *(_DWORD *)v11,
         v13,
         v14,
         v15,
         v16,
         v17,
         v18,
         v19);
  v6 = v4;
  if ( v4 >= 0 )
  {
    v4 = KRegKey::Open(v2, 0xF003Fu, Dest, 0LL);
    v6 = v4;
    if ( v4 >= 0 )
      goto LABEL_10;
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      return v6;
    v7 = 135;
  }
  else
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      return v6;
    v7 = 134;
  }
  LOBYTE(v5) = 2;
  WPP_RECORDER_SF_D(
    *((_QWORD *)WPP_GLOBAL_Control + 8),
    v5,
    1,
    v7,
    (struct _GUID *)&WPP_3bdda7144e74370204adec44604355d7_Traceguids,
    v4);
LABEL_10:
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LODWORD(v12) = v6;
    WPP_RECORDER_SF__guid_d(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      1u,
      0x88u,
      (struct _GUID *)&WPP_3bdda7144e74370204adec44604355d7_Traceguids,
      (__int64)a1,
      v12);
  }
  return v6;
}
