/*
 * XREFs of ?LogVolumePolicyChange@CSpatialAudioResourceManagerTraceLogger@@QEAAXKPEBG@Z @ 0x1801237F4
 * Callers:
 *     ?OnVolumePolicyChange@CSpatialAudioResourceManager@Sarm@@UEAAJKPEBG@Z @ 0x180121140 (-OnVolumePolicyChange@CSpatialAudioResourceManager@Sarm@@UEAAJKPEBG@Z.c)
 * Callees:
 *     _TlgWrite @ 0x18001AD10 (_TlgWrite.c)
 *     _TlgCreateWsz @ 0x18001C6E0 (_TlgCreateWsz.c)
 *     __security_check_cookie @ 0x180063BD0 (__security_check_cookie.c)
 */

void __fastcall CSpatialAudioResourceManagerTraceLogger::LogVolumePolicyChange(
        CSpatialAudioResourceManagerTraceLogger *this,
        int a2,
        const unsigned __int16 *a3)
{
  LPCGUID v3; // r8
  LPCGUID cData; // r9
  int v5; // [rsp+30h] [rbp-68h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-58h] BYREF
  int *v7; // [rsp+60h] [rbp-38h]
  int v8; // [rsp+68h] [rbp-30h]
  int v9; // [rsp+6Ch] [rbp-2Ch]
  struct _EVENT_DATA_DESCRIPTOR v10; // [rsp+70h] [rbp-28h] BYREF

  if ( (unsigned int)dword_1801B6350 > 5 )
  {
    v5 = a2;
    v7 = &v5;
    v8 = 4;
    v9 = 0;
    TlgCreateWsz(&v10, a3);
    TlgWrite((TraceLoggingHProvider)&dword_1801B6350, &unk_18017A5B5, v3, cData, (UINT32)cData, &pData);
  }
}
