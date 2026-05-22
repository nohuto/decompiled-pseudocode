/*
 * XREFs of ?HeadEventHandlerEnabled_@RawInputProvidersTracing@@QEAAXJ@Z @ 0x1800600F8
 * Callers:
 *     ?AcquireInterestInHeadEvent@SpatialRimDeviceCollection@@UEAAJXZ @ 0x180061720 (-AcquireInterestInHeadEvent@SpatialRimDeviceCollection@@UEAAJXZ.c)
 * Callees:
 *     _TlgWrite @ 0x180001144 (_TlgWrite.c)
 *     ?Instance@RawInputProvidersTracing@@KAPEAV1@XZ @ 0x18005F358 (-Instance@RawInputProvidersTracing@@KAPEAV1@XZ.c)
 *     __security_check_cookie @ 0x18012BF70 (__security_check_cookie.c)
 */

void __fastcall RawInputProvidersTracing::HeadEventHandlerEnabled_(RawInputProvidersTracing *this, int a2)
{
  __int64 v2; // rcx
  EVENT_DATA_DESCRIPTOR pData; // [rsp+30h] [rbp-48h] BYREF
  int *v4; // [rsp+50h] [rbp-28h]
  int v5; // [rsp+58h] [rbp-20h]
  int v6; // [rsp+5Ch] [rbp-1Ch]
  int v7; // [rsp+88h] [rbp+10h] BYREF

  v7 = a2;
  v2 = *((_QWORD *)RawInputProvidersTracing::Instance() + 1);
  if ( *(_DWORD *)v2 > 4u && (*(_BYTE *)(v2 + 16) & 2) != 0 && (*(_QWORD *)(v2 + 24) & 2LL) == *(_QWORD *)(v2 + 24) )
  {
    v6 = 0;
    v4 = &v7;
    v5 = 4;
    TlgWrite((TraceLoggingHProvider)v2, &unk_180168097, 0LL, 0LL, 3u, &pData);
  }
}
