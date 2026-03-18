/*
 * XREFs of ?ValidateAdapterLuid@CD3DDeviceManager@@QEAAJU_LUID@@@Z @ 0x1800991F0
 * Callers:
 *     ?ValidateAdapterLuidAndDisplayId@CDisplaySet@@IEBAJU_LUID@@VDisplayId@@@Z @ 0x18002FE28 (-ValidateAdapterLuidAndDisplayId@CDisplaySet@@IEBAJU_LUID@@VDisplayId@@@Z.c)
 *     ?ValidateAdapterLuidAndDisplayId@CD3DDeviceManager@@QEAAJU_LUID@@VDisplayId@@@Z @ 0x180030028 (-ValidateAdapterLuidAndDisplayId@CD3DDeviceManager@@QEAAJU_LUID@@VDisplayId@@@Z.c)
 *     ?CreateSecondaryD2DBitmap@CD3DDeviceManager@@QEAAJU_LUID@@PEAVDWM_TEXTURE2D_DESC@@PEAUD2D1_BITMAP_PROPERTIES1@@PEAW4DXGI_COLOR_SPACE_TYPE@@PEAPEAVCSecondaryD2DBitmap@@@Z @ 0x18009576C (-CreateSecondaryD2DBitmap@CD3DDeviceManager@@QEAAJU_LUID@@PEAVDWM_TEXTURE2D_DESC@@PEAUD2D1_BITMA.c)
 *     ?OpenSharedHandleAsD2DBitmap@CD3DDeviceManager@@UEAAJU_LUID@@PEAX_NW4DXGI_ALPHA_MODE@@W4DXGI_COLOR_SPACE_TYPE@@MMVDisplayId@@PEAPEAVCD2DBitmap@@@Z @ 0x180098CE0 (-OpenSharedHandleAsD2DBitmap@CD3DDeviceManager@@UEAAJU_LUID@@PEAX_NW4DXGI_ALPHA_MODE@@W4DXGI_COL.c)
 * Callees:
 *     ?EnsureDXGIEnumeration@CDisplayManager@@AEAAJPEAPEAVCDXGIEnumeration@@@Z @ 0x180099594 (-EnsureDXGIEnumeration@CDisplayManager@@AEAAJPEAPEAVCDXGIEnumeration@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CD3DDeviceManager::ValidateAdapterLuid(CD3DDeviceManager *this, struct _LUID a2)
{
  DWORD LowPart; // ebx
  int v3; // eax
  unsigned int v4; // ecx
  struct CDXGIEnumeration *v5; // rsi
  unsigned int v6; // edi
  __int64 v7; // rcx
  __int64 *v8; // rdx
  __int64 i; // rax
  unsigned int v11; // ecx
  unsigned int v12; // [rsp+20h] [rbp-18h]
  __int64 **v13; // [rsp+40h] [rbp+8h] BYREF
  struct _LUID v14; // [rsp+48h] [rbp+10h]

  v14 = a2;
  v13 = 0LL;
  LowPart = a2.LowPart;
  v3 = CDisplayManager::EnsureDXGIEnumeration((CDisplayManager *)&g_DisplayManager, (struct CDXGIEnumeration **)&v13);
  v5 = (struct CDXGIEnumeration *)v13;
  v6 = v3;
  if ( v3 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v4, 0LL, 0, v3, 0x548u);
  }
  else
  {
    LODWORD(v7) = 0;
    if ( *((_DWORD *)v13 + 22) )
    {
      v8 = v13[8];
      for ( i = *v8; ; i = v8[v7] )
      {
        if ( __PAIR64__(v14.HighPart, LowPart) == *(_QWORD *)(i + 336) )
        {
          v6 = 0;
          goto LABEL_6;
        }
        v7 = (unsigned int)(v7 + 1);
        if ( (unsigned int)v7 >= *((_DWORD *)v13 + 22) )
          break;
      }
      v12 = 99;
    }
    else
    {
      v12 = 86;
    }
    v6 = -2003304307;
    MilInstrumentationCheckHR_MaybeFailFast(v7, &dword_18024C878, 1u, -2003304307, v12);
    MilInstrumentationCheckHR_MaybeFailFast(v11, 0LL, 0, -2003304307, 0x54Au);
  }
LABEL_6:
  if ( v5 )
    (*(void (__fastcall **)(struct CDXGIEnumeration *))(*(_QWORD *)v5 + 8LL))(v5);
  return v6;
}
