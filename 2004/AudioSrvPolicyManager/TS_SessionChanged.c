/*
 * XREFs of TS_SessionChanged @ 0x18002A7F0
 * Callers:
 *     <none>
 * Callees:
 *     sub_1800050FC @ 0x1800050FC (sub_1800050FC.c)
 *     sub_1800257D4 @ 0x1800257D4 (sub_1800257D4.c)
 *     sub_180025F40 @ 0x180025F40 (sub_180025F40.c)
 *     sub_1800277B0 @ 0x1800277B0 (sub_1800277B0.c)
 *     sub_180027958 @ 0x180027958 (sub_180027958.c)
 *     sub_18002880C @ 0x18002880C (sub_18002880C.c)
 *     sub_1800289C8 @ 0x1800289C8 (sub_1800289C8.c)
 *     sub_1800293D4 @ 0x1800293D4 (sub_1800293D4.c)
 *     sub_1800295AC @ 0x1800295AC (sub_1800295AC.c)
 *     sub_180029670 @ 0x180029670 (sub_180029670.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall TS_SessionChanged(unsigned int a1, __int64 a2)
{
  DWORD v2; // ebx
  struct _RTL_CRITICAL_SECTION *v3; // rdi
  unsigned int *v4; // rbx
  const char *v5; // r9
  const char *v6; // r9
  unsigned int *v7; // [rsp+48h] [rbp+10h] BYREF
  struct _RTL_CRITICAL_SECTION *v8; // [rsp+50h] [rbp+18h] BYREF
  struct _RTL_CRITICAL_SECTION *v9; // [rsp+58h] [rbp+20h] BYREF

  v2 = *(_DWORD *)(a2 + 4);
  if ( a1 != 1 )
  {
    if ( a1 == 2 )
      goto LABEL_27;
    if ( a1 != 3 )
    {
      if ( a1 != 4 )
      {
        if ( a1 != 5 )
        {
          if ( a1 == 6 )
          {
            if ( off_18004F000 != (_UNKNOWN *)&off_18004F000
              && (*((_DWORD *)off_18004F000 + 7) & 0x40000000) != 0
              && *((_BYTE *)off_18004F000 + 25) >= 4u )
            {
              sub_1800050FC(*((_QWORD *)off_18004F000 + 2), 0x25u, &stru_180044DE8, v2);
            }
            sub_180029670(v2);
          }
          else if ( a1 == 11 )
          {
            if ( off_18004F000 != (_UNKNOWN *)&off_18004F000
              && (*((_DWORD *)off_18004F000 + 7) & 0x40000000) != 0
              && *((_BYTE *)off_18004F000 + 25) >= 4u )
            {
              sub_1800050FC(*((_QWORD *)off_18004F000 + 2), 0x23u, &stru_180044DE8, v2);
            }
            sub_1800295AC(v2);
          }
          return;
        }
        if ( off_18004F000 != (_UNKNOWN *)&off_18004F000
          && (*((_DWORD *)off_18004F000 + 7) & 0x40000000) != 0
          && *((_BYTE *)off_18004F000 + 25) >= 4u )
        {
          sub_1800050FC(*((_QWORD *)off_18004F000 + 2), 0x24u, &stru_180044DE8, v2);
        }
        v7 = 0LL;
        v3 = (struct _RTL_CRITICAL_SECTION *)(qword_18004FE78 + 32);
        EnterCriticalSection((LPCRITICAL_SECTION)(qword_18004FE78 + 32));
        v8 = v3;
        if ( !(unsigned int)sub_18002880C(v2, 1, &v9, &v7) )
        {
          v4 = v7;
          sub_1800277B0((__int64)v7);
          sub_180025F40(v4);
          if ( !v4[1] )
            sub_180027958((int *)v4);
          dword_18004FE58 = 0;
        }
        goto LABEL_36;
      }
LABEL_27:
      if ( off_18004F000 != (_UNKNOWN *)&off_18004F000
        && (*((_DWORD *)off_18004F000 + 7) & 0x40000000) != 0
        && *((_BYTE *)off_18004F000 + 25) >= 4u )
      {
        v5 = "WTS_REMOTE_DISCONNECT";
        if ( a1 == 2 )
          v5 = "WTS_CONSOLE_DISCONNECT";
        sub_1800257D4(*((_QWORD *)off_18004F000 + 2), 0x21u, a1, v5, *(_DWORD *)(a2 + 4));
      }
      v3 = (struct _RTL_CRITICAL_SECTION *)(qword_18004FE78 + 32);
      EnterCriticalSection((LPCRITICAL_SECTION)(qword_18004FE78 + 32));
      v9 = v3;
      if ( !(unsigned int)sub_18002880C(v2, 0, &v8, &v7) && v7[1] )
        sub_1800289C8((__int64)v7, (__int64)v8, 0xFFFF);
LABEL_36:
      if ( v3 )
        LeaveCriticalSection(v3);
      return;
    }
  }
  if ( off_18004F000 != (_UNKNOWN *)&off_18004F000
    && (*((_DWORD *)off_18004F000 + 7) & 0x40000000) != 0
    && *((_BYTE *)off_18004F000 + 25) >= 4u )
  {
    v6 = "WTS_REMOTE_CONNECT";
    if ( a1 == 1 )
      v6 = "WTS_CONSOLE_CONNECT";
    sub_1800257D4(*((_QWORD *)off_18004F000 + 2), 0x22u, a1, v6, *(_DWORD *)(a2 + 4));
  }
  sub_1800293D4(v2);
}
