/*
 * XREFs of ?CompactAtlases@CAtlasManager@@QEAAXXZ @ 0x180036CCC
 * Callers:
 *     ?HandleAdvanceFrame@CD3DDeviceManager@@AEAAJ_N@Z @ 0x180036EE0 (-HandleAdvanceFrame@CD3DDeviceManager@@AEAAJ_N@Z.c)
 * Callees:
 *     ?CompactSingleAtlas@CAtlasManager@@AEAAJPEA_N@Z @ 0x180006B18 (-CompactSingleAtlas@CAtlasManager@@AEAAJPEA_N@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?MergeAtlases@CAtlasManager@@AEAAXPEA_N@Z @ 0x180205908 (-MergeAtlases@CAtlasManager@@AEAAXPEA_N@Z.c)
 */

void __fastcall CAtlasManager::CompactAtlases(CAtlasManager *this)
{
  __int64 v1; // rdi
  __int64 v3; // r8
  unsigned int v4; // r9d
  __int64 v5; // rdx
  unsigned int v6; // r10d
  int v7; // ecx
  unsigned __int64 v8; // r8
  int v9; // eax
  unsigned int v10; // ecx
  bool v11; // [rsp+40h] [rbp+8h] BYREF

  v1 = (__int64)this + 280;
  if ( !this )
    v1 = 848LL;
  if ( *(int *)v1 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast((unsigned int)this, 0LL, 0, *(_DWORD *)v1, 0x44u);
  }
  else
  {
    v3 = *((_QWORD *)this + 1);
    v4 = 0;
    v5 = *(_QWORD *)this;
    v6 = 0;
    while ( v5 != v3 )
    {
      v7 = *(_DWORD *)(*(_QWORD *)v5 + 24LL);
      v4 += v7;
      v6 += v7 - *(_DWORD *)(*(_QWORD *)v5 + 28LL);
      v5 += 8LL;
    }
    if ( v6 < v4 / 3 )
    {
      v8 = (v3 - *(_QWORD *)this) & 0xFFFFFFFFFFFFFFF8uLL;
      v11 = 0;
      if ( v8 == 8 )
      {
        v9 = CAtlasManager::CompactSingleAtlas((const struct CAtlasTexture ***)this, &v11);
        if ( v9 < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(v10, 0LL, 0, v9, 0x54u);
      }
      else
      {
        CAtlasManager::MergeAtlases(this, &v11);
      }
      if ( v11 && *(int *)v1 >= 0 )
        *((_BYTE *)this + 460) = 1;
    }
  }
}
