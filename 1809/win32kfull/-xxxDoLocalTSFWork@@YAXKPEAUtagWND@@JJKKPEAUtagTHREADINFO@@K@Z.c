/*
 * XREFs of ?xxxDoLocalTSFWork@@YAXKPEAUtagWND@@JJKKPEAUtagTHREADINFO@@K@Z @ 0x1C00044FC
 * Callers:
 *     xxxWindowEvent @ 0x1C0018330 (xxxWindowEvent.c)
 * Callees:
 *     ?CreateAndPostTSFNotify@@YAXKPEAUtagWND@@JJPEAUtagTHREADINFO@@1K@Z @ 0x1C000468C (-CreateAndPostTSFNotify@@YAXKPEAUtagWND@@JJPEAUtagTHREADINFO@@1K@Z.c)
 *     ?xxxCallTSFNotifyHook@@YAXPEAUtagNOTIFY@@@Z @ 0x1C0004884 (-xxxCallTSFNotifyHook@@YAXPEAUtagNOTIFY@@@Z.c)
 *     ?CreateNotify@@YAPEAUtagNOTIFY@@PEAUtagEVENTHOOK@@KPEAUtagWND@@JJPEAUtagTHREADINFO@@KE@Z @ 0x1C0018F64 (-CreateNotify@@YAPEAUtagNOTIFY@@PEAUtagEVENTHOOK@@KPEAUtagWND@@JJPEAUtagTHREADINFO@@KE@Z.c)
 *     W32GetThreadWin32Thread @ 0x1C0065998 (W32GetThreadWin32Thread.c)
 */

void __fastcall xxxDoLocalTSFWork(
        unsigned int a1,
        struct tagWND *a2,
        int a3,
        int a4,
        char a5,
        unsigned int a6,
        struct tagTHREADINFO *a7,
        unsigned int a8)
{
  __int64 ThreadWin32Thread; // rax
  char v13; // cl
  char v14; // r8
  bool v15; // dl
  unsigned int v16; // ecx
  struct _KTHREAD *v17; // rcx
  struct tagNOTIFY *Notify; // rax
  _BYTE v19[24]; // [rsp+40h] [rbp-58h] BYREF
  int v20; // [rsp+58h] [rbp-40h]
  unsigned int v21; // [rsp+5Ch] [rbp-3Ch]
  __int64 v22; // [rsp+60h] [rbp-38h]
  int v23; // [rsp+68h] [rbp-30h]
  int v24; // [rsp+6Ch] [rbp-2Ch]
  unsigned int ThreadId; // [rsp+70h] [rbp-28h]
  unsigned int v26; // [rsp+74h] [rbp-24h]

  ThreadWin32Thread = W32GetThreadWin32Thread(KeGetCurrentThread());
  if ( a7 == (struct tagTHREADINFO *)ThreadWin32Thread || a1 + 2147483646 > 3 )
    v13 = a5;
  else
    v13 = a5 | 4;
  v14 = v13 & 0xFD;
  if ( (v13 & 4) == 0 )
    v14 = v13;
  v15 = (v14 & 4) != 0
     || a7 != (struct tagTHREADINFO *)ThreadWin32Thread
     || !*(_QWORD *)(ThreadWin32Thread + 456)
     || (*(_DWORD *)(ThreadWin32Thread + 488) & 0x1000000C) != 0;
  v16 = a6 & *(_DWORD *)(*((_QWORD *)a7 + 56) + 16LL);
  if ( (v16 & 0x1700) != 0 && v16 && (v16 & 0xFFFFE8FC) == 0 )
  {
    if ( (v14 & 2) != 0 )
    {
      Notify = CreateNotify(0LL, a1, a2, a3, a4, a7, a8, 1);
      if ( Notify )
        *((_QWORD *)Notify + 8) = a7;
    }
    else if ( v15 )
    {
      CreateAndPostTSFNotify(a1, a2, a3, a4, a7, a7, a8);
    }
    else
    {
      v21 = a1;
      v20 = 1;
      if ( a2 )
        v22 = *(_QWORD *)a2;
      else
        v22 = 0LL;
      v17 = *(struct _KTHREAD **)ThreadWin32Thread;
      v23 = a3;
      v24 = a4;
      ThreadId = (unsigned int)PsGetThreadId(v17);
      v26 = a8;
      xxxCallTSFNotifyHook((struct tagNOTIFY *)v19);
    }
  }
}
