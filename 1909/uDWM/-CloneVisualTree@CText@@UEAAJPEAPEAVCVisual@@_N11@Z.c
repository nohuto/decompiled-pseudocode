/*
 * XREFs of ?CloneVisualTree@CText@@UEAAJPEAPEAVCVisual@@_N11@Z @ 0x180028F40
 * Callers:
 *     <none>
 * Callees:
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180021F50 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?CloneVisualTree@CRenderDataVisual@@UEAAJPEAPEAVCVisual@@_N11@Z @ 0x180023350 (-CloneVisualTree@CRenderDataVisual@@UEAAJPEAPEAVCVisual@@_N11@Z.c)
 *     ??0CText@@AEAA@XZ @ 0x180027698 (--0CText@@AEAA@XZ.c)
 *     ?SetReverseAlignment@CText@@QEAAX_N@Z @ 0x1800290B8 (-SetReverseAlignment@CText@@QEAAX_N@Z.c)
 *     ?SetRTLReading@CText@@QEAAX_N@Z @ 0x1800290D8 (-SetRTLReading@CText@@QEAAX_N@Z.c)
 *     ?SetBackgroundColor@CText@@QEAAXK@Z @ 0x1800290F8 (-SetBackgroundColor@CText@@QEAAXK@Z.c)
 *     ?SetColor@CText@@QEAAXK@Z @ 0x180029128 (-SetColor@CText@@QEAAXK@Z.c)
 *     ?SetFont@CText@@QEAAXAEBUtagLOGFONTW@@@Z @ 0x180029160 (-SetFont@CText@@QEAAXAEBUtagLOGFONTW@@@Z.c)
 *     ?SetText@CText@@QEAAJPEBG@Z @ 0x180029238 (-SetText@CText@@QEAAJPEBG@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18004F8B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     memset_0 @ 0x18004FB12 (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x18004FB50 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CText::CloneVisualTree(CText *this, struct CVisual **a2)
{
  CText *v4; // rax
  CText *v5; // rbx
  CText *v6; // rbx
  int v7; // eax
  unsigned int v8; // edi
  int v9; // eax
  int v10; // eax
  char v11; // al
  void *v13; // [rsp+28h] [rbp-20h]

  v4 = (CText *)(*(__int64 (__fastcall **)(WPF::HeapBase *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 16LL))(
                  WPF::g_pProcessHeap,
                  432LL);
  v5 = v4;
  if ( v4 )
  {
    memset_0(v4, 0, 0x1B0uLL);
    v6 = CText::CText(v5);
  }
  else
  {
    v6 = 0LL;
  }
  if ( v6 )
  {
    v7 = (*(__int64 (__fastcall **)(CText *))(*(_QWORD *)v6 + 8LL))(v6);
    v8 = v7;
    if ( v7 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v7, 0x202u, v13);
    }
    else
    {
      *a2 = v6;
      _InterlockedIncrement((volatile signed __int32 *)v6 + 2);
      v9 = CRenderDataVisual::CloneVisualTree(this, a2);
      v8 = v9;
      if ( v9 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v9, 0x20Au, v13);
      }
      else
      {
        v10 = CText::SetText(v6, *((const unsigned __int16 **)this + 36));
        v8 = v10;
        if ( v10 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v10, 0x20Cu, v13);
        }
        else
        {
          CText::SetFont(v6, (const struct tagLOGFONTW *)((char *)this + 296));
          CText::SetColor(v6, *((_DWORD *)this + 102));
          CText::SetBackgroundColor(v6, *((_DWORD *)this + 103));
          CText::SetRTLReading(v6, (*((_BYTE *)this + 280) & 2) != 0);
          CText::SetReverseAlignment(v6, (*((_BYTE *)this + 280) & 4) != 0);
          if ( (*((_DWORD *)this + 20) & 0x9000) == 0 )
          {
            v11 = *((_BYTE *)v6 + 280);
            *((_DWORD *)v6 + 20) &= 0xFFFF6FFF;
            *((_BYTE *)v6 + 280) ^= (*((_BYTE *)this + 280) ^ v11) & 1;
            *((_QWORD *)v6 + 50) = *((_QWORD *)this + 50);
          }
        }
      }
    }
    CBaseObject::Release(v6);
  }
  else
  {
    v8 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024882, 0x201u, v13);
  }
  return v8;
}
