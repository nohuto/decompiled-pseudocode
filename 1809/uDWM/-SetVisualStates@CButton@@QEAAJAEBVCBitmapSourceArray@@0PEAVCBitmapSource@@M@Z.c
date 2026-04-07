/*
 * XREFs of ?SetVisualStates@CButton@@QEAAJAEBVCBitmapSourceArray@@0PEAVCBitmapSource@@M@Z @ 0x1800216A4
 * Callers:
 *     ?UpdateButtonVisuals@CTopLevelWindow@@AEAAJPEBUWindowFrame@1@@Z @ 0x18001F8B8 (-UpdateButtonVisuals@CTopLevelWindow@@AEAAJPEBUWindowFrame@1@@Z.c)
 * Callees:
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x1800141AC (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?CopyAndAddRef@CBitmapSourceArray@@QEAAJAEBV1@@Z @ 0x1800215C8 (-CopyAndAddRef@CBitmapSourceArray@@QEAAJAEBV1@@Z.c)
 *     ?SetDirtyFlags@CVisual@@UEAAXK@Z @ 0x180023740 (-SetDirtyFlags@CVisual@@UEAAXK@Z.c)
 *     ?UpdateCurrentGlyphOpacity@CButton@@AEAAX_N@Z @ 0x180023DB8 (-UpdateCurrentGlyphOpacity@CButton@@AEAAX_N@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18004E04C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CButton::SetVisualStates(
        CButton *this,
        const struct CBitmapSourceArray *a2,
        const struct CBitmapSourceArray *a3,
        struct CBitmapSource *a4,
        float a5)
{
  CBitmapSourceArray *v5; // r14
  unsigned int v6; // edi
  unsigned int v7; // r10d
  bool v8; // si
  bool v12; // cl
  unsigned int v13; // r13d
  __int64 v14; // r15
  bool v15; // r8
  _QWORD *v16; // rax
  _QWORD *v17; // r9
  int v18; // eax
  unsigned int v19; // r10d
  bool v20; // cl
  unsigned int v21; // r15d
  __int64 v22; // r14
  bool v23; // r8
  _QWORD *v24; // rax
  _QWORD *v25; // r9
  int v26; // eax
  CBaseObject *v27; // rcx

  v5 = (CButton *)((char *)this + 304);
  v6 = 0;
  v7 = *((_DWORD *)this + 82);
  v8 = 0;
  v12 = v7 == *((_DWORD *)a2 + 6);
  if ( v7 == *((_DWORD *)a2 + 6) && (v13 = 0, v7) )
  {
    v14 = 0LL;
    while ( v12 )
    {
      v15 = 0;
      v16 = (_QWORD *)(v14 + *(_QWORD *)a2);
      v17 = (_QWORD *)(v14 + *(_QWORD *)v5);
      ++v13;
      v14 += 8LL;
      if ( *v17 == *v16 )
        v15 = v12;
      v12 = v15;
      if ( v13 >= v7 )
        goto LABEL_8;
    }
  }
  else
  {
LABEL_8:
    if ( v12 )
      goto LABEL_11;
  }
  v18 = CBitmapSourceArray::CopyAndAddRef(v5, a2);
  v6 = v18;
  if ( v18 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v18, 0x4Bu);
    return v6;
  }
  v8 = 1;
LABEL_11:
  v19 = *((_DWORD *)this + 90);
  v20 = v19 == *((_DWORD *)a3 + 6);
  if ( v19 == *((_DWORD *)a3 + 6) )
  {
    v21 = 0;
    if ( v19 )
    {
      v22 = 0LL;
      while ( v20 )
      {
        v23 = 0;
        v24 = (_QWORD *)(v22 + *(_QWORD *)a3);
        v25 = (_QWORD *)(v22 + *((_QWORD *)this + 42));
        ++v21;
        v22 += 8LL;
        if ( *v25 == *v24 )
          v23 = v20;
        v20 = v23;
        if ( v21 >= v19 )
          goto LABEL_18;
      }
      goto LABEL_19;
    }
  }
LABEL_18:
  if ( !v20 )
  {
LABEL_19:
    v26 = CBitmapSourceArray::CopyAndAddRef((CButton *)((char *)this + 336), a3);
    v6 = v26;
    if ( v26 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v26, 0x51u);
      return v6;
    }
    v8 = 1;
  }
  v27 = (CBaseObject *)*((_QWORD *)this + 46);
  if ( v27 != a4 )
  {
    if ( v27 )
      CBaseObject::Release(v27);
    *((_QWORD *)this + 46) = a4;
    if ( a4 )
      _InterlockedIncrement((volatile signed __int32 *)a4 + 2);
    v8 = 1;
  }
  if ( *((float *)this + 101) != a5 )
  {
    *((float *)this + 101) = a5;
    CButton::UpdateCurrentGlyphOpacity(this, v8);
  }
  if ( v8 )
    CVisual::SetDirtyFlags(this, 0x8000u);
  return v6;
}
