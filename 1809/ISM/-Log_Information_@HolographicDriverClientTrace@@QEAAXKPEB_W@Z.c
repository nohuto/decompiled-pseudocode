/*
 * XREFs of ?Log_Information_@HolographicDriverClientTrace@@QEAAXKPEB_W@Z @ 0x18010A044
 * Callers:
 *     ?DeviceHandleCallback@HolographicDriverHandleWrapper@Holographic@Internal@Windows@@AEAAXW4_CM_NOTIFY_ACTION@@@Z @ 0x180110208 (-DeviceHandleCallback@HolographicDriverHandleWrapper@Holographic@Internal@Windows@@AEAAXW4_CM_NO.c)
 *     ?PropertyUpdatedListenerThreadProcV2Static@SpatialGraphDriverClient@Holographic@Internal@Windows@@CAKPEAX@Z @ 0x180111DA0 (-PropertyUpdatedListenerThreadProcV2Static@SpatialGraphDriverClient@Holographic@Internal@Windows.c)
 * Callees:
 *     _TlgWrite @ 0x180001144 (_TlgWrite.c)
 *     ?Instance@HolographicDriverClientTrace@@KAPEAV1@XZ @ 0x180109F10 (-Instance@HolographicDriverClientTrace@@KAPEAV1@XZ.c)
 *     __security_check_cookie @ 0x18012BF70 (__security_check_cookie.c)
 */

void __fastcall HolographicDriverClientTrace::Log_Information_(
        HolographicDriverClientTrace *this,
        int a2,
        const wchar_t *a3)
{
  __int64 v4; // rcx
  __int64 v5; // rax
  EVENT_DATA_DESCRIPTOR pData; // [rsp+30h] [rbp-58h] BYREF
  int *v7; // [rsp+50h] [rbp-38h]
  __int64 v8; // [rsp+58h] [rbp-30h]
  const wchar_t *v9; // [rsp+60h] [rbp-28h]
  int v10; // [rsp+68h] [rbp-20h]
  int v11; // [rsp+6Ch] [rbp-1Ch]
  int v12; // [rsp+98h] [rbp+10h] BYREF

  v12 = a2;
  v4 = *((_QWORD *)HolographicDriverClientTrace::Instance() + 1);
  if ( *(_DWORD *)v4 > 4u && (*(_BYTE *)(v4 + 16) & 2) != 0 && (*(_QWORD *)(v4 + 24) & 2LL) == *(_QWORD *)(v4 + 24) )
  {
    v8 = 4LL;
    v7 = &v12;
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
    TlgWrite((TraceLoggingHProvider)v4, &unk_18016D9B6, 0LL, 0LL, 4u, &pData);
  }
}
