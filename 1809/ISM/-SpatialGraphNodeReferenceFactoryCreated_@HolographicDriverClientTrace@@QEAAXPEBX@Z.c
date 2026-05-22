/*
 * XREFs of ?SpatialGraphNodeReferenceFactoryCreated_@HolographicDriverClientTrace@@QEAAXPEBX@Z @ 0x18010BCB8
 * Callers:
 *     ??$MakeAndInitialize@V?$Singleton@VSpatialGraphNodeReferenceFactory@Holographic@Internal@Windows@@V1234@@WRL@Microsoft@@UIInspectable@@$$V@Details@WRL@Microsoft@@YAJV?$ComPtrRef@V?$ComPtr@UIInspectable@@@WRL@Microsoft@@@012@@Z @ 0x18011D718 (--$MakeAndInitialize@V-$Singleton@VSpatialGraphNodeReferenceFactory@Holographic@Internal@Windows.c)
 * Callees:
 *     _TlgWrite @ 0x180001144 (_TlgWrite.c)
 *     ?Instance@HolographicDriverClientTrace@@KAPEAV1@XZ @ 0x180109F10 (-Instance@HolographicDriverClientTrace@@KAPEAV1@XZ.c)
 *     __security_check_cookie @ 0x18012BF70 (__security_check_cookie.c)
 */

void __fastcall HolographicDriverClientTrace::SpatialGraphNodeReferenceFactoryCreated_(
        HolographicDriverClientTrace *this,
        const void *a2)
{
  __int64 v2; // rcx
  EVENT_DATA_DESCRIPTOR pData; // [rsp+30h] [rbp-48h] BYREF
  const void **v4; // [rsp+50h] [rbp-28h]
  int v5; // [rsp+58h] [rbp-20h]
  int v6; // [rsp+5Ch] [rbp-1Ch]
  const void *v7; // [rsp+88h] [rbp+10h] BYREF

  v7 = a2;
  v2 = *((_QWORD *)HolographicDriverClientTrace::Instance() + 1);
  if ( *(_DWORD *)v2 > 4u && (*(_BYTE *)(v2 + 16) & 2) != 0 && (*(_QWORD *)(v2 + 24) & 2LL) == *(_QWORD *)(v2 + 24) )
  {
    v6 = 0;
    v4 = &v7;
    v5 = 8;
    TlgWrite((TraceLoggingHProvider)v2, &unk_18016D1BB, 0LL, 0LL, 3u, &pData);
  }
}
