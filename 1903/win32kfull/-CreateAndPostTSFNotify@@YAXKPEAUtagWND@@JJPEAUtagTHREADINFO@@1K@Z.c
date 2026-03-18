/*
 * XREFs of ?CreateAndPostTSFNotify@@YAXKPEAUtagWND@@JJPEAUtagTHREADINFO@@1K@Z @ 0x1C0006E44
 * Callers:
 *     ?xxxDoLocalTSFWork@@YAXKPEAUtagWND@@JJKKPEAUtagTHREADINFO@@K@Z @ 0x1C0006CA8 (-xxxDoLocalTSFWork@@YAXKPEAUtagWND@@JJKKPEAUtagTHREADINFO@@K@Z.c)
 *     ?DoGlobalTSFWork@@YAXKPEAUtagWND@@JJKKPEAUtagTHREADINFO@@K@Z @ 0x1C0137714 (-DoGlobalTSFWork@@YAXKPEAUtagWND@@JJKKPEAUtagTHREADINFO@@K@Z.c)
 * Callees:
 *     ?CreateNotify@@YAPEAUtagNOTIFY@@PEAUtagEVENTHOOK@@KPEAUtagWND@@JJPEAUtagTHREADINFO@@KE@Z @ 0x1C0006F08 (-CreateNotify@@YAPEAUtagNOTIFY@@PEAUtagEVENTHOOK@@KPEAUtagWND@@JJPEAUtagTHREADINFO@@KE@Z.c)
 *     PostEventMessageEx @ 0x1C0025670 (PostEventMessageEx.c)
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C00BFAE8 (--0UserAtomicCheck@@QEAA@XZ.c)
 *     ??1UserAtomicCheck@@QEAA@XZ @ 0x1C00BFB44 (--1UserAtomicCheck@@QEAA@XZ.c)
 */

void __fastcall CreateAndPostTSFNotify(
        unsigned int a1,
        struct tagWND *a2,
        int a3,
        int a4,
        struct tagTHREADINFO *a5,
        struct tagTHREADINFO *a6,
        unsigned int a7)
{
  struct tagTHREADINFO *v7; // rdi
  __int64 *Notify; // rbx
  __int64 v9; // rax
  __int64 **v10; // rcx

  v7 = a5;
  if ( *((_QWORD *)a5 + 53) )
  {
    if ( a5 != (struct tagTHREADINFO *)gptiRit )
    {
      Notify = (__int64 *)CreateNotify(0LL, a1, a2, a3, a4, a6, a7, 1);
      if ( Notify )
      {
        UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)&a5);
        *((_DWORD *)Notify + 14) |= 0xCu;
        if ( !(unsigned int)PostEventMessageEx(v7, 0, 0LL, (__int64)Notify, 0LL) )
        {
          v9 = *Notify;
          if ( *(__int64 **)(*Notify + 8) != Notify || (v10 = (__int64 **)Notify[1], *v10 != Notify) )
            __fastfail(3u);
          *v10 = (__int64 *)v9;
          *(_QWORD *)(v9 + 8) = v10;
          Notify[1] = (__int64)Notify;
          *Notify = (__int64)Notify;
          if ( !*((_DWORD *)Notify + 6) )
            HMAssignmentUnlock(Notify + 2);
          if ( Notify == &qword_1C032DDF0 )
            dword_1C032C208 = 0;
          else
            Win32FreePool(Notify);
        }
        UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)&a5);
      }
    }
  }
}
