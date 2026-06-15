/*
 * XREFs of ?GetTechnologyByID@CSpatialAudioTechnologies@@QEBAPEBVCSpatialAudioTech@@AEBU_GUID@@@Z @ 0x180124F70
 * Callers:
 *     ?EnumerateSpatialEncoders@CSpatialProperties@@AEAAI_NAEBUSpatialAudioSettings@@IPEBUSpatialAudioEncoderDescriptor@@W4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0003@@W4SpatialRendererSelectionMode@@PEBUtWAVEFORMATEX@@50V?$function@$$A6A_NPEBUWAVEFORMATEXTENSIBLE@@@Z@std@@PEBGPEAU3@AEAK9999PEAU2@@Z @ 0x1800526B0 (-EnumerateSpatialEncoders@CSpatialProperties@@AEAAI_NAEBUSpatialAudioSettings@@IPEBUSpatialAudio.c)
 *     ?SetSpatialAudioSettingsInternal@CSpatialProperties@@AEAAXPEBG_NPEAUIPropertyStore@@PEBUtWAVEFORMATEX@@V?$function@$$A6A_NPEBUWAVEFORMATEXTENSIBLE@@@Z@std@@PEAUWAVEFORMATEXTENSIBLE@@@Z @ 0x1800564A0 (-SetSpatialAudioSettingsInternal@CSpatialProperties@@AEAAXPEBG_NPEAUIPropertyStore@@PEBUtWAVEFOR.c)
 *     ?GetSpatialFormatForAudioFormat@CSpatialProperties@@QEAAJPEBG_NPEBUtWAVEFORMATEX@@PEAUIPropertyStore@@PEAUIPolicyConfig@@V?$function@$$A6A_NPEBUWAVEFORMATEXTENSIBLE@@@Z@std@@PEAUSpatialAudioSettings@@@Z @ 0x180121D18 (-GetSpatialFormatForAudioFormat@CSpatialProperties@@QEAAJPEBG_NPEBUtWAVEFORMATEX@@PEAUIPropertyS.c)
 * Callees:
 *     __security_check_cookie @ 0x180060590 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800688D0 (_guard_dispatch_icall_nop.c)
 */

const struct CSpatialAudioTech *__fastcall CSpatialAudioTechnologies::GetTechnologyByID(
        CSpatialAudioTechnologies *this,
        const struct _GUID *a2)
{
  __int64 v2; // rbx
  _QWORD *v4; // rax
  __int64 v5; // rcx
  _BYTE v7[16]; // [rsp+20h] [rbp-28h] BYREF

  v2 = 0LL;
  if ( !g_ListOfSpatialTech[0] )
    return 0LL;
  while ( 1 )
  {
    v4 = (_QWORD *)(*(__int64 (__fastcall **)(_QWORD, _BYTE *))(**(_QWORD **)&g_ListOfSpatialTech[2 * v2 + 2] + 16LL))(
                     *(_QWORD *)&g_ListOfSpatialTech[2 * v2 + 2],
                     v7);
    v5 = *v4 - *(_QWORD *)&a2->Data1;
    if ( *v4 == *(_QWORD *)&a2->Data1 )
      v5 = v4[1] - *(_QWORD *)a2->Data4;
    if ( !v5 )
      break;
    v2 = (unsigned int)(v2 + 1);
    if ( (unsigned int)v2 >= g_ListOfSpatialTech[0] )
      return 0LL;
  }
  return *(const struct CSpatialAudioTech **)&g_ListOfSpatialTech[2 * v2 + 2];
}
