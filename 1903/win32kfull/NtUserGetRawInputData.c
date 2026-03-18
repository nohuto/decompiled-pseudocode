/*
 * XREFs of NtUserGetRawInputData @ 0x1C0005480
 * Callers:
 *     <none>
 * Callees:
 *     HMValidateHandle @ 0x1C002F96C (HMValidateHandle.c)
 *     UserSetLastError @ 0x1C008B3AC (UserSetLastError.c)
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C00BFAE8 (--0UserAtomicCheck@@QEAA@XZ.c)
 *     ??1UserAtomicCheck@@QEAA@XZ @ 0x1C00BFB44 (--1UserAtomicCheck@@QEAA@XZ.c)
 *     memmove @ 0x1C0166500 (memmove.c)
 */

__int64 __fastcall NtUserGetRawInputData(__int64 a1, int a2, _QWORD *a3, unsigned int *a4, int a5)
{
  __int64 v9; // rdx
  unsigned int v10; // esi
  __int64 v11; // rax
  unsigned int v12; // ebx
  _QWORD *v13; // r12
  unsigned int *v14; // rax
  int v15; // r14d
  _BYTE v17[40]; // [rsp+58h] [rbp-40h] BYREF

  EnterCrit(0LL, 1LL);
  UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)v17);
  v10 = 24;
  if ( a5 != 24 )
    goto LABEL_22;
  LOBYTE(v9) = 18;
  v11 = HMValidateHandle(a1, v9);
  v12 = 0;
  if ( !v11 || (v13 = (_QWORD *)(v11 + 32), *(_DWORD *)(v11 + 32) > 2u) )
  {
    UserSetLastError(6LL);
    v12 = -1;
    goto LABEL_17;
  }
  if ( a2 == 268435459 )
  {
    v10 = *(_DWORD *)(v11 + 36);
    goto LABEL_6;
  }
  if ( a2 != 268435461 )
  {
LABEL_22:
    v12 = -1;
    UserSetLastError(87LL);
    goto LABEL_17;
  }
LABEL_6:
  if ( a3 )
  {
    v14 = a4;
    if ( (unsigned __int64)a4 >= MmUserProbeAddress )
      v14 = (unsigned int *)MmUserProbeAddress;
    if ( *v14 < v10 )
    {
      v12 = -1;
      if ( (unsigned __int64)a4 >= MmUserProbeAddress )
        a4 = (unsigned int *)MmUserProbeAddress;
      *a4 = v10;
      UserSetLastError(122LL);
    }
    else
    {
      v15 = a2 - 268435459;
      if ( v15 )
      {
        if ( v15 == 2 )
        {
          if ( (unsigned __int64)a3 >= MmUserProbeAddress )
            a3 = (_QWORD *)MmUserProbeAddress;
          *(_OWORD *)a3 = *(_OWORD *)v13;
          a3[2] = v13[2];
        }
      }
      else
      {
        ProbeForWrite(a3, v10, 4u);
        memmove(a3, v13, v10);
      }
      v12 = v10;
    }
  }
  else
  {
    if ( (unsigned __int64)a4 >= MmUserProbeAddress )
      a4 = (unsigned int *)MmUserProbeAddress;
    *a4 = v10;
  }
LABEL_17:
  UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)v17);
  UserSessionSwitchLeaveCrit();
  return v12;
}
