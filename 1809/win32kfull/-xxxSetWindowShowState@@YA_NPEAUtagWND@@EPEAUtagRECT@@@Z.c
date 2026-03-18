/*
 * XREFs of ?xxxSetWindowShowState@@YA_NPEAUtagWND@@EPEAUtagRECT@@@Z @ 0x1C0226380
 * Callers:
 *     NtUserSetWindowShowState @ 0x1C021DBC0 (NtUserSetWindowShowState.c)
 * Callees:
 *     ??1UserAtomicCheck@@QEAA@XZ @ 0x1C004152C (--1UserAtomicCheck@@QEAA@XZ.c)
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C0041580 (--0UserAtomicCheck@@QEAA@XZ.c)
 *     _GetProp @ 0x1C0072450 (_GetProp.c)
 *     UserSetLastError @ 0x1C0073CC4 (UserSetLastError.c)
 *     CkptRestore @ 0x1C00B6EB0 (CkptRestore.c)
 *     PostEventMessageEx @ 0x1C00D4C3C (PostEventMessageEx.c)
 *     ?TrackedWindowPosChanged@NotifyShell@@YAXPEAUtagWND@@_N@Z @ 0x1C0221FA0 (-TrackedWindowPosChanged@NotifyShell@@YAXPEAUtagWND@@_N@Z.c)
 */

bool __fastcall xxxSetWindowShowState(struct tagWND *this, unsigned __int8 a2, struct tagRECT *a3)
{
  __int64 v5; // rcx
  BOOL v7; // eax
  struct tagWND *v8; // rdx
  struct tagRECT *Prop; // rax
  __int64 v11; // rdx
  __int64 v12; // r8
  __int64 v13; // r9
  char v14; // [rsp+50h] [rbp+8h] BYREF

  v5 = *((_QWORD *)this + 5);
  v7 = (*(_BYTE *)(v5 + 31) & 0x20) != 0 || (*(_BYTE *)(v5 + 233) & 3) != 0;
  if ( (a2 == 16 || a2 == 18 || a2 == 20) && !v7 )
    goto LABEL_9;
  if ( a3 )
  {
    Prop = (struct tagRECT *)GetProp((__int64)this, (unsigned __int16)atomCheckpointProp, 1LL);
    if ( Prop )
    {
      *Prop = *a3;
    }
    else if ( !CkptRestore((__int64)this, a3) )
    {
      UserSetLastError(8LL, v11, v12, v13);
      return 0;
    }
  }
  if ( (a2 == 15 || a2 == 17 || a2 == 19) && (*(_BYTE *)(*((_QWORD *)this + 5) + 31LL) & 1) != 0 )
  {
LABEL_9:
    UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)&v14);
    LOBYTE(v8) = 1;
    NotifyShell::TrackedWindowPosChanged(this, v8);
    UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)&v14);
    return 1;
  }
  return (unsigned int)PostEventMessageEx(
                         *((struct tagTHREADINFO **)this + 2),
                         *(_QWORD *)(*((_QWORD *)this + 2) + 432LL),
                         1u,
                         this,
                         1u,
                         a3 != 0LL ? 4 : 0,
                         (LARGE_INTEGER)(a2 | (unsigned __int64)(gdwPUDFlags & 0x10000)),
                         0LL) != 0;
}
