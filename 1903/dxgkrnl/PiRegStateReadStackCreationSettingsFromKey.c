/*
 * XREFs of PiRegStateReadStackCreationSettingsFromKey @ 0x1C01789C0
 * Callers:
 *     PpRegStateReadCreateClassCreationSettings @ 0x1C0178538 (PpRegStateReadCreateClassCreationSettings.c)
 * Callees:
 *     WdmlibRtlInitUnicodeStringEx @ 0x1C0021D3C (WdmlibRtlInitUnicodeStringEx.c)
 *     CmRegUtilUcValueGetFullBuffer @ 0x1C0178604 (CmRegUtilUcValueGetFullBuffer.c)
 *     CmRegUtilWstrValueGetDword @ 0x1C0178B88 (CmRegUtilWstrValueGetDword.c)
 *     SeUtilSecurityInfoFromSecurityDescriptor @ 0x1C0178DC0 (SeUtilSecurityInfoFromSecurityDescriptor.c)
 */

__int64 __fastcall PiRegStateReadStackCreationSettingsFromKey(HANDLE KeyHandle, __int64 a2)
{
  _DWORD *v2; // r13
  _DWORD *v3; // r15
  _DWORD *v4; // r12
  unsigned int *v7; // rsi
  NTSTATUS inited; // ebx
  __int64 v9; // r8
  __int64 v10; // r9
  NTSTATUS FullBuffer; // eax
  int v12; // eax
  int Dword; // eax
  __int64 v14; // r8
  int v15; // eax
  __int64 v16; // r8
  int v17; // eax
  PVOID v19; // rax
  void *v20; // rcx
  struct _UNICODE_STRING DestinationString; // [rsp+30h] [rbp-10h] BYREF
  __int64 v22; // [rsp+88h] [rbp+48h] BYREF
  PVOID P; // [rsp+98h] [rbp+58h] BYREF

  v2 = (_DWORD *)(a2 + 4);
  v3 = (_DWORD *)(a2 + 16);
  *(_DWORD *)a2 = 0;
  v4 = (_DWORD *)(a2 + 20);
  *(_QWORD *)(a2 + 8) = 0LL;
  P = 0LL;
  v22 = 0LL;
  *(_DWORD *)(a2 + 4) = 0;
  *(_DWORD *)(a2 + 16) = 0;
  *(_DWORD *)(a2 + 20) = 0;
  v7 = 0LL;
  *(_QWORD *)&DestinationString.Length = 0LL;
  DestinationString.Buffer = 0LL;
  inited = WdmlibRtlInitUnicodeStringEx(&DestinationString, L"Security");
  if ( inited >= 0 )
  {
    FullBuffer = CmRegUtilUcValueGetFullBuffer(KeyHandle, &DestinationString, v9, v10, &v22);
    v7 = (unsigned int *)v22;
    inited = FullBuffer;
    v10 = 0LL;
  }
  if ( inited < 0 )
  {
    if ( inited == -1073741772 )
      inited = v10;
  }
  else
  {
    LOBYTE(v10) = 1;
    inited = SeCaptureSecurityDescriptor((char *)v7 + v7[2], 0LL, 1LL, v10, &P);
    v10 = 0LL;
  }
  if ( v7 )
  {
    ExFreePoolWithTag(v7, 0);
    v10 = 0LL;
  }
  if ( inited < 0 )
    goto LABEL_27;
  if ( P )
  {
    v12 = SeUtilSecurityInfoFromSecurityDescriptor(P);
    v10 = 0LL;
    inited = v12;
    if ( v12 < 0 )
      goto LABEL_27;
    if ( (_BYTE)v22 )
    {
      ExFreePoolWithTag(P, 0);
    }
    else
    {
      v19 = P;
      *(_DWORD *)a2 |= 2u;
      *(_QWORD *)(a2 + 8) = v19;
    }
  }
  Dword = CmRegUtilWstrValueGetDword(KeyHandle, L"DeviceType", v9, v2);
  v10 = 0LL;
  inited = Dword;
  if ( Dword >= 0 )
  {
    *(_DWORD *)a2 |= 1u;
  }
  else if ( Dword != -1073741772 )
  {
    goto LABEL_27;
  }
  v15 = CmRegUtilWstrValueGetDword(KeyHandle, L"DeviceCharacteristics", v14, v3);
  v10 = 0LL;
  inited = v15;
  if ( v15 >= 0 )
  {
    *(_DWORD *)a2 |= 4u;
  }
  else if ( v15 != -1073741772 )
  {
    goto LABEL_27;
  }
  v17 = CmRegUtilWstrValueGetDword(KeyHandle, L"Exclusive", v16, v4);
  v10 = 0LL;
  inited = v17;
  if ( v17 >= 0 )
  {
    *(_DWORD *)a2 |= 8u;
    return (unsigned int)inited;
  }
  if ( v17 == -1073741772 )
    return 0;
LABEL_27:
  v20 = *(void **)(a2 + 8);
  if ( v20 )
  {
    ExFreePoolWithTag(v20, 0);
    v10 = 0LL;
  }
  *(_DWORD *)a2 = v10;
  *(_QWORD *)(a2 + 8) = v10;
  *v2 = v10;
  *v3 = v10;
  *v4 = v10;
  return (unsigned int)inited;
}
