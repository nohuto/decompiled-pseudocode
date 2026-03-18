/*
 * XREFs of _GetRegisteredRawInputDevices @ 0x1C01A3314
 * Callers:
 *     NtUserGetRegisteredRawInputDevices @ 0x1C01EFE10 (NtUserGetRegisteredRawInputDevices.c)
 * Callees:
 *     UserSetLastError @ 0x1C003A8EC (UserSetLastError.c)
 *     ?SortRegisteredDevices@@YAXPEAUtagRAWINPUTDEVICE@@H@Z @ 0x1C01A2D64 (-SortRegisteredDevices@@YAXPEAUtagRAWINPUTDEVICE@@H@Z.c)
 */

__int64 __fastcall GetRegisteredRawInputDevices(struct tagRAWINPUTDEVICE *a1, unsigned int *a2)
{
  unsigned int v4; // ebx
  unsigned int v5; // esi
  __int64 v6; // rdx
  __int64 CurrentProcessWin32Process; // r13
  _QWORD *v8; // rax
  _QWORD *i; // rcx
  _QWORD *j; // rcx
  _QWORD *v11; // rcx
  _QWORD *k; // rax
  unsigned int *v13; // rax
  __int64 v14; // r15
  __int64 v15; // rdx
  __int64 v16; // rax
  unsigned int v17; // edx
  __int64 *v18; // r8
  __int64 v19; // r9
  int v20; // ecx
  int v21; // eax
  __int16 v22; // r10
  __int16 v23; // r11
  __int64 *v24; // rax
  __int64 v25; // rax
  int v26; // eax
  int v27; // eax
  int v28; // eax
  __int64 *v29; // rcx
  __int64 v30; // r8
  int v31; // eax
  __int64 *v32; // rax
  __int64 v33; // rax
  __int64 *v34; // rcx
  __int128 v36; // [rsp+28h] [rbp-B0h]
  __int128 v37; // [rsp+58h] [rbp-80h]
  unsigned __int64 v38; // [rsp+68h] [rbp-70h]

  v4 = 0;
  v5 = 0;
  CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(a1);
  v8 = *(_QWORD **)(CurrentProcessWin32Process + 824);
  if ( v8 )
  {
    for ( i = (_QWORD *)v8[2]; i != v8 + 2; i = (_QWORD *)*i )
      ++v5;
    v6 = (__int64)(v8 + 4);
    for ( j = (_QWORD *)v8[4]; j != (_QWORD *)v6; j = (_QWORD *)*j )
      ++v5;
    v11 = v8 + 6;
    for ( k = (_QWORD *)v8[6]; k != v11; k = (_QWORD *)*k )
      ++v5;
  }
  if ( a1 )
  {
    v13 = a2;
    if ( (unsigned __int64)a2 >= MmUserProbeAddress )
      v13 = (unsigned int *)MmUserProbeAddress;
    v14 = *v13;
    if ( (_DWORD)v14 )
    {
      ProbeForWrite(a1, 16 * v14, 4u);
      v16 = *(_QWORD *)(CurrentProcessWin32Process + 824);
      if ( v16 )
      {
        if ( (unsigned int)v14 >= v5 )
        {
          v17 = 0;
          v18 = *(__int64 **)(v16 + 16);
          while ( 1 )
          {
            v19 = *(_QWORD *)(CurrentProcessWin32Process + 824);
            if ( v18 == (__int64 *)(v19 + 16) || v17 >= (unsigned int)v14 )
              break;
            v20 = 0;
            DWORD1(v36) = 0;
            v21 = *((_DWORD *)v18 + 5);
            if ( (v21 & 1) != 0 )
            {
              v20 = (v21 & 2) != 0 ? 4096 : 256;
              DWORD1(v36) = v20;
            }
            v22 = *((_WORD *)v18 + 8);
            v23 = *((_WORD *)v18 + 9);
            v24 = (__int64 *)v18[4];
            if ( v24 )
              v25 = *v24;
            else
              v25 = 0LL;
            *((_QWORD *)&v36 + 1) = v25;
            if ( v22 != 1 || (v26 = 1, v23 != 6) )
              v26 = 0;
            if ( v26 && (*(_DWORD *)(v19 + 100) & 0x20) != 0 )
              goto LABEL_42;
            if ( v22 != 1 || (v27 = 1, v23 != 2) )
              v27 = 0;
            if ( v27 && (*(_DWORD *)(v19 + 100) & 2) != 0 )
            {
LABEL_42:
              v20 |= 0x30u;
              DWORD1(v36) = v20;
            }
            if ( v22 != 1 )
              goto LABEL_48;
            if ( v23 == 6 && (*(_DWORD *)(v19 + 100) & 0x200) != 0 )
            {
              v20 |= 0x200u;
              DWORD1(v36) = v20;
            }
            v28 = 1;
            if ( v23 != 6 )
LABEL_48:
              v28 = 0;
            if ( v28 && (*(_DWORD *)(v19 + 100) & 0x400) != 0 )
            {
              v20 |= 0x400u;
              DWORD1(v36) = v20;
            }
            if ( v22 == 1 && v23 == 2 && (*(_DWORD *)(v19 + 100) & 0x100) != 0 )
              DWORD1(v36) = v20 | 0x200;
            LODWORD(v36) = *((_DWORD *)v18 + 4);
            *((_OWORD *)a1 + v17) = v36;
            v18 = (__int64 *)*v18;
            ++v17;
          }
          v29 = *(__int64 **)(v19 + 32);
          while ( 1 )
          {
            v30 = *(_QWORD *)(CurrentProcessWin32Process + 824);
            if ( v29 == (__int64 *)(v30 + 32) || v17 >= (unsigned int)v14 )
              break;
            DWORD1(v37) = 32;
            v31 = *((_DWORD *)v29 + 5);
            if ( (v31 & 1) != 0 )
              DWORD1(v37) = (v31 & 2) != 0 ? 4128 : 288;
            v32 = (__int64 *)v29[4];
            if ( v32 )
              v33 = *v32;
            else
              v33 = 0LL;
            *((_QWORD *)&v37 + 1) = v33;
            LODWORD(v37) = *((_DWORD *)v29 + 4);
            *((_OWORD *)a1 + v17) = v37;
            v29 = (__int64 *)*v29;
            ++v17;
          }
          v34 = *(__int64 **)(v30 + 48);
          while ( v34 != (__int64 *)(*(_QWORD *)(CurrentProcessWin32Process + 824) + 48LL) && v17 < (unsigned int)v14 )
          {
            HIDWORD(v38) = 16;
            LODWORD(v38) = *((_DWORD *)v34 + 4);
            *((_OWORD *)a1 + v17) = v38;
            v34 = (__int64 *)*v34;
            ++v17;
          }
          SortRegisteredDevices(a1, v5);
          return v5;
        }
        else
        {
          if ( (unsigned __int64)a2 >= MmUserProbeAddress )
            a2 = (unsigned int *)MmUserProbeAddress;
          *a2 = v5;
          v4 = -1;
          UserSetLastError(122LL, v15);
        }
      }
    }
    else
    {
      v4 = -1;
      UserSetLastError(87LL, v6);
    }
  }
  else
  {
    if ( (unsigned __int64)a2 >= MmUserProbeAddress )
      a2 = (unsigned int *)MmUserProbeAddress;
    *a2 = v5;
  }
  return v4;
}
