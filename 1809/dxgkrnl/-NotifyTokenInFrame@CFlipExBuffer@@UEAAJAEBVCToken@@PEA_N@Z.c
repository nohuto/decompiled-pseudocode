/*
 * XREFs of ?NotifyTokenInFrame@CFlipExBuffer@@UEAAJAEBVCToken@@PEA_N@Z @ 0x1C0016760
 * Callers:
 *     <none>
 * Callees:
 *     ?NotifyDirty@CCompositionBuffer@@QEAAXAEBUIRegion@@PEBUScrollOptimization@@@Z @ 0x1C0016844 (-NotifyDirty@CCompositionBuffer@@QEAAXAEBUIRegion@@PEBUScrollOptimization@@@Z.c)
 *     ?UpdateIndependentFlipState@CFlipExBuffer@@IEAA_NAEBVCFlipToken@@@Z @ 0x1C00168D4 (-UpdateIndependentFlipState@CFlipExBuffer@@IEAA_NAEBVCFlipToken@@@Z.c)
 *     ?UpdateAttributes@CFlipExBuffer@@IEAA_NAEBVCFlipToken@@@Z @ 0x1C00169A4 (-UpdateAttributes@CFlipExBuffer@@IEAA_NAEBVCFlipToken@@@Z.c)
 *     ?FromToken@CFlipToken@@SAPEBV1@PEBVCToken@@@Z @ 0x1C0016D44 (-FromToken@CFlipToken@@SAPEBV1@PEBVCToken@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0022E60 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CFlipExBuffer::NotifyTokenInFrame(CFlipExBuffer *this, const struct CToken *a2, bool *a3)
{
  const struct CFlipToken *v5; // rax
  int v6; // edx
  const struct CFlipToken *v7; // rdi
  int v8; // ebx
  unsigned int v9; // ebp

  *a3 = 0;
  v5 = CFlipToken::FromToken(a2);
  v6 = 0;
  v7 = v5;
  if ( !v5 )
    v6 = -1073741811;
  v8 = 0;
  if ( v6 < 0 )
    v8 = v6;
  if ( v8 >= 0 )
  {
    v9 = *((_DWORD *)v5 + 26);
    if ( v9 >= *((_DWORD *)this + 60) )
    {
      v8 = -1073741811;
    }
    else
    {
      *((_DWORD *)this + 61) = (*(__int64 (__fastcall **)(const struct CFlipToken *))(*(_QWORD *)v5 + 112LL))(v5);
      if ( *((_DWORD *)this + 87) != v9 )
      {
        *((_DWORD *)this + 87) = v9;
        *a3 = 1;
      }
      if ( CFlipExBuffer::UpdateAttributes(this, v7) )
        *a3 = 1;
      if ( CFlipExBuffer::UpdateIndependentFlipState(this, v7) )
        *a3 = 1;
    }
    if ( v8 >= 0 )
      CCompositionBuffer::NotifyDirty(
        this,
        *((const struct IRegion **)v7 + 10),
        (const struct CFlipToken *)((char *)v7 + 52));
  }
  return (unsigned int)v8;
}
