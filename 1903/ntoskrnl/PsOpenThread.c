/*
 * XREFs of PsOpenThread @ 0x140672920
 * Callers:
 *     NtOpenThread @ 0x1406728F0 (NtOpenThread.c)
 *     NtAlpcOpenSenderThread @ 0x1406D9F70 (NtAlpcOpenSenderThread.c)
 * Callees:
 *     EtwWrite @ 0x140036280 (EtwWrite.c)
 *     SepDeleteAccessState @ 0x14003B0B0 (SepDeleteAccessState.c)
 *     ObfDereferenceObject @ 0x14003E260 (ObfDereferenceObject.c)
 *     _TlgKeywordOn @ 0x14008A6D4 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x14008A700 (_TlgWrite.c)
 *     PsGetThreadId @ 0x14011F190 (PsGetThreadId.c)
 *     __security_check_cookie @ 0x14019E700 (__security_check_cookie.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 *     ObOpenObjectByPointer @ 0x1405D0390 (ObOpenObjectByPointer.c)
 *     PsLookupThreadByThreadId @ 0x1405D0860 (PsLookupThreadByThreadId.c)
 *     SeCreateAccessState @ 0x1405D3900 (SeCreateAccessState.c)
 *     SeReleaseSubjectContext @ 0x1405F3180 (SeReleaseSubjectContext.c)
 *     SeSinglePrivilegeCheck @ 0x140672D30 (SeSinglePrivilegeCheck.c)
 *     PsLookupProcessThreadByCid @ 0x140672E10 (PsLookupProcessThreadByCid.c)
 *     ExRaiseDatatypeMisalignment @ 0x140913EC0 (ExRaiseDatatypeMisalignment.c)
 */

