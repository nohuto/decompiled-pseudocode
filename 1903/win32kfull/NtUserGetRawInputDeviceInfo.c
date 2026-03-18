/*
 * XREFs of NtUserGetRawInputDeviceInfo @ 0x1C022E7F0
 * Callers:
 *     <none>
 * Callees:
 *     HMValidateHandle @ 0x1C002F96C (HMValidateHandle.c)
 *     UserSetLastError @ 0x1C008B3AC (UserSetLastError.c)
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C00BFAE8 (--0UserAtomicCheck@@QEAA@XZ.c)
 *     ??1UserAtomicCheck@@QEAA@XZ @ 0x1C00BFB44 (--1UserAtomicCheck@@QEAA@XZ.c)
 *     memmove @ 0x1C0166500 (memmove.c)
 *     memset @ 0x1C0166840 (memset.c)
 */

__int64 __fastcall NtUserGetRawInputDeviceInfo(unsigned __int64 a1, int a2, ULONG64 a3, unsigned int *a4)
{
  __int64 v8; // rdx
  __int64 v9; // r8
  __int64 v10; // r9
  unsigned int *v11; // rax
  SIZE_T v12; // r13
  __int64 v13; // rdx
  __int64 v14; // rsi
  __int64 v15; // r8
  __int64 v16; // r9
  unsigned int v17; // ebx
  __int64 v18; // rcx
  unsigned int v19; // r14d
  __int64 v20; // rdx
  __int64 v21; // r8
  __int64 v22; // r9
  int v23; // r12d
  int v24; // r12d
  int v25; // r12d
  _BYTE *v26; // rdx
  _BYTE *v27; // rdx
  __int64 v28; // rcx
  _BYTE v30[48]; // [rsp+60h] [rbp-48h] BYREF

  EnterCrit(0LL, 1LL);
  UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)v30);
  v11 = a4;
  if ( (unsigned __int64)a4 >= MmUserProbeAddress )
    v11 = (unsigned int *)MmUserProbeAddress;
  v12 = *v11;
  LOBYTE(v8) = 19;
  v14 = HMValidateHandle(a1, v8, v9, v10);
  v17 = 0;
  if ( !v14 )
  {
    v18 = 6LL;
LABEL_5:
    UserSetLastError(v18, v13, v15, v16);
    v17 = -1;
    goto LABEL_53;
  }
  switch ( a2 )
  {
    case 536870917:
      if ( *(_BYTE *)(v14 + 48) == 2 )
        v19 = *(_DWORD *)(*(_QWORD *)(v14 + 464) + 104LL);
      else
        v19 = 0;
      break;
    case 536870919:
      v19 = (*(unsigned __int16 *)(v14 + 208) >> 1) + 1;
      break;
    case 536870923:
      v19 = 32;
      break;
    case 536870924:
      v19 = 44;
      break;
    default:
      v18 = 87LL;
      goto LABEL_5;
  }
  if ( !a3 )
  {
    if ( (unsigned __int64)a4 >= MmUserProbeAddress )
      a4 = (unsigned int *)MmUserProbeAddress;
    *a4 = v19;
    goto LABEL_53;
  }
  if ( (unsigned int)v12 >= v19 )
  {
    ProbeForWrite((volatile void *)a3, v12, 4u);
    v23 = a2 - 536870917;
    if ( v23 )
    {
      v24 = v23 - 2;
      if ( v24 )
      {
        v25 = v24 - 4;
        if ( v25 )
        {
          if ( v25 == 1 )
          {
            if ( (_DWORD)v12 != v19 )
            {
LABEL_27:
              v17 = -1;
              UserSetLastError(87LL, v20, v21, v22);
              goto LABEL_53;
            }
            if ( (a3 & 3) != 0 )
              ExRaiseDatatypeMisalignment();
            v26 = (_BYTE *)a3;
            if ( a3 >= MmUserProbeAddress )
              v26 = (_BYTE *)MmUserProbeAddress;
            *v26 = *v26;
            v26[43] = v26[43];
            memset((void *)a3, 0, 0x2CuLL);
            RIMFillDeviceHealthInfo(a3, v14);
          }
        }
        else
        {
          if ( (_DWORD)v12 != v19 )
            goto LABEL_27;
          if ( (a3 & 3) != 0 )
            ExRaiseDatatypeMisalignment();
          v27 = (_BYTE *)a3;
          if ( a3 >= MmUserProbeAddress )
            v27 = (_BYTE *)MmUserProbeAddress;
          *v27 = *v27;
          v27[31] = v27[31];
          memset((void *)a3, 0, 0x20uLL);
          *(_DWORD *)a3 = v19;
          if ( *(_BYTE *)(v14 + 48) )
          {
            if ( *(_BYTE *)(v14 + 48) == 1 )
            {
              *(_DWORD *)(a3 + 4) = 1;
              *(_DWORD *)(a3 + 8) = *(_DWORD *)(v14 + 492);
              *(_DWORD *)(a3 + 12) = *(_DWORD *)(v14 + 496);
              *(_DWORD *)(a3 + 16) = *(unsigned __int16 *)(v14 + 466);
              *(_DWORD *)(a3 + 20) = *(unsigned __int16 *)(v14 + 468);
              *(_DWORD *)(a3 + 24) = *(unsigned __int16 *)(v14 + 470);
              *(_DWORD *)(a3 + 28) = *(unsigned __int16 *)(v14 + 472);
            }
            else if ( *(_BYTE *)(v14 + 48) == 2 )
            {
              *(_DWORD *)(a3 + 4) = 2;
              *(_DWORD *)(a3 + 8) = *(unsigned __int16 *)(*(_QWORD *)(v14 + 464) + 110LL);
              *(_DWORD *)(a3 + 12) = *(unsigned __int16 *)(*(_QWORD *)(v14 + 464) + 112LL);
              *(_DWORD *)(a3 + 16) = *(unsigned __int16 *)(*(_QWORD *)(v14 + 464) + 114LL);
              *(_WORD *)(a3 + 20) = *(_WORD *)(*(_QWORD *)(v14 + 464) + 42LL);
              *(_WORD *)(a3 + 22) = *(_WORD *)(*(_QWORD *)(v14 + 464) + 40LL);
            }
          }
          else
          {
            *(_DWORD *)(a3 + 8) = *(_WORD *)(v14 + 464) & 0x7FFF;
            *(_DWORD *)(a3 + 12) = *(unsigned __int16 *)(v14 + 466);
            *(_DWORD *)(a3 + 16) = *(unsigned __int16 *)(v14 + 468);
            *(_DWORD *)(a3 + 20) = *(unsigned __int16 *)(v14 + 464) >> 15;
          }
        }
      }
      else
      {
        if ( v19 <= 2 )
        {
          v17 = -1;
          goto LABEL_53;
        }
        memmove((void *)a3, *(const void **)(v14 + 216), *(unsigned __int16 *)(v14 + 208));
        *(_WORD *)(a3 + 2) = 92;
        *(_WORD *)(a3 + 2LL * (v19 - 1)) = 0;
      }
    }
    else if ( *(_BYTE *)(v14 + 48) == 2 )
    {
      memmove((void *)a3, *(const void **)(*(_QWORD *)(v14 + 464) + 16LL), v19);
    }
    v17 = v19;
    goto LABEL_53;
  }
  v17 = -1;
  if ( (unsigned __int64)a4 >= MmUserProbeAddress )
    a4 = (unsigned int *)MmUserProbeAddress;
  *a4 = v19;
  UserSetLastError(122LL, v13, v15, v16);
LABEL_53:
  UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)v30);
  UserSessionSwitchLeaveCrit(v28);
  return v17;
}
