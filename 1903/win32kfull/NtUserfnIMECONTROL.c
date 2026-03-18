/*
 * XREFs of NtUserfnIMECONTROL @ 0x1C0237930
 * Callers:
 *     <none>
 * Callees:
 *     PushW32ThreadLock @ 0x1C001F0A0 (PushW32ThreadLock.c)
 *     PopAndFreeAlwaysW32ThreadLock @ 0x1C0096A50 (PopAndFreeAlwaysW32ThreadLock.c)
 *     __security_check_cookie @ 0x1C0162AB0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C01664D0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0166840 (memset.c)
 *     ProbeAndCaptureSoftKbdData @ 0x1C01E4CA0 (ProbeAndCaptureSoftKbdData.c)
 */

__int64 __fastcall NtUserfnIMECONTROL(__int64 a1, int a2, unsigned __int64 a3, __int128 *a4, __int64 a5, char a6)
{
  __int128 *v10; // rsi
  __int128 *v11; // rax
  __int64 v12; // r9
  __int64 v13; // rbx
  __int64 v14; // rdx
  __int64 v15; // r8
  __int64 v16; // r9
  _QWORD v18[4]; // [rsp+48h] [rbp-110h] BYREF
  __int128 v19; // [rsp+68h] [rbp-F0h] BYREF
  __int64 v20; // [rsp+78h] [rbp-E0h]
  int v21; // [rsp+80h] [rbp-D8h]
  _OWORD v22[2]; // [rsp+88h] [rbp-D0h] BYREF
  _OWORD v23[6]; // [rsp+B0h] [rbp-A8h] BYREF

  memset(v22, 0, sizeof(v22));
  v19 = 0uLL;
  v20 = 0LL;
  v21 = 0;
  memset(v23, 0, 0x5CuLL);
  memset(v18, 0, 24);
  v10 = 0LL;
  if ( a2 != 643 || a3 > 0x22 )
    return 0LL;
  if ( a3 > 0x18 )
    goto LABEL_33;
  switch ( (_DWORD)a3 )
  {
    case 7:
      if ( (unsigned __int64)a4 >= MmUserProbeAddress )
        *(_DWORD *)MmUserProbeAddress = 0;
      *a4 = *a4;
      a4[1] = a4[1];
      break;
    case 8:
      if ( (unsigned __int64)a4 >= MmUserProbeAddress )
        a4 = (__int128 *)MmUserProbeAddress;
      v22[0] = *a4;
      v22[1] = a4[1];
      a4 = v22;
      break;
    case 9:
      goto LABEL_24;
    case 0xA:
      if ( (unsigned __int64)a4 >= MmUserProbeAddress )
        a4 = (__int128 *)MmUserProbeAddress;
      v23[0] = *a4;
      v23[1] = a4[1];
      v23[2] = a4[2];
      v23[3] = a4[3];
      v23[4] = a4[4];
      *(_QWORD *)&v23[5] = *((_QWORD *)a4 + 10);
      DWORD2(v23[5]) = *((_DWORD *)a4 + 22);
      a4 = v23;
      break;
    case 0xB:
      if ( (unsigned __int64)a4 >= MmUserProbeAddress )
        *(_DWORD *)MmUserProbeAddress = 0;
      *a4 = *a4;
      *((_QWORD *)a4 + 2) = *((_QWORD *)a4 + 2);
      *((_DWORD *)a4 + 6) = *((_DWORD *)a4 + 6);
      break;
    case 0xC:
      if ( (unsigned __int64)a4 >= MmUserProbeAddress )
        a4 = (__int128 *)MmUserProbeAddress;
      v19 = *a4;
      v20 = *((_QWORD *)a4 + 2);
      v21 = *((_DWORD *)a4 + 6);
      a4 = &v19;
      break;
    case 0x11:
LABEL_24:
      if ( (unsigned __int64)a4 >= MmUserProbeAddress )
        *(_DWORD *)MmUserProbeAddress = 0;
      *a4 = *a4;
      a4[1] = a4[1];
      a4[2] = a4[2];
      a4[3] = a4[3];
      a4[4] = a4[4];
      *((_QWORD *)a4 + 10) = *((_QWORD *)a4 + 10);
      *((_DWORD *)a4 + 22) = *((_DWORD *)a4 + 22);
      break;
    case 0x18:
      v11 = (__int128 *)ProbeAndCaptureSoftKbdData((char *)a4);
      v10 = v11;
      if ( !v11 )
        return 0LL;
      PushW32ThreadLock((__int64)v11, v18, (__int64)Win32FreePool, v12);
      a4 = v10;
      break;
  }
LABEL_33:
  v13 = ((__int64 (__fastcall *)(__int64, __int64, unsigned __int64, __int128 *, __int64))mpFnidPfn[(a6 + 6) & 0x1F])(
          a1,
          643LL,
          a3,
          a4,
          a5);
  if ( v10 )
    PopAndFreeAlwaysW32ThreadLock((__int64)v18, v14, v15, v16);
  return v13;
}
