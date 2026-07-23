/*
 * XREFs of EtwTiLogReadWriteVm @ 0x140677AD4
 * Callers:
 *     MiReadWriteVirtualMemory @ 0x140677BD0 (MiReadWriteVirtualMemory.c)
 * Callees:
 *     EtwEventEnabled @ 0x14005B2D0 (EtwEventEnabled.c)
 *     EtwWrite @ 0x1400CAE00 (EtwWrite.c)
 *     EtwProviderEnabled @ 0x1400F1800 (EtwProviderEnabled.c)
 *     EtwpTiFillThreadIdentity @ 0x140132084 (EtwpTiFillThreadIdentity.c)
 *     EtwpTiFillProcessIdentity @ 0x1401320BC (EtwpTiFillProcessIdentity.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 */

char __fastcall EtwTiLogReadWriteVm(int a1, __int64 a2, __int64 a3, int a4, char a5, char a6)
{
  struct _KTHREAD *CurrentThread; // rax
  REGHANDLE v10; // rsi
  ULONGLONG v11; // r8
  const EVENT_DESCRIPTOR *v12; // rax
  const EVENT_DESCRIPTOR *v13; // rbx
  int v14; // eax
  int v15; // eax
  int v16; // r9d
  int v17; // eax
  int v18; // r9d
  unsigned int v19; // r9d
  __int64 v20; // rax
  __int64 v21; // rax
  REGHANDLE v22; // rcx
  unsigned __int64 v24; // [rsp+30h] [rbp-D0h] BYREF
  unsigned __int64 v25; // [rsp+38h] [rbp-C8h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+40h] [rbp-C0h] BYREF
  _QWORD v27[32]; // [rsp+50h] [rbp-B0h] BYREF
  int v28; // [rsp+190h] [rbp+90h] BYREF

  v28 = a1;
  CurrentThread = KeGetCurrentThread();
  if ( CurrentThread->PreviousMode == 1 )
  {
    v10 = EtwThreatIntProvRegHandle;
    v11 = 196608LL;
    if ( a4 != 16 )
      v11 = 786432LL;
    LOBYTE(CurrentThread) = EtwProviderEnabled(EtwThreatIntProvRegHandle, 0, v11);
    if ( (_BYTE)CurrentThread )
    {
      if ( a2 == a3 )
      {
        v13 = (const EVENT_DESCRIPTOR *)&THREATINT_READVM_LOCAL;
        v12 = (const EVENT_DESCRIPTOR *)&THREATINT_WRITEVM_LOCAL;
      }
      else
      {
        v12 = &THREATINT_WRITEVM_REMOTE;
        v13 = (const EVENT_DESCRIPTOR *)&THREATINT_READVM_REMOTE;
      }
      if ( a4 != 16 )
        v13 = v12;
      LOBYTE(CurrentThread) = EtwEventEnabled(v10, v13);
      if ( (_BYTE)CurrentThread )
      {
        UserData.Reserved = 0;
        UserData.Ptr = (ULONGLONG)&v28;
        UserData.Size = 4;
        v14 = EtwpTiFillProcessIdentity(v27, a2, &v24);
        v15 = EtwpTiFillThreadIdentity((__int64)(&UserData + (unsigned int)(v14 + 1)), (__int64)KeGetCurrentThread());
        v17 = EtwpTiFillProcessIdentity(&UserData.Ptr + 2 * (unsigned int)(v15 + v16), a3, &v25);
        v19 = v17 + v18;
        v20 = 2LL * v19++;
        *(&UserData.Reserved + 2 * v20) = 0;
        *(&UserData.Ptr + v20) = (ULONGLONG)&a5;
        *(&UserData.Size + 2 * v20) = 8;
        v21 = 2LL * v19;
        *(&UserData.Reserved + 2 * v21) = 0;
        *(&UserData.Ptr + v21) = (ULONGLONG)&a6;
        v22 = EtwThreatIntProvRegHandle;
        *(&UserData.Size + 2 * v21) = 8;
        LOBYTE(CurrentThread) = EtwWrite(v22, v13, 0LL, v19 + 1, &UserData);
      }
    }
  }
  return (char)CurrentThread;
}
