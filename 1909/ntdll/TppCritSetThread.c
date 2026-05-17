/*
 * XREFs of TppCritSetThread @ 0x1800300DC
 * Callers:
 *     TppWorkerThread @ 0x180033CE0 (TppWorkerThread.c)
 * Callees:
 *     __security_check_cookie @ 0x18008CE50 (__security_check_cookie.c)
 *     NtSetInformationThread @ 0x18009D030 (NtSetInformationThread.c)
 *     NtClose @ 0x18009D070 (NtClose.c)
 *     NtOpenProcessTokenEx @ 0x18009D490 (NtOpenProcessTokenEx.c)
 *     NtAdjustPrivilegesToken @ 0x18009D6B0 (NtAdjustPrivilegesToken.c)
 *     NtDuplicateToken @ 0x18009D6D0 (NtDuplicateToken.c)
 *     NtSetInformationObject @ 0x18009DA00 (NtSetInformationObject.c)
 */

int __fastcall TppCritSetThread(HANDLE *a1)
{
  struct _TEB *v2; // rax
  int v4; // [rsp+20h] [rbp-A8h]
  __int64 v5; // [rsp+28h] [rbp-A0h]
  __int16 v6; // [rsp+30h] [rbp-98h] BYREF
  HANDLE Handle; // [rsp+38h] [rbp-90h] BYREF
  int v8; // [rsp+40h] [rbp-88h] BYREF
  __int64 v9; // [rsp+48h] [rbp-80h] BYREF
  HANDLE v10[2]; // [rsp+50h] [rbp-78h] BYREF
  int v11; // [rsp+60h] [rbp-68h] BYREF
  __int128 v12; // [rsp+68h] [rbp-60h]
  int v13; // [rsp+78h] [rbp-50h]
  __int128 v14; // [rsp+80h] [rbp-48h]
  int v15; // [rsp+90h] [rbp-38h] BYREF
  __int64 v16; // [rsp+94h] [rbp-34h]
  int v17; // [rsp+A0h] [rbp-28h] BYREF
  __int64 v18; // [rsp+A4h] [rbp-24h]
  int v19; // [rsp+ACh] [rbp-1Ch]

  v11 = 48;
  v12 = 0LL;
  v13 = 0;
  v14 = 0LL;
  *a1 = 0LL;
  v2 = NtCurrentTeb();
  if ( (v2->ProcessEnvironmentBlock->NtGlobalFlag & 0x100000) != 0 )
  {
    LODWORD(v2) = NtOpenProcessTokenEx(-1LL, 2LL, 0LL, v10);
    if ( (int)v2 >= 0 )
    {
      v16 = 2LL;
      v15 = 12;
      *((_QWORD *)&v14 + 1) = &v15;
      if ( (int)NtDuplicateToken(v10[0], 36LL, &v11) >= 0 )
      {
        v6 = 256;
        if ( (int)((__int64 (__fastcall *)(HANDLE, __int64, __int16 *, __int64, int, HANDLE *))NtSetInformationObject)(
                    Handle,
                    4LL,
                    &v6,
                    2LL,
                    2,
                    &Handle) >= 0 )
        {
          if ( (int)NtSetInformationThread(-2LL, 5LL, &Handle) >= 0 )
          {
            v17 = 1;
            v10[1] = (HANDLE)20;
            v18 = 20LL;
            v19 = 2;
            if ( (int)NtAdjustPrivilegesToken(Handle, 0LL, &v17, 16LL, 0LL, 0LL) >= 0 )
            {
              v8 = 1;
              if ( (int)NtSetInformationThread(-2LL, 18LL, &v8) >= 0 )
              {
                *a1 = Handle;
                Handle = 0LL;
              }
            }
            v9 = 0LL;
            NtSetInformationThread(-2LL, 5LL, &v9);
          }
          if ( Handle )
          {
            v6 = 0;
            ((void (__fastcall *)(HANDLE, __int64, __int16 *, __int64, int, __int64))NtSetInformationObject)(
              Handle,
              4LL,
              &v6,
              2LL,
              v4,
              v5);
          }
        }
        if ( Handle )
          NtClose(Handle);
      }
      LODWORD(v2) = NtClose(v10[0]);
    }
  }
  return (int)v2;
}
