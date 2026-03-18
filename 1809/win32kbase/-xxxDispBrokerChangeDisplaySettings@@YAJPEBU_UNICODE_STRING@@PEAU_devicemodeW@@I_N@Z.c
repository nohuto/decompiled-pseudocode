/*
 * XREFs of ?xxxDispBrokerChangeDisplaySettings@@YAJPEBU_UNICODE_STRING@@PEAU_devicemodeW@@I_N@Z @ 0x1C00E100C
 * Callers:
 *     ?xxxUserChangeDisplaySettingsInternal@@YAJPEAU_UNICODE_STRING@@PEAU_devicemodeW@@PEAUtagDESKTOP@@KPEAXW4_MODE@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C004B98C (-xxxUserChangeDisplaySettingsInternal@@YAJPEAU_UNICODE_STRING@@PEAU_devicemodeW@@PEAUtagDESKTOP@.c)
 * Callees:
 *     __security_check_cookie @ 0x1C00A63D0 (__security_check_cookie.c)
 *     memset @ 0x1C00AF780 (memset.c)
 *     ??$SyncMessage@$06@DispBrokerClient@DispBroker@@QEAAJPEAU?$AlpcRequest@$06@1@PEAU?$AlpcReply@$06@1@G@Z @ 0x1C00E0818 (--$SyncMessage@$06@DispBrokerClient@DispBroker@@QEAAJPEAU-$AlpcRequest@$06@1@PEAU-$AlpcReply@$06.c)
 *     RtlStringCchCopyUnicodeString @ 0x1C00E125C (RtlStringCchCopyUnicodeString.c)
 */

NTSTATUS __fastcall xxxDispBrokerChangeDisplaySettings(
        PCUNICODE_STRING SourceString,
        struct _devicemodeW *a2,
        int a3,
        char a4)
{
  size_t v8; // rdx
  __int128 v9; // xmm1
  __int128 v10; // xmm0
  __int128 v11; // xmm1
  __int128 v12; // xmm0
  __int128 v13; // xmm1
  __int128 v14; // xmm0
  __int128 v15; // xmm0
  WCHAR *v16; // rsi
  __int64 v17; // rax
  __int128 v18; // xmm0
  __int128 v19; // xmm1
  __int128 v20; // xmm0
  __int128 v21; // xmm1
  NTSTATUS result; // eax
  int v23; // eax
  int v24; // ecx
  _DWORD v25[20]; // [rsp+20h] [rbp-1A8h] BYREF
  _QWORD v26[38]; // [rsp+70h] [rbp-158h] BYREF

  memset(v26, 0, 0x128uLL);
  memset(v25, 0, 0x48uLL);
  LODWORD(v26[8]) = a3;
  HIDWORD(v26[8]) = a4 != 0;
  if ( a2 )
  {
    v9 = *(_OWORD *)&a2->dmDeviceName[8];
    *(_OWORD *)&v26[9] = *(_OWORD *)a2->dmDeviceName;
    v10 = *(_OWORD *)&a2->dmDeviceName[16];
    *(_OWORD *)&v26[11] = v9;
    v11 = *(_OWORD *)&a2->dmDeviceName[24];
    *(_OWORD *)&v26[13] = v10;
    v12 = *(_OWORD *)&a2->dmSpecVersion;
    *(_OWORD *)&v26[15] = v11;
    v13 = *(__int128 *)((char *)&a2->76 + 4);
    *(_OWORD *)&v26[17] = v12;
    v14 = *(_OWORD *)&a2->dmYResolution;
    *(_OWORD *)&v26[19] = v13;
    *(_OWORD *)&v26[21] = v14;
    v15 = *(_OWORD *)&a2->dmFormName[5];
    v16 = &a2->dmFormName[13];
    *(_OWORD *)&v26[23] = v15;
    v17 = *((_QWORD *)v16 + 10);
    v18 = *((_OWORD *)v16 + 1);
    *(_OWORD *)&v26[25] = *(_OWORD *)v16;
    v19 = *((_OWORD *)v16 + 2);
    *(_OWORD *)&v26[27] = v18;
    v20 = *((_OWORD *)v16 + 3);
    *(_OWORD *)&v26[29] = v19;
    v21 = *((_OWORD *)v16 + 4);
    *(_OWORD *)&v26[31] = v20;
    *(_OWORD *)&v26[33] = v21;
    v26[35] = v17;
    LODWORD(v26[36]) = *((_DWORD *)v16 + 22);
  }
  if ( !SourceString
    || (result = RtlStringCchCopyUnicodeString((NTSTRSAFE_PWSTR)&v26[9], v8, SourceString), result >= 0) )
  {
    v23 = DispBroker::DispBrokerClient::SyncMessage<7>(
            (__int64)DispBroker::DispBrokerClient::s_pSessionBroker,
            v26,
            (__int64)v25);
    v24 = v25[16];
    if ( v23 < 0 )
      return v23;
    return v24;
  }
  return result;
}
