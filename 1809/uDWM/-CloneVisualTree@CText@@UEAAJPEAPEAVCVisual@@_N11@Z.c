/*
 * XREFs of ?CloneVisualTree@CText@@UEAAJPEAPEAVCVisual@@_N11@Z @ 0x180035A70
 * Callers:
 *     <none>
 * Callees:
 *     ?CloneVisualTree@CRenderDataVisual@@UEAAJPEAPEAVCVisual@@_N11@Z @ 0x180010570 (-CloneVisualTree@CRenderDataVisual@@UEAAJPEAPEAVCVisual@@_N11@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x1800141AC (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?SetReverseAlignment@CText@@QEAAX_N@Z @ 0x180035BF0 (-SetReverseAlignment@CText@@QEAAX_N@Z.c)
 *     ?SetRTLReading@CText@@QEAAX_N@Z @ 0x180035C10 (-SetRTLReading@CText@@QEAAX_N@Z.c)
 *     ?SetBackgroundColor@CText@@QEAAXK@Z @ 0x180035C84 (-SetBackgroundColor@CText@@QEAAXK@Z.c)
 *     ?SetColor@CText@@QEAAXK@Z @ 0x180035CB4 (-SetColor@CText@@QEAAXK@Z.c)
 *     ?SetFont@CText@@QEAAXAEBUtagLOGFONTW@@@Z @ 0x180035CEC (-SetFont@CText@@QEAAXAEBUtagLOGFONTW@@@Z.c)
 *     ?SetText@CText@@QEAAJPEBG@Z @ 0x180035D84 (-SetText@CText@@QEAAJPEBG@Z.c)
 *     ??0CText@@AEAA@XZ @ 0x180036094 (--0CText@@AEAA@XZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18004E04C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     memset_0 @ 0x18004E2A2 (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x18004E2E0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CText::CloneVisualTree(CText *this, struct CVisual **a2, bool a3, bool a4, bool a5)
{
  CText *v9; // rax
  CText *v10; // rbx
  CText *v11; // rbx
  int v12; // eax
  unsigned int v13; // edi
  int v14; // eax
  int v15; // eax
  char v16; // al

  v9 = (CText *)(*(__int64 (__fastcall **)(WPF::HeapBase *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 16LL))(
                  WPF::g_pProcessHeap,
                  432LL);
  v10 = v9;
  if ( v9 )
  {
    memset_0(v9, 0, 0x1B0uLL);
    v11 = CText::CText(v10);
  }
  else
  {
    v11 = 0LL;
  }
  if ( v11 )
  {
    v12 = (*(__int64 (__fastcall **)(CText *, _QWORD))(*(_QWORD *)v11 + 8LL))(
            v11,
            *(_QWORD *)(*((_QWORD *)this + 2) + 16LL));
    v13 = v12;
    if ( v12 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v12, 0x206u);
    }
    else
    {
      *a2 = v11;
      _InterlockedIncrement((volatile signed __int32 *)v11 + 2);
      v14 = CRenderDataVisual::CloneVisualTree(this, a2, a3, a4, a5);
      v13 = v14;
      if ( v14 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v14, 0x20Eu);
      }
      else
      {
        v15 = CText::SetText(v11, *((const unsigned __int16 **)this + 36));
        v13 = v15;
        if ( v15 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v15, 0x210u);
        }
        else
        {
          CText::SetFont(v11, (const struct tagLOGFONTW *)((char *)this + 296));
          CText::SetColor(v11, *((_DWORD *)this + 102));
          CText::SetBackgroundColor(v11, *((_DWORD *)this + 103));
          CText::SetRTLReading(v11, (*((_BYTE *)this + 280) & 2) != 0);
          CText::SetReverseAlignment(v11, (*((_BYTE *)this + 280) & 4) != 0);
          if ( (*((_DWORD *)this + 20) & 0x9000) == 0 )
          {
            v16 = *((_BYTE *)v11 + 280);
            *((_DWORD *)v11 + 20) &= 0xFFFF6FFF;
            *((_BYTE *)v11 + 280) ^= (*((_BYTE *)this + 280) ^ v16) & 1;
            *((_QWORD *)v11 + 50) = *((_QWORD *)this + 50);
          }
        }
      }
    }
    CBaseObject::Release(v11);
  }
  else
  {
    v13 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024882, 0x205u);
  }
  return v13;
}
