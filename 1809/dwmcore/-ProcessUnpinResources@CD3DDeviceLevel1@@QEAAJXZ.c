/*
 * XREFs of ?ProcessUnpinResources@CD3DDeviceLevel1@@QEAAJXZ @ 0x18005F350
 * Callers:
 *     ?HandleAdvanceFrame@CD3DDeviceManager@@AEAAJ_N@Z @ 0x180036EE0 (-HandleAdvanceFrame@CD3DDeviceManager@@AEAAJ_N@Z.c)
 *     ??1CD3DDeviceLevel1@@MEAA@XZ @ 0x1800E92D4 (--1CD3DDeviceLevel1@@MEAA@XZ.c)
 * Callees:
 *     ?TranslateDXGIorD3DErrorInContext@@YA_NJW4Enum@DXGIFunctionContext@@PEAJ@Z @ 0x180038C28 (-TranslateDXGIorD3DErrorInContext@@YA_NJW4Enum@DXGIFunctionContext@@PEAJ@Z.c)
 *     ?ShrinkToSize@?$DynArrayImpl@$0A@@@IEAAXI@Z @ 0x180057AF0 (-ShrinkToSize@-$DynArrayImpl@$0A@@@IEAAXI@Z.c)
 *     ?GetAdapterHwProtectedEntityCount@CD3DDeviceManager@@QEBAIU_LUID@@@Z @ 0x18008C7C8 (-GetAdapterHwProtectedEntityCount@CD3DDeviceManager@@QEBAIU_LUID@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 *     ?TempDisableHardwareProtection@CD3DDeviceManager@@SAXXZ @ 0x1801FADD8 (-TempDisableHardwareProtection@CD3DDeviceManager@@SAXXZ.c)
 */

__int64 __fastcall CD3DDeviceLevel1::ProcessUnpinResources(CD3DDeviceLevel1 *this)
{
  __int64 v1; // rsi
  int v3; // ebx
  int v4; // esi
  unsigned int v5; // ecx
  _QWORD *v7; // r14
  int v8; // eax
  unsigned int v9; // ecx
  __int64 v10; // r15
  int v11; // eax
  bool v12; // cl
  int v13; // [rsp+60h] [rbp+8h] BYREF

  v1 = *((unsigned int *)this + 246);
  v3 = 0;
  if ( (_DWORD)v1 )
  {
    v7 = (_QWORD *)((char *)this + 960);
    v8 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD))(**((_QWORD **)this + 74) + 32LL))(
           *((_QWORD *)this + 74),
           *((_QWORD *)this + 120),
           (unsigned int)v1);
    v3 = v8;
    if ( v8 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v9, 0LL, 0, v8, 0xFF5u);
    v10 = 0LL;
    do
    {
      (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(v10 + *v7) + 16LL))(*(_QWORD *)(v10 + *v7));
      v10 += 8LL;
      --v1;
    }
    while ( v1 );
    *((_DWORD *)this + 246) = 0;
    DynArrayImpl<0>::ShrinkToSize((__int64)this + 960, 8u);
  }
  v4 = *((_DWORD *)this + 212);
  if ( v4 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast((unsigned int)this, 0LL, 0, v4, 0x1002u);
  if ( !v3 || v3 >= 0 && v4 < 0 )
    v3 = v4;
  if ( !*((_DWORD *)this + 212) && (v3 == -2005532292 || v3 == -2147024882 || v3 == -2005270523) )
  {
    if ( CD3DDeviceManager::GetAdapterHwProtectedEntityCount(
           (CD3DDeviceManager *)&g_D3DDeviceManager,
           *(struct _LUID *)((char *)this + 712)) )
    {
      if ( v3 == -2005270523 )
      {
        v11 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 79) + 312LL))(*((_QWORD *)this + 79));
        *((_DWORD *)this + 212) = -2003304307;
        v12 = v11 == -2005270480;
      }
      else
      {
        v12 = 1;
      }
      if ( v12 )
        CD3DDeviceManager::TempDisableHardwareProtection();
    }
  }
  if ( v3 >= 0 || *((int *)this + 212) >= 0 )
  {
    if ( TranslateDXGIorD3DErrorInContext(v3, 0, &v13) )
    {
      v3 = v13;
      if ( v13 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(v5, 0LL, 0, v13, 0xD37u);
    }
    if ( v3 == -2003304307 )
      *((_DWORD *)this + 212) = -2003304307;
  }
  else
  {
    return (unsigned int)*((_DWORD *)this + 212);
  }
  return (unsigned int)v3;
}
