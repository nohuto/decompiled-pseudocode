/*
 * XREFs of NtUserGetRawInputDeviceInfo @ 0x1C012EDC0
 * Callers:
 *     <none>
 * Callees:
 *     HMValidateHandle @ 0x1C0015A84 (HMValidateHandle.c)
 *     ??1UserAtomicCheck@@QEAA@XZ @ 0x1C0029B88 (--1UserAtomicCheck@@QEAA@XZ.c)
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C0029BD8 (--0UserAtomicCheck@@QEAA@XZ.c)
 *     UserSetLastError @ 0x1C003A8EC (UserSetLastError.c)
 *     memmove @ 0x1C013D380 (memmove.c)
 *     memset @ 0x1C013D6C0 (memset.c)
 */

__int64 __fastcall NtUserGetRawInputDeviceInfo(__int64 a1, int a2, ULONG64 a3, unsigned int *a4)
{
  unsigned int *v8; // rax
  SIZE_T v9; // r13
  __int64 v10; // rdx
  __int64 v11; // rsi
  unsigned int v12; // ebx
  unsigned int v13; // r14d
  __int64 v14; // rdx
  int v15; // r12d
  int v16; // r12d
  int v17; // r12d
  _BYTE *v18; // rdx
  _BYTE *v19; // rdx
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // r9
  __int64 v25; // rcx
  _BYTE v26[48]; // [rsp+60h] [rbp-48h] BYREF

  EnterCrit(0LL, 1LL);
  UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)v26);
  v8 = a4;
  if ( (unsigned __int64)a4 >= MmUserProbeAddress )
    v8 = (unsigned int *)MmUserProbeAddress;
  v9 = *v8;
  v11 = HMValidateHandle(a1, 19);
  v12 = 0;
  if ( !v11 )
  {
    v25 = 6LL;
    goto LABEL_43;
  }
  if ( a2 != 536870917 )
  {
    switch ( a2 )
    {
      case 536870919:
        v13 = (*(unsigned __int16 *)(v11 + 208) >> 1) + 1;
        goto LABEL_7;
      case 536870923:
        v13 = 32;
        goto LABEL_7;
      case 536870924:
        v13 = 44;
        goto LABEL_7;
    }
    v25 = 87LL;
LABEL_43:
    UserSetLastError(v25, v10);
    v12 = -1;
    goto LABEL_38;
  }
  if ( *(_BYTE *)(v11 + 48) == 2 )
    v13 = *(_DWORD *)(*(_QWORD *)(v11 + 464) + 104LL);
  else
    v13 = 0;
LABEL_7:
  if ( a3 )
  {
    if ( (unsigned int)v9 >= v13 )
    {
      ProbeForWrite((volatile void *)a3, v9, 4u);
      v15 = a2 - 536870917;
      if ( !v15 )
      {
        if ( *(_BYTE *)(v11 + 48) == 2 )
          memmove((void *)a3, *(const void **)(*(_QWORD *)(v11 + 464) + 16LL), v13);
        goto LABEL_37;
      }
      v16 = v15 - 2;
      if ( v16 )
      {
        v17 = v16 - 4;
        if ( !v17 )
        {
          if ( (_DWORD)v9 == v13 )
          {
            if ( (a3 & 3) != 0 )
              ExRaiseDatatypeMisalignment();
            v18 = (_BYTE *)a3;
            if ( a3 >= MmUserProbeAddress )
              v18 = (_BYTE *)MmUserProbeAddress;
            *v18 = *v18;
            v18[31] = v18[31];
            memset((void *)a3, 0, 0x20uLL);
            *(_DWORD *)a3 = v13;
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
              *(_DWORD *)(a3 + 4) = 0;
              *(_DWORD *)(a3 + 8) = *(_WORD *)(v11 + 464) & 0x7FFF;
              *(_DWORD *)(a3 + 12) = *(unsigned __int16 *)(v11 + 466);
              *(_DWORD *)(a3 + 16) = *(unsigned __int16 *)(v11 + 468);
              *(_DWORD *)(a3 + 20) = *(unsigned __int16 *)(v11 + 464) >> 15;
            }
            goto LABEL_37;
          }
          goto LABEL_24;
        }
        if ( v17 == 1 )
        {
          if ( (_DWORD)v9 == v13 )
          {
            if ( (a3 & 3) != 0 )
              ExRaiseDatatypeMisalignment();
            v19 = (_BYTE *)a3;
            if ( a3 >= MmUserProbeAddress )
              v19 = (_BYTE *)MmUserProbeAddress;
            *v19 = *v19;
            v19[43] = v19[43];
            memset((void *)a3, 0, 0x2CuLL);
            RIMFillDeviceHealthInfo(a3, v11);
            goto LABEL_37;
          }
LABEL_24:
          v12 = -1;
          UserSetLastError(87LL, v14);
          goto LABEL_38;
        }
      }
      else
      {
        if ( v13 <= 2 )
        {
          v12 = -1;
          goto LABEL_38;
        }
        memmove((void *)a3, *(const void **)(v11 + 216), *(unsigned __int16 *)(v11 + 208));
        *(_WORD *)(a3 + 2) = 92;
        *(_WORD *)(a3 + 2LL * (v13 - 1)) = 0;
      }
LABEL_37:
      v12 = v13;
      goto LABEL_38;
    }
    v12 = -1;
    if ( (unsigned __int64)a4 >= MmUserProbeAddress )
      a4 = (unsigned int *)MmUserProbeAddress;
    *a4 = v13;
    UserSetLastError(122LL, v10);
  }
  else
  {
    if ( (unsigned __int64)a4 >= MmUserProbeAddress )
      a4 = (unsigned int *)MmUserProbeAddress;
    *a4 = v13;
  }
LABEL_38:
  UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)v26);
  UserSessionSwitchLeaveCrit(v21, v20, v22, v23);
  return v12;
}
