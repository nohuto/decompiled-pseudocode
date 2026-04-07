/*
 * XREFs of ??$CreateProxyFromHandle@VCGdiSpriteBitmapProxy@@@CCompositor@@IEAAJIPEAPEAVCGdiSpriteBitmapProxy@@@Z @ 0x1800168D0
 * Callers:
 *     ?ClipChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x180012070 (-ClipChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 *     ?GDISurfaceChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x180018E90 (-GDISurfaceChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 * Callees:
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180021F50 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18004F8B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004FB50 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CCompositor::CreateProxyFromHandle<CGdiSpriteBitmapProxy>(__int64 a1, unsigned int a2, __int64 *a3)
{
  __int64 v6; // rax
  __int64 v7; // rdi
  __int64 v8; // rbx
  __int64 v9; // rax
  CBaseObject *v10; // rsi
  int v11; // eax
  int v12; // ebx
  void *v14; // [rsp+28h] [rbp-20h]

  *a3 = 0LL;
  v6 = (*(__int64 (__fastcall **)(WPF::HeapBase *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 16LL))(
         WPF::g_pProcessHeap,
         24LL);
  v7 = v6;
  if ( v6 )
  {
    *(_QWORD *)(v6 + 8) = 1LL;
    *(_QWORD *)(v6 + 16) = 0LL;
    *(_QWORD *)v6 = &CVisualProxy::`vftable';
    _InterlockedIncrement((volatile signed __int32 *)(v6 + 8));
    v8 = *(_QWORD *)(a1 + 16);
    v9 = (*(__int64 (__fastcall **)(WPF::HeapBase *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 16LL))(
           WPF::g_pProcessHeap,
           32LL);
    v10 = (CBaseObject *)v9;
    if ( v9 )
    {
      *(_DWORD *)(v9 + 8) = 1;
      *(_QWORD *)(v9 + 16) = v8;
      *(_QWORD *)v9 = &CResource::`vftable';
      *(_DWORD *)(v9 + 24) = a2;
      v11 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v8 + 88LL))(v8, a2);
      v12 = v11;
      if ( v11 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v11, 0x60u, v14);
      else
        v12 = 0;
      if ( v12 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v12, 0x81u, v14);
        CBaseObject::Release(v10);
      }
      else
      {
        *(_QWORD *)(v7 + 16) = v10;
      }
    }
    else
    {
      v12 = -2147024882;
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024882, 0x7Fu, v14);
    }
    if ( v12 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v12, 0x22u, v14);
    else
      v12 = 0;
    if ( v12 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v12, 0x75u, v14);
    }
    else
    {
      *a3 = v7;
      v12 = 0;
    }
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v7 + 8), 0xFFFFFFFF) == 1 )
      (**(void (__fastcall ***)(__int64, __int64))v7)(v7, 1LL);
  }
  else
  {
    v12 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024882, 0x73u, v14);
  }
  return (unsigned int)v12;
}
