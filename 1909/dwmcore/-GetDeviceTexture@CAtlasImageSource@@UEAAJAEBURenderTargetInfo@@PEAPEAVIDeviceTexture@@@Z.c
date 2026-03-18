/*
 * XREFs of ?GetDeviceTexture@CAtlasImageSource@@UEAAJAEBURenderTargetInfo@@PEAPEAVIDeviceTexture@@@Z @ 0x18001E130
 * Callers:
 *     <none>
 * Callees:
 *     ?GetDeviceTexture@CAtlasEntry@@QEBAXPEAPEAVIDeviceTexture@@@Z @ 0x18001E184 (-GetDeviceTexture@CAtlasEntry@@QEBAXPEAPEAVIDeviceTexture@@@Z.c)
 *     ?CheckSameDevice@CAtlasTexture@@QEBAJAEBURenderTargetInfo@@@Z @ 0x18001E1DC (-CheckSameDevice@CAtlasTexture@@QEBAJAEBURenderTargetInfo@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800738CC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 */

__int64 __fastcall CAtlasImageSource::GetDeviceTexture(
        CAtlasImageSource *this,
        const struct RenderTargetInfo *a2,
        struct IDeviceTexture **a3)
{
  CAtlasEntry *v3; // rdi
  CAtlasTexture *v5; // rcx
  int v6; // eax
  unsigned int v7; // ecx
  unsigned int v8; // ebx
  unsigned int v10; // ecx

  v3 = (CAtlasImageSource *)((char *)this + 8);
  v5 = (CAtlasTexture *)*((_QWORD *)this + 1);
  if ( !v5 )
  {
    v8 = -2003304307;
    MilInstrumentationCheckHR_MaybeFailFast(0, 0LL, 0, -2003304307, 0x75u, 0LL);
LABEL_7:
    MilInstrumentationCheckHR_MaybeFailFast(v10, 0LL, 0, v8, 0x94u, 0LL);
    return v8;
  }
  v6 = CAtlasTexture::CheckSameDevice(v5, a2);
  v8 = v6;
  if ( v6 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v7, 0LL, 0, v6, 0x78u, 0LL);
    goto LABEL_7;
  }
  CAtlasEntry::GetDeviceTexture(v3, a3);
  return v8;
}
