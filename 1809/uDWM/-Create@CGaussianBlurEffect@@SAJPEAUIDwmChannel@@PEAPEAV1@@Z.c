/*
 * XREFs of ?Create@CGaussianBlurEffect@@SAJPEAUIDwmChannel@@PEAPEAV1@@Z @ 0x18007ACF4
 * Callers:
 *     ?EnsureCVIResource@CAccentBlurBehind@@AEAAJPEBUtagRECT@@@Z @ 0x180084BD4 (-EnsureCVIResource@CAccentBlurBehind@@AEAAJPEBUtagRECT@@@Z.c)
 * Callees:
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x1800141AC (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?Initialize@CResource@@IEAAJW4Enum@DwmResourceType@@PEAUIDwmChannel@@@Z @ 0x1800339F0 (-Initialize@CResource@@IEAAJW4Enum@DwmResourceType@@PEAUIDwmChannel@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18004E04C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     memset_0 @ 0x18004E2A2 (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x18004E2E0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CGaussianBlurEffect::Create(struct IDwmChannel *a1, struct CGaussianBlurEffect **a2)
{
  unsigned int v4; // edi
  void *v5; // rax
  __int64 v6; // rbx
  int v7; // eax

  if ( a2 )
  {
    v5 = (void *)(*(__int64 (__fastcall **)(WPF::HeapBase *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 16LL))(
                   WPF::g_pProcessHeap,
                   32LL);
    v6 = (__int64)v5;
    if ( v5 )
    {
      memset_0(v5, 0, 0x20uLL);
      *(_QWORD *)(v6 + 16) = 0LL;
      *(_QWORD *)v6 = &CGaussianBlurEffect::`vftable';
      *(_DWORD *)(v6 + 8) = 1;
    }
    else
    {
      v6 = 0LL;
    }
    if ( v6 )
    {
      v7 = CResource::Initialize(v6, 12LL, (__int64)a1);
      v4 = v7;
      if ( v7 >= 0 )
      {
        *a2 = (struct CGaussianBlurEffect *)v6;
        v6 = 0LL;
      }
      else
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v7, 0x23u);
      }
      if ( v6 )
        CBaseObject::Release((CBaseObject *)v6);
    }
    else
    {
      v4 = -2147024882;
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, -2147024882, 0x21u);
    }
  }
  else
  {
    v4 = -2147024809;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, -2147024809, 0x1Eu);
  }
  return v4;
}
