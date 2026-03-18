/*
 * XREFs of ?AddHwProtectedEntity@CD3DDeviceManager@@QEAAXU_LUID@@@Z @ 0x18015EF4C
 * Callers:
 *     ?EnsureD2DBitmap@CDxHandleBitmapRealization@@MEAAJXZ @ 0x18003EEE0 (-EnsureD2DBitmap@CDxHandleBitmapRealization@@MEAAJXZ.c)
 *     ?EnsureVidMemOnlyTexture@CDxHandleYUVBitmapRealization@@IEAAJXZ @ 0x180263D44 (-EnsureVidMemOnlyTexture@CDxHandleYUVBitmapRealization@@IEAAJXZ.c)
 * Callees:
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x18008D2DC (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800969E0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     __security_check_cookie @ 0x1800E6FB0 (__security_check_cookie.c)
 *     McTemplateU0qq @ 0x18015F794 (McTemplateU0qq.c)
 */

void __fastcall CD3DDeviceManager::AddHwProtectedEntity(__int64 this, struct _LUID a2)
{
  unsigned int v2; // r9d
  __int64 v3; // r10
  __int64 v4; // r11
  unsigned int v5; // edi
  __int64 v6; // r8
  __int64 v7; // rax
  unsigned int v8; // r8d
  signed int v9; // ebx
  __int64 v10; // rcx
  __int64 v11; // rcx
  __int64 v12; // rdx
  signed int v13; // eax
  __int64 v14; // r9
  struct _LUID v15; // [rsp+30h] [rbp-28h] BYREF
  int v16; // [rsp+38h] [rbp-20h]

  v2 = CD3DDeviceManager::s_cHwProtectedEntities;
  v3 = 0LL;
  v4 = this;
  v15 = a2;
  v5 = CD3DDeviceManager::s_cHwProtectedEntities;
  if ( *(_DWORD *)(this + 104) )
  {
    v6 = *(_QWORD *)(this + 80);
    while ( 1 )
    {
      this = 3 * v3;
      if ( *(_QWORD *)(v6 + 12 * v3) == __PAIR64__(v15.HighPart, a2.LowPart) )
        break;
      v3 = (unsigned int)(v3 + 1);
      if ( (unsigned int)v3 >= *(_DWORD *)(v4 + 104) )
        goto LABEL_5;
    }
    ++*(_DWORD *)(v6 + 12 * v3 + 8);
  }
  else
  {
LABEL_5:
    v7 = *(unsigned int *)(v4 + 104);
    v15 = a2;
    v16 = 1;
    v8 = v7 + 1;
    if ( (int)v7 + 1 >= (unsigned int)v7 )
    {
      if ( v8 <= *(_DWORD *)(v4 + 100) )
      {
        v11 = *(_QWORD *)(v4 + 80);
        v12 = 3 * v7;
        *(struct _LUID *)(v11 + 4 * v12) = v15;
        *(_DWORD *)(v11 + 4 * v12 + 8) = v16;
        *(_DWORD *)(v4 + 104) = v8;
        goto LABEL_15;
      }
      v13 = DynArrayImpl<0>::AddMultipleAndSet(v4 + 80, 12, 1, &v15);
      v9 = v13;
      if ( v13 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(v10, 0LL, 0, v13, 0xC3u, 0LL);
    }
    else
    {
      v9 = -2147024362;
      MilInstrumentationCheckHR_MaybeFailFast(this, 0LL, 0, 0x80070216, 0xB8u, 0LL);
    }
    if ( v9 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v10, 0LL, 0, v9, 0x5A5u, 0LL);
    v2 = CD3DDeviceManager::s_cHwProtectedEntities;
  }
LABEL_15:
  v14 = v2 + 1;
  CD3DDeviceManager::s_cHwProtectedEntities = v14;
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
    McTemplateU0qq(Microsoft_Windows_Dwm_Core_Provider_Context, &EVTDESC_ETWGUID_HW_PROTECTED_ENTITY_CHANGE, v5, v14);
}
