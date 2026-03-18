/*
 * XREFs of ?ValidateAdapterLuid@CD3DDeviceManager@@QEAAJU_LUID@@@Z @ 0x180054650
 * Callers:
 *     ?CreateSecondaryD2DBitmap@CD3DDeviceManager@@QEAAJU_LUID@@PEAVDWM_TEXTURE2D_DESC@@PEAUD2D1_BITMAP_PROPERTIES1@@PEAW4DXGI_COLOR_SPACE_TYPE@@PEAPEAVCSecondaryD2DBitmap@@@Z @ 0x18004EAA0 (-CreateSecondaryD2DBitmap@CD3DDeviceManager@@QEAAJU_LUID@@PEAVDWM_TEXTURE2D_DESC@@PEAUD2D1_BITMA.c)
 *     ?OpenSharedHandleAsD2DBitmap@CD3DDeviceManager@@UEAAJU_LUID@@PEAX_NW4DXGI_ALPHA_MODE@@W4DXGI_COLOR_SPACE_TYPE@@MMVDisplayId@@PEAPEAVCD2DBitmap@@@Z @ 0x180053870 (-OpenSharedHandleAsD2DBitmap@CD3DDeviceManager@@UEAAJU_LUID@@PEAX_NW4DXGI_ALPHA_MODE@@W4DXGI_COL.c)
 *     ?ValidateAdapterLuidAndDisplayId@CD3DDeviceManager@@QEAAJU_LUID@@VDisplayId@@@Z @ 0x180053E90 (-ValidateAdapterLuidAndDisplayId@CD3DDeviceManager@@QEAAJU_LUID@@VDisplayId@@@Z.c)
 *     ?ValidateAdapterLuidAndDisplayId@CDisplaySet@@IEBAJU_LUID@@VDisplayId@@@Z @ 0x180053F50 (-ValidateAdapterLuidAndDisplayId@CDisplaySet@@IEBAJU_LUID@@VDisplayId@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800738CC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 */

__int64 __fastcall CD3DDeviceManager::ValidateAdapterLuid(CD3DDeviceManager *this, struct _LUID a2)
{
  unsigned int v2; // r8d
  __int64 v3; // rcx
  __int64 *v4; // r9
  __int64 i; // rax
  unsigned int v6; // ebx
  unsigned int v8; // ecx
  unsigned int v9; // [rsp+20h] [rbp-18h]

  if ( qword_180339CF8 )
  {
    v2 = *((_DWORD *)qword_180339CF8 + 22);
    LODWORD(v3) = 0;
    if ( v2 )
    {
      v4 = (__int64 *)*((_QWORD *)qword_180339CF8 + 8);
      for ( i = *v4; ; i = v4[v3] )
      {
        if ( a2 == *(_QWORD *)(i + 336) )
          return 0;
        v3 = (unsigned int)(v3 + 1);
        if ( (unsigned int)v3 >= v2 )
          break;
      }
      v9 = 97;
    }
    else
    {
      v9 = 84;
    }
    v6 = -2003304307;
    MilInstrumentationCheckHR_MaybeFailFast(v3, &dword_180280CA0, 1u, -2003304307, v9, 0LL);
    MilInstrumentationCheckHR_MaybeFailFast(v8, 0LL, 0, -2003304307, 0x544u, 0LL);
  }
  else
  {
    v6 = -2003304291;
    MilInstrumentationCheckHR_MaybeFailFast((unsigned int)this, 0LL, 0, -2003304291, 0x541u, 0LL);
  }
  return v6;
}
