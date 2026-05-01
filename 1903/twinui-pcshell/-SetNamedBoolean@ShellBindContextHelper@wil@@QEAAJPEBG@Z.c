/*
 * XREFs of ?SetNamedBoolean@ShellBindContextHelper@wil@@QEAAJPEBG@Z @ 0x180419E38
 * Callers:
 *     _anonymous_namespace_::GetTargetItem @ 0x180419B5C (_anonymous_namespace_--GetTargetItem.c)
 * Callees:
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800870F0 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 *     ?InternalRelease@?$ComPtr@VPositionAdjustmentHistory@@@WRL@Microsoft@@IEAAKXZ @ 0x180348834 (-InternalRelease@-$ComPtr@VPositionAdjustmentHistory@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??0DummyUnknown@details@wil@@QEAA@XZ @ 0x180419AFC (--0DummyUnknown@details@wil@@QEAA@XZ.c)
 */

__int64 __fastcall wil::ShellBindContextHelper::SetNamedBoolean(
        wil::ShellBindContextHelper *this,
        const unsigned __int16 *a2)
{
  wil::details::DummyUnknown *v3; // rax
  unsigned int v4; // ebx
  wil::details::DummyUnknown *v5; // rax
  wil::details::DummyUnknown *v7; // [rsp+38h] [rbp+10h] BYREF
  wil::details::DummyUnknown *v8; // [rsp+40h] [rbp+18h] BYREF

  v7 = 0LL;
  Microsoft::WRL::ComPtr<PositionAdjustmentHistory>::InternalRelease((volatile signed __int32 **)&v7);
  v7 = 0LL;
  v3 = (wil::details::DummyUnknown *)operator new(0x30uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v3
    && (v5 = wil::details::DummyUnknown::DummyUnknown(v3),
        v8 = v5,
        *((_QWORD *)v5 + 5) = 0LL,
        *(GUID *)((char *)v5 + 24) = GUID_NULL,
        _InterlockedIncrement((volatile signed __int32 *)v5 + 5),
        v7 = v5,
        Microsoft::WRL::ComPtr<PositionAdjustmentHistory>::InternalRelease((volatile signed __int32 **)&v8),
        *(_QWORD *)this) )
  {
    v4 = (*(__int64 (__fastcall **)(_QWORD, const wchar_t *, wil::details::DummyUnknown *))(**(_QWORD **)this + 72LL))(
           *(_QWORD *)this,
           L"Don't Resolve Link",
           v7);
  }
  else
  {
    v4 = -2147024882;
  }
  Microsoft::WRL::ComPtr<PositionAdjustmentHistory>::InternalRelease((volatile signed __int32 **)&v7);
  return v4;
}
