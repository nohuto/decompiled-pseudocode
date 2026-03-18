/*
 * XREFs of ??$swap_helper@$0BA@@?$expandable_buffer_base@VOverlayPlaneInfo@COverlayContext@@$0BA@@detail@@QEAA_NAEAV01@@Z @ 0x1800E5630
 * Callers:
 *     ??$swap@$0BA@@?$expandable_buffer_base@VOverlayPlaneInfo@COverlayContext@@$0BA@@detail@@QEAA_NAEAV01@@Z @ 0x1800E55E0 (--$swap@$0BA@@-$expandable_buffer_base@VOverlayPlaneInfo@COverlayContext@@$0BA@@detail@@QEAA_NAE.c)
 * Callees:
 *     ??0OverlayPlaneInfo@COverlayContext@@QEAA@$$QEAV01@@Z @ 0x180181A9C (--0OverlayPlaneInfo@COverlayContext@@QEAA@$$QEAV01@@Z.c)
 */

char __fastcall detail::expandable_buffer_base<COverlayContext::OverlayPlaneInfo,16>::swap_helper<16>(
        _QWORD *a1,
        _QWORD *a2)
{
  _QWORD *v2; // rbx
  _QWORD *v3; // r9
  _QWORD *v4; // rcx
  _QWORD *v5; // r10
  char result; // al
  char *v7; // rdx
  char *v8; // rdi
  _QWORD *v9; // r11
  __int64 v10; // r11
  __int64 v11; // rdx

  v2 = a1 + 3;
  v3 = a1;
  v4 = (_QWORD *)*a1;
  v5 = a2;
  if ( v4 == v2 )
    return 0;
  v7 = (char *)*a2;
  if ( v7 != (char *)(v5 + 3) )
    return 0;
  v8 = (char *)v5[1];
  if ( (unsigned __int64)((v8 - v7) >> 8) > 0x10 )
    return 0;
  v9 = v2;
  if ( v7 != v8 )
  {
    do
    {
      COverlayContext::OverlayPlaneInfo::OverlayPlaneInfo(v9, v7);
      v9 = (_QWORD *)(v10 + 256);
      v7 = (char *)(v11 + 256);
    }
    while ( v7 != v8 );
    v4 = (_QWORD *)*v3;
  }
  *v5 = v4;
  v5[1] = v3[1];
  v5[2] = v3[2];
  v3[2] = v3 + 515;
  result = 1;
  *v3 = v2;
  v3[1] = v9;
  return result;
}
