/*
 * XREFs of ?Initialize@CWindowSnapshot@@IEAAJPEAVCTopLevelWindow@@@Z @ 0x180026F2C
 * Callers:
 *     ?Create@CWindowSnapshot@@SAJPEAVCTopLevelWindow@@PEAPEAV1@@Z @ 0x180027364 (-Create@CWindowSnapshot@@SAJPEAVCTopLevelWindow@@PEAPEAV1@@Z.c)
 * Callees:
 *     ?IsSimpleClientArea@CWindowData@@QEAA_NXZ @ 0x180013464 (-IsSimpleClientArea@CWindowData@@QEAA_NXZ.c)
 *     ??0CWindowData@@QEAA@XZ @ 0x1800136DC (--0CWindowData@@QEAA@XZ.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180021F50 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?CloneVisualTree@CTopLevelWindow@@UEAAJPEAPEAVCVisual@@_N11@Z @ 0x180024100 (-CloneVisualTree@CTopLevelWindow@@UEAAJPEAPEAVCVisual@@_N11@Z.c)
 *     ?NotifyMouseLeave@CTopLevelWindow@@QEAAXXZ @ 0x180025CA4 (-NotifyMouseLeave@CTopLevelWindow@@QEAAXXZ.c)
 *     ?RenderRecursive@CVisual@@UEAAJXZ @ 0x180027290 (-RenderRecursive@CVisual@@UEAAJXZ.c)
 *     ?OnWindowStyleUpdated@CWindowData@@QEAAXXZ @ 0x180027850 (-OnWindowStyleUpdated@CWindowData@@QEAAXXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18004F8B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004FB50 (_guard_dispatch_icall_nop.c)
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
  CBaseObject *v12; // rcx
  __int64 v13; // rax
  __int64 v14; // rcx
  unsigned int v16; // [rsp+20h] [rbp-28h]
  void *v17; // [rsp+28h] [rbp-20h]
  CBaseObject *v18; // [rsp+58h] [rbp+10h] BYREF

  v2 = *((_QWORD *)a2 + 90);
  v18 = 0LL;
  v5 = *(_BYTE *)(v2 + 604);
  if ( (v5 & 4) == 0 )
  {
    *(_BYTE *)(v2 + 604) = v5 & 0xFD;
    CWindowData::OnWindowStyleUpdated((CWindowData *)v2);
  }
  CTopLevelWindow::NotifyMouseLeave(*(CTopLevelWindow **)(v2 + 400));
  v6 = CVisual::RenderRecursive(a2);
  v7 = v6;
  if ( v6 < 0 )
  {
    v16 = 95;
    goto LABEL_24;
  }
  v8 = (CWindowData *)(*(__int64 (__fastcall **)(WPF::HeapBase *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 16LL))(
                        WPF::g_pProcessHeap,
                        752LL);
  if ( v8 )
    v9 = CWindowData::CWindowData(v8);
  else
    v9 = 0LL;
  *((_QWORD *)this + 4) = v9;
  if ( !v9 )
  {
    v7 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024882, 0x64u, v17);
    goto LABEL_16;
  }
  *((_QWORD *)v9 + 5) = *(_QWORD *)(v2 + 40);
  *(_QWORD *)(*((_QWORD *)this + 4) + 32LL) = *(_QWORD *)(v2 + 32);
  *(_OWORD *)(*((_QWORD *)this + 4) + 48LL) = *(_OWORD *)(v2 + 48);
  *(_OWORD *)(*((_QWORD *)this + 4) + 64LL) = *(_OWORD *)(v2 + 64);
  *(_OWORD *)(*((_QWORD *)this + 4) + 80LL) = *(_OWORD *)(v2 + 80);
  *(_OWORD *)(*((_QWORD *)this + 4) + 180LL) = *(_OWORD *)(v2 + 180);
  *(_OWORD *)(*((_QWORD *)this + 4) + 244LL) = *(_OWORD *)(v2 + 244);
  *(_OWORD *)(*((_QWORD *)this + 4) + 260LL) = *(_OWORD *)(v2 + 260);
  *(_DWORD *)(*((_QWORD *)this + 4) + 376LL) = *(_DWORD *)(v2 + 376);
  *(_BYTE *)(*((_QWORD *)this + 4) + 607LL) ^= (*(_BYTE *)(*((_QWORD *)this + 4) + 607LL) ^ *(_BYTE *)(v2 + 607)) & 2;
  *(_QWORD *)(*((_QWORD *)this + 4) + 120LL) = *(_QWORD *)(v2 + 120);
  *(_DWORD *)(*((_QWORD *)this + 4) + 612LL) = *(_DWORD *)(v2 + 612);
  *(_BYTE *)(*((_QWORD *)this + 4) + 608LL) ^= (*(_BYTE *)(v2 + 608) ^ *(_BYTE *)(*((_QWORD *)this + 4) + 608LL)) & 4;
  *(_BYTE *)(*((_QWORD *)this + 4) + 352LL) = *(_BYTE *)(v2 + 352);
  *(_DWORD *)(*((_QWORD *)this + 4) + 112LL) = *(_DWORD *)(v2 + 112);
  *(_OWORD *)(*((_QWORD *)this + 4) + 616LL) = *(_OWORD *)(v2 + 616);
  *(_OWORD *)(*((_QWORD *)this + 4) + 632LL) = *(_OWORD *)(v2 + 632);
  *(_OWORD *)(*((_QWORD *)this + 4) + 648LL) = *(_OWORD *)(v2 + 648);
  *(_OWORD *)(*((_QWORD *)this + 4) + 664LL) = *(_OWORD *)(v2 + 664);
  *(_DWORD *)(*((_QWORD *)this + 4) + 100LL) = *(_DWORD *)(v2 + 100);
  *(_DWORD *)(*((_QWORD *)this + 4) + 104LL) = *(_DWORD *)(v2 + 104);
  *(_DWORD *)(*((_QWORD *)this + 4) + 96LL) = *(_DWORD *)(v2 + 96);
  *(_OWORD *)(*((_QWORD *)this + 4) + 280LL) = *(_OWORD *)(v2 + 280);
  *(_QWORD *)(*((_QWORD *)this + 4) + 296LL) = *(_QWORD *)(v2 + 296);
  *(_BYTE *)(*((_QWORD *)this + 4) + 608LL) = *(_BYTE *)(v2 + 608) ^ (*(_BYTE *)(*((_QWORD *)this + 4) + 608LL) ^ *(_BYTE *)(v2 + 608)) & 0x7F;
  *(_BYTE *)(*((_QWORD *)this + 4) + 605LL) = (CWindowData::IsSimpleClientArea((CWindowData *)v2) == 0 ? 0x10 : 0) | *(_BYTE *)(*((_QWORD *)this + 4) + 605LL) & 0xEF;
  *(_QWORD *)(*((_QWORD *)this + 4) + 368LL) = *(_QWORD *)(v2 + 368);
  v10 = *(_QWORD *)(v2 + 368);
  if ( v10 )
    _InterlockedIncrement((volatile signed __int32 *)(v10 + 8));
  *(_QWORD *)(*((_QWORD *)this + 4) + 384LL) = *(_QWORD *)(v2 + 384);
  v11 = *(_QWORD *)(v2 + 384);
  if ( v11 )
    _InterlockedIncrement((volatile signed __int32 *)(v11 + 8));
  if ( (*(_BYTE *)(v2 + 608) & 4) == 0 )
  {
    v6 = CTopLevelWindow::CloneVisualTree(a2, &v18, 0);
    v7 = v6;
    if ( v6 < 0 )
    {
      v16 = 137;
    }
    else
    {
      v12 = v18;
      v13 = *((_QWORD *)this + 4);
      v18 = 0LL;
      *((_QWORD *)this + 3) = v12;
      *(_QWORD *)(v13 + 400) = v12;
      v14 = *((_QWORD *)this + 3);
      if ( v14 )
      {
        _InterlockedIncrement((volatile signed __int32 *)(v14 + 8));
        v14 = *((_QWORD *)this + 3);
      }
      *(_QWORD *)(v14 + 720) = *((_QWORD *)this + 4);
      v6 = CVisual::RenderRecursive(*((CVisual **)this + 3));
      v7 = v6;
      if ( v6 >= 0 )
        goto LABEL_16;
      v16 = 146;
    }
LABEL_24:
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v6, v16, v17);
  }
LABEL_16:
  *(_BYTE *)(v2 + 604) &= ~2u;
  *(_BYTE *)(v2 + 604) |= v5 & 2;
  if ( v18 )
    CBaseObject::Release(v18);
  return v7;
}
