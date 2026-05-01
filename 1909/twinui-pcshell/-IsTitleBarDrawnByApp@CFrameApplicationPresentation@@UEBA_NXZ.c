/*
 * XREFs of ?IsTitleBarDrawnByApp@CFrameApplicationPresentation@@UEBA_NXZ @ 0x180170290
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 */

char __fastcall CFrameApplicationPresentation::IsTitleBarDrawnByApp(CFrameApplicationPresentation *this)
{
  __int64 v1; // rcx
  char v2; // bl
  int v4; // [rsp+30h] [rbp+8h] BYREF

  v1 = *((_QWORD *)this + 15);
  v2 = 0;
  v4 = 0;
  if ( v1 )
  {
    (*(void (__fastcall **)(__int64, int *))(*(_QWORD *)v1 + 128LL))(v1, &v4);
    return v4 != 0;
  }
  return v2;
}
