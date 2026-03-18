/*
 * XREFs of ?GetDeviceInfo@CHwDisplayRenderTarget@@UEAAJPEAU_LUID@@PEAVDisplayId@@@Z @ 0x1800B9B30
 * Callers:
 *     ?GetDeviceInfo@CHwDisplayRenderTarget@@WJA@EAAJPEAU_LUID@@PEAVDisplayId@@@Z @ 0x1800EC840 (-GetDeviceInfo@CHwDisplayRenderTarget@@WJA@EAAJPEAU_LUID@@PEAVDisplayId@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800969E0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800EC570 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CHwDisplayRenderTarget::GetDeviceInfo(
        CHwDisplayRenderTarget *this,
        struct _LUID *a2,
        struct DisplayId *a3)
{
  int v6; // ebx
  signed int v7; // eax
  __int64 v8; // rcx
  signed int v9; // edi
  __int64 v10; // rcx
  struct _LUID *v12; // [rsp+50h] [rbp+8h] BYREF

  v6 = 0;
  v7 = (*(__int64 (__fastcall **)(CHwDisplayRenderTarget *, struct _LUID **))(*(_QWORD *)this + 248LL))(this, &v12);
  v9 = v7;
  if ( v7 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v8, 0LL, 0, v7, 0x8Fu, 0LL);
  }
  else
  {
    v10 = (__int64)v12;
    *a2 = v12[89];
    v6 = *((_DWORD *)this + 12);
  }
  if ( v9 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v10, 0LL, 0, v9, 0x14Au, 0LL);
  }
  else if ( a3 )
  {
    *(_DWORD *)a3 = v6;
  }
  return (unsigned int)v9;
}
