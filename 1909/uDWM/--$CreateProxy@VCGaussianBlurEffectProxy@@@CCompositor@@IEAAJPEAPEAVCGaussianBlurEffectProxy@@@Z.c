/*
 * XREFs of ??$CreateProxy@VCGaussianBlurEffectProxy@@@CCompositor@@IEAAJPEAPEAVCGaussianBlurEffectProxy@@@Z @ 0x1800B57B0
 * Callers:
 *     ?EnsureCVIResource@CAccentBlurBehind@@AEAAJPEBUtagRECT@@@Z @ 0x18008B4FC (-EnsureCVIResource@CAccentBlurBehind@@AEAAJPEBUtagRECT@@@Z.c)
 * Callees:
 *     ?Create@CResource@@SAJW4Enum@DwmResourceType@@PEAUIDwmChannel@@PEAPEAV1@@Z @ 0x180018054 (-Create@CResource@@SAJW4Enum@DwmResourceType@@PEAUIDwmChannel@@PEAPEAV1@@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180021F50 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18004F8B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004FB50 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CCompositor::CreateProxy<CGaussianBlurEffectProxy>(__int64 a1, __int64 *a2)
{
  __int64 v4; // rax
  __int64 v5; // rbx
  int v6; // eax
  int v7; // edi

  *a2 = 0LL;
  v4 = (*(__int64 (__fastcall **)(WPF::HeapBase *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 16LL))(
         WPF::g_pProcessHeap,
         24LL);
  v5 = v4;
  if ( v4 )
  {
    *(_DWORD *)(v4 + 12) = 0;
    *(_DWORD *)(v4 + 8) = 1;
    *(_QWORD *)(v4 + 16) = 0LL;
    *(_QWORD *)v4 = &CTransform3dGroupProxy::`vftable';
  }
  else
  {
    v5 = 0LL;
  }
  if ( v5 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v5 + 8));
    v6 = CResource::Create(0xCu, *(_QWORD *)(a1 + 16), (__int64 *)(v5 + 16));
    v7 = v6;
    if ( v6 >= 0 )
      v7 = 0;
    else
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v6, 0x15u);
    if ( v7 >= 0 )
    {
      *a2 = v5;
      v7 = 0;
    }
    else
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v7, 0x5Fu);
    }
    CBaseObject::Release((CBaseObject *)v5);
  }
  else
  {
    v7 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, -2147024882, 0x5Du);
  }
  return (unsigned int)v7;
}
