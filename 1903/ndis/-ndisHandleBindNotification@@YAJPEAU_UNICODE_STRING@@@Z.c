/*
 * XREFs of ?ndisHandleBindNotification@@YAJPEAU_UNICODE_STRING@@@Z @ 0x1C0115A34
 * Callers:
 *     ndisHandleUModePnPOp @ 0x1C001CB74 (ndisHandleUModePnPOp.c)
 * Callees:
 *     ndisDereferenceMiniport @ 0x1C000286C (ndisDereferenceMiniport.c)
 *     WPP_RECORDER_SF_Z @ 0x1C001973C (WPP_RECORDER_SF_Z.c)
 *     __security_check_cookie @ 0x1C0040770 (__security_check_cookie.c)
 *     ?ndisReferenceMiniportByGuid@@YAPEAU_NDIS_MINIPORT_BLOCK@@AEBU_GUID@@W4_NDIS_MP_REFTAG@@@Z @ 0x1C007CE60 (-ndisReferenceMiniportByGuid@@YAPEAU_NDIS_MINIPORT_BLOCK@@AEBU_GUID@@W4_NDIS_MP_REFTAG@@@Z.c)
 *     ?Reload@BindRegistry@Ndis@@YAJPEAU_NDIS_MINIPORT_BLOCK@@W4Flags@ReadBindingsOptions@2@@Z @ 0x1C01080E0 (-Reload@BindRegistry@Ndis@@YAJPEAU_NDIS_MINIPORT_BLOCK@@W4Flags@ReadBindingsOptions@2@@Z.c)
 *     ndisReferenceMiniportByName @ 0x1C012B290 (ndisReferenceMiniportByName.c)
 */

__int64 __fastcall ndisHandleBindNotification(struct _UNICODE_STRING *a1)
{
  unsigned __int16 Length; // cx
  wchar_t *v3; // rax
  NTSTATUS v4; // esi
  Ndis::BindRegistry *v5; // rbx
  enum Ndis::ReadBindingsOptions::Flags v6; // r8d
  UNICODE_STRING GuidString; // [rsp+30h] [rbp-30h] BYREF
  GUID Guid; // [rsp+40h] [rbp-20h] BYREF

  *(_QWORD *)&GuidString.Length = 0LL;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_Z(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      6u,
      0x1Au,
      (struct _GUID *)&WPP_34b7afbc912539598d6d69098c3d2070_Traceguids,
      &a1->Length);
  ndisReferenceMiniportByName((__int64)a1);
  Length = a1->Length;
  if ( a1->Length <= 0x10u )
    goto LABEL_6;
  *(_DWORD *)(&GuidString.MaximumLength + 1) = 0;
  *(_QWORD *)&Guid.Data1 = 0LL;
  *(_QWORD *)Guid.Data4 = 0LL;
  v3 = a1->Buffer + 8;
  GuidString.Length = Length - 16;
  GuidString.Buffer = v3;
  GuidString.MaximumLength = a1->MaximumLength - 16;
  v4 = RtlGUIDFromString(&GuidString, &Guid);
  if ( v4 < 0 )
    goto LABEL_6;
  v5 = (Ndis::BindRegistry *)ndisReferenceMiniportByGuid(&Guid, MPREF_PT_BINDNOTIFY);
  if ( v5 )
  {
    Ndis::BindRegistry::Reload(v5, 0LL, v6);
    ndisDereferenceMiniport((__int64)v5, 0x2Fu);
  }
  else
  {
LABEL_6:
    v4 = -1073741772;
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_Z(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      6u,
      0x1Bu,
      (struct _GUID *)&WPP_34b7afbc912539598d6d69098c3d2070_Traceguids,
      &a1->Length);
  return (unsigned int)v4;
}
