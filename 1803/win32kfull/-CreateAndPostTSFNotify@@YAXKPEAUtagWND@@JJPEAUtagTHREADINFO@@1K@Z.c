/*
 * XREFs of ?CreateAndPostTSFNotify@@YAXKPEAUtagWND@@JJPEAUtagTHREADINFO@@1K@Z @ 0x1C0106460
 * Callers:
 *     ?xxxDoLocalTSFWork@@YAXKPEAUtagWND@@JJKKPEAUtagTHREADINFO@@K@Z @ 0x1C00063FC (-xxxDoLocalTSFWork@@YAXKPEAUtagWND@@JJKKPEAUtagTHREADINFO@@K@Z.c)
 *     ?DoGlobalTSFWork@@YAXKPEAUtagWND@@JJKKPEAUtagTHREADINFO@@K@Z @ 0x1C0106378 (-DoGlobalTSFWork@@YAXKPEAUtagWND@@JJKKPEAUtagTHREADINFO@@K@Z.c)
 * Callees:
 *     PostEventMessageEx @ 0x1C001C3FC (PostEventMessageEx.c)
 *     ??1UserAtomicCheck@@QEAA@XZ @ 0x1C0029B88 (--1UserAtomicCheck@@QEAA@XZ.c)
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C0029BD8 (--0UserAtomicCheck@@QEAA@XZ.c)
 *     DestroyNotify @ 0x1C00D8D68 (DestroyNotify.c)
 *     ?CreateNotify@@YAPEAUtagNOTIFY@@PEAUtagEVENTHOOK@@KPEAUtagWND@@JJPEAUtagTHREADINFO@@KE@Z @ 0x1C0106524 (-CreateNotify@@YAPEAUtagNOTIFY@@PEAUtagEVENTHOOK@@KPEAUtagWND@@JJPEAUtagTHREADINFO@@KE@Z.c)
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

  v7 = a5;
  if ( *((_QWORD *)a5 + 53) )
  {
    if ( a5 != (struct tagTHREADINFO *)gptiRit )
    {
      Notify = CreateNotify(0LL, a1, a2, a3, a4, a6, a7, 1);
      if ( Notify )
      {
        UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)&a5);
        *((_DWORD *)Notify + 12) |= 0xCu;
        if ( !(unsigned int)PostEventMessageEx(v7, *((_QWORD *)v7 + 53), 0xCu, 0LL, 0, 0LL, (__int64)Notify, 0LL) )
          DestroyNotify((struct tagNOTIFY **)Notify);
        UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)&a5);
      }
    }
  }
}
