/*
 * XREFs of SmKmStoreTerminateWorker @ 0x140307940
 * Callers:
 *     <none>
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x14004D2F0 (ExReleaseRundownProtection_0.c)
 *     EtwWriteEx @ 0x1400CAE40 (EtwWriteEx.c)
 *     SmKmStoreRefFromStoreIndex @ 0x1400E12A8 (SmKmStoreRefFromStoreIndex.c)
 *     SmEtwEnabled @ 0x1400E3EA8 (SmEtwEnabled.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     ZwQuerySystemInformation @ 0x1401B89B0 (ZwQuerySystemInformation.c)
 *     ZwSetSystemInformation @ 0x1401BB750 (ZwSetSystemInformation.c)
 *     memmove @ 0x1401D1640 (memmove.c)
 *     memset @ 0x1401D1980 (memset.c)
 *     SmKmEtwAppendObjectName @ 0x1403073AC (SmKmEtwAppendObjectName.c)
 *     SmKmEtwAppendProductName @ 0x140307528 (SmKmEtwAppendProductName.c)
 *     SmKmSqmAddToStream @ 0x140309824 (SmKmSqmAddToStream.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 */

void __fastcall SmKmStoreTerminateWorker(PVOID P)
{
  unsigned int v2; // ebx
  __int64 v3; // r15
  unsigned int v4; // edx
  int v5; // r10d
  struct _EX_RUNDOWN_REF *v6; // rax
  struct _EVENT_DATA_DESCRIPTOR *UserData; // rsi
  ULONGLONG *v8; // r14
  int v9; // edx
  _BYTE *v10; // r8
  __int64 v11; // rax
  unsigned int v12; // r9d
  int v13; // r8d
  _DWORD *v14; // rdx
  __int64 v15; // rax
  __int64 v16; // rbx
  struct _EX_RUNDOWN_REF *v17; // rax
  unsigned __int64 v18; // rbx
  const wchar_t *v19; // rax
  ULONG ReturnLength[2]; // [rsp+48h] [rbp-C0h] BYREF
  __int64 SystemInformation; // [rsp+50h] [rbp-B8h] BYREF
  __int64 *v22; // [rsp+58h] [rbp-B0h]
  __int64 v23; // [rsp+60h] [rbp-A8h]
  __int64 v24; // [rsp+68h] [rbp-A0h] BYREF
  _QWORD UserDataCount[4]; // [rsp+70h] [rbp-98h] BYREF
  int v26; // [rsp+90h] [rbp-78h]
  const wchar_t *v27; // [rsp+98h] [rbp-70h]
  int v28; // [rsp+A0h] [rbp-68h]
  int v29; // [rsp+A8h] [rbp-60h]
  _DWORD v30[20]; // [rsp+B8h] [rbp-50h] BYREF
  _DWORD v31[284]; // [rsp+108h] [rbp+0h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v32[6]; // [rsp+578h] [rbp+470h] BYREF

  memset(v32, 0, sizeof(v32));
  memset(v30, 0, 0x44uLL);
  SystemInformation = 0x800000001LL;
  v22 = (__int64 *)v30;
  v23 = 68LL;
  v30[0] = 1;
  if ( ZwQuerySystemInformation(SystemStoreInformation, &SystemInformation, 0x18u, ReturnLength) >= 0
    && (SystemInformation = 0xD00000001LL,
        v22 = (__int64 *)v31,
        LODWORD(v23) = 1128,
        memset(v31, 0, 0x468uLL),
        v2 = 0,
        v31[0] = 259,
        (v30[0] & 0xFF00) != 0) )
  {
    while ( 1 )
    {
      v3 = v2;
      v31[1] = v30[v2 + 1];
      if ( ZwQuerySystemInformation(SystemStoreInformation, &SystemInformation, 0x18u, ReturnLength) >= 0 )
      {
        v4 = 0;
        if ( v31[4] )
          break;
      }
LABEL_9:
      if ( ++v2 >= BYTE1(v30[0]) )
        goto LABEL_10;
    }
    v5 = v31[24];
    while ( !_bittest(&v5, v4) != *((_DWORD *)P + 13) || v31[v4 + 8] != *((_DWORD *)P + 12) )
    {
      if ( ++v4 >= v31[4] )
        goto LABEL_9;
    }
    memset(UserDataCount, 0, sizeof(UserDataCount));
    HIDWORD(UserDataCount[2]) = 6;
    UserData = v32;
    UserDataCount[1] = v31;
    UserDataCount[0] = v32;
    HIDWORD(UserDataCount[3]) = 1036;
    v8 = SmEtwEnabled(2);
    if ( v8 )
    {
      v9 = UserDataCount[3];
      v10 = (char *)v31 + LODWORD(UserDataCount[3]);
      if ( P != (PVOID)-56LL )
        *v10 = *((_BYTE *)P + 56);
      v11 = LODWORD(UserDataCount[2]);
      v12 = LODWORD(UserDataCount[2]) + 1;
      v32[v11].Ptr = (ULONGLONG)v10;
      v13 = v9 + 1;
      *(_QWORD *)&v32[v11].Size = 1LL;
      v14 = (_DWORD *)((char *)v31 + (unsigned int)(v9 + 1));
      if ( P != (PVOID)-60LL )
        *v14 = *((_DWORD *)P + 15);
      v15 = v12;
      v32[v15].Ptr = (ULONGLONG)v14;
      *(_QWORD *)&v32[v15].Size = 4LL;
      v16 = *((_QWORD *)P + 5);
      LODWORD(UserDataCount[2]) = v12 + 1;
      LODWORD(UserDataCount[3]) = v13 + 4;
      SmKmEtwAppendProductName((__int64)UserDataCount, v16);
      SmKmEtwAppendObjectName((__int64)UserDataCount, *(_QWORD *)(v16 + 8));
      UserData = (struct _EVENT_DATA_DESCRIPTOR *)UserDataCount[0];
    }
    v17 = (struct _EX_RUNDOWN_REF *)SmKmStoreRefFromStoreIndex(*((_QWORD *)P + 4), *((_DWORD *)P + 12) & 0x3FF);
    ExReleaseRundownProtection_0(v17 + 1);
    SystemInformation = 0xA00000001LL;
    v22 = &v24;
    v24 = 0LL;
    HIDWORD(v24) = v30[v3 + 1];
    LODWORD(v23) = 8;
    LODWORD(v24) = 1;
    if ( ZwSetSystemInformation(SystemStoreInformation, &SystemInformation, 0x18uLL) >= 0 )
    {
      if ( v8 )
      {
        EtwWriteEx(*v8, &SmEventCacheTermination, 0LL, 0, 0LL, 0LL, UserDataCount[2], UserData);
        if ( !*((_DWORD *)P + 14) )
        {
          ReturnLength[0] = UserData[3].Size;
          v18 = ReturnLength[0];
          memmove(v31, (const void *)UserData[3].Ptr, ReturnLength[0]);
          v26 = 2;
          v19 = (const wchar_t *)v31;
          v28 = 1;
          *((_WORD *)v31 + (v18 >> 1)) = 0;
          if ( !LOWORD(v31[0]) )
            v19 = L"(null)";
          v27 = v19;
          v29 = *((_DWORD *)P + 15);
          SmKmSqmAddToStream(*v8);
        }
      }
    }
  }
  else
  {
LABEL_10:
    v6 = (struct _EX_RUNDOWN_REF *)SmKmStoreRefFromStoreIndex(*((_QWORD *)P + 4), *((_DWORD *)P + 12) & 0x3FF);
    ExReleaseRundownProtection_0(v6 + 1);
  }
  ExFreePoolWithTag(P, 0);
}
