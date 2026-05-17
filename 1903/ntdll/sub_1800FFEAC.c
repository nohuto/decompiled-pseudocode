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
  int v4; // edi
  int v6; // ebx
  unsigned __int64 v7; // rax
  __int64 v8; // rcx
  __int16 v9; // cx
  unsigned int v10; // ecx
  char v11; // dl
  int v12; // [rsp+20h] [rbp-30h]
  int v13; // [rsp+50h] [rbp+0h] BYREF

  v2 = (unsigned __int64)&v13 & 0xFFFFFFFFFFFFFFE0uLL;
  *(_DWORD *)(v2 + 24) = 0;
  *(_QWORD *)(v2 + 8) = 0LL;
  v4 = 0;
  *(_DWORD *)v2 = 0;
  *(_WORD *)(v2 + 4) = -1;
  RtlInitUnicodeString((PUNICODE_STRING)(((unsigned __int64)&v13 & 0xFFFFFFFFFFFFFFE0uLL) + 40), a2);
  *(_QWORD *)(((unsigned __int64)&v13 & 0xFFFFFFFFFFFFFFE0uLL) + 0x10) = 0LL;
  *(_QWORD *)(((unsigned __int64)&v13 & 0xFFFFFFFFFFFFFFE0uLL) + 0x48) = ((unsigned __int64)&v13 & 0xFFFFFFFFFFFFFFE0uLL)
                                                                       + 40;
  *(_DWORD *)(((unsigned __int64)&v13 & 0xFFFFFFFFFFFFFFE0uLL) + 0x38) = 48;
  *(_QWORD *)(((unsigned __int64)&v13 & 0xFFFFFFFFFFFFFFE0uLL) + 0x40) = 0LL;
  *(_DWORD *)(((unsigned __int64)&v13 & 0xFFFFFFFFFFFFFFE0uLL) + 0x50) = 64;
  *(_OWORD *)(((unsigned __int64)&v13 & 0xFFFFFFFFFFFFFFE0uLL) + 0x58) = 0LL;
  if ( (int)ZwOpenKey() < 0 )
    return 0LL;
  do
  {
    v6 = ZwEnumerateKey();
    if ( v6 < 0 )
    {
      if ( v6 != -2147483622 )
        goto LABEL_22;
    }
    else
    {
      v7 = *(unsigned int *)(((unsigned __int64)&v13 & 0xFFFFFFFFFFFFFFE0uLL) + 0x8C);
      if ( v7 + 24 <= 0x200 )
      {
        *(_WORD *)(((unsigned __int64)&v13 & 0xFFFFFFFFFFFFFFE0uLL) + 0x90 + 2 * (v7 >> 1)) = 0;
        RtlInitUnicodeString((PUNICODE_STRING)(v2 + 40), (PCWSTR)(v2 + 144));
        *(_QWORD *)(((unsigned __int64)&v13 & 0xFFFFFFFFFFFFFFE0uLL) + 0x40) = *(_QWORD *)(((unsigned __int64)&v13 & 0xFFFFFFFFFFFFFFE0uLL)
                                                                                         + 0x10);
        *(_QWORD *)(((unsigned __int64)&v13 & 0xFFFFFFFFFFFFFFE0uLL) + 8) = 0LL;
        *(_QWORD *)(((unsigned __int64)&v13 & 0xFFFFFFFFFFFFFFE0uLL) + 0x48) = ((unsigned __int64)&v13 & 0xFFFFFFFFFFFFFFE0uLL)
                                                                             + 40;
        *(_DWORD *)(((unsigned __int64)&v13 & 0xFFFFFFFFFFFFFFE0uLL) + 0x38) = 48;
        *(_DWORD *)(((unsigned __int64)&v13 & 0xFFFFFFFFFFFFFFE0uLL) + 0x50) = 64;
        *(_OWORD *)(((unsigned __int64)&v13 & 0xFFFFFFFFFFFFFFE0uLL) + 0x58) = 0LL;
        if ( (int)ZwOpenKey() >= 0 )
        {
          RtlInitUnicodeString((PUNICODE_STRING)(v2 + 40), L"Type");
          v8 = *(_QWORD *)(((unsigned __int64)&v13 & 0xFFFFFFFFFFFFFFE0uLL) + 8);
          *(_DWORD *)(((unsigned __int64)&v13 & 0xFFFFFFFFFFFFFFE0uLL) + 0x20) = 4;
          *(_DWORD *)(((unsigned __int64)&v13 & 0xFFFFFFFFFFFFFFE0uLL) + 0x1C) = 4;
          if ( (int)sub_1800090D4(
                      v8,
                      v2 + 40,
                      (_DWORD *)(v2 + 32),
                      (void *)((unsigned __int64)&v13 & 0xFFFFFFFFFFFFFFE0uLL),
                      (unsigned int *)(v2 + 28)) >= 0
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
                  *(_QWORD *)(((unsigned __int64)&v13 & 0xFFFFFFFFFFFFFFE0uLL) + 8),
                  (wchar_t *)(v2 + 144),
                  v10,
                  v12,
                  v2 + 4);
            }
          }
        }
      }
    }
    if ( *(_QWORD *)(((unsigned __int64)&v13 & 0xFFFFFFFFFFFFFFE0uLL) + 8) )
    {
      ZwClose();
      *(_QWORD *)(((unsigned __int64)&v13 & 0xFFFFFFFFFFFFFFE0uLL) + 8) = 0LL;
    }
    ++v4;
  }
  while ( v6 != -2147483622 );
  v6 = 0;
LABEL_22:
  if ( *(_QWORD *)(((unsigned __int64)&v13 & 0xFFFFFFFFFFFFFFE0uLL) + 0x10) )
    ZwClose();
  return (unsigned int)v6;
}
