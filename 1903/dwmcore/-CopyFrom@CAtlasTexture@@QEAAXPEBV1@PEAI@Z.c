/*
 * XREFs of ?CopyFrom@CAtlasTexture@@QEAAXPEBV1@PEAI@Z @ 0x180165FE4
 * Callers:
 *     ?CompactSingleAtlas@CAtlasManager@@AEAAJPEA_N@Z @ 0x180165C54 (-CompactSingleAtlas@CAtlasManager@@AEAAJPEA_N@Z.c)
 *     ?MergeAtlases@CAtlasManager@@AEAAXPEA_N@Z @ 0x180165DC0 (-MergeAtlases@CAtlasManager@@AEAAXPEA_N@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@VCD3DSurface@@@WRL@Microsoft@@IEAAKXZ @ 0x180019298 (-InternalRelease@-$ComPtr@VCD3DSurface@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?GetDevice@CAtlasTexture@@QEBAPEAVCD3DDeviceLevel1@@XZ @ 0x18001A2AC (-GetDevice@CAtlasTexture@@QEBAPEAVCD3DDeviceLevel1@@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800EC570 (_guard_dispatch_icall_nop.c)
 *     ?CopyTextureRect@CD3DDeviceLevel1@@QEAAXPEAVCD3DTexture@@PEBUtagRECT@@0PEBUtagPOINT@@_N@Z @ 0x18015C1E8 (-CopyTextureRect@CD3DDeviceLevel1@@QEAAXPEAVCD3DTexture@@PEBUtagRECT@@0PEBUtagPOINT@@_N@Z.c)
 *     ?IsFreeEntryInRow@CAtlasTexture@@QEBA_NI@Z @ 0x180166274 (-IsFreeEntryInRow@CAtlasTexture@@QEBA_NI@Z.c)
 *     ?IsInUseEntryInRow@CAtlasTexture@@QEBA_NI@Z @ 0x1801662A4 (-IsInUseEntryInRow@CAtlasTexture@@QEBA_NI@Z.c)
 */

void __fastcall CAtlasTexture::CopyFrom(CAtlasTexture *this, const struct CAtlasTexture *a2, unsigned int *a3)
{
  int v6; // r12d
  unsigned int v7; // eax
  unsigned int v8; // r12d
  unsigned int v9; // ebx
  unsigned int v10; // edi
  unsigned int v11; // esi
  unsigned int i; // r14d
  int v13; // r10d
  CD3DDeviceLevel1 *Device; // rax
  unsigned int v15; // ecx
  unsigned int v16; // ebx
  unsigned int v17; // r8d
  __int64 v18; // r9
  __int64 v19; // rdx
  __int64 v20; // rcx
  struct tagPOINT v21; // [rsp+30h] [rbp-28h] BYREF
  struct tagRECT si128; // [rsp+38h] [rbp-20h] BYREF
  unsigned int v23; // [rsp+A0h] [rbp+48h]
  struct CD3DTexture *v24; // [rsp+A8h] [rbp+50h] BYREF
  unsigned int *v25; // [rsp+B0h] [rbp+58h]
  struct CD3DTexture *v26; // [rsp+B8h] [rbp+60h] BYREF

  v25 = a3;
  v26 = 0LL;
  v24 = 0LL;
  Microsoft::WRL::ComPtr<CD3DSurface>::InternalRelease((__int64 *)&v26);
  (*(void (__fastcall **)(_QWORD, struct CD3DTexture **))(**((_QWORD **)a2 + 1) + 232LL))(*((_QWORD *)a2 + 1), &v26);
  Microsoft::WRL::ComPtr<CD3DSurface>::InternalRelease((__int64 *)&v24);
  (*(void (__fastcall **)(_QWORD, struct CD3DTexture **))(**((_QWORD **)this + 1) + 232LL))(*((_QWORD *)this + 1), &v24);
  v6 = *((_DWORD *)this + 6);
  v7 = *((_DWORD *)a2 + 6) + 1;
  v21.x = 0;
  v8 = v6 + 1;
  v21.y = 0;
  v9 = *a3;
  v23 = v7;
  si128 = (struct tagRECT)_mm_load_si128((const __m128i *)&_xmm);
  if ( v9 < v7 )
  {
    v10 = v9 != 0;
    do
    {
      if ( CAtlasTexture::IsInUseEntryInRow(a2, v9) )
      {
        while ( v10 < v8 && !CAtlasTexture::IsFreeEntryInRow(this, v10) )
          ++v10;
        v11 = 0;
        for ( i = v9; CAtlasTexture::IsInUseEntryInRow(a2, i) && CAtlasTexture::IsFreeEntryInRow(this, v13 + i); ++i )
          ++v11;
        if ( !v11 )
          break;
        si128.top = v9;
        si128.bottom = v11 + v9;
        v21.y = v10;
        Device = CAtlasTexture::GetDevice(this);
        CD3DDeviceLevel1::CopyTextureRect(Device, v26, &si128, v24, &v21);
        v15 = v9 == 0;
        if ( v15 < v11 )
        {
          v16 = v9 - v10;
          v17 = v15 + v10;
          v18 = v11 - v15;
          do
          {
            v19 = *(_QWORD *)(*((_QWORD *)a2 + 2) + 8LL * (v16 + v17 - 1));
            v20 = v17 - 1;
            *(_DWORD *)(v19 + 16) = v17++;
            *(_QWORD *)v19 = this;
            *(_QWORD *)(*((_QWORD *)this + 2) + 8 * v20) = v19;
            --*((_DWORD *)this + 7);
            --v18;
          }
          while ( v18 );
        }
        v9 = i;
        v10 += v11;
      }
      else
      {
        ++v9;
      }
    }
    while ( v9 < v23 );
  }
  *v25 = v9;
  Microsoft::WRL::ComPtr<CD3DSurface>::InternalRelease((__int64 *)&v24);
  Microsoft::WRL::ComPtr<CD3DSurface>::InternalRelease((__int64 *)&v26);
}
