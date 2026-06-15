/*
 * XREFs of ?LogVolumePolicyChange@CSpatialAudioResourceManagerTraceLogger@@QEAAXKPEBG@Z @ 0x180123384
 * Callers:
 *     ?OnVolumePolicyChange@CSpatialAudioResourceManager@Sarm@@UEAAJKPEBG@Z @ 0x180120CC0 (-OnVolumePolicyChange@CSpatialAudioResourceManager@Sarm@@UEAAJKPEBG@Z.c)
 * Callees:
 *     _TlgWrite @ 0x18001DFF0 (_TlgWrite.c)
 *     _TlgCreateWsz @ 0x18001F9C0 (_TlgCreateWsz.c)
 *     __security_check_cookie @ 0x180064BC0 (__security_check_cookie.c)
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

  if ( (unsigned int)dword_1801B5350 > 5 )
  {
    v5 = a2;
    v7 = &v5;
    v8 = 4;
    v9 = 0;
    TlgCreateWsz(&v10, a3);
    TlgWrite((TraceLoggingHProvider)&dword_1801B5350, &unk_180179595, v3, cData, (UINT32)cData, &pData);
  }
}
