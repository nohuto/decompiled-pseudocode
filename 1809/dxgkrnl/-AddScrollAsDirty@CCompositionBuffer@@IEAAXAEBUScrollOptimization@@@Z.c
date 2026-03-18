/*
 * XREFs of ?AddScrollAsDirty@CCompositionBuffer@@IEAAXAEBUScrollOptimization@@@Z @ 0x1C0055AD0
 * Callers:
 *     ?UpdateDirtyRegions@CCompositionToken@@QEAAJXZ @ 0x1C000C888 (-UpdateDirtyRegions@CCompositionToken@@QEAAJXZ.c)
 *     ?NotifyDirty@CCompositionBuffer@@QEAAXAEBUIRegion@@PEBUScrollOptimization@@@Z @ 0x1C0016844 (-NotifyDirty@CCompositionBuffer@@QEAAXAEBUIRegion@@PEBUScrollOptimization@@@Z.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0011DE0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C0022E60 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CCompositionBuffer::AddScrollAsDirty(CCompositionBuffer *this, const struct ScrollOptimization *a2)
{
  struct DXGGLOBAL *Global; // rax
  int v5; // eax
  __int64 *v6; // rcx
  __int64 v7; // rdx
  void (*v8)(void); // rax
  void (***v9)(void); // [rsp+38h] [rbp+10h] BYREF

  Global = DXGGLOBAL::GetGlobal((__int64)this);
  v5 = (*(__int64 (__fastcall **)(char *, void (****)(void)))(*((_QWORD *)Global + 2541) + 16LL))((char *)a2 + 4, &v9);
  v6 = (__int64 *)*((_QWORD *)this + 31);
  v7 = *v6;
  if ( v5 < 0 )
  {
    v8 = *(void (**)(void))(v7 + 32);
  }
  else
  {
    (*(void (__fastcall **)(__int64 *, void (***)(void), __int64))(v7 + 48))(v6, v9, 2LL);
    v8 = **v9;
  }
  v8();
}
