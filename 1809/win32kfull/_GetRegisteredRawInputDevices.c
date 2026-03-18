/*
 * XREFs of _GetRegisteredRawInputDevices @ 0x1C01C5040
 * Callers:
 *     NtUserGetRegisteredRawInputDevices @ 0x1C0217070 (NtUserGetRegisteredRawInputDevices.c)
 * Callees:
 *     UserSetLastError @ 0x1C0073CC4 (UserSetLastError.c)
 *     ?SortRegisteredDevices@@YAXPEAUtagRAWINPUTDEVICE@@H@Z @ 0x1C01C4998 (-SortRegisteredDevices@@YAXPEAUtagRAWINPUTDEVICE@@H@Z.c)
 */

__int64 __fastcall GetRegisteredRawInputDevices(struct tagRAWINPUTDEVICE *a1, unsigned int *a2)
{
  unsigned int v4; // ebx
  unsigned int v5; // esi
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 CurrentProcessWin32Process; // r13
  _QWORD *v10; // rax
  _QWORD *i; // rcx
  _QWORD *j; // rcx
  _QWORD *v13; // rcx
  _QWORD *k; // rax
  unsigned int *v15; // rax
  __int64 v16; // r15
  __int64 v17; // rdx
  __int64 v18; // r8
  __int64 v19; // r9
  __int64 v20; // rax
  unsigned int v21; // edx
  __int64 *v22; // r8
  __int64 v23; // r9
  int v24; // ecx
  int v25; // eax
  __int16 v26; // r10
  __int16 v27; // r11
  __int64 *v28; // rax
  __int64 v29; // rax
  int v30; // eax
  int v31; // eax
  int v32; // eax
  __int64 *v33; // rcx
  __int64 v34; // r8
  int v35; // eax
  __int64 *v36; // rax
  __int64 v37; // rax
  __int64 *v38; // rcx
  __int128 v40; // [rsp+28h] [rbp-B0h]
  __int128 v41; // [rsp+58h] [rbp-80h]
  unsigned __int64 v42; // [rsp+68h] [rbp-70h]

  v4 = 0;
  v5 = 0;
  CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(a1);
  v10 = *(_QWORD **)(CurrentProcessWin32Process + 832);
  if ( v10 )
  {
    for ( i = (_QWORD *)v10[2]; i != v10 + 2; i = (_QWORD *)*i )
      ++v5;
    v6 = (__int64)(v10 + 4);
    for ( j = (_QWORD *)v10[4]; j != (_QWORD *)v6; j = (_QWORD *)*j )
      ++v5;
    v13 = v10 + 6;
    for ( k = (_QWORD *)v10[6]; k != v13; k = (_QWORD *)*k )
      ++v5;
  }
  if ( a1 )
  {
    v15 = a2;
    if ( (unsigned __int64)a2 >= MmUserProbeAddress )
      v15 = (unsigned int *)MmUserProbeAddress;
    v16 = *v15;
    if ( (_DWORD)v16 )
    {
      ProbeForWrite(a1, 16 * v16, 4u);
      v20 = *(_QWORD *)(CurrentProcessWin32Process + 832);
      if ( v20 )
      {
        if ( (unsigned int)v16 >= v5 )
        {
          v21 = 0;
          v22 = *(__int64 **)(v20 + 16);
          while ( 1 )
          {
            v23 = *(_QWORD *)(CurrentProcessWin32Process + 832);
            if ( v22 == (__int64 *)(v23 + 16) || v21 >= (unsigned int)v16 )
              break;
            v24 = 0;
            DWORD1(v40) = 0;
            v25 = *((_DWORD *)v22 + 5);
            if ( (v25 & 1) != 0 )
            {
              v24 = (v25 & 2) != 0 ? 4096 : 256;
              DWORD1(v40) = v24;
            }
            v26 = *((_WORD *)v22 + 8);
            v27 = *((_WORD *)v22 + 9);
            v28 = (__int64 *)v22[4];
            if ( v28 )
              v29 = *v28;
            else
              v29 = 0LL;
            *((_QWORD *)&v40 + 1) = v29;
            if ( v26 != 1 || (v30 = 1, v27 != 6) )
              v30 = 0;
            if ( v30 && (*(_DWORD *)(v23 + 100) & 0x20) != 0 )
              goto LABEL_42;
            if ( v26 != 1 || (v31 = 1, v27 != 2) )
              v31 = 0;
            if ( v31 && (*(_DWORD *)(v23 + 100) & 2) != 0 )
            {
LABEL_42:
              v24 |= 0x30u;
              DWORD1(v40) = v24;
            }
            if ( v26 != 1 )
              goto LABEL_48;
            if ( v27 == 6 && (*(_DWORD *)(v23 + 100) & 0x200) != 0 )
            {
              v24 |= 0x200u;
              DWORD1(v40) = v24;
            }
            v32 = 1;
            if ( v27 != 6 )
LABEL_48:
              v32 = 0;
            if ( v32 && (*(_DWORD *)(v23 + 100) & 0x400) != 0 )
            {
              v24 |= 0x400u;
              DWORD1(v40) = v24;
            }
            if ( v26 == 1 && v27 == 2 && (*(_DWORD *)(v23 + 100) & 0x100) != 0 )
              DWORD1(v40) = v24 | 0x200;
            LODWORD(v40) = *((_DWORD *)v22 + 4);
            *((_OWORD *)a1 + v21) = v40;
            v22 = (__int64 *)*v22;
            ++v21;
          }
          v33 = *(__int64 **)(v23 + 32);
          while ( 1 )
          {
            v34 = *(_QWORD *)(CurrentProcessWin32Process + 832);
            if ( v33 == (__int64 *)(v34 + 32) || v21 >= (unsigned int)v16 )
              break;
            DWORD1(v41) = 32;
            v35 = *((_DWORD *)v33 + 5);
            if ( (v35 & 1) != 0 )
              DWORD1(v41) = (v35 & 2) != 0 ? 4128 : 288;
            v36 = (__int64 *)v33[4];
            if ( v36 )
              v37 = *v36;
            else
              v37 = 0LL;
            *((_QWORD *)&v41 + 1) = v37;
            LODWORD(v41) = *((_DWORD *)v33 + 4);
            *((_OWORD *)a1 + v21) = v41;
            v33 = (__int64 *)*v33;
            ++v21;
          }
          v38 = *(__int64 **)(v34 + 48);
          while ( v38 != (__int64 *)(*(_QWORD *)(CurrentProcessWin32Process + 832) + 48LL) && v21 < (unsigned int)v16 )
          {
            HIDWORD(v42) = 16;
            LODWORD(v42) = *((_DWORD *)v38 + 4);
            *((_OWORD *)a1 + v21) = v42;
            v38 = (__int64 *)*v38;
            ++v21;
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
          UserSetLastError(122LL, v17, v18, v19);
        }
      }
    }
    else
    {
      v4 = -1;
      UserSetLastError(87LL, v6, v7, v8);
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
