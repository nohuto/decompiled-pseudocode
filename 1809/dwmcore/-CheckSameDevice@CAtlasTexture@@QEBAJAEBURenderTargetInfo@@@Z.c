/*
 * XREFs of ?CheckSameDevice@CAtlasTexture@@QEBAJAEBURenderTargetInfo@@@Z @ 0x18001E3FC
 * Callers:
 *     ?GetDeviceTexture@CAtlasImageSource@@UEAAJAEBURenderTargetInfo@@PEAPEAVIDeviceTexture@@@Z @ 0x18001E350 (-GetDeviceTexture@CAtlasImageSource@@UEAAJAEBURenderTargetInfo@@PEAPEAVIDeviceTexture@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CAtlasTexture::CheckSameDevice(CAtlasTexture *this, const struct RenderTargetInfo *a2)
{
  int v4; // eax
  unsigned int v5; // ecx
  unsigned int v6; // ebx
  unsigned int v7; // ecx
  int v8; // r9d
  unsigned int v10; // [rsp+20h] [rbp-18h]
  unsigned int v11; // [rsp+40h] [rbp+8h] BYREF
  int v12; // [rsp+50h] [rbp+18h] BYREF
  int v13; // [rsp+54h] [rbp+1Ch]

  v11 = 0;
  v4 = (*(__int64 (__fastcall **)(_QWORD, int *, unsigned int *))(**((_QWORD **)this + 1) + 120LL))(
         *((_QWORD *)this + 1),
         &v12,
         &v11);
  v6 = v4;
  if ( v4 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v5, 0LL, 0, v4, 0x165u);
  }
  else
  {
    v7 = v11;
    v8 = *(_DWORD *)a2;
    if ( v11 == DisplayId::All )
      v7 = DisplayId::None;
    v11 = v7;
    if ( v12 != v8
      || v13 != *((_DWORD *)a2 + 1)
      || v7 != DisplayId::None && v7 != *((_DWORD *)a2 + 2) && *((_DWORD *)a2 + 2) != DisplayId::All )
    {
      v6 = -2003304287;
      v10 = 368;
LABEL_11:
      MilInstrumentationCheckHR_MaybeFailFast(v7, 0LL, 0, v6, v10);
      return v6;
    }
    if ( (*(unsigned __int8 (__fastcall **)(_QWORD))(**((_QWORD **)this + 1) + 144LL))(*((_QWORD *)this + 1))
      && !*((_BYTE *)a2 + 16) )
    {
      v6 = -2147024891;
      v10 = 374;
      goto LABEL_11;
    }
  }
  return v6;
}
