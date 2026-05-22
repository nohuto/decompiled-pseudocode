/*
 * XREFs of ?HandInputReportProcessed_@RawInputProvidersContinuousTracing@@QEAAXKW4MPCGestureType@@PEAUInputInfo@@@Z @ 0x180060B74
 * Callers:
 *     ?SendInputReport@SpatialRimDeviceCollection@@UEAAJW4MPCAugmentedInputGestureType@@W4MPCGestureType@@KAEBUHandStateMsg@Internal@Spatial@Input@UI@Windows@@UMatrix4x4@Numerics@Foundation@9@@Z @ 0x180062CC0 (-SendInputReport@SpatialRimDeviceCollection@@UEAAJW4MPCAugmentedInputGestureType@@W4MPCGestureTy.c)
 * Callees:
 *     _TlgWrite @ 0x180001144 (_TlgWrite.c)
 *     ?Instance@RawInputProvidersContinuousTracing@@KAPEAV1@XZ @ 0x1800605FC (-Instance@RawInputProvidersContinuousTracing@@KAPEAV1@XZ.c)
 *     __security_check_cookie @ 0x18012BF70 (__security_check_cookie.c)
 */

int __fastcall RawInputProvidersContinuousTracing::HandInputReportProcessed_(__int64 a1, int a2, int a3, __int64 a4)
{
  struct RawInputProvidersContinuousTracing *v6; // rax
  __int64 v7; // rcx
  int v9; // [rsp+38h] [rbp-79h] BYREF
  int v10; // [rsp+3Ch] [rbp-75h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+48h] [rbp-69h] BYREF
  int *v12; // [rsp+68h] [rbp-49h]
  __int64 v13; // [rsp+70h] [rbp-41h]
  __int64 v14; // [rsp+78h] [rbp-39h]
  __int64 v15; // [rsp+80h] [rbp-31h]
  int *v16; // [rsp+88h] [rbp-29h]
  __int64 v17; // [rsp+90h] [rbp-21h]
  __int64 v18; // [rsp+98h] [rbp-19h]
  __int64 v19; // [rsp+A0h] [rbp-11h]
  __int64 v20; // [rsp+A8h] [rbp-9h]
  __int64 v21; // [rsp+B0h] [rbp-1h]
  __int64 v22; // [rsp+B8h] [rbp+7h]
  __int64 v23; // [rsp+C0h] [rbp+Fh]
  __int64 v24; // [rsp+C8h] [rbp+17h]
  __int64 v25; // [rsp+D0h] [rbp+1Fh]
  int *v26; // [rsp+D8h] [rbp+27h]
  __int64 v27; // [rsp+E0h] [rbp+2Fh]
  __int64 v28; // [rsp+E8h] [rbp+37h]
  __int64 v29; // [rsp+F0h] [rbp+3Fh]
  int v30; // [rsp+120h] [rbp+6Fh] BYREF

  v30 = a2;
  v6 = RawInputProvidersContinuousTracing::Instance();
  v7 = *((_QWORD *)v6 + 1);
  if ( *(_DWORD *)v7 > 5u && (*(_BYTE *)(v7 + 16) & 2) != 0 )
  {
    v6 = (struct RawInputProvidersContinuousTracing *)(*(_QWORD *)(v7 + 24) & 2LL);
    if ( v6 == *(struct RawInputProvidersContinuousTracing **)(v7 + 24) )
    {
      v13 = 4LL;
      v12 = &v30;
      v14 = a4 + 528;
      v16 = &v9;
      v18 = a4 + 1200;
      v20 = a4 + 1212;
      v22 = a4 + 1216;
      v24 = a4 + 1208;
      v10 = *(_DWORD *)(a4 + 1336);
      v26 = &v10;
      v28 = a4 + 1312;
      v15 = 4LL;
      v9 = a3;
      v17 = 4LL;
      v19 = 4LL;
      v21 = 4LL;
      v23 = 4LL;
      v25 = 4LL;
      v27 = 4LL;
      v29 = 16LL;
      LODWORD(v6) = TlgWrite((TraceLoggingHProvider)v7, &unk_180167F5D, 0LL, 0LL, 0xBu, &pData);
    }
  }
  return (int)v6;
}
