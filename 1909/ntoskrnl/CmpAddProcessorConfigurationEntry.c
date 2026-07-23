/*
 * XREFs of CmpAddProcessorConfigurationEntry @ 0x140761C88
 * Callers:
 *     CmInitializeProcessor @ 0x14082F818 (CmInitializeProcessor.c)
 *     CmpInitializeMachineDependentConfiguration @ 0x140A0BE88 (CmpInitializeMachineDependentConfiguration.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140043CD0 (RtlInitUnicodeString.c)
 *     RtlInitAnsiString @ 0x1400EA030 (RtlInitAnsiString.c)
 *     __security_check_cookie @ 0x14019EE20 (__security_check_cookie.c)
 *     sprintf_s @ 0x1401A65D0 (sprintf_s.c)
 *     strcpy_s @ 0x1401A6750 (strcpy_s.c)
 *     ZwClose @ 0x1401C0E30 (ZwClose.c)
 *     ZwSetValueKey @ 0x1401C1850 (ZwSetValueKey.c)
 *     KeBugCheck @ 0x1401C4680 (KeBugCheck.c)
 *     memset @ 0x1401D77C0 (memset.c)
 *     RtlFreeAnsiString @ 0x14060D250 (RtlFreeAnsiString.c)
 *     RtlAnsiStringToUnicodeString @ 0x14063FB50 (RtlAnsiStringToUnicodeString.c)
 *     CmpInitializeRegistryNode @ 0x1407620D4 (CmpInitializeRegistryNode.c)
 */

