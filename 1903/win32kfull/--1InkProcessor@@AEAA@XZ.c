/*
 * XREFs of ??1InkProcessor@@AEAA@XZ @ 0x1C0139290
 * Callers:
 *     ?InitiateWin32kCleanup@@YAHXZ @ 0x1C00DA35C (-InitiateWin32kCleanup@@YAHXZ.c)
 * Callees:
 *     ?RemoveInkFeedbackProvider@InkFeedbackServer@@QEAAJPEAVInkFeedbackProviderBase@@@Z @ 0x1C0139490 (-RemoveInkFeedbackProvider@InkFeedbackServer@@QEAAJPEAVInkFeedbackProviderBase@@@Z.c)
 *     ?UnlinkAndReleaseInkDevice@InkProcessor@@AEAAXPEAPEAVInkDevice@@@Z @ 0x1C0245FA0 (-UnlinkAndReleaseInkDevice@InkProcessor@@AEAAXPEAPEAVInkDevice@@@Z.c)
 */

void __fastcall InkProcessor::~InkProcessor(InkProcessor **this)
{
  InkFeedbackServer *v2; // rcx
  InkProcessor *v3; // rdi
  struct InkDevice *v4; // rdx
  struct InkFeedbackProviderBase *v5; // rdx
  struct InkDevice *v6; // [rsp+30h] [rbp+8h] BYREF

  KeEnterCriticalRegion();
  ExAcquirePushLockExclusiveEx(this, 0LL);
  v3 = this[2];
  while ( v3 != (InkProcessor *)(this + 2) )
  {
    v4 = (InkProcessor *)((char *)v3 - 88);
    v3 = *(InkProcessor **)v3;
    v6 = v4;
    v5 = (struct InkFeedbackProviderBase *)(((unsigned __int64)v4 + 32) & -(__int64)(v4 != 0LL));
    if ( *((_QWORD *)v5 + 1) )
      InkFeedbackServer::RemoveInkFeedbackProvider(v2, v5);
    InkProcessor::UnlinkAndReleaseInkDevice(v2, &v6);
  }
  if ( this[5] )
    InkFeedbackServer::RemoveInkFeedbackProvider(v2, (struct InkFeedbackProviderBase *)(this + 4));
  EtwUnregister(qword_1C03212B8);
  qword_1C03212B8 = 0LL;
  dword_1C0321298 = 0;
  ExReleasePushLockExclusiveEx(this, 0LL);
  KeLeaveCriticalRegion();
  this[4] = (InkProcessor *)&InkFeedbackProviderBase::`vftable';
}
