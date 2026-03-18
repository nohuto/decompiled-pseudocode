/*
 * XREFs of AMLILoadDDB @ 0x1C00BA078
 * Callers:
 *     ACPIInitializeDDBs @ 0x1C00BA654 (ACPIInitializeDDBs.c)
 * Callees:
 *     LoadDDB @ 0x1C0023114 (LoadDDB.c)
 *     NewContext @ 0x1C00239C4 (NewContext.c)
 *     RtlStringCchCopyNA @ 0x1C0027FEC (RtlStringCchCopyNA.c)
 *     PrintDebugMessage @ 0x1C002BB94 (PrintDebugMessage.c)
 *     _guard_dispatch_icall_nop @ 0x1C0030D60 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C00310C0 (memset.c)
 *     AMLIDebugger @ 0x1C0063760 (AMLIDebugger.c)
 *     ConPrintf @ 0x1C0063840 (ConPrintf.c)
 *     SyncLoadDDB @ 0x1C00BA184 (SyncLoadDDB.c)
 */

__int64 __fastcall AMLILoadDDB(int *a1, _QWORD *a2)
{
  char v4; // cl
  unsigned int DDB; // ebx
  PVOID v6; // rdi
  struct _SLIST_ENTRY *v7; // rcx
  _QWORD v9[9]; // [rsp+30h] [rbp-48h] BYREF
  int v10; // [rsp+88h] [rbp+10h] BYREF
  int pszSrc; // [rsp+90h] [rbp+18h] BYREF
  PVOID Entry; // [rsp+98h] [rbp+20h] BYREF

  Entry = 0LL;
  memset(v9, 0, 0x28uLL);
  dword_1C0080868 = 0;
  pszDest[0] = 0;
  if ( (gDebugger & 0x1000) != 0 )
  {
    ConPrintf("\nProcess AML Debugger Request.\n");
    _InterlockedAnd(&gDebugger, 0xFFFFEFFF);
    AMLIDebugger();
  }
  if ( (gDebugger & 8) != 0 )
  {
    pszSrc = *a1;
    RtlStringCchCopyNA(byte_1C0080ADC, 5uLL, (STRSAFE_PCNZCH)&pszSrc, 4uLL);
    PrintDebugMessage(85, KeGetCurrentThread(), byte_1C0080ADC, a1, 0LL);
  }
  v4 = 0;
  v10 = 0;
  if ( ghQueryDLMSupportHandler )
  {
    ghQueryDLMSupportHandler(&v10);
    v4 = v10;
  }
  gDeviceLockMutexSupported = v4;
  DDB = NewContext(&Entry);
  if ( !DDB )
  {
    v6 = Entry;
    v7 = (struct _SLIST_ENTRY *)Entry;
    *((_QWORD *)Entry + 40) = gpheapGlobal;
    DDB = LoadDDB(v7, (__int64)a1, gpnsNameSpaceRoot, (__int64)v9);
    if ( !DDB )
      DDB = SyncLoadDDB(v6);
  }
  if ( a2 )
    *a2 = v9[2];
  if ( (gdwfAMLIInit & 2) != 0 )
  {
    PrintDebugMessage(16, 0LL, 0LL, 0LL, 0LL);
    AMLIDebugger();
  }
  return DDB;
}
