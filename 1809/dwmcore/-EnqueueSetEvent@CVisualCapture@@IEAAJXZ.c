/*
 * XREFs of ?EnqueueSetEvent@CVisualCapture@@IEAAJXZ @ 0x18001C23C
 * Callers:
 *     ?Render@CVisualCapture@@UEAAJPEA_N@Z @ 0x18001C1E0 (-Render@CVisualCapture@@UEAAJPEA_N@Z.c)
 * Callees:
 *     ?EnqueueSetEvent@CD3DDeviceLevel1@@QEAAJPEAX@Z @ 0x18001C304 (-EnqueueSetEvent@CD3DDeviceLevel1@@QEAAJPEAX@Z.c)
 *     ?InternalRelease@?$ComPtr@VCD3DDeviceLevel1@@@WRL@Microsoft@@IEAAKXZ @ 0x18001FBA8 (-InternalRelease@-$ComPtr@VCD3DDeviceLevel1@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?GetExistingDevice@CD3DDeviceManager@@QEAAJU_LUID@@PEAPEAVCD3DDeviceLevel1@@@Z @ 0x180099098 (-GetExistingDevice@CD3DDeviceManager@@QEAAJU_LUID@@PEAPEAVCD3DDeviceLevel1@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CVisualCapture::EnqueueSetEvent(CVisualCapture *this)
{
  HANDLE EventW; // rax
  int ExistingDevice; // eax
  unsigned int v4; // ecx
  signed int v5; // ebx
  signed int LastError; // eax
  int v8; // r9d
  unsigned int v9; // [rsp+20h] [rbp-18h]
  struct CD3DDeviceLevel1 *v10; // [rsp+40h] [rbp+8h] BYREF
  struct _LUID v11; // [rsp+48h] [rbp+10h] BYREF

  v10 = 0LL;
  SetLastError(0);
  EventW = CreateEventW(0LL, 1, 0, 0LL);
  *((_QWORD *)this + 55) = EventW;
  if ( !EventW )
  {
    LastError = GetLastError();
    v5 = LastError;
    if ( LastError > 0 )
      v5 = (unsigned __int16)LastError | 0x80070000;
    v9 = 131;
    if ( v5 >= 0 )
      v5 = -2003304445;
    v8 = v5;
    goto LABEL_15;
  }
  ExistingDevice = (*(__int64 (__fastcall **)(_QWORD, struct _LUID *, _QWORD))(***((_QWORD ***)this + 34) + 120LL))(
                     **((_QWORD **)this + 34),
                     &v11,
                     0LL);
  v5 = ExistingDevice;
  if ( ExistingDevice < 0 )
  {
    v9 = 133;
    goto LABEL_14;
  }
  Microsoft::WRL::ComPtr<CD3DDeviceLevel1>::InternalRelease(&v10);
  ExistingDevice = CD3DDeviceManager::GetExistingDevice((CD3DDeviceManager *)&g_D3DDeviceManager, v11, &v10);
  v5 = ExistingDevice;
  if ( ExistingDevice < 0 )
  {
    v9 = 135;
    goto LABEL_14;
  }
  ExistingDevice = CD3DDeviceLevel1::EnqueueSetEvent(v10, *((void **)this + 55));
  v5 = ExistingDevice;
  if ( ExistingDevice < 0 )
  {
    v9 = 139;
LABEL_14:
    v8 = ExistingDevice;
LABEL_15:
    MilInstrumentationCheckHR_MaybeFailFast(v4, 0LL, 0, v8, v9);
  }
  Microsoft::WRL::ComPtr<CD3DDeviceLevel1>::InternalRelease(&v10);
  return (unsigned int)v5;
}
