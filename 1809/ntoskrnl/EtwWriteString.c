/*
 * XREFs of EtwWriteString @ 0x14030E1F0
 * Callers:
 *     <none>
 * Callees:
 *     EtwpLevelKeywordEnabled @ 0x14005B930 (EtwpLevelKeywordEnabled.c)
 *     EtwpEventWriteFull @ 0x1400C8420 (EtwpEventWriteFull.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     memset @ 0x1401D1980 (memset.c)
 */

NTSTATUS __stdcall EtwWriteString(
        REGHANDLE RegHandle,
        UCHAR Level,
        ULONGLONG Keyword,
        LPCGUID ActivityId,
        PCWSTR String)
{
  NTSTATUS v9; // r15d
  REGHANDLE v10; // rdi
  __int64 v12; // rax
  void *v13; // r12
  __int64 v14; // rax
  char v15; // r10
  __int16 v16; // r9
  unsigned __int8 v17; // r10
  _QWORD *v18; // r11
  __int64 v19; // r9
  unsigned __int8 v20; // r10
  _QWORD *v21; // rbx
  _OWORD *v22; // r11
  unsigned __int8 v23; // r10
  __int64 v24; // r9
  _OWORD *v25; // r11
  unsigned __int64 v26; // [rsp+98h] [rbp-21h] BYREF
  _QWORD v27[2]; // [rsp+A0h] [rbp-19h] BYREF
  PCWSTR v28; // [rsp+B0h] [rbp-9h] BYREF
  int v29; // [rsp+B8h] [rbp-1h]
  int v30; // [rsp+BCh] [rbp+3h]
  _BYTE v31[32]; // [rsp+C0h] [rbp+7h] BYREF

  v26 = 0LL;
  memset(v31, 0, sizeof(v31));
  v9 = 0;
  v10 = RegHandle & -(__int64)(RegHandle != 0);
  if ( !v10 )
    return -1073741816;
  v12 = *(_QWORD *)((RegHandle & -(__int64)(RegHandle != 0)) + 0x68);
  v27[1] = Keyword;
  v27[0] = 0LL;
  v13 = (void *)((v12 + 28) & -(__int64)(v12 != 0));
  v14 = -1LL;
  BYTE4(v27[0]) = Level;
  v28 = String;
  do
    ++v14;
  while ( String[v14] );
  v15 = *(_BYTE *)((RegHandle & -(__int64)(RegHandle != 0)) + 0x64);
  v29 = 2 * v14 + 2;
  v30 = 0;
  if ( v15
    && EtwpLevelKeywordEnabled(*(_QWORD *)((RegHandle & -(__int64)(RegHandle != 0)) + 0x20) + 96LL, Level, Keyword) )
  {
    v9 = EtwpEventWriteFull(
           v18,
           v17,
           0,
           0,
           (unsigned __int16 *)v27,
           v16,
           0,
           (GUID *)ActivityId,
           0LL,
           1u,
           (__int64)&v28,
           0LL,
           (__int64)v31,
           0LL,
           *(_WORD *)((RegHandle & -(__int64)(RegHandle != 0)) + 0x62),
           v13,
           &v26);
  }
  if ( *(_BYTE *)((RegHandle & -(__int64)(RegHandle != 0)) + 0x65)
    && EtwpLevelKeywordEnabled(*(_QWORD *)((RegHandle & -(__int64)(RegHandle != 0)) + 0x28) + 96LL, Level, Keyword) )
  {
    v9 = EtwpEventWriteFull(
           *(_QWORD **)((RegHandle & -(__int64)(RegHandle != 0)) + 0x20),
           v20,
           0,
           0,
           (unsigned __int16 *)v27,
           4,
           0,
           (GUID *)ActivityId,
           0LL,
           1u,
           (__int64)&v28,
           0LL,
           (__int64)v31,
           v19,
           *(_WORD *)((RegHandle & -(__int64)(RegHandle != 0)) + 0x62),
           v13,
           &v26);
  }
  v21 = *(_QWORD **)(*(_QWORD *)((RegHandle & -(__int64)(RegHandle != 0)) + 0x20) + 400LL);
  if ( v21 )
  {
    memset(v31, 0, sizeof(v31));
    LOBYTE(v22) = 0;
    if ( *(_BYTE *)(v10 + 102) && EtwpLevelKeywordEnabled((__int64)(v21 + 12), Level, Keyword) )
    {
      v9 = EtwpEventWriteFull(
             v21,
             v23,
             0,
             0,
             (unsigned __int16 *)v27,
             (unsigned __int16)v22 + 4,
             (__int16)v22,
             (GUID *)ActivityId,
             v22,
             1u,
             (__int64)&v28,
             (__int64)v22,
             (__int64)v31,
             (__int64)v22,
             *(_WORD *)(v10 + 98),
             v13,
             &v26);
      LOBYTE(v22) = 0;
    }
    if ( *(_BYTE *)(v10 + 103) != (_BYTE)v22
      && EtwpLevelKeywordEnabled(*(_QWORD *)(*(_QWORD *)(v10 + 40) + 400LL) + 96LL, Level, Keyword) )
    {
      return EtwpEventWriteFull(
               *(_QWORD **)(*(_QWORD *)(v10 + 32) + 400LL),
               *(_BYTE *)(v10 + 101),
               0,
               0,
               (unsigned __int16 *)v27,
               4,
               (__int16)v25,
               (GUID *)ActivityId,
               v25,
               1u,
               (__int64)&v28,
               (__int64)v25,
               (__int64)v31,
               v24,
               *(_WORD *)(v10 + 98),
               v13,
               &v26);
    }
  }
  return v9;
}
