/*
 * XREFs of ?xxxSetWindowShowState@@YA_NPEAUtagWND@@EPEAUtagRECT@@@Z @ 0x1C023E820
 * Callers:
 *     NtUserSetWindowShowState @ 0x1C0235E00 (NtUserSetWindowShowState.c)
 * Callees:
 *     PostEventMessageEx @ 0x1C0025670 (PostEventMessageEx.c)
 *     UserSetLastError @ 0x1C008B3AC (UserSetLastError.c)
 *     CkptRestore @ 0x1C0090C80 (CkptRestore.c)
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C00BFAE8 (--0UserAtomicCheck@@QEAA@XZ.c)
 *     ??1UserAtomicCheck@@QEAA@XZ @ 0x1C00BFB44 (--1UserAtomicCheck@@QEAA@XZ.c)
 *     _GetProp @ 0x1C00C7C1C (_GetProp.c)
 *     ?TrackedWindowPosChanged@NotifyShell@@YAXPEAUtagWND@@_N@Z @ 0x1C023A744 (-TrackedWindowPosChanged@NotifyShell@@YAXPEAUtagWND@@_N@Z.c)
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
    Prop = (struct tagRECT *)GetProp((__int64)this, *((unsigned __int16 *)&WPP_MAIN_CB.DeviceQueue.Size + 1), 1LL);
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
                         *(_QWORD *)(*((_QWORD *)this + 2) + 424LL),
                         1u,
                         (__int64)this,
                         1u,
                         a3 != 0LL ? 4 : 0,
                         a2 | (unsigned __int64)(gdwPUDFlags & 0x10000),
                         0LL) != 0;
}
