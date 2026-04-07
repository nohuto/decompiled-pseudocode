/*
 * XREFs of ?Create@CBitmapSource@@SAJPEAUHICON__@@PEAUIDwmChannel@@PEAPEAV1@@Z @ 0x18000D00C
 * Callers:
 *     ?UpdateIcon@CTopLevelWindow@@AEAAJXZ @ 0x180013D64 (-UpdateIcon@CTopLevelWindow@@AEAAJXZ.c)
 *     ?LoadCentralImage@CWindowIconic@@AEAAJXZ @ 0x18008DF2C (-LoadCentralImage@CWindowIconic@@AEAAJXZ.c)
 * Callees:
 *     ?Update@CBitmapSource@@AEAAJPEAUHICON__@@@Z @ 0x18000D1D0 (-Update@CBitmapSource@@AEAAJPEAUHICON__@@@Z.c)
 *     ?Initialize@CBitmapSource@@AEAAJPEAUIDwmChannel@@@Z @ 0x18000ED18 (-Initialize@CBitmapSource@@AEAAJPEAUIDwmChannel@@@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x1800141AC (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18004E04C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004E2E0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CBitmapSource::Create(HICON a1, struct IDwmChannel *a2, struct CBitmapSource **a3)
{
  __int64 v6; // rax
  CBitmapSource *v7; // rbx
  int v8; // eax
  unsigned int v9; // edi
  int v10; // eax

  v6 = (*(__int64 (__fastcall **)(WPF::HeapBase *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 16LL))(
         WPF::g_pProcessHeap,
         104LL);
  v7 = (CBitmapSource *)v6;
  if ( v6 )
  {
    *(_QWORD *)(v6 + 16) = 0LL;
    *(_QWORD *)(v6 + 96) = 0LL;
    *(_DWORD *)(v6 + 8) = 1;
    *(_QWORD *)v6 = &CBitmapSource::`vftable';
    *(_DWORD *)(v6 + 80) = 0x80000000;
    *(_DWORD *)(v6 + 88) = 0x80000000;
    *(_DWORD *)(v6 + 84) = 0x80000000;
    *(_DWORD *)(v6 + 92) = 0x80000000;
  }
  else
  {
    v7 = 0LL;
  }
  if ( v7 )
  {
    v8 = CBitmapSource::Initialize(v7, a2);
    v9 = v8;
    if ( v8 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v8, 0x74u);
    }
    else
    {
      v10 = CBitmapSource::Update(v7, a1);
      v9 = v10;
      if ( v10 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v10, 0x76u);
      }
      else
      {
        *a3 = v7;
        v7 = 0LL;
      }
    }
    if ( v7 )
      CBaseObject::Release(v7);
  }
  else
  {
    v9 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024882, 0x72u);
  }
  return v9;
}
