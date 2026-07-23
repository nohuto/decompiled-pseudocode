/*
 * XREFs of CmpIsLoadType @ 0x1409CF6B4
 * Callers:
 *     CmpFindDrivers @ 0x1409CF508 (CmpFindDrivers.c)
 * Callees:
 *     RtlInitUnicodeStringEx @ 0x140015EB0 (RtlInitUnicodeStringEx.c)
 *     _guard_dispatch_icall @ 0x1401C6030 (_guard_dispatch_icall.c)
 *     CmpFindSubKeyByName @ 0x14073E2CC (CmpFindSubKeyByName.c)
 *     CmpFindValueByName @ 0x14073EA48 (CmpFindValueByName.c)
 *     CmpValueToData @ 0x14073EA78 (CmpValueToData.c)
 *     CmpGetNodeName @ 0x1409CFA0C (CmpGetNodeName.c)
 */

char __fastcall CmpIsLoadType(
        ULONG_PTR BugCheckParameter3,
        __int64 a2,
        unsigned int a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        __int64 a9,
        __int64 a10)
{
  char v11; // di
  unsigned int ValueByName; // r15d
  ULONG_PTR v13; // rbx
  __int64 (__fastcall *v14)(ULONG_PTR, __int64, _DWORD *); // rax
  __int64 v15; // rax
  __int64 v16; // rsi
  ULONG_PTR v17; // rax
  _DWORD *v18; // rsi
  void (__fastcall *v19)(ULONG_PTR, __int64 *); // rax
  const WCHAR *NodeName; // rax
  const WCHAR *v21; // r12
  unsigned int SubKeyByName; // eax
  __int64 v23; // rax
  unsigned int v24; // ebx
  ULONG_PTR v25; // rax
  int *v26; // rbx
  int v27; // ebx
  __int64 *v28; // r8
  unsigned int v29; // eax
  __int64 v30; // rax
  _DWORD v32[4]; // [rsp+30h] [rbp-20h] BYREF
  UNICODE_STRING DestinationString; // [rsp+40h] [rbp-10h] BYREF
  __int64 v34; // [rsp+90h] [rbp+40h] BYREF
  unsigned int v35; // [rsp+A0h] [rbp+50h] BYREF
  __int64 v36; // [rsp+A8h] [rbp+58h] BYREF

  v35 = a3;
  v32[1] = 0;
  v34 = 0xFFFFFFFFLL;
  v11 = 0;
  v32[0] = -1;
  ValueByName = -1;
  v32[2] = -1;
  v13 = 0LL;
  v32[3] = 0;
  v36 = 0xFFFFFFFFLL;
  a8 = 0xFFFFFFFFLL;
  a5 = 0xFFFFFFFFLL;
  a10 = 0xFFFFFFFFLL;
  v14 = *(__int64 (__fastcall **)(ULONG_PTR, __int64, _DWORD *))(BugCheckParameter3 + 8);
  LOWORD(v35) = 0;
  v15 = v14(BugCheckParameter3, a2, v32);
  a9 = v15;
  if ( v15 )
  {
    v16 = a6;
    if ( a6 && a7 )
    {
      NodeName = (const WCHAR *)CmpGetNodeName(BugCheckParameter3, v15, &v35);
      v21 = NodeName;
      if ( NodeName )
      {
        if ( RtlInitUnicodeStringEx(&DestinationString, NodeName) >= 0 )
        {
          SubKeyByName = CmpFindSubKeyByName(v16, a7, (__int64)&DestinationString);
          if ( SubKeyByName != -1 )
          {
            v23 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64 *))(v16 + 8))(v16, SubKeyByName, &v36);
            if ( v23 )
            {
              v13 = v16;
              ValueByName = CmpFindValueByName(v16, v23, (int)&CmpStartString);
              (*(void (__fastcall **)(__int64, __int64 *))(v16 + 16))(v16, &v36);
            }
          }
        }
        (*(void (__fastcall **)(const WCHAR *, _QWORD))(BugCheckParameter3 + 32))(v21, (unsigned __int16)v35);
        if ( ValueByName != -1 )
          goto LABEL_4;
      }
      v24 = CmpFindValueByName(BugCheckParameter3, a9, (int)L"\b\n");
      if ( v24 == -1 )
        goto LABEL_8;
      v25 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, __int64 *))(BugCheckParameter3 + 8))(
              BugCheckParameter3,
              v24,
              &a5);
      if ( !v25 )
        goto LABEL_8;
      v26 = (int *)CmpValueToData(BugCheckParameter3, v24, v25, &v35, (__int64)&a8);
      (*(void (__fastcall **)(ULONG_PTR, __int64 *))(BugCheckParameter3 + 16))(BugCheckParameter3, &a5);
      if ( !v26 )
        goto LABEL_8;
      v27 = *v26;
      (*(void (__fastcall **)(ULONG_PTR, __int64 *))(BugCheckParameter3 + 16))(BugCheckParameter3, &a8);
      v28 = &CmpDriverWildcardString;
      if ( (v27 & 0xB) == 0 )
        v28 = &CmpServiceWildcardString;
      v29 = CmpFindSubKeyByName(v16, a7, (__int64)v28);
      if ( v29 != -1 )
      {
        v30 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64 *))(v16 + 8))(v16, v29, &v36);
        if ( v30 )
        {
          v13 = v16;
          ValueByName = CmpFindValueByName(v16, v30, (int)&CmpStartString);
          (*(void (__fastcall **)(__int64, __int64 *))(v16 + 16))(v16, &v36);
          if ( ValueByName != -1 )
            goto LABEL_4;
        }
      }
    }
    v13 = BugCheckParameter3;
    ValueByName = CmpFindValueByName(BugCheckParameter3, a9, (int)&CmpStartString);
    if ( ValueByName != -1 )
    {
LABEL_4:
      v17 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, __int64 *))(v13 + 8))(v13, ValueByName, &a10);
      if ( v17 )
      {
        v18 = CmpValueToData(v13, ValueByName, v17, &v35, (__int64)&v34);
        (*(void (__fastcall **)(ULONG_PTR, __int64 *))(v13 + 16))(v13, &a10);
        if ( v18 )
        {
          v19 = *(void (__fastcall **)(ULONG_PTR, __int64 *))(v13 + 16);
          if ( *v18 == 1 )
          {
            v19(v13, &v34);
            v11 = 1;
          }
          else
          {
            v19(v13, &v34);
          }
        }
      }
    }
LABEL_8:
    (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(BugCheckParameter3 + 16))(BugCheckParameter3, v32);
    LOBYTE(v15) = v11;
  }
  return v15;
}
