/*
 * XREFs of ?Initialize@CCanvasVisual@@MEAAJPEAUIDwmChannel@@@Z @ 0x18001B580
 * Callers:
 *     ?Create@CCanvasVisual@@SAJPEAUIDwmChannel@@PEAPEAV1@@Z @ 0x18001B660 (-Create@CCanvasVisual@@SAJPEAUIDwmChannel@@PEAPEAV1@@Z.c)
 * Callees:
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x1800141AC (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18004E04C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004E2E0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CCanvasVisual::Initialize(CCanvasVisual *this, struct IDwmChannel *a2)
{
  __int64 v4; // rax
  __int64 v5; // rdi
  int v6; // eax
  int v7; // ebx

  *((_QWORD *)this + 2) = 0LL;
  v4 = (*(__int64 (__fastcall **)(WPF::HeapBase *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 16LL))(
         WPF::g_pProcessHeap,
         32LL);
  v5 = v4;
  if ( v4 )
  {
    *(_QWORD *)(v4 + 16) = 0LL;
    *(_DWORD *)(v4 + 8) = 1;
    *(_QWORD *)v4 = &CResource::`vftable';
  }
  else
  {
    v5 = 0LL;
  }
  if ( !v5 )
  {
    v7 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024882, 0x27u);
LABEL_14:
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v7, 0x4Cu);
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v7, 0x27u);
    return (unsigned int)v7;
  }
  *(_QWORD *)(v5 + 16) = a2;
  v6 = (*(__int64 (__fastcall **)(struct IDwmChannel *, __int64, __int64))(*(_QWORD *)a2 + 96LL))(a2, 38LL, v5 + 24);
  v7 = v6;
  if ( v6 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v6, 0x44u);
  }
  else if ( !*(_DWORD *)(v5 + 24) )
  {
    v7 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024882, 0x45u);
    goto LABEL_17;
  }
  if ( v7 >= 0 )
  {
    *((_QWORD *)this + 2) = v5;
    v5 = 0LL;
    goto LABEL_8;
  }
LABEL_17:
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v7, 0x29u);
LABEL_8:
  if ( v5 )
    CBaseObject::Release((CBaseObject *)v5);
  if ( v7 < 0 )
    goto LABEL_14;
  return (unsigned int)v7;
}
