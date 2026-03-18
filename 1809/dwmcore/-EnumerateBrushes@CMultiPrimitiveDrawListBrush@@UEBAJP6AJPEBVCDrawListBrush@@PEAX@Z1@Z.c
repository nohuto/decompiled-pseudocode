/*
 * XREFs of ?EnumerateBrushes@CMultiPrimitiveDrawListBrush@@UEBAJP6AJPEBVCDrawListBrush@@PEAX@Z1@Z @ 0x18005B2D0
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 *     ?terminate@details@gsl@@YAXXZ @ 0x180152C70 (-terminate@details@gsl@@YAXXZ.c)
 */

__int64 __fastcall CMultiPrimitiveDrawListBrush::EnumerateBrushes(
        CMultiPrimitiveDrawListBrush *this,
        int (*a2)(const struct CDrawListBrush *, void *),
        void *a3)
{
  unsigned int v3; // esi
  __int64 v4; // rbx
  __int64 v8; // rdi
  int v9; // r13d
  __int64 v10; // rax
  __int64 v11; // r14
  __int128 v12; // xmm0
  __int64 v13; // rax
  int v14; // eax

  v3 = 0;
  v4 = 0LL;
  v8 = 0LL;
  v9 = *(_DWORD *)(*((_QWORD *)this + 7) + 48LL);
  v10 = *((_QWORD *)this + 8);
  v11 = v10;
  while ( v4 != v11 )
  {
    if ( v4 == v10 )
      goto LABEL_9;
    v13 = *((_QWORD *)this + 7);
    v12 = *(_OWORD *)(v8 + *((_QWORD *)this + 9));
    *(_BYTE *)(v13 + 52) = 1;
    *(_OWORD *)(v13 + 32) = v12;
    *(_DWORD *)(v13 + 48) = v9;
    v14 = ((__int64 (__fastcall *)(_QWORD, void *))a2)(*((_QWORD *)this + 7), a3);
    v3 = v14;
    if ( v14 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast((unsigned int)this, 0LL, 0, v14, 0x3Fu);
      return v3;
    }
    if ( v8 < 0 || (v10 = *((_QWORD *)this + 8), v4 == v10) )
    {
LABEL_9:
      gsl::details::terminate(this);
      JUMPOUT(0x18005B388LL);
    }
    ++v4;
    v8 += 16LL;
  }
  return v3;
}
