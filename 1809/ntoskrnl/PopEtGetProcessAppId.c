/*
 * XREFs of PopEtGetProcessAppId @ 0x14069FEA8
 * Callers:
 *     PoEnergyContextStart @ 0x14069FDCC (PoEnergyContextStart.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x1400B99D0 (RtlInitUnicodeString.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     memset @ 0x1401D1980 (memset.c)
 *     PopEtAppIdDereference @ 0x140601278 (PopEtAppIdDereference.c)
 *     PopEtAppIdIntern @ 0x14069FFF0 (PopEtAppIdIntern.c)
 *     PopEtGetProcessSidAndPackageIdentity @ 0x1406A078C (PopEtGetProcessSidAndPackageIdentity.c)
 *     PopEtGetProcessImageInfo @ 0x1406A086C (PopEtGetProcessImageInfo.c)
 */

__int64 __fastcall PopEtGetProcessAppId(__int64 a1, __int64 *a2)
{
  UNICODE_STRING *p_DestinationString; // rbx
  int v5; // ebx
  __int64 v6; // rcx
  unsigned __int64 i; // rcx
  WCHAR v9; // ax
  __int64 v10; // [rsp+20h] [rbp-E0h] BYREF
  char v11[8]; // [rsp+28h] [rbp-D8h] BYREF
  _QWORD v12[10]; // [rsp+30h] [rbp-D0h] BYREF
  UNICODE_STRING DestinationString; // [rsp+80h] [rbp-80h] BYREF
  _BYTE v14[80]; // [rsp+90h] [rbp-70h] BYREF
  int v15; // [rsp+E0h] [rbp-20h] BYREF
  char v16; // [rsp+E4h] [rbp-1Ch] BYREF
  char v17; // [rsp+1E4h] [rbp+E4h] BYREF
  WCHAR SourceString[16]; // [rsp+270h] [rbp+170h] BYREF

  p_DestinationString = *(UNICODE_STRING **)(a1 + 1128);
  v10 = 0LL;
  if ( !p_DestinationString || !p_DestinationString->Length )
  {
    for ( i = 0LL; i < 0xF; ++i )
    {
      v9 = *(unsigned __int8 *)(a1 + i + 1104);
      SourceString[i] = v9;
      if ( !(_BYTE)v9 )
        break;
    }
    SourceString[14] = 0;
    RtlInitUnicodeString(&DestinationString, SourceString);
    p_DestinationString = &DestinationString;
  }
  PopEtGetProcessImageInfo(a1, v11);
  PopEtGetProcessSidAndPackageIdentity(a1, v14, &v15);
  memset(v12, 0, sizeof(v12));
  v12[4] = v11;
  v12[8] = v14;
  HIWORD(v12[9]) = 4 * (v14[1] + 2);
  v12[5] = p_DestinationString->Buffer;
  LOWORD(v12[9]) = p_DestinationString->Length >> 1;
  v12[6] = &v16;
  *(_DWORD *)((char *)&v12[9] + 2) = v15;
  v12[7] = &v17;
  v5 = PopEtAppIdIntern(v12, &v10);
  if ( v5 < 0 )
  {
    v6 = v10;
  }
  else
  {
    v6 = 0LL;
    *a2 = v10;
    v5 = 0;
  }
  if ( v6 )
    PopEtAppIdDereference(v6);
  return (unsigned int)v5;
}
