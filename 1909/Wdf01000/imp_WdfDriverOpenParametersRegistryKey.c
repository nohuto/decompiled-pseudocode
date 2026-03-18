/*
 * XREFs of imp_WdfDriverOpenParametersRegistryKey @ 0x1C000B350
 * Callers:
 *     <none>
 * Callees:
 *     ?FxValidateObjectAttributes@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@K@Z @ 0x1C0004F20 (-FxValidateObjectAttributes@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@K@Z.c)
 *     ?FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@W4_POOL_TYPE@@_KKPEAX@Z @ 0x1C00055A0 (-FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@W4_POOL_TYPE@@_KKPEAX@Z.c)
 *     ?FxCalculateObjectTotalSize2@@YAJPEAU_FX_DRIVER_GLOBALS@@GG_KPEA_K@Z @ 0x1C000A040 (-FxCalculateObjectTotalSize2@@YAJPEAU_FX_DRIVER_GLOBALS@@GG_KPEA_K@Z.c)
 *     ?Construct@FxObject@@AEAAXE@Z @ 0x1C000B640 (-Construct@FxObject@@AEAAXE@Z.c)
 *     ?Commit@FxObject@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAXPEAV1@E@Z @ 0x1C000B6A0 (-Commit@FxObject@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAXPEAV1@E@Z.c)
 *     ?FxVerifierCheckIrqlLevel@@YAJPEAU_FX_DRIVER_GLOBALS@@E@Z @ 0x1C000BB38 (-FxVerifierCheckIrqlLevel@@YAJPEAU_FX_DRIVER_GLOBALS@@E@Z.c)
 *     __security_check_cookie @ 0x1C001A3B0 (__security_check_cookie.c)
 *     memset @ 0x1C001B300 (memset.c)
 *     ?FxObjectHandleGetPtrQI@@YAXPEAVFxObject@@PEAPEAXPEAXGG@Z @ 0x1C0058664 (-FxObjectHandleGetPtrQI@@YAXPEAVFxObject@@PEAPEAXPEAXGG@Z.c)
 *     ?FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z @ 0x1C005B7E4 (-FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z.c)
 *     ?FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z @ 0x1C005B850 (-FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z.c)
 *     ?ClearEvtCallbacks@FxObject@@QEAAXXZ @ 0x1C005C490 (-ClearEvtCallbacks@FxObject@@QEAAXXZ.c)
 */

