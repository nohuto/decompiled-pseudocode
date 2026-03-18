/*
 * XREFs of ?MarkInvalid@CD2DResource@@IEAAXXZ @ 0x18002BE18
 * Callers:
 *     ?MarkAllResourcesInvalid@CD2DResourceManager@@QEAAXXZ @ 0x18002CAC8 (-MarkAllResourcesInvalid@CD2DResourceManager@@QEAAXXZ.c)
 *     ?MarkHardwareProtectedResourcesInvalid@CD2DResourceManager@@QEAA_NXZ @ 0x1801689C4 (-MarkHardwareProtectedResourcesInvalid@CD2DResourceManager@@QEAA_NXZ.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800F0230 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CD2DResource::MarkInvalid(CD2DResource *this)
{
  int v2; // edi
  void (__fastcall ***v3)(_QWORD, char *); // rcx

  v2 = *((_DWORD *)this + 20);
  (*(void (__fastcall **)(CD2DResource *))(*(_QWORD *)this + 8LL))(this);
  while ( v2 > 0 )
  {
    v3 = *(void (__fastcall ****)(_QWORD, char *))(*((_QWORD *)this + 7) + 8LL * (unsigned int)(v2 - 1));
    (**v3)(v3, (char *)this + 16);
    --v2;
  }
  (*(void (__fastcall **)(CD2DResource *))(*(_QWORD *)this + 40LL))(this);
  (*(void (__fastcall **)(CD2DResource *))(*(_QWORD *)this + 16LL))(this);
}
