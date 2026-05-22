/*
 * XREFs of ??$Telemetry_SpatialInteractionHeartbeat_ButtonCounters@$06@SpatialInteractionTrace@SpatialInteractionDevices@@SAXAEBU_GUID@@GGGIAEAY06$$CBW4ButtonFlags@1@AEAY06$$CBI@Z @ 0x18016238C
 * Callers:
 *     ?Report@SpatialInteractionHeartbeat@SpatialInteractionDevices@@AEAAX_N@Z @ 0x180167B74 (-Report@SpatialInteractionHeartbeat@SpatialInteractionDevices@@AEAAX_N@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x18002C200 (__security_check_cookie.c)
 *     _TlgKeywordOn @ 0x18005300C (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x180053034 (_TlgWrite.c)
 *     ?IsEnabled@SpatialInteractionTrace@SpatialInteractionDevices@@SA_NE_K@Z @ 0x1800D8450 (-IsEnabled@SpatialInteractionTrace@SpatialInteractionDevices@@SA_NE_K@Z.c)
 *     ?get@?$static_lazy@VSpatialInteractionTrace@SpatialInteractionDevices@@@details@wil@@QEAAPEAVSpatialInteractionTrace@SpatialInteractionDevices@@P6AXXZ@Z @ 0x1800D9FDC (-get@-$static_lazy@VSpatialInteractionTrace@SpatialInteractionDevices@@@details@wil@@QEAAPEAVSpa.c)
 */

char __fastcall SpatialInteractionDevices::SpatialInteractionTrace::Telemetry_SpatialInteractionHeartbeat_ButtonCounters<7>(
        __int64 a1,
        __int16 a2,
        __int16 a3,
        __int16 a4,
        char a5,
        int a6,
        __int64 a7)
{
  _QWORD *v8; // rax
  __int64 v9; // rcx
  const struct _TlgProvider_t *v10; // rcx
  const struct _TlgProvider_t *v11; // rcx
  EVENT_DATA_DESCRIPTOR pData; // [rsp+38h] [rbp-61h] BYREF
  __int64 v14; // [rsp+58h] [rbp-41h]
  int v15; // [rsp+60h] [rbp-39h]
  int v16; // [rsp+64h] [rbp-35h]
  __int16 *v17; // [rsp+68h] [rbp-31h]
  int v18; // [rsp+70h] [rbp-29h]
  int v19; // [rsp+74h] [rbp-25h]
  __int16 *v20; // [rsp+78h] [rbp-21h]
  int v21; // [rsp+80h] [rbp-19h]
  int v22; // [rsp+84h] [rbp-15h]
  __int16 *v23; // [rsp+88h] [rbp-11h]
  int v24; // [rsp+90h] [rbp-9h]
  int v25; // [rsp+94h] [rbp-5h]
  char *v26; // [rsp+98h] [rbp-1h]
  int v27; // [rsp+A0h] [rbp+7h]
  int v28; // [rsp+A4h] [rbp+Bh]
  void *v29; // [rsp+A8h] [rbp+Fh]
  int v30; // [rsp+B0h] [rbp+17h]
  int v31; // [rsp+B4h] [rbp+1Bh]
  __int64 v32; // [rsp+B8h] [rbp+1Fh]
  int v33; // [rsp+C0h] [rbp+27h]
  int v34; // [rsp+C4h] [rbp+2Bh]
  __int16 v35; // [rsp+F0h] [rbp+57h] BYREF
  __int16 v36; // [rsp+F8h] [rbp+5Fh] BYREF
  __int16 v37; // [rsp+100h] [rbp+67h] BYREF

  v37 = a4;
  v36 = a3;
  v35 = a2;
  LOBYTE(v8) = SpatialInteractionDevices::SpatialInteractionTrace::IsEnabled(a1);
  if ( (_BYTE)v8 )
  {
    v8 = wil::details::static_lazy<SpatialInteractionDevices::SpatialInteractionTrace>::get(
           v9,
           (void (__cdecl *)())lambda_169e34f0547c812b04d058e5b6da2245_::_lambda_invoker_cdecl_);
    v10 = (const struct _TlgProvider_t *)v8[1];
    if ( *(_DWORD *)v10 > 5u )
    {
      LOBYTE(v8) = TlgKeywordOn(v10, 0x200000000000uLL);
      if ( (_BYTE)v8 )
      {
        v16 = 0;
        v19 = 0;
        v22 = 0;
        v25 = 0;
        v28 = 0;
        v31 = 0;
        v34 = 0;
        v17 = &v35;
        v20 = &v36;
        v23 = &v37;
        v26 = &a5;
        v29 = &SpatialInteractionDevices::SpatialInteractionHeartbeat::ButtonsOfInterest;
        v18 = 2;
        v21 = 2;
        v24 = 2;
        v32 = a7;
        v14 = a1;
        v15 = 16;
        v27 = 4;
        v30 = 28;
        v33 = 28;
        LOBYTE(v8) = TlgWrite(v11, &unk_1801A4386, 0LL, 0LL, 9u, &pData);
      }
    }
  }
  return (char)v8;
}
