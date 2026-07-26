/*
 * XREFs of ndisHandleBindNotification @ 0x1C00EA7D4
 * Callers:
 *     ndisHandleUModePnPOp @ 0x1C00CBC50 (ndisHandleUModePnPOp.c)
 * Callees:
 *     ndisDereferenceMiniport @ 0x1C0009DEC (ndisDereferenceMiniport.c)
 *     __security_check_cookie @ 0x1C0026050 (__security_check_cookie.c)
 *     WPP_SF_Z @ 0x1C0041A88 (WPP_SF_Z.c)
 *     ndisReferenceMiniportByGuid @ 0x1C0050B94 (ndisReferenceMiniportByGuid.c)
 *     ?Reload@BindRegistry@Ndis@@YAJPEAU_NDIS_MINIPORT_BLOCK@@W4Flags@ReadBindingsOptions@2@@Z @ 0x1C00BDF78 (-Reload@BindRegistry@Ndis@@YAJPEAU_NDIS_MINIPORT_BLOCK@@W4Flags@ReadBindingsOptions@2@@Z.c)
 *     ndisReferenceMiniportByName @ 0x1C010A008 (ndisReferenceMiniportByName.c)
 */

__int64 __fastcall ndisHandleBindNotification(PCUNICODE_STRING SourceString)
{
  wchar_t *v2; // rax
  NTSTATUS v3; // esi
  struct _NDIS_MINIPORT_BLOCK *v4; // rbx
  enum Ndis::ReadBindingsOptions::Flags v5; // r8d
  UNICODE_STRING GuidString; // [rsp+20h] [rbp-38h] BYREF
  GUID Guid; // [rsp+30h] [rbp-28h] BYREF

  *(_QWORD *)&GuidString.Length = 0LL;
  if ( (unsigned __int8)byte_1C00A0255 >= 4u )
    WPP_SF_Z(0x1Au, &WPP_5d6c07f306e13ea2a30515e9b6bd8675_Traceguids, &SourceString->Length);
  ndisReferenceMiniportByName(SourceString);
  if ( SourceString->Length > 0x10u
    && (v2 = SourceString->Buffer + 8,
        GuidString.Length = SourceString->Length - 16,
        GuidString.Buffer = v2,
        GuidString.MaximumLength = SourceString->MaximumLength - 16,
        v3 = RtlGUIDFromString(&GuidString, &Guid),
        v3 >= 0)
    && (v4 = (struct _NDIS_MINIPORT_BLOCK *)ndisReferenceMiniportByGuid(&Guid)) != 0LL )
  {
    Ndis::BindRegistry::Reload(v4, 0LL, v5);
    ndisDereferenceMiniport((__int64)v4, 0x2Fu);
  }
  else
  {
    v3 = -1073741772;
  }
  if ( (unsigned __int8)byte_1C00A0255 >= 4u )
    WPP_SF_Z(0x1Bu, &WPP_5d6c07f306e13ea2a30515e9b6bd8675_Traceguids, &SourceString->Length);
  return (unsigned int)v3;
}
