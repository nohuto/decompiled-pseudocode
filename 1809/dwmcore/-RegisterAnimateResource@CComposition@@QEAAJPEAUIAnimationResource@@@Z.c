/*
 * XREFs of ?RegisterAnimateResource@CComposition@@QEAAJPEAUIAnimationResource@@@Z @ 0x180021E70
 * Callers:
 *     ?RegisterAnimateResource@CBaseAnimation@@QEAAJXZ @ 0x180021E2C (-RegisterAnimateResource@CBaseAnimation@@QEAAJXZ.c)
 * Callees:
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180022680 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CComposition::RegisterAnimateResource(CComposition *this, struct IAnimationResource *a2)
{
  char *v2; // r10
  unsigned int v4; // eax
  unsigned int v5; // edx
  int v6; // ebx
  unsigned int v7; // ecx
  __int64 v8; // rsi
  unsigned int v9; // eax
  int v11; // eax
  struct IAnimationResource *v12; // [rsp+48h] [rbp+10h] BYREF

  v12 = a2;
  v2 = (char *)this + 616;
  v4 = *((_DWORD *)this + 160);
  v5 = v4 + 1;
  v6 = v4 + 1 < v4 ? 0x80070216 : 0;
  if ( v4 + 1 < v4 )
  {
    MilInstrumentationCheckHR_MaybeFailFast((unsigned int)this, 0LL, 0, v6, 0xB5u);
  }
  else if ( v5 > *((_DWORD *)this + 159) )
  {
    v11 = DynArrayImpl<0>::AddMultipleAndSet((char *)this + 616, 8LL, 1LL, &v12);
    v6 = v11;
    if ( v11 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v7, 0LL, 0, v11, 0xC0u);
  }
  else
  {
    v7 = *((_DWORD *)this + 160);
    *(_QWORD *)(*(_QWORD *)v2 + 8LL * v4) = v12;
    *((_DWORD *)v2 + 6) = v5;
  }
  if ( v6 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v7, 0LL, 0, v6, 0x9BCu);
  }
  else
  {
    v8 = (*(__int64 (__fastcall **)(struct IAnimationResource *))(*(_QWORD *)v12 + 16LL))(v12);
    v9 = (*(__int64 (__fastcall **)(struct IAnimationResource *))(*(_QWORD *)v12 + 32LL))(v12);
    if ( v8 || v9 )
      (*(void (__fastcall **)(_QWORD, _QWORD, unsigned __int64, __int64))(**((_QWORD **)this + 67) + 48LL))(
        *((_QWORD *)this + 67),
        v9,
        (unsigned __int64)v12 | 0xDD00000000000000uLL,
        v8);
  }
  return (unsigned int)v6;
}
