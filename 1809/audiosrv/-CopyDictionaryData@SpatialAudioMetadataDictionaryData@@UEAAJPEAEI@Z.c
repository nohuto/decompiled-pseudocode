/*
 * XREFs of ?CopyDictionaryData@SpatialAudioMetadataDictionaryData@@UEAAJPEAEI@Z @ 0x18012C8B0
 * Callers:
 *     <none>
 * Callees:
 *     _TlgWrite @ 0x180025550 (_TlgWrite.c)
 *     __security_check_cookie @ 0x180060590 (__security_check_cookie.c)
 *     memcpy_0 @ 0x1800688A3 (memcpy_0.c)
 */

__int64 __fastcall SpatialAudioMetadataDictionaryData::CopyDictionaryData(
        const void **this,
        unsigned __int8 *a2,
        unsigned int a3)
{
  struct _RTL_CRITICAL_SECTION *v3; // r14
  size_t v4; // r15
  unsigned int v7; // ebx
  const GUID *v8; // r8
  const GUID *v9; // r9
  int v11; // [rsp+30h] [rbp-39h] BYREF
  int v12; // [rsp+34h] [rbp-35h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-29h] BYREF
  const char *v14; // [rsp+60h] [rbp-9h]
  __int64 v15; // [rsp+68h] [rbp-1h]
  int *v16; // [rsp+70h] [rbp+7h]
  __int64 v17; // [rsp+78h] [rbp+Fh]
  int *v18; // [rsp+80h] [rbp+17h]
  __int64 v19; // [rsp+88h] [rbp+1Fh]

  v3 = (struct _RTL_CRITICAL_SECTION *)(this + 6);
  v4 = a3;
  v7 = 0;
  EnterCriticalSection((LPCRITICAL_SECTION)(this + 6));
  if ( v3 )
    LeaveCriticalSection(v3);
  if ( a2 && (v8 = (const GUID *)v4, v4 == 2LL * *((unsigned int *)this + 24)) )
  {
    memcpy_0(a2, this[11], v4);
  }
  else
  {
    if ( (unsigned int)dword_1801B1488 > 2 )
    {
      v15 = 55LL;
      v14 = "SpatialAudioMetadataDictionaryData::CopyDictionaryData";
      v16 = &v11;
      v18 = &v12;
      v11 = 194;
      v17 = 4LL;
      v12 = -2147024809;
      v19 = 4LL;
      TlgWrite((TraceLoggingHProvider)&dword_1801B1488, &unk_1801779E8, v8, v9, 5u, &pData);
    }
    return (unsigned int)-2147024809;
  }
  return v7;
}
