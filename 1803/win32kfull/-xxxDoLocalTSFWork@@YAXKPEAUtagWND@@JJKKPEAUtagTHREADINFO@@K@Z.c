/*
 * XREFs of ?xxxDoLocalTSFWork@@YAXKPEAUtagWND@@JJKKPEAUtagTHREADINFO@@K@Z @ 0x1C00063FC
 * Callers:
 *     xxxWindowEvent @ 0x1C001E870 (xxxWindowEvent.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0026450 (W32GetThreadWin32Thread.c)
 *     ?xxxCallTSFNotifyHook@@YAXPEAUtagNOTIFY@@@Z @ 0x1C00D8DA0 (-xxxCallTSFNotifyHook@@YAXPEAUtagNOTIFY@@@Z.c)
 *     ?CreateAndPostTSFNotify@@YAXKPEAUtagWND@@JJPEAUtagTHREADINFO@@1K@Z @ 0x1C0106460 (-CreateAndPostTSFNotify@@YAXKPEAUtagWND@@JJPEAUtagTHREADINFO@@1K@Z.c)
 *     ?CreateNotify@@YAPEAUtagNOTIFY@@PEAUtagEVENTHOOK@@KPEAUtagWND@@JJPEAUtagTHREADINFO@@KE@Z @ 0x1C0106524 (-CreateNotify@@YAPEAUtagNOTIFY@@PEAUtagEVENTHOOK@@KPEAUtagWND@@JJPEAUtagTHREADINFO@@KE@Z.c)
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
  _BYTE v19[16]; // [rsp+40h] [rbp-48h] BYREF
  int v20; // [rsp+50h] [rbp-38h]
  unsigned int v21; // [rsp+54h] [rbp-34h]
  __int64 v22; // [rsp+58h] [rbp-30h]
  int v23; // [rsp+60h] [rbp-28h]
  int v24; // [rsp+64h] [rbp-24h]
  unsigned int ThreadId; // [rsp+68h] [rbp-20h]
  unsigned int v26; // [rsp+6Ch] [rbp-1Ch]

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
     || !*(_QWORD *)(ThreadWin32Thread + 448)
     || (*(_DWORD *)(ThreadWin32Thread + 480) & 0x1000000C) != 0;
  v16 = a6 & *(_DWORD *)(*((_QWORD *)a7 + 55) + 16LL);
  if ( (v16 & 0x1700) != 0 && v16 && (v16 & 0xFFFFE8FC) == 0 )
  {
    if ( (v14 & 2) != 0 )
    {
      Notify = CreateNotify(0LL, a1, a2, a3, a4, a7, a8, 1);
      if ( Notify )
        *((_QWORD *)Notify + 7) = a7;
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
