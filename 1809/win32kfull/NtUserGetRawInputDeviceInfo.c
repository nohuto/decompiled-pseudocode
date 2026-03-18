/*
 * XREFs of NtUserGetRawInputDeviceInfo @ 0x1C0216950
 * Callers:
 *     <none>
 * Callees:
 *     ??1UserAtomicCheck@@QEAA@XZ @ 0x1C004152C (--1UserAtomicCheck@@QEAA@XZ.c)
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C0041580 (--0UserAtomicCheck@@QEAA@XZ.c)
 *     HMValidateHandle @ 0x1C006CDAC (HMValidateHandle.c)
 *     UserSetLastError @ 0x1C0073CC4 (UserSetLastError.c)
 *     memmove @ 0x1C0163300 (memmove.c)
 *     memset @ 0x1C0163640 (memset.c)
 */

__int64 __fastcall NtUserGetRawInputDeviceInfo(__int64 a1, int a2, ULONG64 a3, unsigned int *a4)
{
  __int64 v8; // rdx
  unsigned int *v9; // rax
  SIZE_T v10; // r13
  __int64 v11; // rdx
  __int64 v12; // rsi
  __int64 v13; // r8
  __int64 v14; // r9
  unsigned int v15; // ebx
  __int64 v16; // rcx
  unsigned int v17; // r14d
  __int64 v18; // rdx
  __int64 v19; // r8
  __int64 v20; // r9
  int v21; // r12d
  int v22; // r12d
  int v23; // r12d
  _BYTE *v24; // rdx
  _BYTE *v25; // rdx
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // r8
  __int64 v29; // r9
  _BYTE v31[48]; // [rsp+60h] [rbp-48h] BYREF

  EnterCrit(0LL, 1LL);
  UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)v31);
  v9 = a4;
  if ( (unsigned __int64)a4 >= MmUserProbeAddress )
    v9 = (unsigned int *)MmUserProbeAddress;
  v10 = *v9;
  LOBYTE(v8) = 19;
  v12 = HMValidateHandle(a1, v8);
  v15 = 0;
  if ( !v12 )
  {
    v16 = 6LL;
LABEL_5:
    UserSetLastError(v16, v11, v13, v14);
    v15 = -1;
    goto LABEL_53;
  }
  switch ( a2 )
  {
    case 536870917:
      if ( *(_BYTE *)(v12 + 48) == 2 )
        v17 = *(_DWORD *)(*(_QWORD *)(v12 + 464) + 104LL);
      else
        v17 = 0;
      break;
    case 536870919:
      v17 = (*(unsigned __int16 *)(v12 + 208) >> 1) + 1;
      break;
    case 536870923:
      v17 = 32;
      break;
    case 536870924:
      v17 = 44;
      break;
    default:
      v16 = 87LL;
      goto LABEL_5;
  }
  if ( !a3 )
  {
    if ( (unsigned __int64)a4 >= MmUserProbeAddress )
      a4 = (unsigned int *)MmUserProbeAddress;
    *a4 = v17;
    goto LABEL_53;
  }
  if ( (unsigned int)v10 >= v17 )
  {
    ProbeForWrite((volatile void *)a3, v10, 4u);
    v21 = a2 - 536870917;
    if ( v21 )
    {
      v22 = v21 - 2;
      if ( v22 )
      {
        v23 = v22 - 4;
        if ( v23 )
        {
          if ( v23 == 1 )
          {
            if ( (_DWORD)v10 != v17 )
            {
LABEL_27:
              v15 = -1;
              UserSetLastError(87LL, v18, v19, v20);
              goto LABEL_53;
            }
            if ( (a3 & 3) != 0 )
              ExRaiseDatatypeMisalignment();
            v24 = (_BYTE *)a3;
            if ( a3 >= MmUserProbeAddress )
              v24 = (_BYTE *)MmUserProbeAddress;
            *v24 = *v24;
            v24[43] = v24[43];
            memset((void *)a3, 0, 0x2CuLL);
            RIMFillDeviceHealthInfo(a3, v12);
          }
        }
        else
        {
          if ( (_DWORD)v10 != v17 )
            goto LABEL_27;
          if ( (a3 & 3) != 0 )
            ExRaiseDatatypeMisalignment();
          v25 = (_BYTE *)a3;
          if ( a3 >= MmUserProbeAddress )
            v25 = (_BYTE *)MmUserProbeAddress;
          *v25 = *v25;
          v25[31] = v25[31];
          memset((void *)a3, 0, 0x20uLL);
          *(_DWORD *)a3 = v17;
          if ( *(_BYTE *)(v12 + 48) )
          {
            if ( *(_BYTE *)(v12 + 48) == 1 )
            {
              *(_DWORD *)(a3 + 4) = 1;
              *(_DWORD *)(a3 + 8) = *(_DWORD *)(v12 + 492);
              *(_DWORD *)(a3 + 12) = *(_DWORD *)(v12 + 496);
              *(_DWORD *)(a3 + 16) = *(unsigned __int16 *)(v12 + 466);
              *(_DWORD *)(a3 + 20) = *(unsigned __int16 *)(v12 + 468);
              *(_DWORD *)(a3 + 24) = *(unsigned __int16 *)(v12 + 470);
              *(_DWORD *)(a3 + 28) = *(unsigned __int16 *)(v12 + 472);
            }
            else if ( *(_BYTE *)(v12 + 48) == 2 )
            {
              *(_DWORD *)(a3 + 4) = 2;
              *(_DWORD *)(a3 + 8) = *(unsigned __int16 *)(*(_QWORD *)(v12 + 464) + 110LL);
              *(_DWORD *)(a3 + 12) = *(unsigned __int16 *)(*(_QWORD *)(v12 + 464) + 112LL);
              *(_DWORD *)(a3 + 16) = *(unsigned __int16 *)(*(_QWORD *)(v12 + 464) + 114LL);
              *(_WORD *)(a3 + 20) = *(_WORD *)(*(_QWORD *)(v12 + 464) + 42LL);
              *(_WORD *)(a3 + 22) = *(_WORD *)(*(_QWORD *)(v12 + 464) + 40LL);
            }
          }
          else
          {
            *(_DWORD *)(a3 + 4) = 0;
            *(_DWORD *)(a3 + 8) = *(_WORD *)(v12 + 464) & 0x7FFF;
            *(_DWORD *)(a3 + 12) = *(unsigned __int16 *)(v12 + 466);
            *(_DWORD *)(a3 + 16) = *(unsigned __int16 *)(v12 + 468);
            *(_DWORD *)(a3 + 20) = *(unsigned __int16 *)(v12 + 464) >> 15;
          }
        }
      }
      else
      {
        if ( v17 <= 2 )
        {
          v15 = -1;
          goto LABEL_53;
        }
        memmove((void *)a3, *(const void **)(v12 + 216), *(unsigned __int16 *)(v12 + 208));
        *(_WORD *)(a3 + 2) = 92;
        *(_WORD *)(a3 + 2LL * (v17 - 1)) = 0;
      }
    }
    else if ( *(_BYTE *)(v12 + 48) == 2 )
    {
      memmove((void *)a3, *(const void **)(*(_QWORD *)(v12 + 464) + 16LL), v17);
    }
    v15 = v17;
    goto LABEL_53;
  }
  v15 = -1;
  if ( (unsigned __int64)a4 >= MmUserProbeAddress )
    a4 = (unsigned int *)MmUserProbeAddress;
  *a4 = v17;
  UserSetLastError(122LL, v11, v13, v14);
LABEL_53:
  UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)v31);
  UserSessionSwitchLeaveCrit(v27, v26, v28, v29);
  return v15;
}
