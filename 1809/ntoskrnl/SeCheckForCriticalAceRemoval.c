/*
 * XREFs of SeCheckForCriticalAceRemoval @ 0x1405B9B50
 * Callers:
 *     CmpSetSecurityDescriptorInfo @ 0x1405B8C5C (CmpSetSecurityDescriptorInfo.c)
 * Callees:
 *     PsGetCurrentThreadProcess @ 0x140006800 (PsGetCurrentThreadProcess.c)
 *     _TlgKeywordOn @ 0x140012A04 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x140012EE4 (_TlgWrite.c)
 *     SepCheckForCriticalAceRemoval @ 0x140013054 (SepCheckForCriticalAceRemoval.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     SeLocateProcessImageName @ 0x140668370 (SeLocateProcessImageName.c)
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
      if ( ProcessImageName >= 0 && stru_140401278.LevelPlus1 > 5 )
      {
        LOBYTE(ProcessImageName) = TlgKeywordOn(&stru_140401278, 0x200000000000uLL);
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
          LOBYTE(ProcessImageName) = TlgWrite(&stru_140401278, &unk_140373C01, 0LL, 0LL, 4u, &pData);
        }
      }
    }
  }
  *a4 = 0;
  return ProcessImageName;
}
