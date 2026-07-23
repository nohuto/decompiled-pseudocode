/*
 * XREFs of BcdEnumerateObjects @ 0x1408F1B9C
 * Callers:
 *     SepSecureBootCorrectBcd @ 0x1408A4354 (SepSecureBootCorrectBcd.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x1400B99D0 (RtlInitUnicodeString.c)
 *     BiIsOfflineHandle @ 0x14016E6BC (BiIsOfflineHandle.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     RtlGUIDFromString @ 0x14059B5A0 (RtlGUIDFromString.c)
 *     BiGetObjectDescription @ 0x1407124B4 (BiGetObjectDescription.c)
 *     BiEnumerateSubKeys @ 0x140713BC4 (BiEnumerateSubKeys.c)
 *     BiOpenKey @ 0x140714A20 (BiOpenKey.c)
 *     BiCloseKey @ 0x140714B90 (BiCloseKey.c)
 *     BiReleaseBcdSyncMutant @ 0x140714D70 (BiReleaseBcdSyncMutant.c)
 *     BiAcquireBcdSyncMutant @ 0x140714F20 (BiAcquireBcdSyncMutant.c)
 *     BiIsEnumerateMatch @ 0x1408F20F4 (BiIsEnumerateMatch.c)
 */

NTSTATUS __cdecl BcdEnumerateObjects(
        HANDLE BcdStoreHandle,
        PBCD_OBJECT_DESCRIPTION BcdEnumDescriptor,
        PVOID Buffer,
        PULONG BufferSize,
        PULONG ObjectCount)
{
  PCWSTR *v5; // rdi
  PULONG v6; // r14
  GUID *v7; // r13
  char v9; // si
  NTSTATUS result; // eax
  NTSTATUS v11; // ebx
  int v12; // eax
  __int64 v13; // r12
  __int64 v14; // r14
  const WCHAR **v15; // rsi
  int ObjectDescription; // ebx
  __int64 v17; // rsi
  int v18; // edx
  unsigned __int64 v19; // rax
  unsigned int v20; // edx
  unsigned __int64 v21; // rax
  int v22; // ecx
  unsigned int v23; // ecx
  ULONG v24; // r14d
  ULONG i; // esi
  int v26; // ebx
  _QWORD *v27; // rdx
  __int64 v28; // rax
  ULONG v29; // [rsp+20h] [rbp-40h] BYREF
  void *v30; // [rsp+28h] [rbp-38h] BYREF
  void *v31; // [rsp+30h] [rbp-30h] BYREF
  __int64 v32; // [rsp+38h] [rbp-28h] BYREF
  UNICODE_STRING DestinationString; // [rsp+40h] [rbp-20h] BYREF
  _QWORD *v34; // [rsp+50h] [rbp-10h]
  __int64 v35; // [rsp+58h] [rbp-8h]
  char IsOfflineHandle; // [rsp+B0h] [rbp+50h]

  v5 = 0LL;
  v6 = BufferSize;
  v7 = (GUID *)Buffer;
  if ( !Buffer && *BufferSize || !ObjectCount || !BcdEnumDescriptor->Version )
    return -1073741811;
  IsOfflineHandle = BiIsOfflineHandle((char)BcdStoreHandle);
  v9 = IsOfflineHandle;
  result = BiAcquireBcdSyncMutant(IsOfflineHandle);
  if ( result >= 0 )
  {
    v30 = 0LL;
    *(_QWORD *)&DestinationString.Length = 0LL;
    v11 = BiOpenKey((__int64)BcdStoreHandle, L"Objects", 0x20019u, &v30);
    if ( v11 >= 0 )
    {
      v12 = BiEnumerateSubKeys(v30, &DestinationString, &v29);
      v5 = *(PCWSTR **)&DestinationString.Length;
      v11 = v12;
      if ( v12 >= 0 )
      {
        v13 = 0LL;
        if ( v29 )
        {
          v14 = v29;
          v15 = *(const WCHAR ***)&DestinationString.Length;
          do
          {
            if ( (int)BiOpenKey((__int64)v30, *v15, 0x20019u, &v31) >= 0 )
            {
              ObjectDescription = BiGetObjectDescription((__int64)v31, &v32);
              BiCloseKey(v31);
              if ( ObjectDescription >= 0 )
              {
                if ( (unsigned __int8)BiIsEnumerateMatch(BcdEnumDescriptor->Type, HIDWORD(v32)) )
                  v13 = (unsigned int)(v13 + 1);
              }
            }
            ++v15;
            --v14;
          }
          while ( v14 );
          v5 = *(PCWSTR **)&DestinationString.Length;
          v6 = BufferSize;
        }
        v17 = 0xFFFFFFFFLL;
        v18 = -1;
        v19 = 24 * v13;
        if ( (unsigned __int64)(24 * v13) <= 0xFFFFFFFF )
          v18 = 24 * v13;
        v11 = v19 > 0xFFFFFFFF ? 0xC0000095 : 0;
        if ( v19 <= 0xFFFFFFFF )
        {
          v20 = (v18 + 7) & 0xFFFFFFF8;
          v34 = (_QWORD *)((char *)&v7->Data1 + v20);
          v21 = 8LL * (unsigned int)v13;
          v22 = -1;
          if ( v21 <= 0xFFFFFFFF )
            v22 = 8 * v13;
          v11 = v21 > 0xFFFFFFFF ? 0xC0000095 : 0;
          if ( v21 <= 0xFFFFFFFF )
          {
            v23 = v20 + ((v22 + 7) & 0xFFFFFFF8);
            if ( v23 >= v20 )
              v17 = v23;
            v11 = v23 < v20 ? 0xC0000095 : 0;
            v35 = v17;
            if ( v23 >= v20 )
            {
              if ( (unsigned int)v17 <= *v6 )
              {
                *(_DWORD *)&DestinationString.Length = 0;
                v24 = 0;
                if ( v29 )
                {
                  for ( i = *(_DWORD *)&DestinationString.Length; i < v29; ++i )
                  {
                    if ( v24 >= (unsigned int)v13 )
                      break;
                    if ( (int)BiOpenKey((__int64)v30, v5[i], 0x20019u, &v31) >= 0 )
                    {
                      v26 = BiGetObjectDescription((__int64)v31, &v32);
                      BiCloseKey(v31);
                      if ( v26 >= 0 )
                      {
                        if ( (unsigned __int8)BiIsEnumerateMatch(BcdEnumDescriptor->Type, HIDWORD(v32)) )
                        {
                          RtlInitUnicodeString(&DestinationString, v5[i]);
                          if ( RtlGUIDFromString(&DestinationString, v7) >= 0 )
                          {
                            v27 = v34;
                            v28 = v32;
                            *(_QWORD *)&v7[1].Data1 = v34;
                            v7 = (GUID *)((char *)v7 + 24);
                            *v27 = v28;
                            v34 = v27 + 1;
                            ++v24;
                          }
                        }
                      }
                    }
                  }
                  LODWORD(v17) = v35;
                }
                v11 = 0;
                *BufferSize = v17;
                *ObjectCount = v24;
              }
              else
              {
                v11 = -1073741789;
                *v6 = v17;
                *ObjectCount = v13;
              }
            }
          }
        }
        v9 = IsOfflineHandle;
      }
    }
    if ( v30 )
      BiCloseKey(v30);
    if ( v5 )
      ExFreePoolWithTag(v5, 0x4B444342u);
    BiReleaseBcdSyncMutant(v9);
    return v11;
  }
  return result;
}
