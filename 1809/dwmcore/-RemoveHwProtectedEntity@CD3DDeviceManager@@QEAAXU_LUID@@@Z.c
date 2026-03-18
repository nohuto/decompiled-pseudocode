/*
 * XREFs of ?RemoveHwProtectedEntity@CD3DDeviceManager@@QEAAXU_LUID@@@Z @ 0x1801FAC90
 * Callers:
 *     ?ReleaseD2DBitmap@CDxHandleBitmapRealization@@MEAAXXZ @ 0x18009B5E0 (-ReleaseD2DBitmap@CDxHandleBitmapRealization@@MEAAXXZ.c)
 *     ?ReleaseVidMemOnlyTexture@CDxHandleYUVBitmapRealization@@IEAAXXZ @ 0x180229524 (-ReleaseVidMemOnlyTexture@CDxHandleYUVBitmapRealization@@IEAAXXZ.c)
 * Callees:
 *     ?IsHardwareProtectionDisabled@CD3DDeviceManager@@SA_NXZ @ 0x18008C7F4 (-IsHardwareProtectionDisabled@CD3DDeviceManager@@SA_NXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     McTemplateU0d @ 0x180147BF8 (McTemplateU0d.c)
 *     McTemplateU0qq @ 0x180148FA4 (McTemplateU0qq.c)
 */

void __fastcall CD3DDeviceManager::RemoveHwProtectedEntity(CD3DDeviceManager *this, struct _LUID a2)
{
  unsigned int v2; // r9d
  __int64 v3; // r10
  int v5; // edi
  __int64 v6; // r8
  __int64 v7; // rbx
  __int64 v8; // rcx
  __int64 v9; // rax
  int v10; // r9d
  bool v11; // r9
  char IsHardwareProtectionDisabled; // al
  char v13; // cl
  char v14; // dl

  v2 = CD3DDeviceManager::s_cHwProtectedEntities;
  v3 = 0LL;
  v5 = CD3DDeviceManager::s_cHwProtectedEntities;
  if ( *((_DWORD *)this + 26) )
  {
    v6 = *((_QWORD *)this + 10);
    while ( *(_QWORD *)(v6 + 12 * v3) != a2 )
    {
      v3 = (unsigned int)(v3 + 1);
      if ( (unsigned int)v3 >= *((_DWORD *)this + 26) )
        goto LABEL_12;
    }
    --*(_DWORD *)(v6 + 12 * v3 + 8);
    v7 = *((_QWORD *)this + 10);
    if ( !*(_DWORD *)(v7 + 12 * v3 + 8) )
    {
      v8 = *((unsigned int *)this + 26);
      if ( (unsigned int)v3 < (unsigned int)v8 )
      {
        for ( ; (unsigned int)v3 < (int)v8 - 1; LODWORD(v8) = *((_DWORD *)this + 26) )
        {
          v9 = (unsigned int)v3;
          LODWORD(v3) = v3 + 1;
          v8 = 3 * v9;
          LODWORD(v9) = *(_DWORD *)(v7 + 12LL * (unsigned int)v3 + 8);
          *(_QWORD *)(v7 + 4 * v8) = *(_QWORD *)(v7 + 12LL * (unsigned int)v3);
          *(_DWORD *)(v7 + 4 * v8 + 8) = v9;
        }
        *((_DWORD *)this + 26) = v8 - 1;
      }
      else
      {
        MilInstrumentationCheckHR_MaybeFailFast(v8, 0LL, 0, -2147024809, 0x19Cu);
        v2 = CD3DDeviceManager::s_cHwProtectedEntities;
      }
    }
  }
LABEL_12:
  v10 = v2 - 1;
  CD3DDeviceManager::s_cHwProtectedEntities = v10;
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
  {
    McTemplateU0qq(Microsoft_Windows_Dwm_Core_Provider_Context, &EVTDESC_ETWGUID_HW_PROTECTED_ENTITY_CHANGE, v5, v10);
    v10 = CD3DDeviceManager::s_cHwProtectedEntities;
  }
  if ( !v10 )
  {
    CD3DDeviceManager::IsHardwareProtectionDisabled();
    CD3DDeviceManager::s_bHwProtectionTempDisabled = v11;
    IsHardwareProtectionDisabled = CD3DDeviceManager::IsHardwareProtectionDisabled();
    if ( v14 != IsHardwareProtectionDisabled && (v13 & 0x20) != 0 )
      McTemplateU0d(Microsoft_Windows_Dwm_Core_Provider_Context, &EVTDESC_ETWGUID_HW_PROTECTION_TEMPDISABLE, 0LL);
  }
}
