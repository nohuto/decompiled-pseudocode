/*
 * XREFs of ?CreateAndPostTSFNotify@@YAXKPEAUtagWND@@JJPEAUtagTHREADINFO@@1K@Z @ 0x1C000468C
 * Callers:
 *     ?xxxDoLocalTSFWork@@YAXKPEAUtagWND@@JJKKPEAUtagTHREADINFO@@K@Z @ 0x1C00044FC (-xxxDoLocalTSFWork@@YAXKPEAUtagWND@@JJKKPEAUtagTHREADINFO@@K@Z.c)
 *     ?DoGlobalTSFWork@@YAXKPEAUtagWND@@JJKKPEAUtagTHREADINFO@@K@Z @ 0x1C012B9DC (-DoGlobalTSFWork@@YAXKPEAUtagWND@@JJKKPEAUtagTHREADINFO@@K@Z.c)
 * Callees:
 *     ?CreateNotify@@YAPEAUtagNOTIFY@@PEAUtagEVENTHOOK@@KPEAUtagWND@@JJPEAUtagTHREADINFO@@KE@Z @ 0x1C0018F64 (-CreateNotify@@YAPEAUtagNOTIFY@@PEAUtagEVENTHOOK@@KPEAUtagWND@@JJPEAUtagTHREADINFO@@KE@Z.c)
 *     ??1UserAtomicCheck@@QEAA@XZ @ 0x1C004152C (--1UserAtomicCheck@@QEAA@XZ.c)
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C0041580 (--0UserAtomicCheck@@QEAA@XZ.c)
 *     PostEventMessageEx @ 0x1C00D4C3C (PostEventMessageEx.c)
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
  struct tagNOTIFY *Notify; // rbx
  __int64 v9; // rax
  struct tagNOTIFY **v10; // rcx

  v7 = a5;
  if ( *((_QWORD *)a5 + 54) )
  {
    if ( a5 != (struct tagTHREADINFO *)gptiRit )
    {
      Notify = CreateNotify(0LL, a1, a2, a3, a4, a6, a7, 1);
      if ( Notify )
      {
        UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)&a5);
        *((_DWORD *)Notify + 14) |= 0xCu;
        if ( !(unsigned int)PostEventMessageEx(v7, 0, 0LL, (__int64)Notify, 0LL) )
        {
          v9 = *(_QWORD *)Notify;
          if ( *(struct tagNOTIFY **)(*(_QWORD *)Notify + 8LL) != Notify
            || (v10 = (struct tagNOTIFY **)*((_QWORD *)Notify + 1), *v10 != Notify) )
          {
            __fastfail(3u);
          }
          *v10 = (struct tagNOTIFY *)v9;
          *(_QWORD *)(v9 + 8) = v10;
          *((_QWORD *)Notify + 1) = Notify;
          *(_QWORD *)Notify = Notify;
          if ( !*((_DWORD *)Notify + 6) )
            HMAssignmentUnlock((char *)Notify + 16);
          if ( Notify == (struct tagNOTIFY *)&unk_1C0319760 )
            dword_1C03171D8 = 0;
          else
            Win32FreePool(Notify);
        }
        UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)&a5);
      }
    }
  }
}
