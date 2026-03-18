/*
 * XREFs of SeCheckForCriticalAceRemoval @ 0x140640DA0
 * Callers:
 *     CmpSetSecurityDescriptorInfo @ 0x14063EB80 (CmpSetSecurityDescriptorInfo.c)
 * Callees:
 *     _TlgKeywordOn @ 0x14008B9D4 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x14008BA00 (_TlgWrite.c)
 *     SepCheckForCriticalAceRemoval @ 0x14008D0B4 (SepCheckForCriticalAceRemoval.c)
 *     PsGetCurrentThreadProcess @ 0x14012B4B0 (PsGetCurrentThreadProcess.c)
 *     __security_check_cookie @ 0x14019EE20 (__security_check_cookie.c)
 *     SeLocateProcessImageName @ 0x14066BAB0 (SeLocateProcessImageName.c)
 */

char __fastcall SeCheckForCriticalAceRemoval(void *a1, void *a2, __int64 *a3, _BYTE *a4)
{
  NTSTATUS ProcessImageName; // eax
  struct _KPROCESS *CurrentThreadProcess; // rax
  int v7; // r8d
  __int64 v8; // rdx
  char v10; // [rsp+30h] [rbp-19h] BYREF
  _BYTE v11[15]; // [rsp+31h] [rbp-18h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-9h] BYREF
  _DWORD *v13; // [rsp+60h] [rbp+17h]
  int v14; // [rsp+68h] [rbp+1Fh]
  int v15; // [rsp+6Ch] [rbp+23h]
  __int64 v16; // [rsp+70h] [rbp+27h]
  _DWORD v17[2]; // [rsp+78h] [rbp+2Fh] BYREF

  *(_QWORD *)&v11[7] = 0LL;
  LOBYTE(ProcessImageName) = (unsigned __int8)SepCheckForCriticalAceRemoval(a1, a2, a3, &v10, v11);
  if ( v10 )
  {
    if ( !v11[0] )
    {
      CurrentThreadProcess = PsGetCurrentThreadProcess();
      ProcessImageName = SeLocateProcessImageName(CurrentThreadProcess, (PUNICODE_STRING *)&v11[7]);
      if ( ProcessImageName >= 0 && stru_1404265D0.LevelPlus1 > 5 )
      {
        LOBYTE(ProcessImageName) = TlgKeywordOn(&stru_1404265D0, 0x200000000000uLL);
        if ( (_BYTE)ProcessImageName )
        {
          v7 = (unsigned __int16)**(_WORD **)&v11[7];
          v8 = *(_QWORD *)(*(_QWORD *)&v11[7] + 8LL);
          v15 = 0;
          v17[1] = 0;
          v13 = v17;
          v14 = 2;
          v16 = v8;
          v17[0] = v7;
          LOBYTE(ProcessImageName) = TlgWrite(&stru_1404265D0, &unk_14039370F, 0LL, 0LL, 4u, &pData);
        }
      }
    }
  }
  *a4 = 0;
  return ProcessImageName;
}
