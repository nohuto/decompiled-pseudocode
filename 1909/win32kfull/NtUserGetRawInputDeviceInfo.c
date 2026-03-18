/*
 * XREFs of NtUserGetRawInputDeviceInfo @ 0x1C022E1D0
 * Callers:
 *     <none>
 * Callees:
 *     HMValidateHandle @ 0x1C0024F2C (HMValidateHandle.c)
 *     UserSetLastError @ 0x1C002862C (UserSetLastError.c)
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C00611C8 (--0UserAtomicCheck@@QEAA@XZ.c)
 *     ??1UserAtomicCheck@@QEAA@XZ @ 0x1C0061224 (--1UserAtomicCheck@@QEAA@XZ.c)
 *     memmove @ 0x1C0168100 (memmove.c)
 *     memset @ 0x1C0168440 (memset.c)
 */

__int64 __fastcall NtUserGetRawInputDeviceInfo(unsigned __int64 a1, int a2, ULONG64 a3, unsigned int *a4)
{
  unsigned int *v8; // rax
  SIZE_T v9; // r13
  __int64 v10; // rdx
  __int64 v11; // rsi
  __int64 v12; // r8
  __int64 v13; // r9
  unsigned int v14; // ebx
  __int64 v15; // rcx
  unsigned int v16; // r14d
  __int64 v17; // rdx
  __int64 v18; // r8
  __int64 v19; // r9
  int v20; // r12d
  int v21; // r12d
  int v22; // r12d
  _BYTE *v23; // rdx
  _BYTE *v24; // rdx
  __int64 v25; // rcx
  _BYTE v27[48]; // [rsp+60h] [rbp-48h] BYREF

  EnterCrit(0LL, 1LL);
  UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)v27);
  v8 = a4;
  if ( (unsigned __int64)a4 >= MmUserProbeAddress )
    v8 = (unsigned int *)MmUserProbeAddress;
  v9 = *v8;
  v11 = HMValidateHandle(a1, 19);
  v14 = 0;
  if ( !v11 )
  {
    v15 = 6LL;
LABEL_5:
    UserSetLastError(v15, v10, v12, v13);
    v14 = -1;
    goto LABEL_53;
  }
  switch ( a2 )
  {
    case 536870917:
      if ( *(_BYTE *)(v11 + 48) == 2 )
        v16 = *(_DWORD *)(*(_QWORD *)(v11 + 464) + 104LL);
      else
        v16 = 0;
      break;
    case 536870919:
      v16 = (*(unsigned __int16 *)(v11 + 208) >> 1) + 1;
      break;
    case 536870923:
      v16 = 32;
      break;
    case 536870924:
      v16 = 44;
      break;
    default:
      v15 = 87LL;
      goto LABEL_5;
  }
  if ( !a3 )
  {
    if ( (unsigned __int64)a4 >= MmUserProbeAddress )
      a4 = (unsigned int *)MmUserProbeAddress;
    *a4 = v16;
    goto LABEL_53;
  }
  if ( (unsigned int)v9 >= v16 )
  {
    ProbeForWrite((volatile void *)a3, v9, 4u);
    v20 = a2 - 536870917;
    if ( v20 )
    {
      v21 = v20 - 2;
      if ( v21 )
      {
        v22 = v21 - 4;
        if ( v22 )
        {
          if ( v22 == 1 )
          {
            if ( (_DWORD)v9 != v16 )
            {
LABEL_27:
              v14 = -1;
              UserSetLastError(87LL, v17, v18, v19);
              goto LABEL_53;
            }
            if ( (a3 & 3) != 0 )
              ExRaiseDatatypeMisalignment();
            v23 = (_BYTE *)a3;
            if ( a3 >= MmUserProbeAddress )
              v23 = (_BYTE *)MmUserProbeAddress;
            *v23 = *v23;
            v23[43] = v23[43];
            memset((void *)a3, 0, 0x2CuLL);
            RIMFillDeviceHealthInfo(a3, v11);
          }
        }
        else
        {
          if ( (_DWORD)v9 != v16 )
            goto LABEL_27;
          if ( (a3 & 3) != 0 )
            ExRaiseDatatypeMisalignment();
          v24 = (_BYTE *)a3;
          if ( a3 >= MmUserProbeAddress )
            v24 = (_BYTE *)MmUserProbeAddress;
          *v24 = *v24;
          v24[31] = v24[31];
          memset((void *)a3, 0, 0x20uLL);
          *(_DWORD *)a3 = v16;
          if ( *(_BYTE *)(v11 + 48) )
          {
            if ( *(_BYTE *)(v11 + 48) == 1 )
            {
              *(_DWORD *)(a3 + 4) = 1;
              *(_DWORD *)(a3 + 8) = *(_DWORD *)(v11 + 492);
              *(_DWORD *)(a3 + 12) = *(_DWORD *)(v11 + 496);
              *(_DWORD *)(a3 + 16) = *(unsigned __int16 *)(v11 + 466);
              *(_DWORD *)(a3 + 20) = *(unsigned __int16 *)(v11 + 468);
              *(_DWORD *)(a3 + 24) = *(unsigned __int16 *)(v11 + 470);
              *(_DWORD *)(a3 + 28) = *(unsigned __int16 *)(v11 + 472);
            }
            else if ( *(_BYTE *)(v11 + 48) == 2 )
            {
              *(_DWORD *)(a3 + 4) = 2;
              *(_DWORD *)(a3 + 8) = *(unsigned __int16 *)(*(_QWORD *)(v11 + 464) + 110LL);
              *(_DWORD *)(a3 + 12) = *(unsigned __int16 *)(*(_QWORD *)(v11 + 464) + 112LL);
              *(_DWORD *)(a3 + 16) = *(unsigned __int16 *)(*(_QWORD *)(v11 + 464) + 114LL);
              *(_WORD *)(a3 + 20) = *(_WORD *)(*(_QWORD *)(v11 + 464) + 42LL);
              *(_WORD *)(a3 + 22) = *(_WORD *)(*(_QWORD *)(v11 + 464) + 40LL);
            }
          }
          else
          {
            *(_DWORD *)(a3 + 8) = *(_WORD *)(v11 + 464) & 0x7FFF;
            *(_DWORD *)(a3 + 12) = *(unsigned __int16 *)(v11 + 466);
            *(_DWORD *)(a3 + 16) = *(unsigned __int16 *)(v11 + 468);
            *(_DWORD *)(a3 + 20) = *(unsigned __int16 *)(v11 + 464) >> 15;
          }
        }
      }
      else
      {
        if ( v16 <= 2 )
        {
          v14 = -1;
          goto LABEL_53;
        }
        memmove((void *)a3, *(const void **)(v11 + 216), *(unsigned __int16 *)(v11 + 208));
        *(_WORD *)(a3 + 2) = 92;
        *(_WORD *)(a3 + 2LL * (v16 - 1)) = 0;
      }
    }
    else if ( *(_BYTE *)(v11 + 48) == 2 )
    {
      memmove((void *)a3, *(const void **)(*(_QWORD *)(v11 + 464) + 16LL), v16);
    }
    v14 = v16;
    goto LABEL_53;
  }
  v14 = -1;
  if ( (unsigned __int64)a4 >= MmUserProbeAddress )
    a4 = (unsigned int *)MmUserProbeAddress;
  *a4 = v16;
  UserSetLastError(122LL, v10, v12, v13);
LABEL_53:
  UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)v27);
  UserSessionSwitchLeaveCrit(v25);
  return v14;
}
