/*
 * XREFs of CmpFindControlSet @ 0x14073E4AC
 * Callers:
 *     CmpAcquireSystemDriverHiveContext @ 0x1409CDEA8 (CmpAcquireSystemDriverHiveContext.c)
 *     CmpGetSystemControlValues @ 0x1409CF008 (CmpGetSystemControlValues.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x1400B99D0 (RtlInitUnicodeString.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     sprintf_s @ 0x14019B780 (sprintf_s.c)
 *     _guard_dispatch_icall @ 0x1401C6030 (_guard_dispatch_icall.c)
 *     RtlAnsiStringToUnicodeString @ 0x1405ABDA0 (RtlAnsiStringToUnicodeString.c)
 *     CmpFindNameInList @ 0x1405D162C (CmpFindNameInList.c)
 *     CmpFindSubKeyByNameWithStatus @ 0x14073E2EC (CmpFindSubKeyByNameWithStatus.c)
 *     CmpValueToData @ 0x14073EA78 (CmpValueToData.c)
 */

__int64 __fastcall CmpFindControlSet(ULONG_PTR BugCheckParameter3, __int64 a2, int a3, _BYTE *a4)
{
  unsigned int v6; // r12d
  __int64 (__fastcall *v8)(ULONG_PTR, __int64, _DWORD *); // rax
  __int64 v9; // rdi
  __int64 v10; // rdi
  __int64 v11; // rax
  __int64 v12; // rax
  _DWORD *v13; // rsi
  __int64 v14; // rax
  NTSTATUS v15; // eax
  ULONG_PTR v16; // rcx
  __int64 v17; // rax
  __int64 v18; // rdi
  __int64 v19; // rax
  _DWORD *v20; // rax
  _BYTE *v22; // rdi
  __int64 *v23; // rdx
  unsigned int v24; // [rsp+30h] [rbp-D0h] BYREF
  unsigned int v25; // [rsp+34h] [rbp-CCh] BYREF
  _DWORD v26[2]; // [rsp+38h] [rbp-C8h] BYREF
  __int64 v27; // [rsp+40h] [rbp-C0h] BYREF
  _DWORD v28[2]; // [rsp+48h] [rbp-B8h] BYREF
  UNICODE_STRING DestinationString; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v30; // [rsp+68h] [rbp-98h] BYREF
  __int64 v31; // [rsp+70h] [rbp-90h] BYREF
  ANSI_STRING SourceString; // [rsp+78h] [rbp-88h] BYREF
  char DstBuf[128]; // [rsp+90h] [rbp-70h] BYREF
  char v34; // [rsp+110h] [rbp+10h] BYREF

  v28[1] = 0;
  v26[1] = 0;
  v6 = a2;
  v8 = *(__int64 (__fastcall **)(ULONG_PTR, __int64, _DWORD *))(BugCheckParameter3 + 8);
  v28[0] = -1;
  v27 = 0xFFFFFFFFLL;
  v31 = 0xFFFFFFFFLL;
  v26[0] = -1;
  v30 = 0xFFFFFFFFLL;
  v9 = v8(BugCheckParameter3, a2, v26);
  if ( !v9 )
    return 0xFFFFFFFFLL;
  RtlInitUnicodeString(&DestinationString, L"select");
  CmpFindSubKeyByNameWithStatus(BugCheckParameter3, v9, &DestinationString.Length, &v24);
  (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(BugCheckParameter3 + 16))(BugCheckParameter3, v26);
  if ( v24 == -1 )
    return 0xFFFFFFFFLL;
  v10 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, _DWORD *))(BugCheckParameter3 + 8))(BugCheckParameter3, v24, v26);
  if ( !v10 )
    return 0xFFFFFFFFLL;
  RtlInitUnicodeString(&DestinationString, L"AutoSelect");
  CmpFindNameInList(BugCheckParameter3, v10 + 36, (int)&DestinationString, 0, 0LL, (__int64)&v25);
  (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(BugCheckParameter3 + 16))(BugCheckParameter3, v26);
  if ( v25 == -1 )
  {
    *a4 = 1;
  }
  else
  {
    if ( !(*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, _DWORD *))(BugCheckParameter3 + 8))(
            BugCheckParameter3,
            v25,
            v28) )
      return 0xFFFFFFFFLL;
    v22 = (_BYTE *)CmpValueToData(BugCheckParameter3, (__int64)&v30);
    (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(BugCheckParameter3 + 16))(BugCheckParameter3, v28);
    if ( !v22 )
      return 0xFFFFFFFFLL;
    *a4 = *v22;
    (*(void (__fastcall **)(ULONG_PTR, __int64 *))(BugCheckParameter3 + 16))(BugCheckParameter3, &v30);
  }
  v11 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, _DWORD *))(BugCheckParameter3 + 8))(BugCheckParameter3, v24, v26);
  if ( v11 )
  {
    CmpFindNameInList(BugCheckParameter3, v11 + 36, a3, 0, 0LL, (__int64)&v25);
    (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(BugCheckParameter3 + 16))(BugCheckParameter3, v26);
    if ( v25 != -1 )
    {
      v12 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, _DWORD *))(BugCheckParameter3 + 8))(
              BugCheckParameter3,
              v25,
              v28);
      if ( v12 )
      {
        if ( *(_DWORD *)(v12 + 12) != 4 )
        {
          v23 = (__int64 *)v28;
          goto LABEL_30;
        }
        v13 = (_DWORD *)CmpValueToData(BugCheckParameter3, (__int64)&v27);
        (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(BugCheckParameter3 + 16))(BugCheckParameter3, v28);
        if ( v13 )
        {
          sprintf_s(DstBuf, 0x80uLL, "ControlSet%03d", *v13);
          v14 = -1LL;
          do
            ++v14;
          while ( DstBuf[v14] );
          SourceString.MaximumLength = v14;
          SourceString.Length = v14;
          *(_DWORD *)&DestinationString.Length = 0x1000000;
          SourceString.Buffer = DstBuf;
          DestinationString.Buffer = (wchar_t *)&v34;
          v15 = RtlAnsiStringToUnicodeString(&DestinationString, &SourceString, 0);
          v16 = BugCheckParameter3;
          if ( v15 < 0
            || (v17 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, _DWORD *))(BugCheckParameter3 + 8))(
                        BugCheckParameter3,
                        v6,
                        v26),
                v16 = BugCheckParameter3,
                !v17)
            || (CmpFindSubKeyByNameWithStatus(BugCheckParameter3, v17, &DestinationString.Length, &v25),
                (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(BugCheckParameter3 + 16))(BugCheckParameter3, v26),
                v16 = BugCheckParameter3,
                v25 == -1) )
          {
            v23 = &v27;
            goto LABEL_32;
          }
          v18 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, _DWORD *))(BugCheckParameter3 + 8))(
                  BugCheckParameter3,
                  v24,
                  v26);
          if ( v18 )
          {
            RtlInitUnicodeString(&DestinationString, L"Current");
            CmpFindNameInList(BugCheckParameter3, v18 + 36, (int)&DestinationString, 0, 0LL, (__int64)&v24);
            (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(BugCheckParameter3 + 16))(BugCheckParameter3, v26);
            if ( v24 == -1 )
            {
LABEL_23:
              (*(void (__fastcall **)(ULONG_PTR, __int64 *))(BugCheckParameter3 + 16))(BugCheckParameter3, &v27);
              return v25;
            }
            v19 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, _DWORD *))(BugCheckParameter3 + 8))(
                    BugCheckParameter3,
                    v24,
                    v28);
            if ( v19 )
            {
              if ( *(_DWORD *)(v19 + 12) != 4 )
              {
LABEL_22:
                (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(BugCheckParameter3 + 16))(BugCheckParameter3, v28);
                goto LABEL_23;
              }
              v20 = (_DWORD *)CmpValueToData(BugCheckParameter3, (__int64)&v31);
              if ( v20 )
              {
                *v20 = *v13;
                (*(void (__fastcall **)(ULONG_PTR, __int64 *))(BugCheckParameter3 + 16))(BugCheckParameter3, &v31);
                goto LABEL_22;
              }
            }
          }
          v23 = &v27;
LABEL_30:
          v16 = BugCheckParameter3;
LABEL_32:
          (*(void (__fastcall **)(ULONG_PTR, __int64 *))(BugCheckParameter3 + 16))(v16, v23);
        }
      }
    }
  }
  return 0xFFFFFFFFLL;
}
