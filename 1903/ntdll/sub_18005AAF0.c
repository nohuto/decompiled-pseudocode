/*
 * XREFs of sub_18005AAF0 @ 0x18005AAF0
 * Callers:
 *     sub_1800711E8 @ 0x1800711E8 (sub_1800711E8.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x180016AA0 (RtlInitUnicodeString.c)
 *     RtlGetNtSystemRoot @ 0x180029260 (RtlGetNtSystemRoot.c)
 *     DbgPrintEx @ 0x180052780 (DbgPrintEx.c)
 *     sub_18005A5EC @ 0x18005A5EC (sub_18005A5EC.c)
 *     __security_check_cookie @ 0x18008C7B0 (__security_check_cookie.c)
 *     ZwClose @ 0x18009C8C0 (ZwClose.c)
 *     ZwOpenKey @ 0x18009C920 (ZwOpenKey.c)
 *     ZwEnumerateKey @ 0x18009CD20 (ZwEnumerateKey.c)
 *     memmove @ 0x1800A32C0 (memmove.c)
 *     sub_1800DF114 @ 0x1800DF114 (sub_1800DF114.c)
 */

char __fastcall sub_18005AAF0(int a1, __int64 *a2, _DWORD *a3)
{
  int v5; // ecx
  int v6; // ecx
  const WCHAR *NtSystemRoot; // rax
  int Length; // r14d
  unsigned int v9; // ecx
  unsigned __int64 v10; // rax
  size_t v11; // r15
  wchar_t *Buffer; // rdx
  char *v13; // rbx
  __int64 v14; // rcx
  int v15; // eax
  int v16; // r14d
  __int64 v17; // r12
  int v18; // r15d
  __int64 v20; // [rsp+20h] [rbp-E0h]
  int v21; // [rsp+30h] [rbp-D0h] BYREF
  unsigned __int64 v22; // [rsp+38h] [rbp-C8h] BYREF
  _WORD v23[4]; // [rsp+40h] [rbp-C0h] BYREF
  char *v24; // [rsp+48h] [rbp-B8h]
  UNICODE_STRING DestinationString; // [rsp+50h] [rbp-B0h] BYREF
  int v26; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v27; // [rsp+68h] [rbp-98h]
  void *v28; // [rsp+70h] [rbp-90h]
  int v29; // [rsp+78h] [rbp-88h]
  __int128 v30; // [rsp+80h] [rbp-80h]
  _BYTE v31[12]; // [rsp+90h] [rbp-70h] BYREF
  unsigned int v32; // [rsp+9Ch] [rbp-64h]
  char v33; // [rsp+A0h] [rbp-60h] BYREF

  v5 = a1 - 1;
  if ( !v5 )
  {
    v26 = 48;
    v22 = 0LL;
    v27 = 0LL;
    v29 = 64;
    v28 = &unk_1801183E0;
    v30 = 0LL;
    v15 = ZwOpenKey(&v22, 8LL, &v26);
    v16 = v15;
    if ( v15 >= 0 || v15 == -1073741772 || v15 == -1073741431 )
    {
      v10 = v22;
      a2[6] = -1LL;
      a2[2] = v10;
      return v10;
    }
    LOBYTE(v10) = DbgPrintEx(51, 0, "SXS: Unable to open registry key %wZ Status = 0x%08lx\n", &unk_1801183E0, v15);
    *((_BYTE *)a2 + 56) = 1;
    goto LABEL_40;
  }
  v6 = v5 - 1;
  if ( v6 )
  {
    LOBYTE(v10) = 2;
    if ( v6 == 2 && *a2 )
      LOBYTE(v10) = ZwClose(*a2);
  }
  else if ( a2[1] )
  {
    if ( a2[1] == 1 )
    {
      NtSystemRoot = (const WCHAR *)RtlGetNtSystemRoot();
      RtlInitUnicodeString(&DestinationString, NtSystemRoot);
      Length = DestinationString.Length;
      v9 = *((unsigned __int16 *)a2 + 13);
      *((_WORD *)a2 + 12) = 0;
      LOBYTE(v10) = Length + 16;
      if ( Length + 16 > v9 )
      {
        *((_BYTE *)a2 + 16) = 1;
        if ( a3 )
          *a3 = -1073741789;
      }
      else
      {
        memmove((void *)a2[4], DestinationString.Buffer, (unsigned __int16)Length);
        v10 = a2[4];
        *(_OWORD *)((unsigned __int16)Length + v10) = xmmword_18011D9B0;
        *((_WORD *)a2 + 12) = Length + 16;
      }
      return v10;
    }
    LOBYTE(v10) = -1;
    if ( (unsigned __int64)a2[1] > 0xFFFFFFFF )
      goto LABEL_37;
    v17 = *a2;
    v18 = *((_DWORD *)a2 + 2);
    v21 = 0;
    if ( !v17 )
      goto LABEL_37;
    LODWORD(v10) = ((__int64 (__fastcall *)(__int64, _QWORD, _QWORD, _BYTE *, int, int *))ZwEnumerateKey)(
                     v17,
                     (unsigned int)(v18 - 2),
                     0LL,
                     v31,
                     544,
                     &v21);
    v16 = v10;
    if ( (v10 & 0x80000000) != 0LL )
    {
      if ( (_DWORD)v10 != -2147483622 )
      {
        LOBYTE(v10) = DbgPrintEx(
                        51,
                        0,
                        "SXS: Unable to enumerate assembly storage subkey #%lu Status = 0x%08lx\n",
                        v18 - 2,
                        v10);
LABEL_31:
        *((_BYTE *)a2 + 16) = 1;
LABEL_40:
        if ( a3 )
          *a3 = v16;
        return v10;
      }
LABEL_37:
      *((_BYTE *)a2 + 17) = 1;
      return v10;
    }
    LOBYTE(v10) = v32;
    if ( v32 <= 0xFFFE )
    {
      v23[0] = v32;
      v23[1] = v32;
      v24 = &v33;
      LODWORD(v10) = sub_1800DF114(v17, v23, a2 + 3);
      v16 = v10;
      if ( (v10 & 0x80000000) == 0LL )
        return v10;
      LODWORD(v20) = v10;
      LOBYTE(v10) = DbgPrintEx(
                      51,
                      0,
                      "SXS: Attempt to get storage location from subkey %wZ failed; Status = 0x%08lx\n",
                      v23,
                      v20);
      goto LABEL_31;
    }
    *((_BYTE *)a2 + 16) = 1;
    if ( a3 )
      *a3 = -1073741562;
  }
  else
  {
    v10 = (unsigned __int64)NtCurrentPeb();
    v11 = *(unsigned __int16 *)(*(_QWORD *)(v10 + 32) + 96LL);
    if ( v11 + 16 > 0xFFFE )
    {
      *((_BYTE *)a2 + 16) = 1;
      if ( a3 )
        *a3 = -1073741562;
    }
    else
    {
      v10 = *((unsigned __int16 *)a2 + 13);
      if ( v11 + 16 > v10 )
      {
        *((_BYTE *)a2 + 16) = 1;
        if ( a3 )
          *a3 = -1073741789;
      }
      else
      {
        Buffer = NtCurrentPeb()->ProcessParameters->ImagePathName.Buffer;
        if ( (NtCurrentPeb()->ProcessParameters->Flags & 1) == 0 )
          Buffer = (wchar_t *)((char *)Buffer + (unsigned __int64)NtCurrentPeb()->ProcessParameters);
        v13 = (char *)a2[4];
        memmove(v13, Buffer, v11);
        *(_OWORD *)&v13[v11] = xmmword_180121378;
        v14 = a2[4];
        *((_WORD *)a2 + 12) = v11 + 14;
        LOBYTE(v10) = sub_18005A5EC(v14, 1);
        if ( !(_BYTE)v10 )
          *((_WORD *)a2 + 12) = 0;
      }
    }
  }
  return v10;
}
