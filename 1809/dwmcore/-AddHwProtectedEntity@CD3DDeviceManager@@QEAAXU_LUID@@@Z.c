/*
 * XREFs of ?AddHwProtectedEntity@CD3DDeviceManager@@QEAAXU_LUID@@@Z @ 0x1801FA6E8
 * Callers:
 *     ?EnsureD2DBitmap@CDxHandleBitmapRealization@@MEAAJXZ @ 0x180098710 (-EnsureD2DBitmap@CDxHandleBitmapRealization@@MEAAJXZ.c)
 *     ?EnsureVidMemOnlyTexture@CDxHandleYUVBitmapRealization@@IEAAJXZ @ 0x180228B14 (-EnsureVidMemOnlyTexture@CDxHandleYUVBitmapRealization@@IEAAJXZ.c)
 * Callees:
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180022680 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x1800EB870 (__security_check_cookie.c)
 *     McTemplateU0qq @ 0x180148FA4 (McTemplateU0qq.c)
 */

void __fastcall CD3DDeviceManager::AddHwProtectedEntity(CD3DDeviceManager *this, struct _LUID a2)
{
  int v2; // edi
  __int64 v3; // r9
  CD3DDeviceManager *v4; // r10
  __int64 v5; // rax
  unsigned int v6; // r8d
  int v7; // ebx
  __int64 v8; // rcx
  __int64 v9; // rdx
  int v10; // eax
  int v11; // r9d
  struct _LUID v12; // [rsp+30h] [rbp-28h] BYREF
  int v13; // [rsp+38h] [rbp-20h]

  v2 = CD3DDeviceManager::s_cHwProtectedEntities;
  v3 = 0LL;
  v4 = this;
  v12 = a2;
  if ( *((_DWORD *)this + 26) )
  {
    this = (CD3DDeviceManager *)*((_QWORD *)this + 10);
    while ( *(_QWORD *)((char *)this + 12 * v3) != __PAIR64__(v12.HighPart, a2.LowPart) )
    {
      v3 = (unsigned int)(v3 + 1);
      if ( (unsigned int)v3 >= *((_DWORD *)v4 + 26) )
        goto LABEL_5;
    }
    ++*((_DWORD *)this + 3 * v3 + 2);
  }
  else
  {
LABEL_5:
    v5 = *((unsigned int *)v4 + 26);
    v12 = a2;
    v13 = 1;
    v6 = v5 + 1;
    v7 = (int)v5 + 1 < (unsigned int)v5 ? 0x80070216 : 0;
    if ( (int)v5 + 1 < (unsigned int)v5 )
    {
      MilInstrumentationCheckHR_MaybeFailFast((__int64)this, 0LL, 0, v7, 0xB5u);
    }
    else if ( v6 > *((_DWORD *)v4 + 25) )
    {
      v10 = DynArrayImpl<0>::AddMultipleAndSet((__int64)v4 + 80, 12, 1, &v12);
      v7 = v10;
      if ( v10 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(v8, 0LL, 0, v10, 0xC0u);
    }
    else
    {
      v8 = *((_QWORD *)v4 + 10);
      v9 = 3 * v5;
      *(struct _LUID *)(v8 + 4 * v9) = v12;
      *(_DWORD *)(v8 + 4 * v9 + 8) = v13;
      *((_DWORD *)v4 + 26) = v6;
    }
    if ( v7 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v8, 0LL, 0, v7, 0x5B1u);
  }
  v11 = ++CD3DDeviceManager::s_cHwProtectedEntities;
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
    McTemplateU0qq(Microsoft_Windows_Dwm_Core_Provider_Context, &EVTDESC_ETWGUID_HW_PROTECTED_ENTITY_CHANGE, v2, v11);
}
