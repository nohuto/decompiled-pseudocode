/*
 * XREFs of ?GetDeviceInfo@CHwSurfaceRenderTarget@@UEAAJPEAU_LUID@@PEAVDisplayId@@@Z @ 0x1802066C0
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CHwSurfaceRenderTarget::GetDeviceInfo(
        CHwSurfaceRenderTarget *this,
        struct _LUID *a2,
        struct DisplayId *a3)
{
  int v6; // eax
  __int64 v7; // rcx
  unsigned int v8; // ebx
  struct _LUID *v10; // [rsp+40h] [rbp+8h] BYREF

  v6 = (*(__int64 (__fastcall **)(CHwSurfaceRenderTarget *, struct _LUID **))(*(_QWORD *)this + 248LL))(this, &v10);
  v8 = v6;
  if ( v6 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v7, 0LL, 0, v6, 0x9Cu);
  }
  else
  {
    *a2 = v10[89];
    if ( a3 )
      *(_DWORD *)a3 = *((_DWORD *)this + 29);
  }
  return v8;
}
