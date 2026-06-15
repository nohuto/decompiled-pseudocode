/*
 * XREFs of ?GetCommandValueLength@SpatialAudioMetadataDictionary@@UEAAJEPEAI@Z @ 0x180136930
 * Callers:
 *     <none>
 * Callees:
 *     _TlgWrite @ 0x18001AD10 (_TlgWrite.c)
 *     __security_check_cookie @ 0x180063BD0 (__security_check_cookie.c)
 */

__int64 __fastcall SpatialAudioMetadataDictionary::GetCommandValueLength(
        SpatialAudioMetadataDictionary *this,
        char a2,
        unsigned int *a3)
{
  struct _RTL_CRITICAL_SECTION *v3; // rsi
  unsigned int v7; // ebx
  const GUID *v8; // r8
  const GUID *v9; // r9
  __int64 v10; // rax
  __int64 v11; // rdx
  int v13; // [rsp+30h] [rbp-39h] BYREF
  int v14; // [rsp+34h] [rbp-35h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-29h] BYREF
  const char *v16; // [rsp+60h] [rbp-9h]
  int v17; // [rsp+68h] [rbp-1h]
  int v18; // [rsp+6Ch] [rbp+3h]
  int *v19; // [rsp+70h] [rbp+7h]
  int v20; // [rsp+78h] [rbp+Fh]
  int v21; // [rsp+7Ch] [rbp+13h]
  int *v22; // [rsp+80h] [rbp+17h]
  int v23; // [rsp+88h] [rbp+1Fh]
  int v24; // [rsp+8Ch] [rbp+23h]

  v3 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 56);
  v7 = -2004286976;
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 56));
  if ( v3 )
    LeaveCriticalSection(v3);
  if ( a3 )
  {
    v10 = 0LL;
    if ( *((_DWORD *)this + 31) )
    {
      v11 = *((_QWORD *)this + 16);
      while ( *(_BYTE *)(v11 + 2 * v10) != a2 )
      {
        v10 = (unsigned int)(v10 + 1);
        if ( (unsigned int)v10 >= *((_DWORD *)this + 31) )
          return v7;
      }
      v7 = 0;
      *a3 = *(unsigned __int8 *)(v11 + 2 * v10 + 1);
    }
  }
  else
  {
    v7 = -2147024809;
    if ( (unsigned int)dword_1801B63C0 > 2 )
    {
      v18 = 0;
      v21 = 0;
      v24 = 0;
      v16 = "SpatialAudioMetadataDictionary::GetCommandValueLength";
      v19 = &v13;
      v22 = &v14;
      v17 = 54;
      v13 = 297;
      v20 = 4;
      v14 = -2147024809;
      v23 = 4;
      TlgWrite((TraceLoggingHProvider)&dword_1801B63C0, &unk_18017CCCD, v8, v9, 5u, &pData);
    }
  }
  return v7;
}
