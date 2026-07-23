/*
 * XREFs of RtlpCreateUserProcess @ 0x1409C6F0C
 * Callers:
 *     RtlCreateUserProcessEx @ 0x1409C6E8C (RtlCreateUserProcessEx.c)
 * Callees:
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     ZwCreateUserProcess @ 0x1401B9B50 (ZwCreateUserProcess.c)
 *     memset @ 0x1401D1980 (memset.c)
 */

NTSTATUS __fastcall RtlpCreateUserProcess(
        unsigned __int16 *a1,
        _DWORD *a2,
        ULONG a3,
        __int64 a4,
        __int64 a5,
        HANDLE *a6)
{
  unsigned int v9; // ecx
  __int64 v10; // rax
  __int64 v11; // rax
  int v12; // eax
  __int64 v14; // rax
  unsigned int v15; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v16; // [rsp+68h] [rbp-98h] BYREF
  OBJECT_ATTRIBUTES ThreadObjectAttributes; // [rsp+70h] [rbp-90h] BYREF
  OBJECT_ATTRIBUTES ProcessObjectAttributes; // [rsp+A0h] [rbp-60h] BYREF
  _PS_CREATE_INFO CreateInfo; // [rsp+D0h] [rbp-30h] BYREF
  _PS_ATTRIBUTE_LIST AttributeList; // [rsp+130h] [rbp+30h] BYREF
  __int64 v21; // [rsp+158h] [rbp+58h]
  __int64 v22; // [rsp+160h] [rbp+60h]
  HANDLE *v23; // [rsp+168h] [rbp+68h]
  __int64 v24; // [rsp+170h] [rbp+70h]
  __int64 v25; // [rsp+178h] [rbp+78h]
  __int64 v26; // [rsp+180h] [rbp+80h]
  __int64 v27; // [rsp+188h] [rbp+88h]
  __int64 v28; // [rsp+190h] [rbp+90h]
  __int64 v29; // [rsp+198h] [rbp+98h]
  __int64 v30; // [rsp+1A0h] [rbp+A0h]
  unsigned int *v31; // [rsp+1A8h] [rbp+A8h]
  __int64 v32; // [rsp+1B0h] [rbp+B0h]

  memset(a6, 0, 0x68uLL);
  ProcessObjectAttributes.RootDirectory = 0LL;
  ProcessObjectAttributes.ObjectName = 0LL;
  ThreadObjectAttributes.RootDirectory = 0LL;
  ThreadObjectAttributes.ObjectName = 0LL;
  v16 = 0LL;
  ProcessObjectAttributes.Length = 48;
  ThreadObjectAttributes.Length = 48;
  *(_DWORD *)a6 = 104;
  ProcessObjectAttributes.Attributes = 512;
  *(_OWORD *)&ProcessObjectAttributes.SecurityDescriptor = 0LL;
  ThreadObjectAttributes.Attributes = 512;
  *(_OWORD *)&ThreadObjectAttributes.SecurityDescriptor = 0LL;
  memset(&CreateInfo, 0, sizeof(CreateInfo));
  *(_BYTE *)&CreateInfo.InitState.1 |= 4u;
  AttributeList.Attributes[0].ReturnLength = 0LL;
  v9 = 2;
  v24 = 0LL;
  AttributeList.Attributes[0].Value = (ULONG_PTR)(a6 + 3);
  v23 = a6 + 5;
  CreateInfo.Size = 88LL;
  AttributeList.Attributes[0].Attribute = 65539LL;
  AttributeList.Attributes[0].Size = 16LL;
  v21 = 6LL;
  v22 = 64LL;
  if ( a1 )
  {
    v10 = *a1;
    v28 = 0LL;
    v26 = v10;
    v27 = *((_QWORD *)a1 + 1);
    v25 = 131077LL;
    v29 = 131082LL;
    v32 = 0LL;
    v9 = 4;
    v15 = v15 & 0xFFFFFFE0 | 2;
    v31 = &v15;
    v30 = 8LL;
  }
  if ( (a3 & 0x40) != 0 )
  {
    v11 = v9;
    AttributeList.Attributes[v11].ReturnLength = 0LL;
    ++v9;
    AttributeList.Attributes[v11].Attribute = 393233LL;
    AttributeList.Attributes[v11].Size = 1LL;
    *(ULONG_PTR *)((char *)&AttributeList.Attributes[0].Value + v11 * 32) = 97LL;
  }
  if ( a2 )
  {
    v12 = a2[2];
    if ( v12 < 0 )
    {
      a2[2] = v12 & 0x7FFFFFFF;
      v14 = v9;
      AttributeList.Attributes[v14].ReturnLength = 0LL;
      ++v9;
      AttributeList.Attributes[v14].Attribute = 131090LL;
      AttributeList.Attributes[v14].Size = 8LL;
      *(ULONG_PTR *)((char *)&AttributeList.Attributes[0].Value + v14 * 32) = (ULONG_PTR)&v16;
    }
  }
  AttributeList.TotalLength = 32LL * v9 + 8;
  return ZwCreateUserProcess(
           a6 + 1,
           a6 + 2,
           0x2000000u,
           0x2000000u,
           &ProcessObjectAttributes,
           &ThreadObjectAttributes,
           a3,
           1u,
           a2,
           &CreateInfo,
           &AttributeList);
}
