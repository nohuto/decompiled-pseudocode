/*
 * XREFs of ?VidSchiSuspendResumeHwContexts@@YAXPEAU_VIDSCH_DEVICE@@_N@Z @ 0x1C0011338
 * Callers:
 *     VidSchSuspendResumeDevice @ 0x1C0011040 (VidSchSuspendResumeDevice.c)
 * Callees:
 *     ?Release@AcquireSpinLock@@QEAAXXZ @ 0x1C0011474 (-Release@AcquireSpinLock@@QEAAXXZ.c)
 *     ??0AcquireSpinLock@@QEAA@AEA_K_N1@Z @ 0x1C0011694 (--0AcquireSpinLock@@QEAA@AEA_K_N1@Z.c)
 *     memset @ 0x1C001A9C0 (memset.c)
 *     ?VidSchiIsDeviceSuspended@@YA_NPEAU_VIDSCH_DEVICE@@@Z @ 0x1C0035098 (-VidSchiIsDeviceSuspended@@YA_NPEAU_VIDSCH_DEVICE@@@Z.c)
 *     VidSchWaitForCompletionEvent @ 0x1C0066B38 (VidSchWaitForCompletionEvent.c)
 *     VidSchRegisterCompletionEvent @ 0x1C0067AE0 (VidSchRegisterCompletionEvent.c)
 *     VidSchUnregisterCompletionEvent @ 0x1C00C9FDC (VidSchUnregisterCompletionEvent.c)
 *     VidSchiSuspendResumeHwContext @ 0x1C00CA8E0 (VidSchiSuspendResumeHwContext.c)
 */

void __fastcall VidSchiSuspendResumeHwContexts(struct _VIDSCH_DEVICE *a1, char a2, bool a3)
{
  __int64 v3; // rdi
  unsigned int v6; // eax
  char v7; // r14
  struct _VIDSCH_DEVICE *v8; // rcx
  __int64 v9; // rdx
  _QWORD *v10; // rsi
  __int64 v11; // rax
  _QWORD **v12; // rax
  _QWORD *v13; // rdx
  int v14; // eax
  _QWORD **v15; // [rsp+28h] [rbp-A9h] BYREF
  _QWORD ***v16; // [rsp+30h] [rbp-A1h]
  _BYTE v17[48]; // [rsp+38h] [rbp-99h] BYREF
  _QWORD v18[20]; // [rsp+68h] [rbp-69h] BYREF

  v3 = *((_QWORD *)a1 + 4);
  if ( !*((_BYTE *)a1 + 204)
    && !_InterlockedCompareExchange((volatile signed __int32 *)a1 + 50, 0, 0)
    && !*(_DWORD *)(v3 + 2404) )
  {
    v6 = *((_DWORD *)a1 + 275);
    v7 = 0;
    if ( a2 )
    {
      if ( v6 > 1 )
        return;
    }
    else if ( v6 )
    {
      return;
    }
    v16 = &v15;
    v15 = &v15;
    AcquireSpinLock::AcquireSpinLock((AcquireSpinLock *)v17, (unsigned __int64 *)(v3 + 1648), a3, 0);
    v8 = (struct _VIDSCH_DEVICE *)*((_QWORD *)a1 + 11);
    if ( v8 != (struct _VIDSCH_DEVICE *)((char *)a1 + 88) )
    {
      v12 = v16;
      do
      {
        v13 = (_QWORD *)((char *)v8 - 16);
        if ( *v12 != &v15 )
LABEL_16:
          __fastfail(3u);
        v13[1] = v12;
        *v13 = &v15;
        *v12 = v13;
        v12 = (_QWORD **)((char *)v8 - 16);
        v16 = (_QWORD ***)((char *)v8 - 16);
        v8 = *(struct _VIDSCH_DEVICE **)v8;
      }
      while ( v8 != (struct _VIDSCH_DEVICE *)((char *)a1 + 88) );
    }
    AcquireSpinLock::Release((AcquireSpinLock *)v17);
    while ( 1 )
    {
      v10 = v15;
      if ( v15[1] != &v15 )
        goto LABEL_16;
      v11 = (__int64)*v15;
      if ( (_QWORD **)(*v15)[1] != v15 )
        goto LABEL_16;
      v15 = (_QWORD **)*v15;
      *(_QWORD *)(v11 + 8) = &v15;
      if ( v10 == &v15 )
        break;
      LOBYTE(v9) = a2;
      v14 = VidSchiSuspendResumeHwContext(v10 - 22, v9);
      *v10 = 0LL;
      if ( v14 == 259 )
        v7 = 1;
      v10[1] = 0LL;
    }
    if ( v7 )
    {
      memset(v18, 0, sizeof(v18));
      LODWORD(v18[2]) = 6;
      v18[3] = a1;
      LOBYTE(v18[19]) = 1;
      VidSchRegisterCompletionEvent(v3, v18);
      while ( !VidSchiIsDeviceSuspended(a1) && (int)VidSchWaitForCompletionEvent(v3, v18, 83LL) >= 0 )
        ;
      VidSchUnregisterCompletionEvent(v3, v18);
    }
    AcquireSpinLock::Release((AcquireSpinLock *)v17);
  }
}
