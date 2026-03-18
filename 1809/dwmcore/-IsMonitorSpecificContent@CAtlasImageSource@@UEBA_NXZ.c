/*
 * XREFs of ?IsMonitorSpecificContent@CAtlasImageSource@@UEBA_NXZ @ 0x180222900
 * Callers:
 *     <none>
 * Callees:
 *     ?IsSpecific@DisplayId@@QEBA_NXZ @ 0x1800300C8 (-IsSpecific@DisplayId@@QEBA_NXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 */

char __fastcall CAtlasImageSource::IsMonitorSpecificContent(CAtlasImageSource *this)
{
  __int64 v1; // rcx
  char v2; // bl
  __int64 v3; // rcx
  int v5; // [rsp+30h] [rbp+8h] BYREF
  char v6; // [rsp+38h] [rbp+10h] BYREF

  v1 = *((_QWORD *)this + 2);
  v2 = 0;
  if ( v1 )
  {
    v3 = *(_QWORD *)(v1 + 8);
    v5 = 0;
    if ( (*(int (__fastcall **)(__int64, char *, int *))(*(_QWORD *)v3 + 120LL))(v3, &v6, &v5) >= 0 )
      return DisplayId::IsSpecific((DisplayId *)&v5);
  }
  return v2;
}