__int64 __fastcall imp_WdfDriverOpenParametersRegistryKey(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        unsigned __int64 Driver,
        ACCESS_MASK DesiredAccess,
        _WDF_OBJECT_ATTRIBUTES *KeyAttributes,
        WDFKEY__ **Key)
{
  _FX_DRIVER_GLOBALS *DriverName; // rdi
  _FX_DRIVER_GLOBALS *v9; // rcx
  int v10; // r15d
  __int64 v11; // rdx
  FxDriver *v12; // rcx
  _POOL_TYPE v13; // ebx
  unsigned __int64 ContextSizeOverride; // r9
  ULONG Tag; // r15d
  void *Caller; // rax
  _QWORD *v17; // rax
  _QWORD *v18; // rbx
  NTSTATUS v19; // edi
  const _WDF_OBJECT_CONTEXT_TYPE_INFO *ContextTypeInfo; // rax
  const _WDF_OBJECT_CONTEXT_TYPE_INFO *v22; // rax
  unsigned __int64 ContextSize; // r8
  FxAutoRegKey hKey; // [rsp+40h] [rbp-71h] BYREF
  WDFKEY__ *keyHandle; // [rsp+48h] [rbp-69h] BYREF
  FxDriver *pDriver; // [rsp+50h] [rbp-61h] BYREF
  _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+58h] [rbp-59h] BYREF
  _UNICODE_STRING parameters; // [rsp+88h] [rbp-29h] BYREF
  wchar_t parameters_buffer[12]; // [rsp+98h] [rbp-19h] BYREF
  void *retaddr; // [rsp+108h] [rbp+57h]

  DriverName = (_FX_DRIVER_GLOBALS *)DriverGlobals[-8].DriverName;
  hKey.m_Key = 0LL;
  v9 = (_FX_DRIVER_GLOBALS *)DriverGlobals[-8].DriverName;
  if ( !Key )
    FxVerifierNullBugCheck(v9, retaddr);
  *Key = 0LL;
  v10 = FxVerifierCheckIrqlLevel(v9, 0);
  if ( v10 < 0 || (v10 = FxValidateObjectAttributes(DriverName, KeyAttributes, 0), v10 < 0) )
  {
    if ( hKey.m_Key )
      ZwClose(hKey.m_Key);
    return (unsigned int)v10;
  }
  else
  {
    if ( !Driver )
      FxVerifierBugCheckWorker(DriverName, WDF_INVALID_HANDLE, 0LL, 0x1001uLL);
    LOWORD(v11) = 0;
    v12 = (FxDriver *)(~Driver & 0xFFFFFFFFFFFFFFF8uLL);
    if ( (Driver & 1) != 0 )
    {
      v11 = LOWORD(v12->FxNonPagedObject::FxObject::__vftable);
      v12 = (FxDriver *)((char *)v12 - v11);
    }
    if ( v12->m_Type == 4097 )
      pDriver = v12;
    else
      FxObjectHandleGetPtrQI(v12, (void **)&pDriver, (void *)Driver, 0x1001u, v11);
    v13 = ExDefaultNonPagedPoolType;
    ContextSizeOverride = 0LL;
    Tag = DriverName->Tag;
    if ( KeyAttributes )
    {
      ContextTypeInfo = KeyAttributes->ContextTypeInfo;
      if ( ContextTypeInfo )
      {
        ContextSizeOverride = KeyAttributes->ContextSizeOverride;
        if ( !ContextSizeOverride )
          ContextSizeOverride = ContextTypeInfo->ContextSize;
      }
    }
    if ( (int)FxCalculateObjectTotalSize2(DriverName, 0x80u, 0LL, ContextSizeOverride, (unsigned __int64 *)&keyHandle) < 0 )
      goto LABEL_41;
    if ( DriverName->FxPoolTrackingOn )
      Caller = retaddr;
    else
      Caller = 0LL;
    v17 = FxPoolAllocator(DriverName, &DriverName->FxPoolFrameworks, v13, (unsigned __int64)keyHandle, Tag, Caller);
    v18 = v17;
    if ( v17 )
    {
      if ( DriverName->FxVerifierHandle )
      {
        memset(v17, 0, 0x30uLL);
        *((_DWORD *)v18 + 8) = 1146058822;
        v18 += 6;
      }
      v18[17] = 0LL;
      v18[18] = 0LL;
      v18[19] = 0LL;
      v18[20] = 0LL;
      v18[21] = 0LL;
      v18[16] = v18;
      if ( KeyAttributes )
      {
        v22 = KeyAttributes->ContextTypeInfo;
        if ( v22 )
        {
          ContextSize = KeyAttributes->ContextSizeOverride;
          if ( !ContextSize )
            ContextSize = v22->ContextSize;
          memset(v18 + 22, 0, (ContextSize + 7) & 0xFFFFFFFFFFFFFFF8uLL);
          v22 = KeyAttributes->ContextTypeInfo;
        }
        v18[20] = v22;
      }
    }
    if ( v18 )
    {
      *((_DWORD *)v18 + 2) = 8392710;
      *v18 = FxObject::`vftable';
      v18[2] = DriverName;
      v18[7] = 0LL;
      *((_BYTE *)v18 + 48) = 1;
      FxObject::Construct((FxObject *)v18, 0);
      *((_WORD *)v18 + 12) |= 0x11u;
      *v18 = FxRegKey::`vftable';
      v18[13] = 0LL;
      v18[14] = 0LL;
      v18[15] = DriverName;
      v19 = FxObject::Commit((FxObject *)v18, KeyAttributes, (void **)&keyHandle, 0LL, 1u);
      if ( v19 < 0 )
        goto LABEL_40;
      *(_QWORD *)&ObjectAttributes.Length = 48LL;
      ObjectAttributes.ObjectName = &pDriver->m_RegistryPath;
      *(_QWORD *)&ObjectAttributes.Attributes = 576LL;
      ObjectAttributes.RootDirectory = 0LL;
      *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
      v19 = ZwOpenKey(&hKey.m_Key, 0xF003Fu, &ObjectAttributes);
      if ( v19 < 0 )
        goto LABEL_40;
      parameters.Buffer = parameters_buffer;
      ObjectAttributes.RootDirectory = hKey.m_Key;
      wcscpy(parameters_buffer, L"Parameters");
      ObjectAttributes.ObjectName = &parameters;
      *(_QWORD *)&parameters.Length = 1441812LL;
      *(_QWORD *)&ObjectAttributes.Length = 48LL;
      *(_QWORD *)&ObjectAttributes.Attributes = 576LL;
      *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
      v19 = ZwCreateKey((PHANDLE)v18 + 14, DesiredAccess, &ObjectAttributes, 0, 0LL, 0, 0LL);
      if ( v19 < 0 )
      {
LABEL_40:
        FxObject::ClearEvtCallbacks((FxObject *)v18);
        (*(void (__fastcall **)(_QWORD *))(*v18 + 48LL))(v18);
      }
      else
      {
        *Key = keyHandle;
      }
      if ( hKey.m_Key )
        ZwClose(hKey.m_Key);
      return (unsigned int)v19;
    }
    else
    {
LABEL_41:
      if ( hKey.m_Key )
        ZwClose(hKey.m_Key);
      return 3221225626LL;
    }
  }
}
