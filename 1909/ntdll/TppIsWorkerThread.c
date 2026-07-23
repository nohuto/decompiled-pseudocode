/*
 * XREFs of TppIsWorkerThread @ 0x18006D7FC
 * Callers:
 *     TpCheckTerminateWorker @ 0x18006D7B0 (TpCheckTerminateWorker.c)
 * Callees:
 *     NtClose @ 0x18009D070 (NtClose.c)
 *     ZwQueryInformationThread @ 0x18009D330 (ZwQueryInformationThread.c)
 *     ZwDuplicateObject @ 0x18009D610 (ZwDuplicateObject.c)
 */

bool __fastcall TppIsWorkerThread(HANDLE SourceHandle)
{
  struct _TEB *v1; // rbx
  bool v2; // bl
  bool v4; // zf
  __int64 *v5; // [rsp+40h] [rbp-40h] BYREF
  int v6; // [rsp+48h] [rbp-38h]
  int v7; // [rsp+4Ch] [rbp-34h]
  _BYTE ThreadInformation[16]; // [rsp+50h] [rbp-30h] BYREF
  void *v9; // [rsp+60h] [rbp-20h]
  void *v10; // [rsp+68h] [rbp-18h]
  HANDLE TargetHandle; // [rsp+90h] [rbp+10h] BYREF
  __int64 v12; // [rsp+98h] [rbp+18h] BYREF

  v12 = 0LL;
  TargetHandle = 0LL;
  v1 = NtCurrentTeb();
  if ( !SourceHandle )
    return v1->ThreadPoolData != 0LL;
  if ( ZwDuplicateObject(
         (HANDLE)0xFFFFFFFFFFFFFFFFLL,
         SourceHandle,
         (HANDLE)0xFFFFFFFFFFFFFFFFLL,
         &TargetHandle,
         0x818u,
         0,
         0) < 0 )
    return 0;
  if ( ZwQueryInformationThread(TargetHandle, ThreadBasicInformation, ThreadInformation, 0x30u, 0LL) >= 0
    && v1->ClientId.UniqueProcess == v9 )
  {
    if ( v1->ClientId.UniqueThread == v10 )
    {
      v4 = v1->ThreadPoolData == 0LL;
      goto LABEL_10;
    }
    v5 = &v12;
    v7 = 8;
    v6 = 6008;
    if ( ZwQueryInformationThread(TargetHandle, ThreadTebInformation, &v5, 0x10u, 0LL) >= 0 )
    {
      v4 = v12 == 0;
LABEL_10:
      v2 = !v4;
      goto LABEL_11;
    }
  }
  v2 = 0;
LABEL_11:
  if ( TargetHandle )
    NtClose(TargetHandle);
  return v2;
}
