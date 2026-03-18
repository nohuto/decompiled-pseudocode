/*
 * XREFs of ?Initialize@CHolographicInteropTarget@@QEAAJPEAU_LUID@@@Z @ 0x180245710
 * Callers:
 *     ?Create@CHolographicInteropTarget@@SAJPEAVCComposition@@PEAU_LUID@@PEAPEAV1@@Z @ 0x1802455BC (-Create@CHolographicInteropTarget@@SAJPEAVCComposition@@PEAU_LUID@@PEAPEAV1@@Z.c)
 * Callees:
 *     ?GetD3DDevice@CD3DDeviceManager@@QEAAJU_LUID@@PEAPEAVCD3DDeviceLevel1@@@Z @ 0x18003FF88 (-GetD3DDevice@CD3DDeviceManager@@QEAAJU_LUID@@PEAPEAVCD3DDeviceLevel1@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800969E0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?InternalRelease@?$ComPtr@VCD3DDeviceLevel1@@@WRL@Microsoft@@IEAAKXZ @ 0x1801D0340 (-InternalRelease@-$ComPtr@VCD3DDeviceLevel1@@@WRL@Microsoft@@IEAAKXZ.c)
 */

__int64 __fastcall CHolographicInteropTarget::Initialize(CHolographicInteropTarget *this, struct _LUID *a2)
{
  __int64 v4; // r8
  unsigned int v5; // ebx
  _QWORD *v6; // rsi
  int v7; // edi
  HANDLE Event; // rax
  __int64 v9; // rcx
  HANDLE v10; // rax
  bool v11; // zf
  signed int D3DDevice; // eax
  __int64 v13; // rcx
  unsigned int v15; // [rsp+20h] [rbp-18h]

  v4 = *(_QWORD *)(*((_QWORD *)this + 2) + 112LL);
  *((_QWORD *)this + 21) = v4;
  if ( !v4 )
  {
    v5 = -2147418113;
    MilInstrumentationCheckHR_MaybeFailFast((__int64)this, 0LL, 0, 0x8000FFFF, 0x4Au, 0LL);
    return v5;
  }
  *((_DWORD *)this + 47) = 87;
  v6 = (_QWORD *)((char *)this + 208);
  v7 = 0;
  do
  {
    Event = CreateEventExW(0LL, 0LL, 0, 0x1F0003u);
    *v6 = Event;
    if ( !Event )
    {
      v15 = 82;
      goto LABEL_11;
    }
    v10 = CreateEventExW(0LL, 0LL, 2u, 0x1F0003u);
    v11 = *v6 == 0LL;
    v6[1] = v10;
    if ( v11 )
    {
      v15 = 84;
LABEL_11:
      v5 = -2147024882;
      MilInstrumentationCheckHR_MaybeFailFast(v9, 0LL, 0, 0x8007000E, v15, 0LL);
      return v5;
    }
    ++v7;
    ++v6;
  }
  while ( !v7 );
  Microsoft::WRL::ComPtr<CD3DDeviceLevel1>::InternalRelease((__int64 *)this + 22);
  D3DDevice = CD3DDeviceManager::GetD3DDevice(
                (CD3DDeviceManager *)&g_D3DDeviceManager,
                *a2,
                (struct CD3DDeviceLevel1 **)this + 22);
  v5 = D3DDevice;
  if ( D3DDevice < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(v13, 0LL, 0, D3DDevice, 0x59u, 0LL);
  return v5;
}
