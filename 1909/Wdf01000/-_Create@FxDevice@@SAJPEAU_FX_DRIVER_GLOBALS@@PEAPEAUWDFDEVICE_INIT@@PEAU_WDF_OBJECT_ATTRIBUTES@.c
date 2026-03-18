/*
 * XREFs of ?_Create@FxDevice@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAPEAUWDFDEVICE_INIT@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAV1@@Z @ 0x1C0054614
 * Callers:
 *     imp_WdfDeviceCreate @ 0x1C0048DD0 (imp_WdfDeviceCreate.c)
 * Callees:
 *     ?Commit@FxObject@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAXPEAV1@E@Z @ 0x1C000B6A0 (-Commit@FxObject@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAXPEAV1@E@Z.c)
 *     ?FxObjectHandleAlloc@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@W4_POOL_TYPE@@_KKPEAU_WDF_OBJECT_ATTRIBUTES@@GW4FxObjectType@@@Z @ 0x1C0017908 (-FxObjectHandleAlloc@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@W4_POOL_TYPE@@_KKPEAU_WDF_OBJECT_ATTRIBUTES@.c)
 *     ??_GWDFDEVICE_INIT@@QEAAPEAXI@Z @ 0x1C0045478 (--_GWDFDEVICE_INIT@@QEAAPEAXI@Z.c)
 *     ?ControlDeviceInitialize@FxDevice@@QEAAJPEAUWDFDEVICE_INIT@@@Z @ 0x1C0051B00 (-ControlDeviceInitialize@FxDevice@@QEAAJPEAUWDFDEVICE_INIT@@@Z.c)
 *     ?FdoInitialize@FxDevice@@QEAAJPEAUWDFDEVICE_INIT@@@Z @ 0x1C0051F28 (-FdoInitialize@FxDevice@@QEAAJPEAUWDFDEVICE_INIT@@@Z.c)
 *     ?PdoInitialize@FxDevice@@QEAAJPEAUWDFDEVICE_INIT@@@Z @ 0x1C0052360 (-PdoInitialize@FxDevice@@QEAAJPEAUWDFDEVICE_INIT@@@Z.c)
 *     ??0FxDevice@@QEAA@PEAVFxDriver@@@Z @ 0x1C0052B30 (--0FxDevice@@QEAA@PEAVFxDriver@@@Z.c)
 *     ?DeleteDeviceFromFailedCreate@FxDevice@@QEAAJJE@Z @ 0x1C0053314 (-DeleteDeviceFromFailedCreate@FxDevice@@QEAAJJE@Z.c)
 *     ?Initialize@FxDevice@@QEAAJPEAUWDFDEVICE_INIT@@PEAU_WDF_OBJECT_ATTRIBUTES@@@Z @ 0x1C00538E8 (-Initialize@FxDevice@@QEAAJPEAUWDFDEVICE_INIT@@PEAU_WDF_OBJECT_ATTRIBUTES@@@Z.c)
 *     ?_Create@FxDisposeList@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAXPEAPEAV1@@Z @ 0x1C0056FCC (-_Create@FxDisposeList@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAXPEAPEAV1@@Z.c)
 */

