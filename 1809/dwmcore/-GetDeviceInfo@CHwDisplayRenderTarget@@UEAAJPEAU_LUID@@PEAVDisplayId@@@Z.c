/*
 * XREFs of ?GetDeviceInfo@CHwDisplayRenderTarget@@UEAAJPEAU_LUID@@PEAVDisplayId@@@Z @ 0x18005AE60
 * Callers:
 *     ?GetDeviceInfo@CHwDisplayRenderTarget@@WNA@EAAJPEAU_LUID@@PEAVDisplayId@@@Z @ 0x1800F1120 (-GetDeviceInfo@CHwDisplayRenderTarget@@WNA@EAAJPEAU_LUID@@PEAVDisplayId@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CHwDisplayRenderTarget::GetDeviceInfo(
        CHwDisplayRenderTarget *this,
        struct _LUID *a2,
        struct DisplayId *a3)
{
  int v6; // ebx
  int v7; // eax
  unsigned int v8; // ecx
  int v9; // edi
  unsigned int v10; // ecx
  struct _LUID *v12; // [rsp+50h] [rbp+8h] BYREF

  v6 = 0;
  v7 = (*(__int64 (__fastcall **)(CHwDisplayRenderTarget *, struct _LUID **))(*(_QWORD *)this + 248LL))(this, &v12);
  v9 = v7;
  if ( v7 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v8, 0LL, 0, v7, 0x9Cu);
  }
  else
  {
    v10 = (unsigned int)v12;
    *a2 = v12[89];
    v6 = *((_DWORD *)this + 29);
  }
  if ( v9 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v10, 0LL, 0, v9, 0x14Au);
  }
  else if ( a3 )
  {
    *(_DWORD *)a3 = v6;
  }
  return (unsigned int)v9;
}
