/*
 * XREFs of ?GetDictionaryDataLength@SpatialAudioMetadataDictionaryData@@UEAAJPEAI@Z @ 0x18012C9C0
 * Callers:
 *     <none>
 * Callees:
 *     _TlgWrite @ 0x180025550 (_TlgWrite.c)
 *     __security_check_cookie @ 0x180060590 (__security_check_cookie.c)
 */

__int64 __fastcall SpatialAudioMetadataDictionaryData::GetDictionaryDataLength(
        SpatialAudioMetadataDictionaryData *this,
        unsigned int *a2)
{
  struct _RTL_CRITICAL_SECTION *v2; // rsi
  unsigned int v5; // ebx
  const GUID *v6; // r8
  const GUID *v7; // r9
  int v9; // [rsp+30h] [rbp-29h] BYREF
  int v10; // [rsp+34h] [rbp-25h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-19h] BYREF
  const char *v12; // [rsp+60h] [rbp+7h]
  __int64 v13; // [rsp+68h] [rbp+Fh]
  int *v14; // [rsp+70h] [rbp+17h]
  __int64 v15; // [rsp+78h] [rbp+1Fh]
  int *v16; // [rsp+80h] [rbp+27h]
  __int64 v17; // [rsp+88h] [rbp+2Fh]

  v2 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 48);
  v5 = 0;
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 48));
  if ( v2 )
    LeaveCriticalSection(v2);
  if ( a2 )
  {
    *a2 = 2 * *((_DWORD *)this + 24);
  }
  else
  {
    if ( (unsigned int)dword_1801B1488 > 2 )
    {
      v13 = 60LL;
      v12 = "SpatialAudioMetadataDictionaryData::GetDictionaryDataLength";
      v14 = &v9;
      v16 = &v10;
      v9 = 180;
      v15 = 4LL;
      v10 = -2147024809;
      v17 = 4LL;
      TlgWrite((TraceLoggingHProvider)&dword_1801B1488, &unk_1801779E8, v6, v7, 5u, &pData);
    }
    return (unsigned int)-2147024809;
  }
  return v5;
}
