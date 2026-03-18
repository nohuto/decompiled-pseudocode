/*
 * XREFs of ?GenerateWhitePixel@CAtlasTexture@@AEAAXXZ @ 0x1800186B0
 * Callers:
 *     ?Initialize@CAtlasTexture@@AEAAJPEAVCD3DDeviceLevel1@@I@Z @ 0x18001851C (-Initialize@CAtlasTexture@@AEAAJPEAVCD3DDeviceLevel1@@I@Z.c)
 * Callees:
 *     ?UpdateGradientStrip@CAtlasTexture@@QEAAXPEBVCAtlasEntry@@V?$span@$$CBE$0?0@gsl@@@Z @ 0x180018A94 (-UpdateGradientStrip@CAtlasTexture@@QEAAXPEBVCAtlasEntry@@V-$span@$$CBE$0-0@gsl@@@Z.c)
 *     ??1CAtlasEntry@@QEAA@XZ @ 0x18001A01C (--1CAtlasEntry@@QEAA@XZ.c)
 */

void __fastcall CAtlasTexture::GenerateWhitePixel(CAtlasTexture *this)
{
  _QWORD v1[2]; // [rsp+20h] [rbp-38h] BYREF
  _QWORD v2[2]; // [rsp+30h] [rbp-28h] BYREF
  int v3; // [rsp+40h] [rbp-18h]

  v2[1] = 0LL;
  v1[1] = &unk_1802A1DA4;
  v1[0] = 4LL;
  v2[0] = this;
  v3 = 0;
  CAtlasTexture::UpdateGradientStrip(this, v2, v1);
  v2[0] = 0LL;
  CAtlasEntry::~CAtlasEntry((CAtlasEntry *)v2);
}
