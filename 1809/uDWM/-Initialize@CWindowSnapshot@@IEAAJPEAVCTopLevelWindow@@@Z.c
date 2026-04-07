/*
 * XREFs of ?Initialize@CWindowSnapshot@@IEAAJPEAVCTopLevelWindow@@@Z @ 0x180027198
 * Callers:
 *     ?Create@CWindowSnapshot@@SAJPEAVCTopLevelWindow@@PEAPEAV1@@Z @ 0x180027724 (-Create@CWindowSnapshot@@SAJPEAVCTopLevelWindow@@PEAPEAV1@@Z.c)
 * Callees:
 *     ??0CWindowData@@QEAA@XZ @ 0x180012688 (--0CWindowData@@QEAA@XZ.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x1800141AC (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?IsSimpleClientArea@CWindowData@@QEAA_NXZ @ 0x1800239E4 (-IsSimpleClientArea@CWindowData@@QEAA_NXZ.c)
 *     ?RenderRecursive@CVisual@@UEAAJXZ @ 0x180027500 (-RenderRecursive@CVisual@@UEAAJXZ.c)
 *     ?NotifyMouseLeave@CTopLevelWindow@@QEAAXXZ @ 0x1800275D4 (-NotifyMouseLeave@CTopLevelWindow@@QEAAXXZ.c)
 *     ?OnWindowStyleUpdated@CWindowData@@QEAAXXZ @ 0x180028320 (-OnWindowStyleUpdated@CWindowData@@QEAAXXZ.c)
 *     ?CloneVisualTree@CTopLevelWindow@@UEAAJPEAPEAVCVisual@@_N11@Z @ 0x18002A800 (-CloneVisualTree@CTopLevelWindow@@UEAAJPEAPEAVCVisual@@_N11@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18004E04C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004E2E0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CWindowSnapshot::Initialize(CWindowSnapshot *this, struct CTopLevelWindow *a2)
{
  __int64 v2; // rbx
  char v5; // bp
  int v6; // eax
  unsigned int v7; // edi
  CWindowData *v8; // rax
  CWindowData *v9; // rcx
  __int64 v10; // rax
  __int64 v11; // rax
  CBaseObject *v13; // rcx
  __int64 v14; // rax
  __int64 v15; // rcx
  unsigned int v16; // [rsp+20h] [rbp-28h]
  CBaseObject *v17; // [rsp+58h] [rbp+10h] BYREF

  v2 = *((_QWORD *)a2 + 90);
  v17 = 0LL;
  v5 = *(_BYTE *)(v2 + 596);
  if ( (v5 & 4) == 0 )
  {
    *(_BYTE *)(v2 + 596) = v5 & 0xFD;
    CWindowData::OnWindowStyleUpdated((CWindowData *)v2);
  }
  CTopLevelWindow::NotifyMouseLeave(*(CTopLevelWindow **)(v2 + 392));
  v6 = CVisual::RenderRecursive(a2);
  v7 = v6;
  if ( v6 < 0 )
  {
    v16 = 95;
    goto LABEL_24;
  }
  v8 = (CWindowData *)(*(__int64 (__fastcall **)(WPF::HeapBase *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 16LL))(
                        WPF::g_pProcessHeap,
                        744LL);
  if ( v8 )
    v9 = CWindowData::CWindowData(v8);
  else
    v9 = 0LL;
  *((_QWORD *)this + 4) = v9;
  if ( !v9 )
  {
    v7 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024882, 0x64u);
    goto LABEL_12;
  }
  *((_QWORD *)v9 + 5) = *(_QWORD *)(v2 + 40);
  *(_QWORD *)(*((_QWORD *)this + 4) + 32LL) = *(_QWORD *)(v2 + 32);
  *(_OWORD *)(*((_QWORD *)this + 4) + 48LL) = *(_OWORD *)(v2 + 48);
  *(_OWORD *)(*((_QWORD *)this + 4) + 64LL) = *(_OWORD *)(v2 + 64);
  *(_OWORD *)(*((_QWORD *)this + 4) + 80LL) = *(_OWORD *)(v2 + 80);
  *(_OWORD *)(*((_QWORD *)this + 4) + 180LL) = *(_OWORD *)(v2 + 180);
  *(_OWORD *)(*((_QWORD *)this + 4) + 244LL) = *(_OWORD *)(v2 + 244);
  *(_OWORD *)(*((_QWORD *)this + 4) + 260LL) = *(_OWORD *)(v2 + 260);
  *(_DWORD *)(*((_QWORD *)this + 4) + 368LL) = *(_DWORD *)(v2 + 368);
  *(_BYTE *)(*((_QWORD *)this + 4) + 599LL) ^= (*(_BYTE *)(*((_QWORD *)this + 4) + 599LL) ^ *(_BYTE *)(v2 + 599)) & 2;
  *(_QWORD *)(*((_QWORD *)this + 4) + 120LL) = *(_QWORD *)(v2 + 120);
  *(_DWORD *)(*((_QWORD *)this + 4) + 604LL) = *(_DWORD *)(v2 + 604);
  *(_BYTE *)(*((_QWORD *)this + 4) + 600LL) ^= (*(_BYTE *)(v2 + 600) ^ *(_BYTE *)(*((_QWORD *)this + 4) + 600LL)) & 4;
  *(_BYTE *)(*((_QWORD *)this + 4) + 344LL) = *(_BYTE *)(v2 + 344);
  *(_DWORD *)(*((_QWORD *)this + 4) + 112LL) = *(_DWORD *)(v2 + 112);
  *(_OWORD *)(*((_QWORD *)this + 4) + 608LL) = *(_OWORD *)(v2 + 608);
  *(_OWORD *)(*((_QWORD *)this + 4) + 624LL) = *(_OWORD *)(v2 + 624);
  *(_OWORD *)(*((_QWORD *)this + 4) + 640LL) = *(_OWORD *)(v2 + 640);
  *(_OWORD *)(*((_QWORD *)this + 4) + 656LL) = *(_OWORD *)(v2 + 656);
  *(_DWORD *)(*((_QWORD *)this + 4) + 100LL) = *(_DWORD *)(v2 + 100);
  *(_DWORD *)(*((_QWORD *)this + 4) + 104LL) = *(_DWORD *)(v2 + 104);
  *(_DWORD *)(*((_QWORD *)this + 4) + 96LL) = *(_DWORD *)(v2 + 96);
  *(_OWORD *)(*((_QWORD *)this + 4) + 280LL) = *(_OWORD *)(v2 + 280);
  *(_QWORD *)(*((_QWORD *)this + 4) + 296LL) = *(_QWORD *)(v2 + 296);
  *(_BYTE *)(*((_QWORD *)this + 4) + 600LL) = *(_BYTE *)(v2 + 600) ^ (*(_BYTE *)(*((_QWORD *)this + 4) + 600LL) ^ *(_BYTE *)(v2 + 600)) & 0x7F;
  *(_BYTE *)(*((_QWORD *)this + 4) + 597LL) = (CWindowData::IsSimpleClientArea((CWindowData *)v2) == 0 ? 0x10 : 0) | *(_BYTE *)(*((_QWORD *)this + 4) + 597LL) & 0xEF;
  *(_QWORD *)(*((_QWORD *)this + 4) + 360LL) = *(_QWORD *)(v2 + 360);
  v10 = *(_QWORD *)(v2 + 360);
  if ( v10 )
    _InterlockedIncrement((volatile signed __int32 *)(v10 + 8));
  *(_QWORD *)(*((_QWORD *)this + 4) + 376LL) = *(_QWORD *)(v2 + 376);
  v11 = *(_QWORD *)(v2 + 376);
  if ( v11 )
    _InterlockedIncrement((volatile signed __int32 *)(v11 + 8));
  if ( (*(_BYTE *)(v2 + 600) & 4) == 0 )
  {
    v6 = CTopLevelWindow::CloneVisualTree(a2, &v17, 0, 0, 1);
    v7 = v6;
    if ( v6 < 0 )
    {
      v16 = 137;
    }
    else
    {
      v13 = v17;
      v14 = *((_QWORD *)this + 4);
      v17 = 0LL;
      *((_QWORD *)this + 3) = v13;
      *(_QWORD *)(v14 + 392) = v13;
      v15 = *((_QWORD *)this + 3);
      if ( v15 )
      {
        _InterlockedIncrement((volatile signed __int32 *)(v15 + 8));
        v15 = *((_QWORD *)this + 3);
      }
      *(_QWORD *)(v15 + 720) = *((_QWORD *)this + 4);
      v6 = CVisual::RenderRecursive(*((CVisual **)this + 3));
      v7 = v6;
      if ( v6 >= 0 )
        goto LABEL_12;
      v16 = 146;
    }
LABEL_24:
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v6, v16);
  }
LABEL_12:
  *(_BYTE *)(v2 + 596) &= ~2u;
  *(_BYTE *)(v2 + 596) |= v5 & 2;
  if ( v17 )
    CBaseObject::Release(v17);
  return v7;
}
