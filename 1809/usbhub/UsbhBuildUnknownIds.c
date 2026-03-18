/*
 * XREFs of UsbhBuildUnknownIds @ 0x1C0056860
 * Callers:
 *     UsbhSetEnumerationFailed @ 0x1C0056594 (UsbhSetEnumerationFailed.c)
 * Callees:
 *     PdoExt @ 0x1C0010C40 (PdoExt.c)
 *     Log @ 0x1C0012D10 (Log.c)
 *     UsbhFreeID @ 0x1C0020F94 (UsbhFreeID.c)
 *     UsbhMakeId @ 0x1C0024610 (UsbhMakeId.c)
 *     memset @ 0x1C002B800 (memset.c)
 */

void __fastcall UsbhBuildUnknownIds(__int64 a1, __int64 a2)
{
  __int64 v2; // r9
  _DWORD *v3; // rdi
  wchar_t *v4; // rbx
  char *v5; // rsi
  char *Id; // rbp
  char *v7; // r12
  char *PoolWithTag; // rax
  _QWORD *v9; // rbx
  POOL_TYPE v10; // ecx
  int v11; // r15d
  char *v12; // rax
  char *v13; // r14
  char *v14; // rcx
  int v15; // [rsp+90h] [rbp+18h] BYREF
  int v16; // [rsp+98h] [rbp+20h] BYREF

  Log(a1, 4096, 1970161988, a2, 0LL);
  v3 = PdoExt(v2);
  switch ( v3[705] )
  {
    case 0x40010000:
      v4 = L"USB\\DEVICE_DESCRIPTOR_FAILURE";
      v5 = "23456789ABCDEFu\x00s\x00b\x00f\x00l\x00a\x00g\x00s\x00\\\x00v\x00v\x00v\x00v\x00p\x00p\x00p\x00p\x00r\x00r\x00r\x00r";
      break;
    case 0x40010001:
      v4 = L"USB\\SET_ADDRESS_FAILURE";
      v5 = "456789ABCDEFu\x00s\x00b\x00f\x00l\x00a\x00g\x00s\x00\\\x00v\x00v\x00v\x00v\x00p\x00p\x00p\x00p\x00r\x00r\x00r\x00r";
      break;
    case 0x40010002:
      v4 = L"USB\\RESET_FAILURE";
      v5 = "123456789ABCDEFu\x00s\x00b\x00f\x00l\x00a\x00g\x00s\x00\\\x00v\x00v\x00v\x00v\x00p\x00p\x00p\x00p\x00r\x00r\x00r\x00r";
      break;
    case 0x40010004:
      v4 = L"USB\\CONFIGURATION_DESCRIPTOR_VALIDATION_FAILURE";
      v5 = "6789ABCDEFu\x00s\x00b\x00f\x00l\x00a\x00g\x00s\x00\\\x00v\x00v\x00v\x00v\x00p\x00p\x00p\x00p\x00r\x00r\x00r\x00r";
      break;
    case 0x40010005:
      v4 = L"USB\\DEVICE_DESCRIPTOR_VALIDATION_FAILURE";
      v5 = "56789ABCDEFu\x00s\x00b\x00f\x00l\x00a\x00g\x00s\x00\\\x00v\x00v\x00v\x00v\x00p\x00p\x00p\x00p\x00r\x00r\x00r\x00r";
      break;
    case 0x40010007:
      v4 = L"USB\\CONFIG_DESCRIPTOR_FAILURE";
      v5 = "3456789ABCDEFu\x00s\x00b\x00f\x00l\x00a\x00g\x00s\x00\\\x00v\x00v\x00v\x00v\x00p\x00p\x00p\x00p\x00r\x00r\x00r\x00r";
      break;
    default:
      return;
  }
  v16 = 0;
  v15 = 0;
  Id = UsbhMakeId(0, v4, 0LL, &v16, 2u, 0, 0, 0LL);
  if ( Id )
  {
    v7 = UsbhMakeId(0, v4, 0LL, &v15, 2u, 0, 0, 0LL);
    if ( v7 )
    {
      PoolWithTag = (char *)ExAllocatePoolWithTag(ExDefaultNonPagedPoolType, 0x18uLL, 0x42554855u);
      v9 = PoolWithTag;
      if ( !PoolWithTag )
        goto LABEL_26;
      *(_QWORD *)PoolWithTag = 0LL;
      *((_QWORD *)PoolWithTag + 1) = 0LL;
      *((_QWORD *)PoolWithTag + 2) = 0LL;
      *(_OWORD *)PoolWithTag = *(_OWORD *)L"USB\\VID_nnnn";
      for ( *((_QWORD *)PoolWithTag + 2) = *(_QWORD *)L"nnnn"; *(_WORD *)PoolWithTag != 110; PoolWithTag += 2 )
        ;
      v10 = ExDefaultNonPagedPoolType;
      v11 = 46;
      *(_DWORD *)PoolWithTag = 3145776;
      *((_DWORD *)PoolWithTag + 1) = 3145776;
      v12 = (char *)ExAllocatePoolWithTag(v10, 0x2EuLL, 0x42554855u);
      v13 = v12;
      if ( v12 )
      {
        memset(v12, 0, 0x2EuLL);
        v14 = v13 + 24;
        *(_OWORD *)v13 = *(_OWORD *)v9;
        *((_QWORD *)v13 + 2) = v9[2];
        *(_OWORD *)(v13 + 24) = *(_OWORD *)L"&PID_nnnn";
        for ( *((_WORD *)v13 + 20) = aPidNnnn[8]; *(_WORD *)v14 != 110; v14 += 2 )
          ;
        *(_WORD *)v14 = (unsigned __int8)Nibble[0];
        *((_WORD *)v14 + 3) = (unsigned __int8)*v5;
        *(_DWORD *)(v14 + 2) = 3145776;
      }
      else
      {
        v11 = 0;
      }
      ExFreePoolWithTag(v9, 0);
      if ( v13 )
      {
        UsbhFreeID((__int64)(v3 + 528));
        v3[529] = v15;
        *((_QWORD *)v3 + 265) = v7;
        UsbhFreeID((__int64)(v3 + 524));
        v3[525] = v16;
        *((_QWORD *)v3 + 263) = Id;
        UsbhFreeID((__int64)(v3 + 520));
        *((_QWORD *)v3 + 261) = v13;
        v3[521] = v11;
      }
      else
      {
LABEL_26:
        ExFreePoolWithTag(Id, 0);
        ExFreePoolWithTag(v7, 0);
      }
    }
    else
    {
      ExFreePoolWithTag(Id, 0);
    }
  }
}
