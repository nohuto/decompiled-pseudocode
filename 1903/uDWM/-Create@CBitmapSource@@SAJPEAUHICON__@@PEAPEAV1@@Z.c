/*
 * XREFs of ?Create@CBitmapSource@@SAJPEAUHICON__@@PEAPEAV1@@Z @ 0x18000CCD0
 * Callers:
 *     ?UpdateIcon@CTopLevelWindow@@AEAAJXZ @ 0x18000C918 (-UpdateIcon@CTopLevelWindow@@AEAAJXZ.c)
 *     ?LoadCentralImage@CWindowIconic@@AEAAJXZ @ 0x18003FA74 (-LoadCentralImage@CWindowIconic@@AEAAJXZ.c)
 * Callees:
 *     ?Update@CBitmapSource@@AEAAJPEAUHICON__@@@Z @ 0x18000CE90 (-Update@CBitmapSource@@AEAAJPEAUHICON__@@@Z.c)
 *     ?Initialize@CBitmapSource@@AEAAJXZ @ 0x18000FE2C (-Initialize@CBitmapSource@@AEAAJXZ.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x18002119C (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18004FBC4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004FE00 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CBitmapSource::Create(HICON a1, struct CBitmapSource **a2)
{
  __int64 v4; // rax
  CBitmapSource *v5; // rbx
  int v6; // eax
  unsigned int v7; // edi
  int v8; // eax
  void *v10; // [rsp+28h] [rbp-10h]

  v4 = (*(__int64 (__fastcall **)(WPF::HeapBase *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 16LL))(
         WPF::g_pProcessHeap,
         104LL);
  v5 = (CBitmapSource *)v4;
  if ( v4 )
  {
    *(_DWORD *)(v4 + 8) = 1;
    *(_QWORD *)v4 = &CBitmapSource::`vftable';
    *(_QWORD *)(v4 + 16) = 0LL;
    *(_QWORD *)(v4 + 96) = 0LL;
    *(_DWORD *)(v4 + 80) = 0x80000000;
    *(_DWORD *)(v4 + 88) = 0x80000000;
    *(_DWORD *)(v4 + 84) = 0x80000000;
    *(_DWORD *)(v4 + 92) = 0x80000000;
  }
  else
  {
    v5 = 0LL;
  }
  if ( v5 )
  {
    v6 = CBitmapSource::Initialize(v5);
    v7 = v6;
    if ( v6 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v6, 0x6Fu, v10);
    }
    else
    {
      v8 = CBitmapSource::Update(v5, a1);
      v7 = v8;
      if ( v8 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v8, 0x71u, v10);
      }
      else
      {
        *a2 = v5;
        v5 = 0LL;
      }
    }
    if ( v5 )
      CBaseObject::Release(v5);
  }
  else
  {
    v7 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024882, 0x6Du, v10);
  }
  return v7;
}
