/*
 * XREFs of ExCallSessionCallBack @ 0x1406361E8
 * Callers:
 *     PsInvokeWin32Callout @ 0x1405EB440 (PsInvokeWin32Callout.c)
 * Callees:
 *     MmGetSessionById @ 0x1400023F0 (MmGetSessionById.c)
 *     MmSessionGetWin32Callouts @ 0x14001CE10 (MmSessionGetWin32Callouts.c)
 *     ExDereferenceCallBackBlock @ 0x14001CE50 (ExDereferenceCallBackBlock.c)
 *     ExReferenceCallBackBlock @ 0x14001CEA0 (ExReferenceCallBackBlock.c)
 *     MmGetSessionId @ 0x14001D490 (MmGetSessionId.c)
 *     ObfDereferenceObject @ 0x14003E260 (ObfDereferenceObject.c)
 *     MmGetNextSession @ 0x14008B870 (MmGetNextSession.c)
 *     MmDetachSession @ 0x14008BB30 (MmDetachSession.c)
 *     MmAttachSession @ 0x14008BBD0 (MmAttachSession.c)
 *     __security_check_cookie @ 0x14019E700 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1401CC5F0 (_guard_dispatch_icall.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 */

__int64 __fastcall ExCallSessionCallBack(unsigned int *a1, __int64 a2, __int64 a3, int *a4)
{
  int *v7; // r15
  int v8; // edi
  ULONG_PTR SessionById; // rax
  void *v10; // rsi
  int v11; // ebx
  _RTL_RUN_ONCE *Win32Callouts; // r14
  struct _EX_RUNDOWN_REF *v13; // rax
  struct _EX_RUNDOWN_REF *v14; // rbp
  void *NextSession; // rbx
  __int64 v17; // r15
  int SessionId; // r12d
  int v19; // esi
  _RTL_RUN_ONCE *v20; // r14
  struct _EX_RUNDOWN_REF *v21; // rax
  struct _EX_RUNDOWN_REF *v22; // rbp
  _BYTE v24[48]; // [rsp+30h] [rbp-88h] BYREF

  v7 = a4;
  memset(v24, 0, sizeof(v24));
  v8 = -1073741811;
  if ( a1 )
  {
    SessionById = MmGetSessionById(*a1);
    v10 = (void *)SessionById;
    if ( !SessionById )
      return (unsigned int)-1073741811;
    v11 = MmAttachSession(SessionById);
    if ( v11 < 0 )
    {
      v11 = -1073741811;
    }
    else
    {
      Win32Callouts = MmSessionGetWin32Callouts();
      v13 = ExReferenceCallBackBlock((signed __int64 *)Win32Callouts);
      v14 = v13;
      if ( v13 )
      {
        v8 = ((__int64 (__fastcall *)(unsigned __int64, __int64, __int64))v13[1].Count)(v13[2].Count, a2, a3);
        ExDereferenceCallBackBlock((signed __int64 *)Win32Callouts, v14);
      }
      else
      {
        v11 = -1073741811;
      }
      MmDetachSession((__int64)v10, (__int64)v24);
    }
    ObfDereferenceObject(v10);
  }
  else
  {
    NextSession = (void *)MmGetNextSession(0LL);
    if ( NextSession )
    {
      v17 = a3;
      do
      {
        SessionId = MmGetSessionId((__int64)NextSession);
        v19 = MmAttachSession((ULONG_PTR)NextSession);
        if ( v19 >= 0 )
        {
          v20 = MmSessionGetWin32Callouts();
          v21 = ExReferenceCallBackBlock((signed __int64 *)v20);
          v22 = v21;
          if ( v21 )
          {
            v19 = ((__int64 (__fastcall *)(unsigned __int64, __int64, __int64))v21[1].Count)(v21[2].Count, a2, v17);
            ExDereferenceCallBackBlock((signed __int64 *)v20, v22);
          }
          MmDetachSession((__int64)NextSession, (__int64)v24);
        }
        if ( SessionId )
          v19 = v8;
        v8 = v19;
        NextSession = (void *)MmGetNextSession(NextSession);
      }
      while ( NextSession );
      v7 = a4;
    }
    v11 = 0;
  }
  if ( v11 >= 0 && v7 )
    *v7 = v8;
  return (unsigned int)v11;
}
