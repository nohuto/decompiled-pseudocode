/*
 * XREFs of sub_1800FFEAC @ 0x1800FFEAC
 * Callers:
 *     sub_1800FFDA8 @ 0x1800FFDA8 (sub_1800FFDA8.c)
 * Callees:
 *     sub_1800090D4 @ 0x1800090D4 (sub_1800090D4.c)
 *     RtlInitUnicodeString @ 0x180016AA0 (RtlInitUnicodeString.c)
 *     __security_check_cookie @ 0x18008C7B0 (__security_check_cookie.c)
 *     ZwClose @ 0x18009C8C0 (ZwClose.c)
 *     ZwOpenKey @ 0x18009C920 (ZwOpenKey.c)
 *     ZwEnumerateKey @ 0x18009CD20 (ZwEnumerateKey.c)
 *     sub_1800FD4E8 @ 0x1800FD4E8 (sub_1800FD4E8.c)
 *     sub_1800FF4A8 @ 0x1800FF4A8 (sub_1800FF4A8.c)
 */

__int64 __fastcall sub_1800FFEAC(_QWORD *a1, const WCHAR *a2)
{
  unsigned __int64 v2; // rbp
  ULONG v4; // edi
  NTSTATUS v6; // ebx
  unsigned __int64 v7; // rax
  void *v8; // rcx
  __int16 v9; // cx
  unsigned int v10; // ecx
  char v11; // dl
  void *v12; // rcx
  void *v13; // rcx
  int Length; // [rsp+20h] [rbp-30h]
  int v15; // [rsp+50h] [rbp+0h] BYREF

  v2 = (unsigned __int64)&v15 & 0xFFFFFFFFFFFFFFE0uLL;
  *(_DWORD *)(v2 + 24) = 0;
  *(_QWORD *)(v2 + 8) = 0LL;
  v4 = 0;
  *(_DWORD *)v2 = 0;
  *(_WORD *)(v2 + 4) = -1;
  RtlInitUnicodeString((PUNICODE_STRING)(((unsigned __int64)&v15 & 0xFFFFFFFFFFFFFFE0uLL) + 40), a2);
  *(_QWORD *)(((unsigned __int64)&v15 & 0xFFFFFFFFFFFFFFE0uLL) + 0x10) = 0LL;
  *(_QWORD *)(((unsigned __int64)&v15 & 0xFFFFFFFFFFFFFFE0uLL) + 0x48) = ((unsigned __int64)&v15 & 0xFFFFFFFFFFFFFFE0uLL)
                                                                       + 40;
  *(_DWORD *)(((unsigned __int64)&v15 & 0xFFFFFFFFFFFFFFE0uLL) + 0x38) = 48;
  *(_QWORD *)(((unsigned __int64)&v15 & 0xFFFFFFFFFFFFFFE0uLL) + 0x40) = 0LL;
  *(_DWORD *)(((unsigned __int64)&v15 & 0xFFFFFFFFFFFFFFE0uLL) + 0x50) = 64;
  *(_OWORD *)(((unsigned __int64)&v15 & 0xFFFFFFFFFFFFFFE0uLL) + 0x58) = 0LL;
  if ( ZwOpenKey((PHANDLE)(v2 + 16), 0x20019u, (POBJECT_ATTRIBUTES)(v2 + 56)) < 0 )
    return 0LL;
  do
  {
    v6 = ZwEnumerateKey(
           *(HANDLE *)(((unsigned __int64)&v15 & 0xFFFFFFFFFFFFFFE0uLL) + 0x10),
           v4,
           KeyBasicInformation,
           (PVOID)(v2 + 128),
           0x200u,
           (PULONG)(v2 + 24));
    if ( v6 < 0 )
    {
      if ( v6 != -2147483622 )
        goto LABEL_22;
    }
    else
    {
      v7 = *(unsigned int *)(((unsigned __int64)&v15 & 0xFFFFFFFFFFFFFFE0uLL) + 0x8C);
      if ( v7 + 24 <= 0x200 )
      {
        *(_WORD *)(((unsigned __int64)&v15 & 0xFFFFFFFFFFFFFFE0uLL) + 0x90 + 2 * (v7 >> 1)) = 0;
        RtlInitUnicodeString((PUNICODE_STRING)(v2 + 40), (PCWSTR)(v2 + 144));
        *(_QWORD *)(((unsigned __int64)&v15 & 0xFFFFFFFFFFFFFFE0uLL) + 0x40) = *(_QWORD *)(((unsigned __int64)&v15 & 0xFFFFFFFFFFFFFFE0uLL)
                                                                                         + 0x10);
        *(_QWORD *)(((unsigned __int64)&v15 & 0xFFFFFFFFFFFFFFE0uLL) + 8) = 0LL;
        *(_QWORD *)(((unsigned __int64)&v15 & 0xFFFFFFFFFFFFFFE0uLL) + 0x48) = ((unsigned __int64)&v15 & 0xFFFFFFFFFFFFFFE0uLL)
                                                                             + 40;
        *(_DWORD *)(((unsigned __int64)&v15 & 0xFFFFFFFFFFFFFFE0uLL) + 0x38) = 48;
        *(_DWORD *)(((unsigned __int64)&v15 & 0xFFFFFFFFFFFFFFE0uLL) + 0x50) = 64;
        *(_OWORD *)(((unsigned __int64)&v15 & 0xFFFFFFFFFFFFFFE0uLL) + 0x58) = 0LL;
        if ( ZwOpenKey((PHANDLE)(v2 + 8), 0x20019u, (POBJECT_ATTRIBUTES)(v2 + 56)) >= 0 )
        {
          RtlInitUnicodeString((PUNICODE_STRING)(v2 + 40), L"Type");
          v8 = *(void **)(((unsigned __int64)&v15 & 0xFFFFFFFFFFFFFFE0uLL) + 8);
          *(_DWORD *)(((unsigned __int64)&v15 & 0xFFFFFFFFFFFFFFE0uLL) + 0x20) = 4;
          *(_DWORD *)(((unsigned __int64)&v15 & 0xFFFFFFFFFFFFFFE0uLL) + 0x1C) = 4;
          if ( (int)sub_1800090D4(
                      v8,
                      (PUNICODE_STRING)(v2 + 40),
                      (_DWORD *)(v2 + 32),
                      (void *)((unsigned __int64)&v15 & 0xFFFFFFFFFFFFFFE0uLL),
                      (ULONG *)(v2 + 28)) >= 0
            && (int)sub_1800FF4A8(*(_DWORD *)v2) >= 0 )
          {
            v10 = v9 & 0x419F;
            *(_DWORD *)v2 = v10;
            if ( (v10 & 7) != 0 && (v10 & 7 & -(v10 & 7)) == (v10 & 7) )
            {
              if ( (v10 & 0x180) == 0 || (v11 = v10, (v10 & 0x180 & -(v10 & 0x180)) != (v10 & 0x180)) )
              {
                v10 = v10 & 0xFFFFFE7F | 0x80;
                *(_DWORD *)v2 = v10;
                v11 = v10;
              }
              if ( (v11 & 0x18) != 0 && (v11 & 0x18 & -(v11 & 0x18)) == (v11 & 0x18) && (v11 & 0xC) != 8 )
                sub_1800FD4E8(
                  a1,
                  *(void **)(((unsigned __int64)&v15 & 0xFFFFFFFFFFFFFFE0uLL) + 8),
                  (wchar_t *)(v2 + 144),
                  v10,
                  Length,
                  v2 + 4);
            }
          }
        }
      }
    }
    v12 = *(void **)(((unsigned __int64)&v15 & 0xFFFFFFFFFFFFFFE0uLL) + 8);
    if ( v12 )
    {
      ZwClose(v12);
      *(_QWORD *)(((unsigned __int64)&v15 & 0xFFFFFFFFFFFFFFE0uLL) + 8) = 0LL;
    }
    ++v4;
  }
  while ( v6 != -2147483622 );
  v6 = 0;
LABEL_22:
  v13 = *(void **)(((unsigned __int64)&v15 & 0xFFFFFFFFFFFFFFE0uLL) + 0x10);
  if ( v13 )
    ZwClose(v13);
  return (unsigned int)v6;
}