__int64 __fastcall PsOpenThread(
        unsigned __int64 a1,
        ACCESS_MASK a2,
        __int64 a3,
        _OWORD *a4,
        char a5,
        KPROCESSOR_MODE PreviousMode)
{
  int v10; // r12d
  __int64 v11; // rcx
  bool v12; // cl
  ULONG v13; // esi
  char v14; // al
  KPROCESSOR_MODE AccessMode; // r15
  int v16; // edi
  KPROCESSOR_MODE v17; // dl
  char v19; // [rsp+42h] [rbp-316h] BYREF
  KPROCESSOR_MODE v20; // [rsp+43h] [rbp-315h] BYREF
  ACCESS_MASK v21; // [rsp+48h] [rbp-310h]
  PETHREAD Thread; // [rsp+50h] [rbp-308h] BYREF
  HANDLE ThreadId[2]; // [rsp+58h] [rbp-300h] BYREF
  ULONG HandleAttributes; // [rsp+68h] [rbp-2F0h]
  unsigned int v25; // [rsp+6Ch] [rbp-2ECh] BYREF
  int v26; // [rsp+70h] [rbp-2E8h] BYREF
  ACCESS_MASK v27; // [rsp+74h] [rbp-2E4h] BYREF
  ULONG v28; // [rsp+78h] [rbp-2E0h] BYREF
  int v29; // [rsp+80h] [rbp-2D8h] BYREF
  int v30; // [rsp+88h] [rbp-2D0h] BYREF
  ACCESS_MASK v31; // [rsp+90h] [rbp-2C8h] BYREF
  int v32; // [rsp+98h] [rbp-2C0h] BYREF
  HANDLE Handle; // [rsp+A0h] [rbp-2B8h] BYREF
  _QWORD *v34; // [rsp+A8h] [rbp-2B0h]
  __int64 v35; // [rsp+B0h] [rbp-2A8h] BYREF
  struct _ACCESS_STATE PassedAccessState; // [rsp+C0h] [rbp-298h] BYREF
  _QWORD v37[28]; // [rsp+160h] [rbp-1F8h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+240h] [rbp-118h] BYREF
  int *v39; // [rsp+250h] [rbp-108h]
  int v40; // [rsp+258h] [rbp-100h]
  int v41; // [rsp+25Ch] [rbp-FCh]
  ACCESS_MASK *v42; // [rsp+260h] [rbp-F8h]
  int v43; // [rsp+268h] [rbp-F0h]
  int v44; // [rsp+26Ch] [rbp-ECh]
  int *v45; // [rsp+270h] [rbp-E8h]
  int v46; // [rsp+278h] [rbp-E0h]
  int v47; // [rsp+27Ch] [rbp-DCh]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+280h] [rbp-D8h] BYREF
  unsigned int *v49; // [rsp+2A0h] [rbp-B8h]
  int v50; // [rsp+2A8h] [rbp-B0h]
  int v51; // [rsp+2ACh] [rbp-ACh]
  int *v52; // [rsp+2B0h] [rbp-A8h]
  int v53; // [rsp+2B8h] [rbp-A0h]
  int v54; // [rsp+2BCh] [rbp-9Ch]
  ACCESS_MASK *v55; // [rsp+2C0h] [rbp-98h]
  int v56; // [rsp+2C8h] [rbp-90h]
  int v57; // [rsp+2CCh] [rbp-8Ch]
  ULONG *v58; // [rsp+2D0h] [rbp-88h]
  int v59; // [rsp+2D8h] [rbp-80h]
  int v60; // [rsp+2DCh] [rbp-7Ch]
  char *v61; // [rsp+2E0h] [rbp-78h]
  int v62; // [rsp+2E8h] [rbp-70h]
  int v63; // [rsp+2ECh] [rbp-6Ch]
  KPROCESSOR_MODE *v64; // [rsp+2F0h] [rbp-68h]
  int v65; // [rsp+2F8h] [rbp-60h]
  int v66; // [rsp+2FCh] [rbp-5Ch]
  __int64 *v67; // [rsp+300h] [rbp-58h]
  int v68; // [rsp+308h] [rbp-50h]
  int v69; // [rsp+30Ch] [rbp-4Ch]

  v34 = (_QWORD *)a1;
  v21 = a2;
  ThreadId[0] = 0LL;
  ThreadId[1] = 0LL;
  memset(&PassedAccessState, 0, sizeof(PassedAccessState));
  memset(v37, 0, sizeof(v37));
  v10 = 0;
  if ( a5 )
  {
    v11 = a1;
    if ( a1 >= 0x7FFFFFFF0000LL )
      v11 = 0x7FFFFFFF0000LL;
    *(_QWORD *)v11 = *(_QWORD *)v11;
    if ( (a3 & 3) != 0 )
      ExRaiseDatatypeMisalignment();
    v12 = *(_QWORD *)(a3 + 16) != 0LL;
    v13 = *(_DWORD *)(a3 + 24) & 0x1DF2;
    HandleAttributes = v13;
    if ( a4 )
    {
      if ( ((unsigned __int8)a4 & 3) != 0 )
        ExRaiseDatatypeMisalignment();
      *(_OWORD *)ThreadId = *a4;
      v14 = 1;
      v13 = HandleAttributes;
    }
    else
    {
      v14 = 0;
    }
    AccessMode = PreviousMode;
  }
  else
  {
    v12 = *(_QWORD *)(a3 + 16) != 0LL;
    AccessMode = PreviousMode;
    v13 = *(_DWORD *)(a3 + 24) & (PreviousMode != 0 ? 7666 : 73714);
    if ( a4 )
    {
      *(_OWORD *)ThreadId = *a4;
      v14 = 1;
    }
    else
    {
      v14 = 0;
    }
  }
  if ( v12 || !v14 )
  {
    v16 = -1073741776;
  }
  else
  {
    while ( 1 )
    {
      v16 = SeCreateAccessState(&PassedAccessState, v37, a2, (GENERIC_MAPPING *)((char *)PsThreadType + 76));
      if ( v16 < 0 )
        break;
      if ( (v13 & 0x400) == 0 || (v17 = 1, v10) )
        v17 = AccessMode;
      if ( SeSinglePrivilegeCheck(SeDebugPrivilege, v17) )
      {
        if ( (PassedAccessState.RemainingDesiredAccess & 0x2000000) != 0 )
          PassedAccessState.PreviouslyGrantedAccess |= 0x1FFFFFu;
        else
          PassedAccessState.PreviouslyGrantedAccess |= PassedAccessState.RemainingDesiredAccess;
        PassedAccessState.RemainingDesiredAccess = 0;
      }
      if ( ThreadId[0] )
      {
        v16 = PsLookupProcessThreadByCid(ThreadId, 0LL, &Thread);
        if ( v16 < 0 )
        {
LABEL_28:
          SepDeleteAccessState((__int64)&PassedAccessState);
          SeReleaseSubjectContext(&PassedAccessState.SubjectSecurityContext);
          break;
        }
      }
      else
      {
        v16 = PsLookupThreadByThreadId(ThreadId[1], &Thread);
        if ( v16 < 0 )
          goto LABEL_28;
        ThreadId[0] = (HANDLE)Thread[1].CycleTime;
      }
      v16 = ObOpenObjectByPointer(Thread, v13, &PassedAccessState, 0, (POBJECT_TYPE)PsThreadType, AccessMode, &Handle);
      SepDeleteAccessState((__int64)&PassedAccessState);
      SeReleaseSubjectContext(&PassedAccessState.SubjectSecurityContext);
      ObfDereferenceObject(Thread);
      if ( v16 >= 0 )
      {
        *v34 = Handle;
        if ( v10 && stru_140425558.LevelPlus1 > 5 && TlgKeywordOn(&stru_140425558, 0x400000000000uLL) )
        {
          v25 = (unsigned int)PsGetThreadId(Thread);
          v26 = (int)ThreadId[0];
          v27 = a2;
          v28 = v13;
          v19 = a5;
          v20 = AccessMode;
          v35 = 0x1000000LL;
          v49 = &v25;
          v50 = 4;
          v51 = 0;
          v52 = &v26;
          v53 = 4;
          v54 = 0;
          v55 = &v27;
          v56 = 4;
          v57 = 0;
          v58 = &v28;
          v59 = 4;
          v60 = 0;
          v61 = &v19;
          v62 = 1;
          v63 = 0;
          v64 = &v20;
          v65 = 1;
          v66 = 0;
          v67 = &v35;
          v68 = 8;
          v69 = 0;
          TlgWrite(&stru_140425558, &unk_1403932A4, 0LL, 0LL, 9u, &pData);
        }
        break;
      }
      if ( (v13 & 0x400) == 0 || v16 != -1073741790 || v10 )
        break;
      v10 = 1;
    }
  }
  v32 = v16;
  v31 = a2;
  v30 = (int)ThreadId[1];
  v29 = (int)ThreadId[0];
  UserData.Ptr = (ULONGLONG)&v29;
  UserData.Size = 4;
  UserData.Reserved = 0;
  v39 = &v30;
  v40 = 4;
  v41 = 0;
  v42 = &v31;
  v43 = 4;
  v44 = 0;
  v45 = &v32;
  v46 = 4;
  v47 = 0;
  EtwWrite(EtwApiCallsProvRegHandle, &KERNEL_AUDIT_API_OPENTHREAD, 0LL, 4u, &UserData);
  return (unsigned int)v16;
}
