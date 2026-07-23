/*
 * XREFs of BcdEnumerateObjects @ 0x14092E56C
 * Callers:
 *     SepSecureBootCorrectBcd @ 0x1408E1A14 (SepSecureBootCorrectBcd.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x1400438D0 (RtlInitUnicodeString.c)
 *     BiIsOfflineHandle @ 0x140177A94 (BiIsOfflineHandle.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     RtlGUIDFromString @ 0x1405C15F0 (RtlGUIDFromString.c)
 *     BiGetObjectDescription @ 0x14073B70C (BiGetObjectDescription.c)
 *     BiEnumerateSubKeys @ 0x14073CC60 (BiEnumerateSubKeys.c)
 *     BiOpenKey @ 0x14073DB30 (BiOpenKey.c)
 *     BiCloseKey @ 0x14073DCB4 (BiCloseKey.c)
 *     BiReleaseBcdSyncMutant @ 0x14073DE94 (BiReleaseBcdSyncMutant.c)
 *     BiAcquireBcdSyncMutant @ 0x14073E050 (BiAcquireBcdSyncMutant.c)
 *     BiIsEnumerateMatch @ 0x14092EAD0 (BiIsEnumerateMatch.c)
 */

NTSTATUS __cdecl BcdEnumerateObjects(
        HANDLE BcdStoreHandle,
        PBCD_OBJECT_DESCRIPTION BcdEnumDescriptor,
        PVOID Buffer,
        PULONG BufferSize,
        PULONG ObjectCount)
{
  PULONG v6; // r12
  char *v7; // rsi
  char v8; // r15
  NTSTATUS result; // eax
  PCWSTR *v10; // rdi
  int v11; // eax
  void *v12; // r14
  NTSTATUS v13; // ebx
  int v14; // eax
  ULONG v15; // r15d
  __int64 v16; // r13
  const WCHAR **v17; // rsi
  int ObjectDescription; // ebx
  unsigned __int64 v19; // rax
  char *v20; // r13
  unsigned __int64 v21; // rcx
  ULONG v22; // esi
  ULONG v23; // r14d
  ULONG i; // r12d
  int v25; // ebx
  __int64 v26; // rax
  char IsOfflineHandle; // [rsp+20h] [rbp-40h]
  ULONG v28; // [rsp+24h] [rbp-3Ch] BYREF
  ULONG v29; // [rsp+28h] [rbp-38h]
  ULONG v30; // [rsp+2Ch] [rbp-34h]
  PCWSTR *v31; // [rsp+30h] [rbp-30h] BYREF
  __int64 v32; // [rsp+38h] [rbp-28h] BYREF
  void *v33; // [rsp+40h] [rbp-20h] BYREF
  UNICODE_STRING DestinationString; // [rsp+48h] [rbp-18h] BYREF
  GUID *Guid; // [rsp+B0h] [rbp+50h]

  Guid = (GUID *)Buffer;
  v32 = 0LL;
  *(_QWORD *)&DestinationString.Length = 0LL;
  v6 = BufferSize;
  DestinationString.Buffer = 0LL;
  v7 = (char *)Buffer;
  if ( !Buffer && *BufferSize || !ObjectCount || !BcdEnumDescriptor->Version )
    return -1073741811;
  IsOfflineHandle = BiIsOfflineHandle((char)BcdStoreHandle);
  v8 = IsOfflineHandle;
  result = BiAcquireBcdSyncMutant(IsOfflineHandle);
  if ( result >= 0 )
  {
    v33 = 0LL;
    v31 = 0LL;
    v10 = 0LL;
    v11 = BiOpenKey((__int64)BcdStoreHandle, L"Objects", 0x20019u, &v33);
    v12 = v33;
    v13 = v11;
    if ( v11 >= 0 )
    {
      v14 = BiEnumerateSubKeys(v33, &v31, &v28);
      v10 = v31;
      v13 = v14;
      if ( v14 >= 0 )
      {
        v15 = 0;
        if ( v28 )
        {
          v16 = v28;
          v17 = v31;
          do
          {
            if ( (int)BiOpenKey((__int64)v12, *v17, 0x20019u, &v31) >= 0 )
            {
              ObjectDescription = BiGetObjectDescription((__int64)v31, &v32);
              BiCloseKey(v31);
              if ( ObjectDescription >= 0 )
              {
                if ( (unsigned __int8)BiIsEnumerateMatch(BcdEnumDescriptor->Type, HIDWORD(v32)) )
                  ++v15;
              }
            }
            ++v17;
            --v16;
          }
          while ( v16 );
          v6 = BufferSize;
          v7 = (char *)Guid;
        }
        v19 = 24LL * v15;
        if ( v19 > 0xFFFFFFFF
          || (v20 = &v7[(unsigned int)v19], v21 = 8LL * v15, v21 > 0xFFFFFFFF)
          || (v22 = v21 + v19, v30 = v21 + v19, (int)v21 + (int)v19 < (unsigned int)v19) )
        {
          v13 = -1073741675;
        }
        else if ( v22 <= *v6 )
        {
          v29 = 0;
          v23 = 0;
          if ( v28 )
          {
            for ( i = v29; i < v28; ++i )
            {
              if ( v23 >= v15 )
                break;
              if ( (int)BiOpenKey((__int64)v33, v10[i], 0x20019u, &v31) >= 0 )
              {
                v25 = BiGetObjectDescription((__int64)v31, &v32);
                BiCloseKey(v31);
                if ( v25 >= 0 )
                {
                  if ( (unsigned __int8)BiIsEnumerateMatch(BcdEnumDescriptor->Type, HIDWORD(v32)) )
                  {
                    RtlInitUnicodeString(&DestinationString, v10[i]);
                    if ( RtlGUIDFromString(&DestinationString, Guid) >= 0 )
                    {
                      v26 = v32;
                      *(_QWORD *)&Guid[1].Data1 = v20;
                      *(_QWORD *)v20 = v26;
                      v20 += 8;
                      ++v23;
                      Guid = (GUID *)((char *)Guid + 24);
                    }
                  }
                }
              }
            }
            v22 = v30;
            v6 = BufferSize;
          }
          v13 = 0;
          *v6 = v22;
          *ObjectCount = v23;
          v12 = v33;
        }
        else
        {
          v13 = -1073741789;
          *v6 = v22;
          *ObjectCount = v15;
        }
        v8 = IsOfflineHandle;
      }
    }
    if ( v12 )
      BiCloseKey(v12);
    if ( v10 )
      ExFreePoolWithTag(v10, 0x4B444342u);
    BiReleaseBcdSyncMutant(v8);
    return v13;
  }
  return result;
}
