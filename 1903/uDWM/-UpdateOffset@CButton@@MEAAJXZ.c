/*
 * XREFs of ?UpdateOffset@CButton@@MEAAJXZ @ 0x180019F70
 * Callers:
 *     <none>
 * Callees:
 *     ?SetDirtyFlags@CAtlasedImage@@IEAAXKK@Z @ 0x180028B9C (-SetDirtyFlags@CAtlasedImage@@IEAAXKK@Z.c)
 *     ?SetOffset@CAtlasedImage@@QEAAXAEBUtagPOINT@@@Z @ 0x1800385B4 (-SetOffset@CAtlasedImage@@QEAAXAEBUtagPOINT@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18004FBC4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004FE00 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CButton::UpdateOffset(CButton *this)
{
  int v2; // eax
  unsigned int v3; // edi
  __int64 v4; // rcx
  void *v6; // [rsp+28h] [rbp-10h]
  void *v7; // [rsp+28h] [rbp-10h]
  struct tagPOINT v8; // [rsp+40h] [rbp+8h] BYREF

  v2 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 16LL)
                                                 + 368LL))(
         *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 16LL),
         *(unsigned int *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 24LL));
  v3 = v2;
  if ( v2 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v2, 0x283u, v6);
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v3, 0xCBu, v7);
  }
  else
  {
    v4 = *((_QWORD *)this + 36);
    if ( *(_DWORD *)(v4 + 24) != *((_DWORD *)this + 30) || *(_DWORD *)(v4 + 28) != *((_DWORD *)this + 31) )
    {
      *(_QWORD *)(v4 + 24) = *((_QWORD *)this + 15);
      CAtlasedImage::SetDirtyFlags((CAtlasedImage *)v4, 1u, 0x2000u);
      v4 = *((_QWORD *)this + 36);
    }
    if ( *(CButton **)(v4 + 80) == this )
    {
      v8 = 0LL;
      CAtlasedImage::SetOffset((CAtlasedImage *)v4, &v8);
    }
    else if ( *((_DWORD *)this + 28) != *(_DWORD *)(v4 + 16) || *((_DWORD *)this + 29) != *(_DWORD *)(v4 + 20) )
    {
      *(_QWORD *)(v4 + 16) = *((_QWORD *)this + 14);
      CAtlasedImage::SetDirtyFlags((CAtlasedImage *)v4, 1u, 0x2000u);
    }
  }
  return v3;
}