__int64 __fastcall CmpAddProcessorConfigurationEntry(__int64 a1, int a2, int a3)
{
  char v6; // al
  const char *v7; // r8
  __int64 v8; // rax
  __int64 result; // rax
  bool v10; // zf
  __int64 v11; // rax
  int v12; // eax
  HANDLE v13; // rsi
  NTSTATUS v14; // edi
  const CHAR *v16; // r15
  _DWORD *v21; // r8
  unsigned int v22; // r9d
  __int64 v28; // rcx
  _QWORD *v29; // r14
  UNICODE_STRING DestinationString; // [rsp+40h] [rbp-C0h] BYREF
  UNICODE_STRING UnicodeString; // [rsp+50h] [rbp-B0h] BYREF
  int Data; // [rsp+60h] [rbp-A0h] BYREF
  HANDLE KeyHandle; // [rsp+68h] [rbp-98h] BYREF
  _STRING SourceString; // [rsp+70h] [rbp-90h] BYREF
  _QWORD v35[9]; // [rsp+80h] [rbp-80h] BYREF
  HANDLE Handle; // [rsp+D0h] [rbp-30h] BYREF
  _BYTE v37[64]; // [rsp+E0h] [rbp-20h] BYREF
  char DstBuf[128]; // [rsp+120h] [rbp+20h] BYREF

  *(_QWORD *)&SourceString.Length = 0LL;
  SourceString.Buffer = 0LL;
  memset(v37, 0, 0x34uLL);
  *(_QWORD *)&UnicodeString.Length = 0LL;
  UnicodeString.Buffer = 0LL;
  *(_QWORD *)&DestinationString.Length = 0LL;
  DestinationString.Buffer = 0LL;
  KeyHandle = (HANDLE)-1LL;
  memset(v35, 0, sizeof(v35));
  WORD2(v35[5]) = *(unsigned __int8 *)(a1 + 208);
  HIWORD(v35[5]) = *(unsigned __int8 *)(a1 + 209);
  v35[7] = DstBuf;
  v6 = *(_BYTE *)(a1 + 141);
  v35[3] = 0x100000001LL;
  LODWORD(v35[5]) = a2;
  switch ( v6 )
  {
    case 1:
      v7 = "AMD64 Family %u Model %u Stepping %u";
      break;
    case 2:
      v7 = "Intel64 Family %u Model %u Stepping %u";
      break;
    case 3:
      v7 = "VIA64 Family %u Model %u Stepping %u";
      break;
    default:
      KeBugCheck(0x5Du);
  }
  sprintf_s(
    DstBuf,
    0x80uLL,
    v7,
    (unsigned int)*(char *)(a1 + 64),
    HIBYTE(*(unsigned __int16 *)(a1 + 66)),
    (unsigned __int8)*(_WORD *)(a1 + 66));
  v8 = -1LL;
  do
    ++v8;
  while ( DstBuf[v8] );
  HIDWORD(v35[6]) = v8 + 1;
  result = CmpInitializeRegistryNode(
             (unsigned int)v35,
             a3,
             (unsigned int)&KeyHandle,
             -1,
             -1,
             (__int64)&CmpDeviceIndexTable);
  if ( (int)result >= 0 )
  {
    memset(v35, 0, sizeof(v35));
    v10 = *(_BYTE *)(a1 + 64) == 3;
    WORD2(v35[5]) = *(unsigned __int8 *)(a1 + 208);
    HIWORD(v35[5]) = *(unsigned __int8 *)(a1 + 209);
    v35[7] = DstBuf;
    v35[3] = 0x200000001LL;
    LODWORD(v35[5]) = a2;
    if ( v10 )
      strcpy_s(DstBuf, 0x80uLL, "80387");
    v11 = -1LL;
    do
      ++v11;
    while ( DstBuf[v11] );
    HIDWORD(v35[6]) = v11 + 1;
    v12 = CmpInitializeRegistryNode((unsigned int)v35, a3, (unsigned int)&Handle, -1, -1, (__int64)&CmpDeviceIndexTable);
    v13 = KeyHandle;
    v14 = v12;
    if ( v12 >= 0 )
    {
      ZwClose(Handle);
      _RAX = 0x80000000LL;
      v16 = (const CHAR *)((a1 + 25232) & -(__int64)(*(_BYTE *)(a1 + 65) != 0));
      __asm { cpuid }
      if ( (unsigned int)_RAX < 0x80000004 )
        goto LABEL_40;
      v21 = v37;
      v22 = -2147483646;
      do
      {
        _RAX = v22;
        __asm { cpuid }
        *v21 = _RAX;
        ++v22;
        v21[1] = _RBX;
        v21[2] = _RCX;
        v21[3] = _RDX;
        v21 += 4;
      }
      while ( v22 <= 0x80000004 );
      v37[48] = 0;
      if ( !v21 )
        goto LABEL_40;
      RtlInitUnicodeString(&DestinationString, L"ProcessorNameString");
      LODWORD(v28) = 0;
      if ( v37[0] == 32 )
      {
        do
          v28 = (unsigned int)(v28 + 1);
        while ( v37[v28] == 32 );
      }
      RtlInitAnsiString(&SourceString, &v37[(unsigned int)v28]);
      v14 = RtlAnsiStringToUnicodeString(&UnicodeString, &SourceString, 1u);
      if ( v14 >= 0 )
      {
        v14 = ZwSetValueKey(v13, &DestinationString, 0, 1u, UnicodeString.Buffer, UnicodeString.Length + 2);
        RtlFreeAnsiString(&UnicodeString);
        if ( v14 >= 0 )
        {
LABEL_40:
          if ( !v16
            || (RtlInitUnicodeString(&DestinationString, L"VendorIdentifier"),
                RtlInitAnsiString(&SourceString, v16),
                v14 = RtlAnsiStringToUnicodeString(&UnicodeString, &SourceString, 1u),
                v14 >= 0)
            && (v14 = ZwSetValueKey(v13, &DestinationString, 0, 1u, UnicodeString.Buffer, UnicodeString.Length + 2),
                RtlFreeAnsiString(&UnicodeString),
                v14 >= 0) )
          {
            if ( !*(_QWORD *)(a1 + 25248)
              || (Data = *(_DWORD *)(a1 + 25248),
                  RtlInitUnicodeString(&DestinationString, L"FeatureSet"),
                  v14 = ZwSetValueKey(v13, &DestinationString, 0, 4u, &Data, 4u),
                  v14 >= 0) )
            {
              if ( !*(_DWORD *)(a1 + 68)
                || (RtlInitUnicodeString(&DestinationString, L"~MHz"),
                    v14 = ZwSetValueKey(v13, &DestinationString, 0, 4u, (PVOID)(a1 + 68), 4u),
                    v14 >= 0) )
              {
                v29 = (_QWORD *)(a1 + 25256);
                if ( *v29 )
                {
                  RtlInitUnicodeString(&DestinationString, L"Update Revision");
                  v14 = ZwSetValueKey(v13, &DestinationString, 0, 3u, v29, 8u);
                }
              }
            }
          }
        }
      }
    }
    if ( v13 != (HANDLE)-1LL )
      ZwClose(v13);
    return (unsigned int)v14;
  }
  return result;
}
