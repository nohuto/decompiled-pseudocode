/*
 * XREFs of _lambda_6259f25ffd63f30b19db4bdb19c78366_::operator() @ 0x18012988C
 * Callers:
 *     Windows::Internal::Holographic::HolographicDeviceSnapshot::Write_Windows::Internal::Holographic::SpatialInteractionSnapshot__lambda_b4e0cd5f6af37fda6baddea144408786___ @ 0x18012931C (Windows--Internal--Holographic--HolographicDeviceSnapshot--Write_Windows--Internal-_ea_18012931C.c)
 * Callees:
 *     ??A?$map@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@USpatialInteractionSnapshot@Holographic@Internal@Windows@@UCaseInsensitiveStringLess@456@V?$allocator@U?$pair@$$CBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@USpatialInteractionSnapshot@Holographic@Internal@Windows@@@std@@@2@@std@@QEAAAEAUSpatialInteractionSnapshot@Holographic@Internal@Windows@@AEBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@1@@Z @ 0x1800A3E74 (--A-$map@V-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@USpatialInteractionSna.c)
 */

int __fastcall lambda_6259f25ffd63f30b19db4bdb19c78366_::operator()(__int64 **a1, _QWORD *a2)
{
  __int64 v3; // rax
  __int64 *v4; // rcx
  __int64 v5; // rdi
  __int64 v6; // rbx
  LARGE_INTEGER PerformanceCount; // [rsp+30h] [rbp+10h] BYREF

  v3 = std::map<std::wstring,Windows::Internal::Holographic::SpatialInteractionSnapshot,Windows::Internal::Holographic::CaseInsensitiveStringLess,std::allocator<std::pair<std::wstring const,Windows::Internal::Holographic::SpatialInteractionSnapshot>>>::operator[](
         a1[1] + 3,
         a2);
  v4 = *a1;
  v5 = v3;
  v6 = **a1;
  if ( *(_DWORD *)v4[1] )
  {
    *(_DWORD *)(v3 + 144) = *(_DWORD *)(v6 + 968);
    LODWORD(v3) = QueryPerformanceCounter(&PerformanceCount);
    *(LARGE_INTEGER *)(v5 + 152) = PerformanceCount;
  }
  if ( !*(_QWORD *)(v5 + 136) )
  {
    *(_DWORD *)(v5 + 128) = *(_DWORD *)(v6 + 964);
    QueryPerformanceCounter(&PerformanceCount);
    LODWORD(v3) = PerformanceCount.LowPart;
    *(LARGE_INTEGER *)(v5 + 136) = PerformanceCount;
  }
  if ( *(_BYTE *)(v6 + 1144) )
  {
    *(_OWORD *)(v5 + 40) = *(_OWORD *)(v6 + 1128);
    QueryPerformanceCounter(&PerformanceCount);
    LODWORD(v3) = PerformanceCount.LowPart;
    *(LARGE_INTEGER *)(v5 + 56) = PerformanceCount;
  }
  if ( *(_BYTE *)(v6 + 1010) )
  {
    *(_QWORD *)(v5 + 64) = *(_QWORD *)(v6 + 984);
    QueryPerformanceCounter(&PerformanceCount);
    LODWORD(v3) = PerformanceCount.LowPart;
    *(LARGE_INTEGER *)(v5 + 72) = PerformanceCount;
  }
  if ( *(_BYTE *)(v6 + 1012) )
  {
    *(_QWORD *)(v5 + 80) = *(_QWORD *)(v6 + 992);
    QueryPerformanceCounter(&PerformanceCount);
    LODWORD(v3) = PerformanceCount.LowPart;
    *(LARGE_INTEGER *)(v5 + 88) = PerformanceCount;
  }
  if ( *(_BYTE *)(v6 + 1011) )
  {
    *(_DWORD *)(v5 + 96) = *(_DWORD *)(v6 + 1000);
    QueryPerformanceCounter(&PerformanceCount);
    LODWORD(v3) = PerformanceCount.LowPart;
    *(LARGE_INTEGER *)(v5 + 104) = PerformanceCount;
  }
  if ( *(_BYTE *)(v6 + 1020) )
  {
    *(_DWORD *)(v5 + 112) = *(_DWORD *)(v6 + 1016);
    QueryPerformanceCounter(&PerformanceCount);
    LODWORD(v3) = PerformanceCount.LowPart;
    *(LARGE_INTEGER *)(v5 + 120) = PerformanceCount;
  }
  return v3;
}
