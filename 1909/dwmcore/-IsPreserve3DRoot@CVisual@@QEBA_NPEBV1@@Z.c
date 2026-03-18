/*
 * XREFs of ?IsPreserve3DRoot@CVisual@@QEBA_NPEBV1@@Z @ 0x1801C21A0
 * Callers:
 *     ?PostSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x180083B20 (-PostSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 * Callees:
 *     ?GetEffectInternal@CVisual@@QEBAPEAVCEffect@@XZ @ 0x18007FADC (-GetEffectInternal@CVisual@@QEBAPEAVCEffect@@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0230 (_guard_dispatch_icall_nop.c)
 */

char __fastcall CVisual::IsPreserve3DRoot(CVisual *this, const struct CVisual *a2)
{
  int v2; // ebp
  char v4; // bl
  bool v5; // si
  struct CEffect *EffectInternal; // rax
  bool v7; // al
  __int64 v8; // rax
  bool v9; // zf

  v2 = *((_DWORD *)this + 25);
  v4 = 1;
  v5 = a2 && *((_DWORD *)a2 + 25) == 1;
  v7 = 1;
  if ( !(*(unsigned __int8 (__fastcall **)(CVisual *))(*(_QWORD *)this + 216LL))(this) )
  {
    if ( (**((_DWORD **)this + 28) & 0x200000) == 0
      || (EffectInternal = CVisual::GetEffectInternal(this),
          !(*(unsigned __int8 (__fastcall **)(struct CEffect *, __int64))(*(_QWORD *)EffectInternal + 48LL))(
             EffectInternal,
             56LL)) )
    {
      v7 = 0;
    }
  }
  if ( v2 != 1 )
    return 0;
  if ( v5 )
  {
    v9 = !v7;
  }
  else
  {
    v8 = *((_QWORD *)this + 9);
    if ( (v8 & 2) != 0 )
      v8 = *(_QWORD *)(v8 & 0xFFFFFFFFFFFFFFFCuLL);
    else
      LODWORD(v8) = v8 & 1;
    v9 = (_DWORD)v8 == 0;
  }
  if ( v9 )
    return 0;
  return v4;
}
