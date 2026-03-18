/*
 * XREFs of ?Render@CHolographicInteropTarget@@UEAAJPEA_N@Z @ 0x180210F20
 * Callers:
 *     <none>
 * Callees:
 *     ?EnqueueSetEvent@CD3DDeviceLevel1@@QEAAJPEAX@Z @ 0x18001C304 (-EnqueueSetEvent@CD3DDeviceLevel1@@QEAAJPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 *     McTemplateU0 @ 0x180145780 (McTemplateU0.c)
 *     ?GetStereoscopicContentManager@CComposition@@QEAAPEAVCStereoscopicContentManager@@XZ @ 0x18014B5F0 (-GetStereoscopicContentManager@CComposition@@QEAAPEAVCStereoscopicContentManager@@XZ.c)
 *     McTemplateU0pp @ 0x18014C198 (McTemplateU0pp.c)
 *     McTemplateU0xxx @ 0x1801BA300 (McTemplateU0xxx.c)
 *     ?GetTextureAtIndex@CHolographicManager@@QEAAPEAVCHolographicInteropTexture@@I@Z @ 0x18020B2F4 (-GetTextureAtIndex@CHolographicManager@@QEAAPEAVCHolographicInteropTexture@@I@Z.c)
 *     ?CacheDirtyRegion@CHolographicInteropTexture@@QEAAXXZ @ 0x18020D65C (-CacheDirtyRegion@CHolographicInteropTexture@@QEAAXXZ.c)
 *     ?RenderTexture@CHolographicInteropTarget@@AEAAJPEAVCHolographicInteropTexture@@II@Z @ 0x180211608 (-RenderTexture@CHolographicInteropTarget@@AEAAJPEAVCHolographicInteropTexture@@II@Z.c)
 *     McTemplateU0xxxx @ 0x1802118D0 (McTemplateU0xxxx.c)
 *     ?PostMessageW@CHolographicInteropTaskQueue@@QEAA_NIPEAUIUnknown@@PEAX111@Z @ 0x180211B90 (-PostMessageW@CHolographicInteropTaskQueue@@QEAA_NIPEAUIUnknown@@PEAX111@Z.c)
 */

__int64 __fastcall CHolographicInteropTarget::Render(CHolographicInteropTarget *this, bool *a2)
{
  __int64 v2; // rdi
  __int64 v3; // r8
  DWORD v6; // eax
  __int64 v7; // rcx
  unsigned int i; // esi
  __int64 v9; // rdx
  __int64 v10; // r8
  struct CHolographicInteropTexture *v11; // r14
  unsigned int v12; // r8d
  unsigned int v13; // r15d
  unsigned int j; // ebp
  void *v15; // rbp
  void *v16; // r14
  __int64 v17; // rsi
  __int64 v18; // r8
  CHolographicInteropTaskQueue *v19; // rcx
  CD3DDeviceLevel1 *v20; // rcx
  unsigned int v21; // esi
  CHolographicInteropTexture *TextureAtIndex; // rax
  LARGE_INTEGER PerformanceCount; // [rsp+70h] [rbp+8h] BYREF

  LODWORD(v2) = 0;
  v3 = qword_18030C568 + 1;
  *a2 = 0;
  qword_18030C568 = v3;
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x40000) != 0 )
    McTemplateU0pp((__int64)this, &EVTDESC_HOLOGRAPHICINTEROPTARGET_RENDER, v3, qword_18030C570);
  if ( (unsigned int)((__int64)(*(_QWORD *)(*((_QWORD *)this + 13) + 128LL) - *(_QWORD *)(*((_QWORD *)this + 13) + 120LL)) >> 3) )
  {
    v6 = WaitForSingleObject(*((HANDLE *)this + 19), 0xAu);
    v7 = *((_QWORD *)this + 13);
    if ( v6 )
    {
      v21 = 0;
      for ( LODWORD(v2) = (__int64)(*(_QWORD *)(v7 + 128) - *(_QWORD *)(v7 + 120)) >> 3; v21 < (unsigned int)v2; ++v21 )
      {
        TextureAtIndex = CHolographicManager::GetTextureAtIndex(*((RTL_SRWLOCK **)this + 13), v21);
        if ( TextureAtIndex )
          CHolographicInteropTexture::CacheDirtyRegion(TextureAtIndex);
      }
      if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x40000) != 0 )
        McTemplateU0xxx(
          Microsoft_Windows_Dwm_Core_Provider_Context,
          &EVTDESC_HOLOGRAPHICINTEROPTARGET_WAITONINCOMINGFAILED,
          qword_18030C568,
          qword_18030C570,
          0LL);
      (*(void (__fastcall **)(_QWORD, _QWORD, __int64))(**(_QWORD **)(*((_QWORD *)this - 6) + 536LL) + 104LL))(
        *(_QWORD *)(*((_QWORD *)this - 6) + 536LL),
        0LL,
        0x8000LL);
    }
    else
    {
      v2 = (__int64)(*(_QWORD *)(v7 + 128) - *(_QWORD *)(v7 + 120)) >> 3;
      *a2 = (_DWORD)v2 != 0;
      for ( i = 0; i < (unsigned int)v2; ++i )
      {
        v11 = CHolographicManager::GetTextureAtIndex(*((RTL_SRWLOCK **)this + 13), i);
        if ( v11 )
        {
          v13 = 1;
          if ( CComposition::GetStereoscopicContentManager(*((CComposition **)this - 6), v9, v10) )
            v13 = 2;
          for ( j = 0; j < v13; ++j )
            CHolographicInteropTarget::RenderTexture((CHolographicInteropTarget *)((char *)this - 64), v11, v12, j);
        }
      }
      ++qword_18030C570;
      v15 = (void *)*((_QWORD *)this + 19);
      v16 = (void *)*((_QWORD *)this + 18);
      v17 = *((_QWORD *)this + 13);
      QueryPerformanceCounter(&PerformanceCount);
      v19 = *(CHolographicInteropTaskQueue **)(v17 + 40);
      if ( v19 && *(_BYTE *)(v17 + 216) )
        CHolographicInteropTaskQueue::PostMessageW(v19, 5u, 0LL, 0LL, v16, v15, (void *)PerformanceCount.QuadPart);
      if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x40000) != 0 )
        McTemplateU0(Microsoft_Windows_Dwm_Core_Provider_Context, &EVTDESC_HOLOGRAPHICINTEROPTARGET_SYNCPOSTED, v18);
      v20 = (CD3DDeviceLevel1 *)*((_QWORD *)this + 14);
      if ( v20 )
        CD3DDeviceLevel1::EnqueueSetEvent(v20, *((void **)this + 18));
    }
  }
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x40000) != 0 )
    McTemplateU0xxxx(
      v2,
      (unsigned int)&EVTDESC_HOLOGRAPHICINTEROPTARGET_RENDERCOMPLETE,
      qword_18030C568,
      qword_18030C570,
      qword_18030C568 - qword_18030C570,
      v2);
  return 0LL;
}
