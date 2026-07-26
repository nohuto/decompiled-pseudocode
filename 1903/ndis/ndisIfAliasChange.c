/*
 * XREFs of ndisIfAliasChange @ 0x1C0067650
 * Callers:
 *     ndisHandleUModePnPOp @ 0x1C001CB74 (ndisHandleUModePnPOp.c)
 * Callees:
 *     NdisReferenceWithTag @ 0x1C0006160 (NdisReferenceWithTag.c)
 *     ?IFBLOCK_DECREMENT_REF@@YAXPEAU_NDIS_IF_BLOCK@@W4_NDIS_IF_REFTAG@@@Z @ 0x1C001B4E4 (-IFBLOCK_DECREMENT_REF@@YAXPEAU_NDIS_IF_BLOCK@@W4_NDIS_IF_REFTAG@@@Z.c)
 *     WPP_RECORDER_SF_D @ 0x1C0032368 (WPP_RECORDER_SF_D.c)
 *     ndisIfFindInterfaceByInterfaceGuid @ 0x1C003EABC (ndisIfFindInterfaceByInterfaceGuid.c)
 *     __security_check_cookie @ 0x1C0040770 (__security_check_cookie.c)
 *     memmove @ 0x1C0041100 (memmove.c)
 *     WPP_RECORDER_SF_ZZ @ 0x1C0066B14 (WPP_RECORDER_SF_ZZ.c)
 *     ?ndisNsiNotifyClientInterfaceChange@@YAXPEAU_NDIS_IF_BLOCK@@W4_NSI_NOTIFICATION@@PEAU_NSI_SINGLE_PARAM_DESC@@W4_NDIS_NSI_OBJECT_INDEX@@@Z @ 0x1C00FF488 (-ndisNsiNotifyClientInterfaceChange@@YAXPEAU_NDIS_IF_BLOCK@@W4_NSI_NOTIFICATION@@PEAU_NSI_SINGLE.c)
 *     ?ndisIfUpdatePersistedInterfaceInfo@@YAHPEAEKK0@Z @ 0x1C011423C (-ndisIfUpdatePersistedInterfaceInfo@@YAHPEAEKK0@Z.c)
 */

__int64 __fastcall ndisIfAliasChange(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned __int16 v6; // ax
  int v7; // edx
  NTSTATUS v8; // edi
  KIRQL v9; // bl
  struct _LIST_ENTRY *InterfaceByInterfaceGuid; // rax
  struct _LIST_ENTRY *v11; // rsi
  unsigned __int8 *v12; // r15
  unsigned __int16 v13; // ax
  struct _NDIS_REFCOUNT_BLOCK *Blink; // rcx
  KIRQL v15; // bl
  int v17; // [rsp+20h] [rbp-60h]
  UNICODE_STRING GuidString; // [rsp+40h] [rbp-40h] BYREF
  _DWORD v19[2]; // [rsp+50h] [rbp-30h] BYREF
  unsigned __int8 *v20; // [rsp+58h] [rbp-28h]
  int v21; // [rsp+60h] [rbp-20h]
  int v22; // [rsp+64h] [rbp-1Ch]
  GUID Guid; // [rsp+68h] [rbp-18h] BYREF

  *(_QWORD *)&Guid.Data1 = 0LL;
  *(_QWORD *)Guid.Data4 = 0LL;
  *(_DWORD *)(&GuidString.MaximumLength + 1) = 0;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_ZZ(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      a2,
      a3,
      a4,
      v17,
      (unsigned __int16 *)a1,
      (unsigned __int16 *)a2);
  v6 = *(_WORD *)a1 - ndisDeviceStr.Length;
  GuidString.Buffer = (wchar_t *)(*(_QWORD *)(a1 + 8) + 2 * ((unsigned __int64)ndisDeviceStr.Length >> 1));
  GuidString.Length = v6;
  GuidString.MaximumLength = v6 + 2;
  v8 = RtlGUIDFromString(&GuidString, &Guid);
  if ( v8 >= 0 )
  {
    v9 = KeAcquireSpinLockRaiseToDpc(&ndisIfListLock);
    InterfaceByInterfaceGuid = ndisIfFindInterfaceByInterfaceGuid(&Guid);
    v11 = InterfaceByInterfaceGuid;
    if ( InterfaceByInterfaceGuid )
    {
      v12 = (unsigned __int8 *)&InterfaceByInterfaceGuid[37].Flink + 4;
      v13 = 512;
      if ( *(_WORD *)a2 <= 0x200u )
        v13 = *(_WORD *)a2;
      *(_WORD *)v12 = v13;
      memmove((char *)&v11[37].Flink + 6, *(const void **)(a2 + 8), v13);
      Blink = (struct _NDIS_REFCOUNT_BLOCK *)v11[89].Blink;
      v19[1] = 0;
      v19[0] = 0;
      v21 = 516;
      v20 = v12;
      v22 = 20;
      NdisReferenceWithTag(Blink, 0xBu);
      ++LODWORD(v11[81].Blink);
      KeReleaseSpinLock(&ndisIfListLock, v9);
      ndisIfUpdatePersistedInterfaceInfo((unsigned __int8 *)&v11[82], 0x204u, 4u, v12);
      ndisNsiNotifyClientInterfaceChange(v11, 0LL, v19);
      v15 = KeAcquireSpinLockRaiseToDpc(&ndisIfListLock);
      IFBLOCK_DECREMENT_REF((char *)v11, 0xBu);
      KeReleaseSpinLock(&ndisIfListLock, v15);
    }
    else
    {
      KeReleaseSpinLock(&ndisIfListLock, v9);
      v8 = -1073741772;
    }
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v7) = 4;
    WPP_RECORDER_SF_D(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v7,
      22,
      162,
      (struct _GUID *)&WPP_ce927dcef9c335b55d94e8cd1be1c2f8_Traceguids,
      v8);
  }
  return (unsigned int)v8;
}
