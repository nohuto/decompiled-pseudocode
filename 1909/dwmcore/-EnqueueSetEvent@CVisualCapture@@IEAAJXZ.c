/*
 * XREFs of ?EnqueueSetEvent@CVisualCapture@@IEAAJXZ @ 0x1801FBFA0
 * Callers:
 *     ?Render@CVisualCapture@@UEAAJPEA_N@Z @ 0x1801FC560 (-Render@CVisualCapture@@UEAAJPEA_N@Z.c)
 * Callees:
 *     ?GetExistingDevice@CD3DDeviceManager@@QEAAJU_LUID@@PEAPEAVCD3DDeviceLevel1@@@Z @ 0x180053C94 (-GetExistingDevice@CD3DDeviceManager@@QEAAJU_LUID@@PEAPEAVCD3DDeviceLevel1@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800738CC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0230 (_guard_dispatch_icall_nop.c)
 *     ?EnqueueSetEvent@CD3DDeviceLevel1@@QEAAJPEAX@Z @ 0x18015B38C (-EnqueueSetEvent@CD3DDeviceLevel1@@QEAAJPEAX@Z.c)
 *     ?InternalRelease@?$ComPtr@VCD3DDeviceLevel1@@@WRL@Microsoft@@IEAAKXZ @ 0x1801CEBA0 (-InternalRelease@-$ComPtr@VCD3DDeviceLevel1@@@WRL@Microsoft@@IEAAKXZ.c)
 */

__int64 __fastcall CVisualCapture::EnqueueSetEvent(CVisualCapture *this)
{
  HANDLE EventW; // rax
  signed int LastError; // eax
  __int64 v4; // rcx
  int v5; // ebx
  signed int ExistingDevice; // eax
  __int64 v7; // rcx
  unsigned int v9; // [rsp+20h] [rbp-18h]
  struct CD3DDeviceLevel1 *v10; // [rsp+40h] [rbp+8h] BYREF
  struct _LUID v11; // [rsp+48h] [rbp+10h] BYREF

  v10 = 0LL;
  SetLastError(0);
  EventW = CreateEventW(0LL, 1, 0, 0LL);
  *((_QWORD *)this + 54) = EventW;
  if ( EventW )
  {
    ExistingDevice = (*(__int64 (__fastcall **)(_QWORD, struct _LUID *, _QWORD))(***((_QWORD ***)this + 34) + 120LL))(
                       **((_QWORD **)this + 34),
                       &v11,
                       0LL);
    v5 = ExistingDevice;
    if ( ExistingDevice < 0 )
    {
      v9 = 131;
    }
    else
    {
      Microsoft::WRL::ComPtr<CD3DDeviceLevel1>::InternalRelease((__int64 *)&v10);
      ExistingDevice = CD3DDeviceManager::GetExistingDevice((CD3DDeviceManager *)&g_D3DDeviceManager, v11, &v10);
      v5 = ExistingDevice;
      if ( ExistingDevice < 0 )
      {
        v9 = 133;
      }
      else
      {
        ExistingDevice = CD3DDeviceLevel1::EnqueueSetEvent(v10, *((void **)this + 54));
        v5 = ExistingDevice;
        if ( ExistingDevice >= 0 )
          goto LABEL_14;
        v9 = 137;
      }
    }
    MilInstrumentationCheckHR_MaybeFailFast(v7, 0LL, 0, ExistingDevice, v9, 0LL);
    goto LABEL_14;
  }
  LastError = GetLastError();
  v5 = LastError;
  if ( LastError > 0 )
    v5 = (unsigned __int16)LastError | 0x80070000;
  if ( v5 >= 0 )
    v5 = -2003304445;
  MilInstrumentationCheckHR_MaybeFailFast(v4, 0LL, 0, v5, 0x81u, 0LL);
LABEL_14:
  Microsoft::WRL::ComPtr<CD3DDeviceLevel1>::InternalRelease((__int64 *)&v10);
  return (unsigned int)v5;
}
