/*
 * XREFs of ?InputReportIgnored_@RawInputProvidersContinuousTracing@@QEAAXKPEBG@Z @ 0x180060AA0
 * Callers:
 *     ?SendInputReport@SpatialRimDeviceCollection@@UEAAJW4MPCAugmentedInputGestureType@@KK_NAEBUSpatialControllerPoseMsg@Internal@Spatial@Input@UI@Windows@@AEBUSpatialControllerStateMsg@45678@@Z @ 0x180062B90 (-SendInputReport@SpatialRimDeviceCollection@@UEAAJW4MPCAugmentedInputGestureType@@KK_NAEBUSpatia.c)
 * Callees:
 *     _TlgWrite @ 0x180001144 (_TlgWrite.c)
 *     ?Instance@RawInputProvidersContinuousTracing@@KAPEAV1@XZ @ 0x1800605FC (-Instance@RawInputProvidersContinuousTracing@@KAPEAV1@XZ.c)
 *     __security_check_cookie @ 0x18012BF70 (__security_check_cookie.c)
 */

void __fastcall RawInputProvidersContinuousTracing::InputReportIgnored_(
        RawInputProvidersContinuousTracing *this,
        int a2,
        const unsigned __int16 *a3)
{
  __int64 v4; // rcx
  __int64 v5; // rax
  EVENT_DATA_DESCRIPTOR pData; // [rsp+30h] [rbp-58h] BYREF
  int *v7; // [rsp+50h] [rbp-38h]
  __int64 v8; // [rsp+58h] [rbp-30h]
  const unsigned __int16 *v9; // [rsp+60h] [rbp-28h]
  int v10; // [rsp+68h] [rbp-20h]
  int v11; // [rsp+6Ch] [rbp-1Ch]
  int v12; // [rsp+98h] [rbp+10h] BYREF

  v12 = a2;
  v4 = *((_QWORD *)RawInputProvidersContinuousTracing::Instance() + 1);
  if ( *(_DWORD *)v4 > 5u && (*(_BYTE *)(v4 + 16) & 2) != 0 && (*(_QWORD *)(v4 + 24) & 2LL) == *(_QWORD *)(v4 + 24) )
  {
    v7 = &v12;
    v8 = 4LL;
    LODWORD(v5) = 0;
    if ( a3 )
    {
      v5 = -1LL;
      do
        ++v5;
      while ( a3[v5] );
    }
    v11 = 0;
    if ( !a3 )
      a3 = &sourceString;
    v9 = a3;
    v10 = 2 * v5 + 2;
    TlgWrite((TraceLoggingHProvider)v4, &unk_180167DEC, 0LL, 0LL, 4u, &pData);
  }
}
