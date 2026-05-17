/*
 * XREFs of CsrpConnectToServer @ 0x18005D994
 * Callers:
 *     CsrClientConnectToServer @ 0x18005D7C0 (CsrClientConnectToServer.c)
 * Callees:
 *     RtlAllocateHeap @ 0x18000F2A0 (RtlAllocateHeap.c)
 *     RtlFreeHeap @ 0x180017E40 (RtlFreeHeap.c)
 *     RtlCreateHeap @ 0x18005F7E0 (RtlCreateHeap.c)
 *     __security_check_cookie @ 0x18008FEC0 (__security_check_cookie.c)
 *     NtClose @ 0x1800A04C0 (NtClose.c)
 *     ZwMapViewOfSection @ 0x1800A07E0 (ZwMapViewOfSection.c)
 *     NtOpenSection @ 0x1800A09C0 (NtOpenSection.c)
 *     NtCreateSection @ 0x1800A0C20 (NtCreateSection.c)
 *     ZwConnectPort @ 0x1800A1690 (ZwConnectPort.c)
 *     memmove @ 0x1800A6DC0 (memmove.c)
 *     memset @ 0x1800A7100 (memset.c)
 */

__int64 __fastcall CsrpConnectToServer(_WORD *Src, int a2, __int64 *a3, int a4, _DWORD *a5)
{
  __int64 v9; // rax
  size_t v10; // rsi
  unsigned __int64 v11; // r8
  char *Heap; // rax
  char *v13; // rbx
  char *v14; // rbx
  int v15; // edi
  int v16; // ebx
  HANDLE v17; // rcx
  struct _PEB *v18; // rcx
  HANDLE v20; // rcx
  HANDLE v21; // [rsp+50h] [rbp-B0h] BYREF
  int v22; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v23; // [rsp+60h] [rbp-A0h] BYREF
  char *v24; // [rsp+68h] [rbp-98h] BYREF
  HANDLE Handle; // [rsp+70h] [rbp-90h] BYREF
  __int64 v26; // [rsp+78h] [rbp-88h]
  char v27[8]; // [rsp+80h] [rbp-80h] BYREF
  int v28; // [rsp+88h] [rbp-78h] BYREF
  HANDLE v29; // [rsp+90h] [rbp-70h]
  int v30; // [rsp+98h] [rbp-68h]
  __int64 v31; // [rsp+A0h] [rbp-60h]
  __int128 v32; // [rsp+A8h] [rbp-58h]
  int v33; // [rsp+B8h] [rbp-48h] BYREF
  __int64 v34; // [rsp+C0h] [rbp-40h]
  __int64 v35; // [rsp+C8h] [rbp-38h]
  int v36; // [rsp+D0h] [rbp-30h] BYREF
  __int64 v37; // [rsp+D8h] [rbp-28h]
  __int16 *v38; // [rsp+E0h] [rbp-20h]
  int v39; // [rsp+E8h] [rbp-18h]
  __int128 v40; // [rsp+F0h] [rbp-10h]
  _QWORD v41[4]; // [rsp+100h] [rbp+0h] BYREF
  __int64 v42; // [rsp+120h] [rbp+20h]
  __int64 v43; // [rsp+128h] [rbp+28h]
  _QWORD v44[12]; // [rsp+130h] [rbp+30h] BYREF
  char v45[4]; // [rsp+190h] [rbp+90h] BYREF
  int v46; // [rsp+194h] [rbp+94h]
  __int16 v47; // [rsp+198h] [rbp+98h]

  if ( !Src )
    return 3221225485LL;
  v9 = -1LL;
  do
    ++v9;
  while ( Src[v9] );
  v10 = 2 * v9;
  v11 = 2 * v9 + 28;
  if ( v11 > 0xFFFF )
    return 3221225734LL;
  word_180165B22 = 2 * v9 + 28;
  Heap = (char *)RtlAllocateHeap(CsrHeap, NtdllBaseTag, v11);
  qword_180165B28 = (__int64)Heap;
  v13 = Heap;
  if ( !Heap )
    return 3221225495LL;
  memmove(Heap, Src, v10);
  *(_WORD *)&v13[v10] = 92;
  v14 = &v13[v10 + 2];
  *(_OWORD *)v14 = *(_OWORD *)L"SharedSection";
  *((_QWORD *)v14 + 2) = *(_QWORD *)L"ction";
  *((_WORD *)v14 + 12) = aSharedsection[12];
  v36 = 48;
  CsrPortName = (_WORD)v14 - qword_180165B28 + 26;
  v38 = &CsrPortName;
  v37 = 0LL;
  v39 = 64;
  v40 = 0LL;
  v15 = NtOpenSection(&v21, 4LL, &v36);
  if ( v15 < 0 )
  {
    RtlFreeHeap(CsrHeap, 0, qword_180165B28);
    return (unsigned int)v15;
  }
  *(_QWORD *)v14 = *(_QWORD *)L"ApiPort";
  *((_DWORD *)v14 + 2) = *(_DWORD *)L"ort";
  *((_WORD *)v14 + 6) = aApiport[6];
  CsrPortName = (_WORD)v14 - qword_180165B28 + 14;
  v46 = 2;
  v47 = 257;
  v23 = 0x10000LL;
  v16 = NtCreateSection(&Handle, 983071LL, 0LL, &v23, 4, 0x8000000, 0LL);
  if ( v16 < 0 )
    goto LABEL_23;
  v29 = Handle;
  v31 = (unsigned int)v23;
  v28 = 48;
  v30 = 0;
  v33 = 24;
  v34 = 0LL;
  v35 = 0LL;
  v22 = 48;
  v32 = 0LL;
  if ( a4 != 8 )
    goto LABEL_19;
  if ( a2 == 1 )
  {
    v43 = *a3;
    v42 = 1LL;
  }
  else
  {
LABEL_19:
    HIDWORD(v42) = -1073741811;
  }
  v16 = ZwConnectPort(&CsrPortHandle, &CsrPortName, v45, &v28, &v33, v27, v41, &v22);
  NtClose(Handle);
  if ( v16 < 0 )
  {
LABEL_23:
    v20 = v21;
  }
  else
  {
    v17 = v21;
    *a5 = HIDWORD(v42);
    v24 = 0LL;
    v26 = 0LL;
    v16 = ZwMapViewOfSection(v17, -1LL, &v24);
    NtClose(v21);
    v21 = 0LL;
    if ( v16 >= 0 )
    {
      v18 = NtCurrentPeb();
      v18->CsrServerReadOnlySharedMemoryBase = v41[0];
      v18->ReadOnlySharedMemoryBase = v24;
      v18->ReadOnlyStaticServerData = (void **)&v24[v41[1] - v41[0]];
      CsrReadOnlySharedMemorySize = v26;
      CsrProcessId = v41[2];
      CsrPortMemoryRemoteDelta = *((_QWORD *)&v32 + 1) - v32;
      memset(v44, 0, sizeof(v44));
      v44[9] = WinSqmCheckEscalationSetString;
      LODWORD(v44[0]) = 96;
      v44[7] = 4096LL;
      v44[8] = v31;
      CsrPortHeap = RtlCreateHeap(0x8000LL, v32, v31, 1LL, 0LL, v44);
      if ( CsrPortHeap )
      {
        CsrPortBaseTag = 0;
        return 0LL;
      }
      v16 = -1073741801;
    }
    NtClose(CsrPortHandle);
    v20 = v21;
    CsrPortHandle = 0LL;
    if ( !v21 )
      goto LABEL_25;
  }
  NtClose(v20);
LABEL_25:
  RtlFreeHeap(CsrHeap, 0, qword_180165B28);
  return (unsigned int)v16;
}
