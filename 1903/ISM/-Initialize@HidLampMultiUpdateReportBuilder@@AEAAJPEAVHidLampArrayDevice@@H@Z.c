/*
 * XREFs of ?Initialize@HidLampMultiUpdateReportBuilder@@AEAAJPEAVHidLampArrayDevice@@H@Z @ 0x1800B68D0
 * Callers:
 *     ?CreateAndInitialize@HidLampMultiUpdateReportBuilder@@SAJPEAVHidLampArrayDevice@@IPEAPEAV1@@Z @ 0x1800B679C (-CreateAndInitialize@HidLampMultiUpdateReportBuilder@@SAJPEAVHidLampArrayDevice@@IPEAPEAV1@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180010FD4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18002C760 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??_U@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18002CED8 (--_U@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??4?$ComPtr@VHidLampArrayDevice@@@WRL@Microsoft@@QEAAAEAV012@PEAVHidLampArrayDevice@@@Z @ 0x1800ACFF4 (--4-$ComPtr@VHidLampArrayDevice@@@WRL@Microsoft@@QEAAAEAV012@PEAVHidLampArrayDevice@@@Z.c)
 *     ?Reset@HidLampMultiUpdateReportBuilder@@QEAAXXZ @ 0x1800B6A20 (-Reset@HidLampMultiUpdateReportBuilder@@QEAAXXZ.c)
 */

__int64 __fastcall HidLampMultiUpdateReportBuilder::Initialize(
        RefCountedObject **this,
        struct HidLampArrayDevice *a2,
        int a3)
{
  unsigned __int64 v4; // rbx
  size_t v5; // rax
  RefCountedObject *v6; // rax
  const struct std::nothrow_t *v7; // rdx
  RefCountedObject *v8; // rcx
  __int64 v9; // rdx
  RefCountedObject *v11; // rax
  const struct std::nothrow_t *v12; // rdx
  RefCountedObject *v13; // rcx
  RefCountedObject *v14; // rax
  const struct std::nothrow_t *v15; // rdx
  RefCountedObject *v16; // rcx
  RefCountedObject *v17; // rax
  const struct std::nothrow_t *v18; // rdx
  RefCountedObject *v19; // rcx
  RefCountedObject *v20; // rax
  const struct std::nothrow_t *v21; // rdx
  RefCountedObject *v22; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v4 = a3;
  Microsoft::WRL::ComPtr<HidLampArrayDevice>::operator=(this + 9, (volatile signed __int32 *)a2);
  *((_DWORD *)this + 4) = v4;
  v5 = 4 * v4;
  if ( !is_mul_ok(v4, 4uLL) )
    v5 = -1LL;
  v6 = (RefCountedObject *)operator new[](v5, (const struct std::nothrow_t *)&std::nothrow);
  v8 = this[4];
  this[4] = v6;
  if ( v8 )
  {
    operator delete(v8, v7);
    v6 = this[4];
  }
  if ( !v6 )
  {
    v9 = 44LL;
LABEL_7:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v9,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\lamparray\\lib\\hidlampmultiupdatereportbuilder.cpp",
      (const char *)0x8007000ELL);
    return 2147942414LL;
  }
  v11 = (RefCountedObject *)operator new[](*((int *)this + 4), (const struct std::nothrow_t *)&std::nothrow);
  v13 = this[5];
  this[5] = v11;
  if ( v13 )
  {
    operator delete(v13, v12);
    v11 = this[5];
  }
  if ( !v11 )
  {
    v9 = 47LL;
    goto LABEL_7;
  }
  v14 = (RefCountedObject *)operator new[](*((int *)this + 4), (const struct std::nothrow_t *)&std::nothrow);
  v16 = this[6];
  this[6] = v14;
  if ( v16 )
  {
    operator delete(v16, v15);
    v14 = this[6];
  }
  if ( !v14 )
  {
    v9 = 50LL;
    goto LABEL_7;
  }
  v17 = (RefCountedObject *)operator new[](*((int *)this + 4), (const struct std::nothrow_t *)&std::nothrow);
  v19 = this[7];
  this[7] = v17;
  if ( v19 )
  {
    operator delete(v19, v18);
    v17 = this[7];
  }
  if ( !v17 )
  {
    v9 = 53LL;
    goto LABEL_7;
  }
  v20 = (RefCountedObject *)operator new[](*((int *)this + 4), (const struct std::nothrow_t *)&std::nothrow);
  v22 = this[8];
  this[8] = v20;
  if ( v22 )
  {
    operator delete(v22, v21);
    v20 = this[8];
  }
  if ( !v20 )
  {
    v9 = 56LL;
    goto LABEL_7;
  }
  HidLampMultiUpdateReportBuilder::Reset((HidLampMultiUpdateReportBuilder *)this);
  return 0LL;
}
