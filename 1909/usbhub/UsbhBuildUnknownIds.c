/*
 * XREFs of UsbhBuildUnknownIds @ 0x1C0058BF0
 * Callers:
 *     UsbhSetEnumerationFailed @ 0x1C0058924 (UsbhSetEnumerationFailed.c)
 * Callees:
 *     PdoExt @ 0x1C0011270 (PdoExt.c)
 *     Log @ 0x1C0013360 (Log.c)
 *     UsbhFreeID @ 0x1C001DC1C (UsbhFreeID.c)
 *     UsbhMakeId @ 0x1C0025250 (UsbhMakeId.c)
 *     memset @ 0x1C002CA00 (memset.c)
 */

void __fastcall UsbhBuildUnknownIds(__int64 a1, __int64 a2)
{
  __int64 v2; // r9
  _DWORD *v3; // rbx
  wchar_t *v4; // rdi
  char *v5; // rsi
  char *Id; // rbp
  char *v7; // r12
  char *v8; // rcx
  char *PoolWithTag; // rax
  _QWORD *v10; // rdi
  POOL_TYPE v11; // ecx
  int v12; // r15d
  char *v13; // rax
  char *v14; // r14
  char *v15; // rcx
  int v16; // [rsp+90h] [rbp+18h] BYREF
  int v17; // [rsp+98h] [rbp+20h] BYREF

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
  v17 = 0;
  v16 = 0;
  Id = UsbhMakeId(0, v4, 0LL, &v17, 2u, 0, 0, 0LL);
  if ( Id )
  {
    v7 = UsbhMakeId(0, v4, 0LL, &v16, 2u, 0, 0, 0LL);
    if ( v7 )
    {
      PoolWithTag = (char *)ExAllocatePoolWithTag(ExDefaultNonPagedPoolType, 0x18uLL, 0x42554855u);
      v10 = PoolWithTag;
      if ( PoolWithTag )
      {
        *(_QWORD *)PoolWithTag = 0LL;
        *((_QWORD *)PoolWithTag + 1) = 0LL;
        *((_QWORD *)PoolWithTag + 2) = 0LL;
        *(_OWORD *)PoolWithTag = *(_OWORD *)L"USB\\VID_nnnn";
        for ( *((_QWORD *)PoolWithTag + 2) = *(_QWORD *)L"nnnn"; *(_WORD *)PoolWithTag != 110; PoolWithTag += 2 )
          ;
        v11 = ExDefaultNonPagedPoolType;
        v12 = 46;
        *(_DWORD *)PoolWithTag = 3145776;
        *((_DWORD *)PoolWithTag + 1) = 3145776;
        v13 = (char *)ExAllocatePoolWithTag(v11, 0x2EuLL, 0x42554855u);
        v14 = v13;
        if ( v13 )
        {
          memset(v13, 0, 0x2EuLL);
          v15 = v14 + 24;
          *(_OWORD *)v14 = *(_OWORD *)v10;
          *((_QWORD *)v14 + 2) = v10[2];
          *(_OWORD *)(v14 + 24) = *(_OWORD *)L"&PID_nnnn";
          *((_WORD *)v14 + 20) = aPidNnnn[8];
          while ( *(_WORD *)v15 != 110 )
            v15 += 2;
          *(_WORD *)v15 = (unsigned __int8)Nibble[0];
          *((_WORD *)v15 + 3) = (unsigned __int8)*v5;
          *(_DWORD *)(v15 + 2) = 3145776;
        }
        else
        {
          v12 = 0;
        }
        ExFreePoolWithTag(v10, 0);
        if ( v14 )
        {
          UsbhFreeID((__int64)(v3 + 528));
          v3[529] = v16;
          *((_QWORD *)v3 + 265) = v7;
          UsbhFreeID((__int64)(v3 + 524));
          v3[525] = v17;
          *((_QWORD *)v3 + 263) = Id;
          UsbhFreeID((__int64)(v3 + 520));
          *((_QWORD *)v3 + 261) = v14;
          v3[521] = v12;
          return;
        }
      }
      ExFreePoolWithTag(Id, 0);
      v8 = v7;
    }
    else
    {
      v8 = Id;
    }
    ExFreePoolWithTag(v8, 0);
  }
}
