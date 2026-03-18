/*
 * XREFs of ?Render@CHolographicInteropTarget@@UEAAJPEA_N@Z @ 0x180244270
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800F0230 (_guard_dispatch_icall_nop.c)
 *     ?EnqueueSetEvent@CD3DDeviceLevel1@@QEAAJPEAX@Z @ 0x18015B38C (-EnqueueSetEvent@CD3DDeviceLevel1@@QEAAJPEAX@Z.c)
 *     McTemplateU0 @ 0x18015D418 (McTemplateU0.c)
 *     McTemplateU0xxx @ 0x18016351C (McTemplateU0xxx.c)
 *     McTemplateU0pp @ 0x180164430 (McTemplateU0pp.c)
 *     ?GetStereoscopicContentManager@CComposition@@QEAAPEAUIStereoscopicContentManager@@XZ @ 0x180175FE4 (-GetStereoscopicContentManager@CComposition@@QEAAPEAUIStereoscopicContentManager@@XZ.c)
 *     ?GetTextureAtIndex@CHolographicManager@@QEAAPEAVCHolographicInteropTexture@@I@Z @ 0x180240368 (-GetTextureAtIndex@CHolographicManager@@QEAAPEAVCHolographicInteropTexture@@I@Z.c)
 *     ?RenderTexture@CHolographicInteropTarget@@AEAAJPEAVCHolographicInteropTexture@@II@Z @ 0x180244960 (-RenderTexture@CHolographicInteropTarget@@AEAAJPEAVCHolographicInteropTexture@@II@Z.c)
 *     McTemplateU0xxxx @ 0x180244C30 (McTemplateU0xxxx.c)
 *     ?CacheDirtyRegion@CHolographicInteropTexture@@QEAAXXZ @ 0x1802452A4 (-CacheDirtyRegion@CHolographicInteropTexture@@QEAAXXZ.c)
 *     ?PostMessageW@CHolographicInteropTaskQueue@@QEAA_NIPEAUIUnknown@@PEAX111@Z @ 0x180246EBC (-PostMessageW@CHolographicInteropTaskQueue@@QEAA_NIPEAUIUnknown@@PEAX111@Z.c)
 */

__int64 __fastcall CHolographicInteropTarget::Render(CHolographicInteropTarget *this, bool *a2)
{
  __int64 v2; // rdi
  __int64 v3; // r8
  unsigned int i; // esi
  __int64 v7; // rdx
  __int64 v8; // r8
  struct CHolographicInteropTexture *v9; // r14
  unsigned int v10; // r8d
  unsigned int v11; // r15d
  unsigned int j; // ebp
  __int64 v13; // rsi
  void *v14; // rbp
  void *v15; // r14
  __int64 v16; // r8
  CHolographicInteropTaskQueue *v17; // rcx
  CD3DDeviceLevel1 *v18; // rcx
  unsigned int v19; // esi
  CHolographicInteropTexture *TextureAtIndex; // rax
  LARGE_INTEGER PerformanceCount; // [rsp+70h] [rbp+8h] BYREF

  LODWORD(v2) = 0;
  v3 = qword_18033DD48 + 1;
  *a2 = 0;
  qword_18033DD48 = v3;
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x40000) != 0 )
    McTemplateU0pp((__int64)this, &EVTDESC_HOLOGRAPHICINTEROPTARGET_RENDER, v3, qword_18033DD50);
  if ( (unsigned int)((__int64)(*(_QWORD *)(*((_QWORD *)this + 13) + 152LL) - *(_QWORD *)(*((_QWORD *)this + 13) + 144LL)) >> 3) )
  {
    if ( WaitForSingleObject(*((HANDLE *)this + 19), 0xAu) )
    {
      v19 = 0;
      for ( LODWORD(v2) = (__int64)(*(_QWORD *)(*((_QWORD *)this + 13) + 152LL)
                                  - *(_QWORD *)(*((_QWORD *)this + 13) + 144LL)) >> 3; v19 < (unsigned int)v2; ++v19 )
      {
        TextureAtIndex = CHolographicManager::GetTextureAtIndex(*((RTL_SRWLOCK **)this + 13), v19);
        if ( TextureAtIndex )
          CHolographicInteropTexture::CacheDirtyRegion(TextureAtIndex);
      }
      if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x40000) != 0 )
        McTemplateU0xxx(
          Microsoft_Windows_Dwm_Core_Provider_Context,
          &EVTDESC_HOLOGRAPHICINTEROPTARGET_WAITONINCOMINGFAILED,
          qword_18033DD48,
          qword_18033DD50,
          0LL);
      (*(void (__fastcall **)(_QWORD, _QWORD, __int64))(**(_QWORD **)(*((_QWORD *)this - 6) + 552LL) + 96LL))(
        *(_QWORD *)(*((_QWORD *)this - 6) + 552LL),
        0LL,
        0x8000LL);
    }
    else
    {
      v2 = (__int64)(*(_QWORD *)(*((_QWORD *)this + 13) + 152LL) - *(_QWORD *)(*((_QWORD *)this + 13) + 144LL)) >> 3;
      *a2 = (_DWORD)v2 != 0;
      for ( i = 0; i < (unsigned int)v2; ++i )
      {
        v9 = CHolographicManager::GetTextureAtIndex(*((RTL_SRWLOCK **)this + 13), i);
        if ( v9 )
        {
          v11 = 1;
          if ( CComposition::GetStereoscopicContentManager(*((CComposition **)this - 6), v7, v8) )
            v11 = 2;
          for ( j = 0; j < v11; ++j )
            CHolographicInteropTarget::RenderTexture((CHolographicInteropTarget *)((char *)this - 64), v9, v10, j);
        }
      }
      ++qword_18033DD50;
      v13 = *((_QWORD *)this + 13);
      v14 = (void *)*((_QWORD *)this + 19);
      v15 = (void *)*((_QWORD *)this + 18);
      QueryPerformanceCounter(&PerformanceCount);
      v17 = *(CHolographicInteropTaskQueue **)(v13 + 48);
      if ( v17 && *(_BYTE *)(v13 + 240) )
        CHolographicInteropTaskQueue::PostMessageW(v17, 5u, 0LL, 0LL, v15, v14, (void *)PerformanceCount.QuadPart);
      if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x40000) != 0 )
        McTemplateU0(Microsoft_Windows_Dwm_Core_Provider_Context, &EVTDESC_HOLOGRAPHICINTEROPTARGET_SYNCPOSTED, v16);
      v18 = (CD3DDeviceLevel1 *)*((_QWORD *)this + 14);
      if ( v18 )
        CD3DDeviceLevel1::EnqueueSetEvent(v18, *((void **)this + 18));
    }
  }
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x40000) != 0 )
    McTemplateU0xxxx(
      v2,
      (unsigned int)&EVTDESC_HOLOGRAPHICINTEROPTARGET_RENDERCOMPLETE,
      qword_18033DD48,
      qword_18033DD50,
      qword_18033DD48 - qword_18033DD50,
      v2);
  return 0LL;
}