__int64 __fastcall FxDevice::_Create(
        _FX_DRIVER_GLOBALS *FxDriverGlobals,
        WDFDEVICE_INIT **DeviceInit,
        _WDF_OBJECT_ATTRIBUTES *DeviceAttributes,
        FxDevice **Device)
{
  __int64 v4; // rdi
  _POOL_TYPE v8; // edx
  FxDevice *v9; // rax
  __int64 v10; // rax
  __int64 v11; // rbx
  int v12; // esi
  int v13; // eax
  int v14; // eax
  int v15; // eax
  __int64 v16; // rax
  _QWORD *v17; // rax
  _QWORD *v18; // rdx
  __int64 v19; // rcx
  _QWORD *i; // rcx
  _QWORD *v21; // rax
  _QWORD *v22; // r9
  __int64 v23; // rcx
  void *object; // [rsp+78h] [rbp+10h] BYREF

  v4 = (__int64)*DeviceInit;
  v8 = ExDefaultNonPagedPoolType;
  *Device = 0LL;
  v9 = (FxDevice *)FxObjectHandleAlloc(FxDriverGlobals, v8, 0x2C0uLL, 0, DeviceAttributes, 0, FxObjectTypeExternal);
  if ( v9 )
  {
    FxDevice::FxDevice(v9, *(FxDriver **)(v4 + 8));
    v11 = v10;
  }
  else
  {
    v11 = 0LL;
  }
  if ( !v11 )
  {
    v12 = -1073741670;
    goto $Done_34;
  }
  v12 = FxDevice::Initialize((FxDevice *)v11, (WDFDEVICE_INIT *)v4, DeviceAttributes);
  if ( v12 < 0 )
  {
LABEL_37:
    FxDevice::DeleteDeviceFromFailedCreate((FxDevice *)v11, v12, 0);
    v11 = 0LL;
    goto $Done_34;
  }
  v13 = *(_DWORD *)(v4 + 36);
  if ( !v13 )
  {
    v15 = FxDevice::FdoInitialize((FxDevice *)v11, (WDFDEVICE_INIT *)v4);
    goto LABEL_13;
  }
  v14 = v13 - 1;
  if ( !v14 )
  {
    v15 = FxDevice::PdoInitialize((FxDevice *)v11, (WDFDEVICE_INIT *)v4);
    goto LABEL_13;
  }
  if ( v14 == 1 )
  {
    v15 = FxDevice::ControlDeviceInitialize((FxDevice *)v11, (WDFDEVICE_INIT *)v4);
LABEL_13:
    v12 = v15;
  }
  if ( v12 < 0 )
    goto LABEL_37;
  v12 = FxDisposeList::_Create(*(_FX_DRIVER_GLOBALS **)(v11 + 16), *(void **)(v11 + 144), (FxDisposeList **)(v11 + 128));
  if ( v12 < 0 )
    goto LABEL_37;
  v12 = FxObject::Commit(
          (FxObject *)v11,
          (_FX_DRIVER_GLOBALS *)DeviceAttributes,
          &object,
          *(FxObject **)(v11 + 136),
          1u);
  if ( v12 < 0 )
    goto LABEL_37;
  v16 = *(_QWORD *)(v4 + 48);
  if ( v16 )
  {
    *(_OWORD *)(v11 + 232) = *(_OWORD *)(v16 + 104);
    *(_QWORD *)(v16 + 104) = 0LL;
    *(_QWORD *)(v16 + 112) = 0LL;
  }
  v17 = *(_QWORD **)(v4 + 264);
  if ( v17 )
  {
    v18 = *(_QWORD **)(v11 + 376);
    if ( *v18 != v11 + 368 )
LABEL_36:
      __fastfail(3u);
    *v17 = v11 + 368;
    v17[1] = v18;
    *v18 = v17;
    *(_QWORD *)(v11 + 376) = v17;
    *(_QWORD *)(v4 + 264) = 0LL;
    ++*(_BYTE *)(*(_QWORD *)(v11 + 144) + 76LL);
  }
  v19 = *(_QWORD *)(v11 + 144);
  if ( (*(_DWORD *)(v19 + 368) & 1) != 0 )
    ++*(_BYTE *)(v19 + 76);
  if ( *(_BYTE *)(v11 + 282) )
    ++*(_BYTE *)(*(_QWORD *)(v11 + 144) + 76LL);
  for ( i = *(_QWORD **)(v4 + 920); i != (_QWORD *)(v4 + 920); i = (_QWORD *)*i )
  {
    v21 = (_QWORD *)i[4];
    if ( v21 )
    {
      v22 = *(_QWORD **)(v11 + 376);
      if ( *v22 != v11 + 368 )
        goto LABEL_36;
      *v21 = v11 + 368;
      v21[1] = v22;
      *v22 = v21;
      *(_QWORD *)(v11 + 376) = v21;
      i[4] = 0LL;
      ++*(_BYTE *)(*(_QWORD *)(v11 + 144) + 76LL);
    }
  }
  v23 = *(_QWORD *)(v11 + 648);
  if ( v23 )
    (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v23 + 216LL))(v23, v4);
  *(_QWORD *)(v4 + 16) = v11;
  *DeviceInit = 0LL;
  if ( !*(_BYTE *)(v4 + 24) )
    WDFDEVICE_INIT::`scalar deleting destructor'((WDFDEVICE_INIT *)v4);
$Done_34:
  *Device = (FxDevice *)v11;
  return (unsigned int)v12;
}
