/*
 * XREFs of ?EnsureConnected@DispBrokerClient@@AEAAJXZ @ 0x1C00C8824
 * Callers:
 *     ?ConnectSessionDisplayBroker@DXGSESSIONDATA@@QEAAJXZ @ 0x1C00C870C (-ConnectSessionDisplayBroker@DXGSESSIONDATA@@QEAAJXZ.c)
 * Callees:
 *     ?RtlStringCchPrintfW@@YAJPEAG_KPEBGZZ @ 0x1C000169C (-RtlStringCchPrintfW@@YAJPEAG_KPEBGZZ.c)
 *     DXGKCALLONEXIT__lambda_d81a481debf6296c527a71b94d2ae09c___ @ 0x1C000171C (DXGKCALLONEXIT__lambda_d81a481debf6296c527a71b94d2ae09c___.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C000C5A0 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     __security_check_cookie @ 0x1C0023340 (__security_check_cookie.c)
 *     memset @ 0x1C0025440 (memset.c)
 *     _lambda_d7c4861ef0734605370a98f05df27570_::operator() @ 0x1C00C8A9C (_lambda_d7c4861ef0734605370a98f05df27570_--operator().c)
 */

__int64 __fastcall DispBrokerClient::EnsureConnected(unsigned int **this)
{
  unsigned __int64 v2; // rax
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // r8
  const unsigned __int16 *v6; // r8
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  int v10; // eax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  _QWORD *v14; // rax
  __int64 v15; // rdx
  _QWORD *v16; // rbx
  HANDLE v17; // rcx
  unsigned int v18; // ebx
  __int64 v20; // rax
  __int64 v21; // rcx
  __int64 v22; // rax
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // r8
  __int64 v26; // r9
  __int64 v27; // rax
  __int64 v28; // [rsp+68h] [rbp-A0h] BYREF
  HANDLE Handle; // [rsp+70h] [rbp-98h] BYREF
  unsigned __int64 v30; // [rsp+78h] [rbp-90h] BYREF
  _QWORD *v31; // [rsp+80h] [rbp-88h] BYREF
  __int64 v32; // [rsp+88h] [rbp-80h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+90h] [rbp-78h] BYREF
  __int128 v34; // [rsp+A0h] [rbp-68h] BYREF
  __int128 v35; // [rsp+B0h] [rbp-58h]
  char v36; // [rsp+C0h] [rbp-48h]
  _QWORD v37[4]; // [rsp+C8h] [rbp-40h] BYREF
  __int128 v38; // [rsp+E8h] [rbp-20h]
  _OWORD v39[2]; // [rsp+F8h] [rbp-10h] BYREF
  _QWORD v40[10]; // [rsp+118h] [rbp+10h] BYREF
  wchar_t Dest[56]; // [rsp+168h] [rbp+60h] BYREF
  WCHAR SourceString[56]; // [rsp+1D8h] [rbp+D0h] BYREF

  LODWORD(v28) = 0;
  v2 = KeQueryInterruptTimePrecise(&v30);
  *(_QWORD *)&v34 = this;
  v31 = 0LL;
  *((_QWORD *)&v34 + 1) = &v31;
  *(_QWORD *)&v35 = &v28;
  *((_QWORD *)&v35 + 1) = &v30;
  v30 = v2 / 0xA;
  v39[0] = v34;
  v39[1] = v35;
  DXGKCALLONEXIT__lambda_d81a481debf6296c527a71b94d2ae09c_((__int64)&v34, v39);
  memset(Dest, 0, 0x6CuLL);
  memset(SourceString, 0, 0x6CuLL);
  LODWORD(v28) = RtlStringCchPrintfW(Dest, 54LL, L"\\Sessions\\%d", **this);
  if ( (int)v28 < 0 )
  {
    v20 = WdLogNewEntry5_WdError(v4, v3, v5);
    v21 = (int)v28;
    *(_QWORD *)(v20 + 32) = 0LL;
LABEL_22:
    *(_QWORD *)(v20 + 24) = v21;
    WdLogEvent5_WdError(v20);
LABEL_12:
    v18 = v28;
    goto LABEL_13;
  }
  v6 = L"%s\\BaseNamedObjects\\DispBrokerPort";
  if ( !*((_BYTE *)this + 9) )
    v6 = L"%s\\Windows\\DispBrokerPort";
  LODWORD(v28) = RtlStringCchPrintfW(SourceString, 54LL, v6, Dest);
  if ( (int)v28 < 0 )
  {
    v20 = WdLogNewEntry5_WdError(v8, v7, v9);
    v21 = (int)v28;
    *(_QWORD *)(v20 + 32) = 1LL;
    goto LABEL_22;
  }
  *(_QWORD *)&DestinationString.Length = 0LL;
  DestinationString.Buffer = 0LL;
  RtlInitUnicodeString(&DestinationString, SourceString);
  v37[0] = 48LL;
  v37[3] = 512LL;
  v37[1] = 0LL;
  v37[2] = 0LL;
  v38 = 0LL;
  memset(v40, 0, 0x48uLL);
  v40[2] = 65280LL;
  LODWORD(v40[0]) = 0x100000;
  v32 = -150000000LL;
  Handle = 0LL;
  v10 = ZwAlpcConnectPort(&Handle, &DestinationString, v37, v40, 1179648, 0LL, 0LL, 0LL, 0LL, 0LL, &v32);
  LODWORD(v28) = v10;
  if ( v10 == 258 )
  {
    LODWORD(v28) = -1073741505;
    v20 = WdLogNewEntry5_WdError(v12, v11, v13);
    v21 = (int)v28;
    goto LABEL_22;
  }
  if ( v10 == 192 )
  {
    LODWORD(v28) = -1073741749;
    v20 = WdLogNewEntry5_WdError(v12, v11, v13);
    v21 = (int)v28;
    *(_QWORD *)(v20 + 32) = 3LL;
    goto LABEL_22;
  }
  if ( v10 < 0 )
  {
    v20 = WdLogNewEntry5_WdError(v12, v11, v13);
    v21 = (int)v28;
    *(_QWORD *)(v20 + 32) = 2LL;
    goto LABEL_22;
  }
  v14 = operator new[](0x10uLL, 0x4B677844u, PagedPool);
  v16 = v14;
  if ( v14 )
  {
    v17 = Handle;
    *(_DWORD *)v14 = 0;
    v14[1] = v17;
    if ( !v17 )
    {
      v22 = WdLogNewEntry5_WdAssertion(0LL, v15);
      *(_QWORD *)(v22 + 24) = 34LL;
      WdLogEvent5_WdAssertion(v22);
    }
  }
  else
  {
    v16 = 0LL;
  }
  v31 = v16;
  if ( v16 )
    goto LABEL_12;
  ZwClose(Handle);
  v27 = WdLogNewEntry5_WdLowResource(v24, v23, v25, v26);
  *(_QWORD *)(v27 + 24) = 275LL;
  WdLogEvent5_WdLowResource(v27);
  v18 = -1073741801;
LABEL_13:
  if ( v36 )
    lambda_d7c4861ef0734605370a98f05df27570_::operator()(&v34);
  return v18;
}
