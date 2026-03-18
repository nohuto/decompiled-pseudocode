/*
 * XREFs of ?xxxSetWindowShowState@@YA_NPEAUtagWND@@EPEAUtagRECT@@@Z @ 0x1C023E200
 * Callers:
 *     NtUserSetWindowShowState @ 0x1C02357E0 (NtUserSetWindowShowState.c)
 * Callees:
 *     CkptRestore @ 0x1C0014440 (CkptRestore.c)
 *     UserSetLastError @ 0x1C002862C (UserSetLastError.c)
 *     PostEventMessageEx @ 0x1C002BAE0 (PostEventMessageEx.c)
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C00611C8 (--0UserAtomicCheck@@QEAA@XZ.c)
 *     ??1UserAtomicCheck@@QEAA@XZ @ 0x1C0061224 (--1UserAtomicCheck@@QEAA@XZ.c)
 *     _GetProp @ 0x1C00692EC (_GetProp.c)
 *     ?TrackedWindowPosChanged@NotifyShell@@YAXPEAUtagWND@@_N@Z @ 0x1C023A124 (-TrackedWindowPosChanged@NotifyShell@@YAXPEAUtagWND@@_N@Z.c)
 */

bool __fastcall xxxSetWindowShowState(struct tagWND *this, unsigned __int8 a2, struct tagRECT *a3)
{
  __int64 v5; // rcx
  BOOL v7; // eax
  struct tagWND *v8; // rdx
  __int64 v9; // r8
  struct tagRECT *Prop; // rax
  __int64 v12; // rdx
  __int64 v13; // r8
  __int64 v14; // r9
  char v15; // [rsp+50h] [rbp+8h] BYREF

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
      UserSetLastError(8LL, v12, v13, v14);
      return 0;
    }
  }
  if ( (a2 == 15 || a2 == 17 || a2 == 19) && (*(_BYTE *)(*((_QWORD *)this + 5) + 31LL) & 1) != 0 )
  {
LABEL_9:
    UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)&v15);
    LOBYTE(v8) = 1;
    NotifyShell::TrackedWindowPosChanged(this, v8, v9);
    UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)&v15);
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
