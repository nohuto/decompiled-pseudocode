/*
 * XREFs of NtUserfnIMECONTROL @ 0x1C0237310
 * Callers:
 *     <none>
 * Callees:
 *     PushW32ThreadLock @ 0x1C001EF30 (PushW32ThreadLock.c)
 *     PopAndFreeAlwaysW32ThreadLock @ 0x1C0037780 (PopAndFreeAlwaysW32ThreadLock.c)
 *     __security_check_cookie @ 0x1C0163A80 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C01680F0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0168440 (memset.c)
 *     ProbeAndCaptureSoftKbdData @ 0x1C01E4B20 (ProbeAndCaptureSoftKbdData.c)
 */

__int64 __fastcall NtUserfnIMECONTROL(__int64 a1, int a2, unsigned __int64 a3, __int128 *a4, __int64 a5, char a6)
{
  __int128 *v10; // rsi
  __int128 *v11; // rax
  __int64 v12; // rbx
  __int64 v13; // rdx
  __int64 v14; // r8
  _QWORD v16[4]; // [rsp+48h] [rbp-110h] BYREF
  __int128 v17; // [rsp+68h] [rbp-F0h] BYREF
  __int64 v18; // [rsp+78h] [rbp-E0h]
  int v19; // [rsp+80h] [rbp-D8h]
  _OWORD v20[2]; // [rsp+88h] [rbp-D0h] BYREF
  _OWORD v21[6]; // [rsp+B0h] [rbp-A8h] BYREF

  memset(v20, 0, sizeof(v20));
  v17 = 0uLL;
  v18 = 0LL;
  v19 = 0;
  memset(v21, 0, 0x5CuLL);
  memset(v16, 0, 24);
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
      v20[0] = *a4;
      v20[1] = a4[1];
      a4 = v20;
      break;
    case 9:
      goto LABEL_24;
    case 0xA:
      if ( (unsigned __int64)a4 >= MmUserProbeAddress )
        a4 = (__int128 *)MmUserProbeAddress;
      v21[0] = *a4;
      v21[1] = a4[1];
      v21[2] = a4[2];
      v21[3] = a4[3];
      v21[4] = a4[4];
      *(_QWORD *)&v21[5] = *((_QWORD *)a4 + 10);
      DWORD2(v21[5]) = *((_DWORD *)a4 + 22);
      a4 = v21;
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
      v17 = *a4;
      v18 = *((_QWORD *)a4 + 2);
      v19 = *((_DWORD *)a4 + 6);
      a4 = &v17;
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
      PushW32ThreadLock((__int64)v11, v16, (__int64)Win32FreePool);
      a4 = v10;
      break;
  }
LABEL_33:
  v12 = ((__int64 (__fastcall *)(__int64, __int64, unsigned __int64, __int128 *, __int64))mpFnidPfn[(a6 + 6) & 0x1F])(
          a1,
          643LL,
          a3,
          a4,
          a5);
  if ( v10 )
    PopAndFreeAlwaysW32ThreadLock((__int64)v16, v13, v14);
  return v12;
}
