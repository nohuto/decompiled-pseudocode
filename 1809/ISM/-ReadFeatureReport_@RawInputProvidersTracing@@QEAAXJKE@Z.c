/*
 * XREFs of ?ReadFeatureReport_@RawInputProvidersTracing@@QEAAXJKE@Z @ 0x18006991C
 * Callers:
 *     ?ReadFeatureReport@SpatialRimDevice@SpatialInteractions@Internal@Windows@@UEAAJEPEAEK@Z @ 0x180069D00 (-ReadFeatureReport@SpatialRimDevice@SpatialInteractions@Internal@Windows@@UEAAJEPEAEK@Z.c)
 * Callees:
 *     _TlgWrite @ 0x180001144 (_TlgWrite.c)
 *     ?Instance@RawInputProvidersTracing@@KAPEAV1@XZ @ 0x18005F358 (-Instance@RawInputProvidersTracing@@KAPEAV1@XZ.c)
 *     __security_check_cookie @ 0x18012BF70 (__security_check_cookie.c)
 */

void __fastcall RawInputProvidersTracing::ReadFeatureReport_(RawInputProvidersTracing *this, int a2, int a3, char a4)
{
  __int64 v4; // rcx
  EVENT_DATA_DESCRIPTOR pData; // [rsp+38h] [rbp-9h] BYREF
  int *v6; // [rsp+58h] [rbp+17h]
  __int64 v7; // [rsp+60h] [rbp+1Fh]
  int *v8; // [rsp+68h] [rbp+27h]
  __int64 v9; // [rsp+70h] [rbp+2Fh]
  char *v10; // [rsp+78h] [rbp+37h]
  __int64 v11; // [rsp+80h] [rbp+3Fh]
  int v12; // [rsp+B0h] [rbp+6Fh] BYREF
  int v13; // [rsp+B8h] [rbp+77h] BYREF
  char v14; // [rsp+C0h] [rbp+7Fh] BYREF

  v14 = a4;
  v13 = a3;
  v12 = a2;
  v4 = *((_QWORD *)RawInputProvidersTracing::Instance() + 1);
  if ( *(_DWORD *)v4 > 4u && (*(_BYTE *)(v4 + 16) & 2) != 0 && (*(_QWORD *)(v4 + 24) & 2LL) == *(_QWORD *)(v4 + 24) )
  {
    v7 = 4LL;
    v6 = &v12;
    v8 = &v13;
    v10 = &v14;
    v9 = 4LL;
    v11 = 1LL;
    TlgWrite((TraceLoggingHProvider)v4, &unk_18016856D, 0LL, 0LL, 5u, &pData);
  }
}
