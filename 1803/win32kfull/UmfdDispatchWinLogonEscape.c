/*
 * XREFs of UmfdDispatchWinLogonEscape @ 0x1C00ED6D4
 * Callers:
 *     NtGdiExtEscape @ 0x1C0081E90 (NtGdiExtEscape.c)
 * Callees:
 *     ?TerminateUmfdHost@UmfdHostLifeTimeManager@@SAX_N@Z @ 0x1C00EDA1C (-TerminateUmfdHost@UmfdHostLifeTimeManager@@SAX_N@Z.c)
 *     ?InitializeUmfdAndRegisterHost@UmfdHostLifeTimeManager@@SAHPEAX@Z @ 0x1C00EDB8C (-InitializeUmfdAndRegisterHost@UmfdHostLifeTimeManager@@SAHPEAX@Z.c)
 *     ??1ExclusiveWinlognRequestLock@@QEAA@XZ @ 0x1C0138F58 (--1ExclusiveWinlognRequestLock@@QEAA@XZ.c)
 *     ??0ExclusiveWinlognRequestLock@@QEAA@XZ @ 0x1C0138F6C (--0ExclusiveWinlognRequestLock@@QEAA@XZ.c)
 */

void __fastcall UmfdDispatchWinLogonEscape(unsigned __int64 a1)
{
  HANDLE Handle[2]; // [rsp+28h] [rbp-20h]
  char v2; // [rsp+58h] [rbp+10h] BYREF

  if ( (a1 & 3) != 0 )
    ExRaiseDatatypeMisalignment();
  if ( a1 + 16 > MmUserProbeAddress || a1 + 16 < a1 )
    *(_BYTE *)MmUserProbeAddress = 0;
  *(_OWORD *)Handle = *(_OWORD *)a1;
  ExclusiveWinlognRequestLock::ExclusiveWinlognRequestLock((ExclusiveWinlognRequestLock *)&v2);
  if ( LODWORD(Handle[0]) )
  {
    if ( LODWORD(Handle[0]) == 1 )
      UmfdHostLifeTimeManager::TerminateUmfdHost(LODWORD(Handle[1]) != 0);
  }
  else
  {
    UmfdHostLifeTimeManager::InitializeUmfdAndRegisterHost(Handle[1]);
  }
  ExclusiveWinlognRequestLock::~ExclusiveWinlognRequestLock((ExclusiveWinlognRequestLock *)&v2);
}
