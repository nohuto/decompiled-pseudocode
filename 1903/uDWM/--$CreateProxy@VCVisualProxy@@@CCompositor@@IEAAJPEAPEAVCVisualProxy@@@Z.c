/*
 * XREFs of ??$CreateProxy@VCVisualProxy@@@CCompositor@@IEAAJPEAPEAVCVisualProxy@@@Z @ 0x180018410
 * Callers:
 *     ?Initialize@CVisual@@MEAAJXZ @ 0x1800252E0 (-Initialize@CVisual@@MEAAJXZ.c)
 *     ?Initialize@CCanvasVisual@@MEAAJXZ @ 0x1800388E0 (-Initialize@CCanvasVisual@@MEAAJXZ.c)
 * Callees:
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x18002119C (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18004FBC4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004FE00 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CCompositor::CreateProxy<CVisualProxy>(__int64 a1, __int64 *a2)
{
  __int64 v4; // rax
  __int64 v5; // rdi
  __int64 v6; // rbx
  __int64 v7; // rax
  CBaseObject *v8; // rsi
  int v9; // eax
  int v10; // ebx
  void *v12; // [rsp+28h] [rbp-20h]

  *a2 = 0LL;
  v4 = (*(__int64 (__fastcall **)(WPF::HeapBase *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 16LL))(
         WPF::g_pProcessHeap,
         24LL);
  v5 = v4;
  if ( !v4 )
  {
    v10 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024882, 0x5Du, v12);
    return (unsigned int)v10;
  }
  *(_QWORD *)(v4 + 8) = 1LL;
  *(_QWORD *)(v4 + 16) = 0LL;
  *(_QWORD *)v4 = &CVisualProxy::`vftable';
  _InterlockedIncrement((volatile signed __int32 *)(v4 + 8));
  v6 = *(_QWORD *)(a1 + 16);
  *(_QWORD *)(v4 + 16) = 0LL;
  v7 = (*(__int64 (__fastcall **)(WPF::HeapBase *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 16LL))(
         WPF::g_pProcessHeap,
         32LL);
  v8 = (CBaseObject *)v7;
  if ( !v7 )
  {
    v10 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024882, 0x27u, v12);
    goto LABEL_7;
  }
  *(_DWORD *)(v7 + 8) = 1;
  *(_QWORD *)(v7 + 16) = v6;
  *(_QWORD *)v7 = &CResource::`vftable';
  v9 = (*(__int64 (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)v6 + 96LL))(v6, 39LL, v7 + 24);
  v10 = v9;
  if ( v9 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v9, 0x44u, v12);
  }
  else if ( !*((_DWORD *)v8 + 6) )
  {
    v10 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024882, 0x45u, v12);
    goto LABEL_16;
  }
  if ( v10 < 0 )
  {
LABEL_16:
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v10, 0x29u, v12);
    CBaseObject::Release(v8);
    goto LABEL_7;
  }
  *(_QWORD *)(v5 + 16) = v8;
LABEL_7:
  if ( v10 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v10, 0x15u, v12);
  else
    v10 = 0;
  if ( v10 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v10, 0x5Fu, v12);
  }
  else
  {
    *a2 = v5;
    v10 = 0;
  }
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v5 + 8), 0xFFFFFFFF) == 1 )
    (**(void (__fastcall ***)(__int64, __int64))v5)(v5, 1LL);
  return (unsigned int)v10;
}
