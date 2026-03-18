/*
 * XREFs of ?IsMonitorSpecificContent@CRenderTargetImageSource@@UEBA_NXZ @ 0x1801AADD0
 * Callers:
 *     <none>
 * Callees:
 *     ?IsSpecific@DisplayId@@QEBA_NXZ @ 0x180053F30 (-IsSpecific@DisplayId@@QEBA_NXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0230 (_guard_dispatch_icall_nop.c)
 */

char __fastcall CRenderTargetImageSource::IsMonitorSpecificContent(CRenderTargetImageSource *this)
{
  __int64 v1; // rcx
  char v2; // bl
  int v4; // [rsp+30h] [rbp+8h] BYREF
  char v5; // [rsp+38h] [rbp+10h] BYREF

  v1 = *((_QWORD *)this + 21);
  v2 = 0;
  v4 = 0;
  if ( (*(int (__fastcall **)(__int64, char *, int *))(*(_QWORD *)v1 + 120LL))(v1, &v5, &v4) >= 0 )
    return DisplayId::IsSpecific((DisplayId *)&v4);
  return v2;
}
