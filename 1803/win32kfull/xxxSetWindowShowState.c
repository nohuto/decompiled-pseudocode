/*
 * XREFs of xxxSetWindowShowState @ 0x1C01FA8B4
 * Callers:
 *     NtUserSetWindowShowState @ 0x1C01F6130 (NtUserSetWindowShowState.c)
 * Callees:
 *     PostEventMessageEx @ 0x1C001C3FC (PostEventMessageEx.c)
 *     ??1UserAtomicCheck@@QEAA@XZ @ 0x1C0029B88 (--1UserAtomicCheck@@QEAA@XZ.c)
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C0029BD8 (--0UserAtomicCheck@@QEAA@XZ.c)
 *     UserSetLastError @ 0x1C003A8EC (UserSetLastError.c)
 *     CkptRestore @ 0x1C00669FC (CkptRestore.c)
 *     xxxNotifyShellTrackedWindowPosChanged @ 0x1C01A59E4 (xxxNotifyShellTrackedWindowPosChanged.c)
 */

__int64 __fastcall xxxSetWindowShowState(__int64 a1, unsigned __int8 a2, _OWORD *a3)
{
  __int64 v5; // rcx
  BOOL v7; // eax
  __int64 v8; // r8
  _OWORD *Prop; // rax
  __int64 v11; // rdx
  char v12; // [rsp+50h] [rbp+8h] BYREF

  v5 = *(_QWORD *)(a1 + 40);
  v7 = (*(_BYTE *)(v5 + 31) & 0x20) != 0 || (*(_BYTE *)(v5 + 233) & 3) != 0;
  if ( (a2 == 16 || a2 == 18 || a2 == 20) && !v7 )
    goto LABEL_9;
  if ( a3 )
  {
    Prop = (_OWORD *)RealGetProp(*(_QWORD *)(a1 + 120), (unsigned __int16)atomCheckpointProp, 1LL);
    if ( Prop )
    {
      *Prop = *a3;
    }
    else if ( !CkptRestore(a1, a3) )
    {
      UserSetLastError(8LL, v11);
      return 0LL;
    }
  }
  if ( (a2 == 15 || a2 == 17 || a2 == 19) && (*(_BYTE *)(*(_QWORD *)(a1 + 40) + 31LL) & 1) != 0 )
  {
LABEL_9:
    UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)&v12);
    xxxNotifyShellTrackedWindowPosChanged((_QWORD *)a1, 1, v8);
    UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)&v12);
    return 1LL;
  }
  return PostEventMessageEx(
           *(struct tagTHREADINFO **)(a1 + 16),
           *(_QWORD *)(*(_QWORD *)(a1 + 16) + 424LL),
           1u,
           a1,
           1u,
           a3 != 0LL ? 4 : 0,
           a2 | (unsigned __int64)(gdwPUDFlags & 0x10000),
           0LL);
}
